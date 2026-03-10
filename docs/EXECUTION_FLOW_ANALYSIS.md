# CVA6 RISC-V System - Complete Execution Flow Analysis

## Table of Contents
1. [Boot ROM Initialization](#1-boot-rom-initialization)
2. [Core Execution Flow](#2-core-execution-flow)
3. [UART Operation](#3-uart-operation)
4. [HBM3 Loopback Testing](#4-hbm3-loopback-testing)
5. [Signal Flow Diagrams](#5-signal-flow-diagrams)
6. [Timing Analysis](#6-timing-analysis)

---

## 1. Boot ROM Initialization

### 1.1 When Does Boot ROM Get Loaded?

**CRITICAL UNDERSTANDING**: The Boot ROM is **NOT** loaded by the testbench at runtime!

```verilog
// File: src/cva6_boot_rom.v (lines 24-181)
module cva6_boot_rom (
    input  wire        clk,
    input  wire [9:0]  addr,      // Word address (256 words = 1KB)
    output reg  [31:0] rdata
);
    // ROM Memory Array Declaration
    reg [31:0] rom [0:255];
    
    // ====================================================================
    // BOOT ROM INITIALIZATION - Executes at COMPILE TIME (before time 0)
    // ====================================================================
    initial begin
        // Initialize all locations to NOP
        for (i = 0; i < 256; i = i + 1) begin
            rom[i] = 32'h00000013;  // ADDI x0, x0, 0 (NOP)
        end
        
        // Load the actual program
        rom[0]  = 32'h10001137;   // lui x2, 0x10001   (Setup stack)
        rom[1]  = 32'h210002B7;   // lui x5, 0x21000   (UART base)
        rom[2]  = 32'h20000337;   // lui x6, 0x20000   (LED base)
        rom[3]  = 32'h04300393;   // li x7, 'C'
        rom[4]  = 32'h0072A023;   // sw x7, 0(x5)      (Write 'C' to UART)
        rom[5]  = 32'h05600393;   // li x7, 'V'
        rom[6]  = 32'h0072A023;   // sw x7, 0(x5)      (Write 'V' to UART)
        // ... and so on for entire program
    end
    
    // ====================================================================
    // RUNTIME OPERATION - Read from ROM on every clock cycle
    // ====================================================================
    always @(posedge clk) begin
        rdata <= rom[addr];  // Synchronous read
    end
endmodule
```

**Timeline:**
```
Time -∞ (Elaboration):  initial block executes
                        rom[0..255] filled with instructions
                        ↓
Time 0ns:               Simulation starts
                        ROM already contains full program
                        ↓
Time 0ns onwards:       Core reads from ROM via addr/rdata interface
```

### 1.2 What Program is Loaded?

The boot ROM contains a complete RISC-V program:

| Address | Machine Code  | Assembly                  | Purpose                          |
|---------|---------------|---------------------------|----------------------------------|
| 0x00    | 0x10001137    | `lui x2, 0x10001`         | Setup stack pointer              |
| 0x04    | 0x210002B7    | `lui x5, 0x21000`         | Load UART base (0x21000000)      |
| 0x08    | 0x20000337    | `lui x6, 0x20000`         | Load LED base (0x20000000)       |
| 0x0C    | 0x04300393    | `li x7, 'C'`              | Load character 'C'               |
| 0x10    | 0x0072A023    | `sw x7, 0(x5)`            | Write 'C' to UART                |
| 0x14    | 0x05600393    | `li x7, 'V'`              | Load character 'V'               |
| 0x18    | 0x0072A023    | `sw x7, 0(x5)`            | Write 'V' to UART                |
| ...     | ...           | ...                       | Continue printing "CVA6 Booting..."|
| 0x8C    | 0x00100E13    | `li x28, 1`               | LED ON value                     |
| 0x90    | 0x01C32023    | `sw x28, 0(x6)`           | Turn LED ON                      |
| ...     | ...           | ...                       | Print "LED ON\n"                 |
| 0xCC    | 0x00BED537    | `lui x10, 0x00BED`        | Delay counter (12.5M cycles)     |
| 0xD0    | 0x94050513    | `addi x10, x10, -0x6C0`   | Adjust delay                     |
| 0xD4    | 0xFFF50513    | `addi x10, x10, -1`       | Decrement counter                |
| 0xD8    | 0xFE051EE3    | `bnez x10, 0xD4`          | Loop until zero                  |
| 0xDC    | 0x00000E13    | `li x28, 0`               | LED OFF value                    |
| 0xE0    | 0x01C32023    | `sw x28, 0(x6)`           | Turn LED OFF                     |
| ...     | ...           | ...                       | Print "LED OFF\n"                |
| 0x134   | 0xF71FF06F    | `jal x0, -144`            | Jump back to LED loop            |

**Program Behavior:**
1. Initialize stack pointer (x2) to DATA_RAM region
2. Initialize UART base (x5) to 0x21000000
3. Initialize LED base (x6) to 0x20000000
4. Print "CVA6 Booting...\n" character by character
5. **Infinite Loop:**
   - Turn LED ON
   - Print "LED ON\n"
   - Delay ~100ms
   - Turn LED OFF
   - Print "LED OFF\n"
   - Delay ~100ms
   - Jump back to start of loop

---

## 2. Core Execution Flow

### 2.1 Connection Between Core and ROM

```verilog
// File: cva6_minimal_top.v

module cva6_minimal_top (...);
    // ====================================================================
    // Instruction Memory Signals
    // ====================================================================
    wire [31:0] instr_addr;   // Program Counter (from core)
    wire [31:0] instr_rdata;  // Instruction data (to core)
    wire [31:0] rom_rdata;    // Data from ROM
    
    // ====================================================================
    // Boot ROM Instance
    // ====================================================================
    cva6_boot_rom u_boot_rom (
        .clk   (clk),
        .addr  (instr_addr[11:2]),  // Word address (divide byte addr by 4)
        .rdata (rom_rdata)           // Instruction output
    );
    
    // Connect ROM output to core
    assign instr_rdata = rom_rdata;
    
    // ====================================================================
    // RISC-V Core Instance
    // ====================================================================
    simple_riscv_core u_riscv_core (
        .clk        (clk),
        .reset      (reset),
        .instr_addr (instr_addr),   // Core outputs PC
        .instr_data (instr_rdata),  // Core reads instruction
        .data_req   (data_req),
        .data_we    (data_we),
        .data_addr  (data_addr),
        .data_wdata (data_wdata),
        .data_rdata (data_rdata)
    );
endmodule
```

### 2.2 Core State Machine (3-Stage Pipeline)

```verilog
// File: src/cva6_min_core.v (lines 117-212)

always @(posedge clk) begin
    if (reset) begin
        pc <= 32'h0000_0000;
        state <= FETCH;
        // ... initialize registers
    end else begin
        case (state)
            // ============================================================
            // FETCH: Get instruction from ROM
            // ============================================================
            FETCH: begin
                // Instruction is being fetched via instr_addr/instr_data
                state <= DECODE;
                data_req <= 1'b0;
                data_we <= 1'b0;
            end
            
            // ============================================================
            // DECODE: Decode instruction fields
            // ============================================================
            DECODE: begin
                // Combinational logic decodes opcode, rd, rs1, rs2, imm
                state <= EXECUTE;
            end
            
            // ============================================================
            // EXECUTE: Perform operation and update state
            // ============================================================
            EXECUTE: begin
                next_pc = pc + 4;  // Default: sequential execution
                
                if (is_lui) begin
                    // LUI: rd = imm_u
                    alu_result = imm_u;
                    if (rd != 0) regs[rd] <= alu_result;
                    state <= FETCH;
                    pc <= next_pc;
                    
                end else if (is_addi) begin
                    // ADDI: rd = rs1 + imm_i
                    alu_result = regs[rs1] + imm_i;
                    if (rd != 0) regs[rd] <= alu_result;
                    state <= FETCH;
                    pc <= next_pc;
                    
                end else if (is_sw) begin
                    // SW: mem[rs1 + imm_s] = rs2
                    data_addr <= regs[rs1] + imm_s;
                    data_wdata <= regs[rs2];
                    data_be <= 4'b1111;
                    data_req <= 1'b1;
                    data_we <= 1'b1;
                    state <= MEMORY;
                    
                end else if (is_bne) begin
                    // BNE: if (rs1 != rs2) pc += imm_b
                    if (regs[rs1] != regs[rs2]) begin
                        next_pc = pc + imm_b;
                    end
                    state <= FETCH;
                    pc <= next_pc;
                    
                end else if (is_jal) begin
                    // JAL: rd = pc+4, pc += imm_j
                    if (rd != 0) regs[rd] <= pc + 4;
                    next_pc = pc + imm_j;
                    state <= FETCH;
                    pc <= next_pc;
                end
            end
            
            // ============================================================
            // MEMORY: Wait for memory operation to complete
            // ============================================================
            MEMORY: begin
                data_req <= 1'b0;
                data_we <= 1'b0;
                state <= FETCH;
                pc <= pc + 4;
            end
        endcase
        
        // x0 always remains 0
        regs[0] <= 32'h0;
    end
end
```

### 2.3 Cycle-by-Cycle Execution Example

**Instruction 0: `LUI x2, 0x10001` (Machine Code: 0x10001137)**

| Time   | Cycle | State   | PC   | Action                                           |
|--------|-------|---------|------|--------------------------------------------------|
| 116ns  | 14    | FETCH   | 0x00 | instr_addr=0x00 → ROM returns 0x10001137         |
| 124ns  | 15    | DECODE  | 0x00 | Decode: opcode=LUI, rd=x2, imm_u=0x10001000      |
| 132ns  | 16    | EXECUTE | 0x00 | x2 ← 0x10001000, PC ← 0x04, state ← FETCH        |

**Instruction 1: `LUI x5, 0x21000` (Machine Code: 0x210002B7)**

| Time   | Cycle | State   | PC   | Action                                           |
|--------|-------|---------|------|--------------------------------------------------|
| 140ns  | 17    | FETCH   | 0x04 | instr_addr=0x04 → ROM returns 0x210002B7         |
| 148ns  | 18    | DECODE  | 0x04 | Decode: opcode=LUI, rd=x5, imm_u=0x21000000      |
| 156ns  | 19    | EXECUTE | 0x04 | x5 ← 0x21000000, PC ← 0x08, state ← FETCH        |

**Instruction 4: `SW x7, 0(x5)` (Machine Code: 0x0072A023) - Write 'C' to UART**

| Time   | Cycle | State   | PC   | Action                                           |
|--------|-------|---------|------|--------------------------------------------------|
| 180ns  | 22    | FETCH   | 0x10 | instr_addr=0x10 → ROM returns 0x0072A023         |
| 188ns  | 23    | DECODE  | 0x10 | Decode: opcode=SW, rs1=x5, rs2=x7, imm_s=0       |
| 196ns  | 24    | EXECUTE | 0x10 | data_addr←0x21000000, data_wdata←0x43, data_req←1, data_we←1 |
| 204ns  | 25    | MEMORY  | 0x10 | Memory write completes, PC ← 0x14, state ← FETCH |

---

## 3. UART Operation

### 3.1 CRITICAL: UART Does NOT Log Instructions!

**MISCONCEPTION**: "UART logs all executed instructions"

**REALITY**: The UART is a **peripheral device** that the processor **writes characters to** as part of program execution.

### 3.2 How Characters Get to UART

```
┌─────────────────────────────────────────────────────────────────┐
│                       PROGRAM EXECUTION                          │
└─────────────────────────────────────────────────────────────────┘
                                 │
                                 ▼
          Instruction 3: li x7, 'C'    (x7 = 0x43)
                                 │
                                 ▼
          Instruction 4: sw x7, 0(x5)  (Write to 0x21000000)
                                 │
                                 ▼
┌─────────────────────────────────────────────────────────────────┐
│                    MEMORY INTERFACE                              │
│                                                                  │
│  data_addr  = 0x21000000  (UART_BASE)                           │
│  data_wdata = 0x43        ('C')                                 │
│  data_req   = 1                                                 │
│  data_we    = 1                                                 │
└──────────────────────────┬──────────────────────────────────────┘
                           │
                           ▼
┌─────────────────────────────────────────────────────────────────┐
│                    ADDRESS DECODER                               │
│                                                                  │
│  uart_select = (data_addr >= 0x21000000) &&                     │
│                (data_addr < 0x21000008)                          │
│             = TRUE                                               │
└──────────────────────────┬──────────────────────────────────────┘
                           │
                           ▼
┌─────────────────────────────────────────────────────────────────┐
│                    UART TX MODULE                                │
│                  (simple_uart_tx)                                │
│                                                                  │
│  Input: data_wdata = 0x43 ('C')                                 │
│  Output: uart_tx pin (serial bits)                              │
│                                                                  │
│  Transmits: START | D0 D1 D2 D3 D4 D5 D6 D7 | STOP             │
│               0   | 1  1  0  0  0  0  1  0  |  1               │
│                     └─────────┬──────────┘                      │
│                               │                                  │
│                          0x43 = 'C'                              │
└──────────────────────────┬──────────────────────────────────────┘
                           │
                           │ Serial bits on uart_tx wire
                           │
                           ▼
┌─────────────────────────────────────────────────────────────────┐
│                    TESTBENCH UART MONITOR                        │
│                                                                  │
│  Decodes serial bits back to ASCII:                             │
│  START → 0x43 → STOP → Print: [UART] C                          │
└─────────────────────────────────────────────────────────────────┘
```

### 3.3 Expected UART Output

Based on boot ROM program (instructions 3-98):

```
[UART] C
[UART] V
[UART] A
[UART] 6
[UART]  
[UART] B
[UART] o
[UART] o
[UART] t
[UART] i
[UART] n
[UART] g
[UART] .
[UART] .
[UART] .
[UART] 
[UART] L
[UART] E
[UART] D
[UART]  
[UART] O
[UART] N
[UART] 
```

This forms: **"CVA6 Booting...\nLED ON\n"**

### 3.4 UART TX Module Operation

```verilog
// File: Reference from cva6_minimal_top.v
simple_uart_tx #(
    .CLOCK_FREQ (125_000_000),  // 125 MHz system clock
    .BAUD_RATE  (115_200),      // 115200 bps
    .FIFO_DEPTH (16)            // 16-byte transmit FIFO
) u_uart_debug (
    .clock  (clk),
    .reset  (reset),
    .req    (data_req && uart_select),  // Request when writing to UART
    .we     (data_we),                   // Write enable
    .wdata  (data_wdata),                // Character to transmit
    .rdata  (uart_rdata),                // Status readback
    .uart_tx(uart_tx)                    // Serial output pin
);
```

**Timing:**
- Bit period = 1/115200 = 8.68 μs
- Character period = 10 bits × 8.68 μs = 86.8 μs
- At 125 MHz clock: 10,850 clock cycles per character

---

## 4. HBM3 Loopback Testing

### 4.1 CRITICAL: HBM3 Tests Do NOT Go Through Core!

**ANSWER TO YOUR QUESTION: "Is loopback testing through the core?"**

**NO!** The HBM3 loopback tests **bypass the core entirely** using testbench `force`/`release` commands.

### 4.2 Two Separate Test Phases

```
┌─────────────────────────────────────────────────────────────────┐
│  PHASE 1: CVA6 Core Execution Test (0 - 500μs)                  │
│                                                                  │
│  - Core executes boot ROM program naturally                     │
│  - Prints "CVA6 Booting..." via UART                            │
│  - Toggles LED via LED register                                 │
│  - Testbench MONITORS signals passively                         │
│  - Tests that core WORKS                                        │
└─────────────────────────────────────────────────────────────────┘
                                 │
                                 ▼
                      Simulation time = 500μs
                                 │
                                 ▼
┌─────────────────────────────────────────────────────────────────┐
│  PHASE 2: HBM3 Memory Path Test (After 500μs)                   │
│                                                                  │
│  - Core continues running (but irrelevant)                      │
│  - Testbench INJECTS memory operations using force/release      │
│  - Tests HBM3 data path: Testbench → Bridge → HBM3 → Loopback  │
│  - Tests that HBM3 interface WORKS                              │
└─────────────────────────────────────────────────────────────────┘
```

### 4.3 How Phase 2 HBM3 Tests Work

**Testbench Code (lines 657-722):**

```verilog
// After 500μs, testbench takes control
initial begin
    // ... Phase 1 completes ...
    
    // ====================================================================
    // PHASE 2: HBM3 MEMORY TESTS
    // ====================================================================
    $display("========================================================================");
    $display("PHASE 2: HBM3 MEMORY VERIFICATION");
    $display("========================================================================");
    
    // Run 10 tests, each uses force/release to inject operations
    run_hbm3_test("Single Write/Read", HBM3_BASE, 32'hDEADBEEF);
    run_hbm3_test("Address 0x100", HBM3_BASE + 32'h100, 32'h12345678);
    // ... 8 more tests ...
end

// ====================================================================
// HBM3 Write Task - FORCES signals, bypassing core
// ====================================================================
task hbm3_write;
    input [31:0] addr;
    input [31:0] data;
begin
    // ================================================================
    // FORCE: Override signals directly (TESTBENCH CONTROL)
    // ================================================================
    force dut.data_req = 1'b1;           // Force request active
    force dut.data_we = 1'b1;            // Force write enable
    force dut.data_addr = addr;          // Force address (0x30000000)
    force dut.data_wdata = data;         // Force data (0xDEADBEEF)
    force dut.data_be = 4'b1111;         // Force byte enable
    
    // Hold for a few cycles
    repeat(5) @(posedge sys_clock);
    
    // ================================================================
    // RELEASE: Return control to normal simulation
    // ================================================================
    release dut.data_req;
    release dut.data_we;
    release dut.data_addr;
    release dut.data_wdata;
    release dut.data_be;
    
    // Wait for operation to propagate
    repeat(50) @(posedge sys_clock);
end
endtask
```

### 4.4 Complete HBM3 Test Data Path

```
┌─────────────────────────────────────────────────────────────────┐
│                         TESTBENCH                                │
│                                                                  │
│  task hbm3_write(0x30000000, 0xDEADBEEF)                         │
│       │                                                          │
│       │ force dut.data_addr = 0x30000000                         │
│       │ force dut.data_wdata = 0xDEADBEEF                        │
│       │ force dut.data_req = 1                                   │
│       │ force dut.data_we = 1                                    │
└───────┼──────────────────────────────────────────────────────────┘
        │
        │ Forced signals override core output
        │
        ▼
┌─────────────────────────────────────────────────────────────────┐
│                     DUT: cva6_minimal_top                        │
│                                                                  │
│  Address Decoder:                                                │
│    hbm3_select = (0x30000000 >= HBM3_BASE) &&                   │
│                  (0x30000000 < HBM3_BASE + 256MB)                │
│                = TRUE                                            │
└───────┬─────────────────────────────────────────────────────────┘
        │
        ▼
┌─────────────────────────────────────────────────────────────────┐
│                   mem_to_axi_bridge                              │
│                                                                  │
│  Converts simple memory interface to AXI4:                       │
│    mem_addr  → axi_awaddr  (0x30000000)                         │
│    mem_wdata → axi_wdata   (0xDEADBEEF)                         │
│    mem_req   → axi_awvalid, axi_wvalid                          │
└───────┬─────────────────────────────────────────────────────────┘
        │
        ▼
┌─────────────────────────────────────────────────────────────────┐
│                   hbm3_controller_top                            │
│                                                                  │
│  Receives AXI4 transaction                                       │
│  Would normally generate PHY signals to real DRAM                │
│  (But we have loopback instead)                                  │
└─────────────────────────────────────────────────────────────────┘
        │
        │ phy_to_dram_* signals
        │ (Not connected to real DRAM in testbench)
        │
        ▼
┌─────────────────────────────────────────────────────────────────┐
│             TESTBENCH HBM3 LOOPBACK MODEL                        │
│                                                                  │
│  reg [31:0] hbm3_loopback_mem [0:1023];                         │
│                                                                  │
│  // Capture writes                                               │
│  always @(posedge clk) begin                                     │
│      if (dut.hbm3_select && dut.data_req && dut.data_we) begin  │
│          hbm3_loopback_mem[addr[11:2]] <= dut.data_wdata;       │
│          // Stores: mem[0] = 0xDEADBEEF                          │
│      end                                                         │
│  end                                                             │
│                                                                  │
│  // Provide read data                                            │
│  always @(posedge clk) begin                                     │
│      if (dut.hbm3_select && dut.data_req && !dut.data_we) begin │
│          force dut.data_rdata = hbm3_loopback_mem[addr[11:2]];  │
│          // Returns: 0xDEADBEEF                                  │
│      end                                                         │
│  end                                                             │
└───────┬─────────────────────────────────────────────────────────┘
        │
        │ Read data forced back to DUT
        │
        ▼
┌─────────────────────────────────────────────────────────────────┐
│                         TESTBENCH                                │
│                                                                  │
│  task hbm3_read(0x30000000, read_data)                           │
│       │                                                          │
│       │ force dut.data_addr = 0x30000000                         │
│       │ force dut.data_req = 1                                   │
│       │ force dut.data_we = 0                                    │
│       │ wait(dut.hbm3_valid)                                     │
│       │ read_data = dut.data_rdata  // = 0xDEADBEEF              │
│       │                                                          │
│       └─> Compare: read_data == 0xDEADBEEF ? PASS : FAIL         │
└─────────────────────────────────────────────────────────────────┘
```

### 4.5 Why Use Force/Release for HBM3 Tests?

**Reasons:**

1. **Independent Testing**: Tests HBM3 data path separately from core execution
2. **Targeted Verification**: Verifies memory controller and bridge work correctly
3. **Deterministic**: Not dependent on core reaching specific program points
4. **Fast**: Can run many test patterns quickly without writing test programs
5. **Complete Coverage**: Tests addresses/patterns the boot ROM program never uses

**What Force/Release Does:**

```verilog
// Normal operation:
wire data_req;  // Driven by core
assign data_req = u_riscv_core.data_req;

// During force (Phase 2):
force dut.data_req = 1'b1;  // Testbench overrides
// Now data_req = 1, regardless of what core outputs

// After release:
release dut.data_req;  // Back to normal
// Now data_req = u_riscv_core.data_req again
```

---

## 5. Signal Flow Diagrams

### 5.1 Complete System Architecture

```
┌───────────────────────────────────────────────────────────────────────────┐
│                              TESTBENCH                                     │
│                                                                            │
│  ┌─────────────┐  ┌──────────────┐  ┌────────────────┐                   │
│  │ Clock Gen   │  │ UART Monitor │  │ HBM3 Loopback  │                   │
│  │ 125 MHz     │  │ (Decode TX)  │  │ Memory Model   │                   │
│  └──────┬──────┘  └──────┬───────┘  └────────┬───────┘                   │
│         │                 │                    │                           │
└─────────┼─────────────────┼────────────────────┼───────────────────────────┘
          │                 │                    │
          │ clk             │ uart_tx            │ force/monitor signals
          │                 │                    │
┌─────────▼─────────────────▼────────────────────▼───────────────────────────┐
│                        DUT: cva6_minimal_top                               │
│                                                                            │
│  ┌──────────────────┐           ┌────────────────────────┐                │
│  │   Boot ROM       │◄──────────┤  simple_riscv_core     │                │
│  │   (1KB)          │ instr_addr│  (RV32I subset)        │                │
│  │                  ├──────────►│                        │                │
│  │  Pre-loaded:     │ instr_data│  PC, Regs, ALU, FSM    │                │
│  │  rom[0]=0x10001  │           │                        │                │
│  │  rom[1]=0x21000  │           └───────────┬────────────┘                │
│  │  rom[2]=0x20000  │                       │                             │
│  │  ...             │                       │ data_req, data_we           │
│  └──────────────────┘                       │ data_addr, data_wdata       │
│                                             │                             │
│                                ┌────────────▼─────────────┐               │
│                                │   Address Decoder        │               │
│                                │                          │               │
│                                │  rom_select              │               │
│                                │  ram_select              │               │
│                                │  led_select              │               │
│                                │  uart_select             │               │
│                                │  hbm3_select             │               │
│                                │  hbm3_cfg_select         │               │
│                                └──┬──┬──┬────┬────┬───────┘               │
│                                   │  │  │    │    │                       │
│              ┌────────────────────┘  │  │    │    └──────────────┐        │
│              │                       │  │    │                    │        │
│   ┌──────────▼────────┐  ┌──────────▼──▼────▼──────┐  ┌─────────▼──────┐ │
│   │   Data RAM        │  │  LED  │ UART TX │ APB   │  │  mem_to_axi    │ │
│   │   (4KB)           │  │  Reg  │ Module  │ CFG   │  │  _bridge       │ │
│   └───────────────────┘  └────┬──┴─────┬───┴───────┘  └────────┬───────┘ │
│                               │        │                        │         │
│                               │        │                        │ AXI4    │
│                               │        │              ┌─────────▼───────┐ │
│                               │        │              │ hbm3_controller │ │
│                               │        │              │ _top            │ │
│                               │        │              └─────────┬───────┘ │
└───────────────────────────────┼────────┼────────────────────────┼─────────┘
                                │        │                        │
                                │        │                        │ phy_* signals
                                │        │                        │
                             led[3:0]  uart_tx           (Not connected to
                                │        │                real DRAM)
                                ▼        ▼
                          FPGA Pins / Testbench Monitors
```

### 5.2 Phase 1 (Core Execution) Signal Flow

```
Time: 0 - 500μs
Mode: Normal Operation

Core PC ──────────────────────────────────────┐
   │                                           │
   │ 0x00, 0x04, 0x08...                      │
   ▼                                           │
Boot ROM                                       │
   │                                           │
   │ Instruction: 0x10001137 (LUI x2)          │
   ▼                                           │
Core Decode                                    │
   │                                           │
   │ Decoded: LUI, rd=x2, imm=0x10001000       │
   ▼                                           │
Core Execute                                   │
   │                                           │
   │ x2 ← 0x10001000                           │
   │ PC ← PC + 4                               │
   └───────────────────────────────────────────┘

For SW instruction (Write to UART/LED):
Core Execute
   │
   │ data_req = 1, data_we = 1
   │ data_addr = 0x21000000 (UART)
   │ data_wdata = 0x43 ('C')
   ▼
Address Decoder
   │
   │ uart_select = 1
   ▼
UART TX Module
   │
   │ Transmit character serially
   ▼
uart_tx pin ────► Testbench UART Monitor
                      │
                      ▼
                  Console: [UART] C
```

### 5.3 Phase 2 (HBM3 Test) Signal Flow

```
Time: After 500μs
Mode: Testbench-Driven

Testbench Task: hbm3_write(0x30000000, 0xDEADBEEF)
   │
   │ force dut.data_req = 1
   │ force dut.data_we = 1
   │ force dut.data_addr = 0x30000000
   │ force dut.data_wdata = 0xDEADBEEF
   ▼
Address Decoder
   │
   │ hbm3_select = 1 (addr in HBM3 range)
   ▼
mem_to_axi_bridge
   │
   │ Convert to AXI4 write transaction
   │ axi_awaddr = 0x30000000
   │ axi_wdata = 0xDEADBEEF
   ▼
hbm3_controller_top
   │
   │ Process AXI transaction
   │ Generate PHY signals
   ▼
phy_* signals ────► (Not connected to real DRAM)
   │
   │ Intercepted by testbench loopback
   ▼
Testbench HBM3 Loopback
   │
   │ hbm3_loopback_mem[0] ← 0xDEADBEEF
   │
   ▼
   │
Testbench Task: hbm3_read(0x30000000)
   │
   │ force dut.data_req = 1
   │ force dut.data_we = 0
   │ force dut.data_addr = 0x30000000
   ▼
Testbench HBM3 Loopback
   │
   │ force dut.data_rdata = hbm3_loopback_mem[0]
   │                      = 0xDEADBEEF
   ▼
Testbench Verify
   │
   │ read_data == 0xDEADBEEF ?
   │ YES → PASS
   │ NO  → FAIL
   ▼
Console: [HBM3 Test 1] PASS
```

---

## 6. Timing Analysis

### 6.1 Clock and Reset Timing

```
Time        Event
──────────────────────────────────────────────────────────────
0ns         Simulation starts
            sys_clock = 0
            sys_reset_n = 1 (reset active)
            
4ns         sys_clock rising edge (cycle 0)
8ns         sys_clock falling edge
12ns        sys_clock rising edge (cycle 1)
...         
80ns        sys_clock rising edge (cycle 10)
84ns        sys_reset_n = 0 (reset released)
88ns        sys_clock rising edge (cycle 11)
            Core exits reset state
            PC = 0x00000000
            state = FETCH
```

### 6.2 Instruction Execution Timing

**Single Instruction (LUI, ADDI):**
```
Cycle N:   FETCH    (Read ROM, PC → instr_addr)
Cycle N+1: DECODE   (Decode instruction fields)
Cycle N+2: EXECUTE  (ALU operation, register write, PC update)
           └─────────► Total: 3 cycles per instruction
```

**Memory Instruction (SW, LW):**
```
Cycle N:   FETCH    (Read ROM)
Cycle N+1: DECODE   (Decode instruction)
Cycle N+2: EXECUTE  (Calculate address, issue memory request)
Cycle N+3: MEMORY   (Wait for memory, then complete)
           └─────────► Total: 4 cycles per instruction
```

**Branch Instruction (BNE, taken):**
```
Cycle N:   FETCH    (Read ROM at PC)
Cycle N+1: DECODE   (Decode branch)
Cycle N+2: EXECUTE  (Compare registers, update PC = PC + offset)
Cycle N+3: FETCH    (Read ROM at new PC)
           └─────────► Total: 3 cycles, PC changes by offset
```

### 6.3 Complete Program Execution Timeline

```
Time (ns)  Cycle  PC     Instruction                  Registers Updated
────────────────────────────────────────────────────────────────────────
116        14     0x00   lui x2, 0x10001              x2 = 0x10001000
140        17     0x04   lui x5, 0x21000              x5 = 0x21000000
164        20     0x08   lui x6, 0x20000              x6 = 0x20000000
188        23     0x0C   li x7, 'C'                   x7 = 0x43
212        26     0x10   sw x7, 0(x5)                 UART ← 'C'
236        29     0x14   li x7, 'V'                   x7 = 0x56
260        32     0x18   sw x7, 0(x5)                 UART ← 'V'
...
~1ms       ~125k  Loop   LED ON/OFF loop begins       LED toggles
~100ms     ~12.5M 0xD4   Delay loop                   x10 counts down
```

### 6.4 UART Character Timing

**Single Character Transmission:**
```
Baud Rate: 115200 bps
Bit Period: 1/115200 = 8.68 μs
Character: START + 8 data bits + STOP = 10 bits
Character Period: 10 × 8.68 μs = 86.8 μs

At 125 MHz clock:
Clock Period: 8 ns
Clocks per bit: 8680 ns / 8 ns = 1085 clocks
Clocks per char: 10850 clocks
```

**Full "CVA6 Booting..." Message:**
```
Characters: 17 chars ("CVA6 Booting...\n")
Time: 17 × 86.8 μs = 1.476 ms
Plus SW instruction overhead: ~2 ms total
```

### 6.5 LED Blink Timing

**Delay Loop (Boot ROM lines 133-138):**
```assembly
lui a0, 0x00BED      ; a0 = 0x00BED000 = 12,509,184
addi a0, a0, -0x6C0  ; a0 = 0x00BEC940 = 12,507,456
delay_loop:
    addi a0, a0, -1  ; 3 cycles (fetch, decode, execute)
    bnez a0, delay_loop  ; 3 cycles if taken
                         ; Total: 6 cycles per iteration
```

**Total Delay:**
```
Iterations: 12,507,456
Cycles per iteration: 6
Total cycles: 75,044,736
Time at 125 MHz: 75,044,736 × 8ns = 600 ms
LED blink period: ~1.2 seconds (ON 600ms, OFF 600ms)
```

---

## 7. Summary

### 7.1 Boot ROM Initialization
- ✅ Initialized at compile time via `initial` block
- ✅ Contains complete RISC-V program (78 instructions)
- ✅ Ready before simulation starts (time 0)

### 7.2 Core Execution
- ✅ Fetches instructions from ROM via PC → instr_addr
- ✅ 3-stage pipeline: FETCH → DECODE → EXECUTE
- ✅ Executes RV32I subset: LUI, ADDI, SW, BNE, JAL
- ✅ 3 cycles per arithmetic instruction, 4 for memory

### 7.3 UART Operation
- ✅ **NOT** instruction logging - it's character output
- ✅ Program writes characters via SW to 0x21000000
- ✅ UART serializes to 115200 baud on uart_tx pin
- ✅ Testbench decodes and prints to console

### 7.4 HBM3 Loopback Testing
- ✅ **NOT** through core execution
- ✅ Testbench uses `force`/`release` to inject operations
- ✅ Tests HBM3 data path independently
- ✅ Loopback model: testbench memory captures/returns data
- ✅ Verifies: mem_to_axi_bridge → hbm3_controller → loopback

### 7.5 Two Independent Test Phases
```
Phase 1 (0-500μs):     Core executes boot ROM naturally
                       Tests: Core, ROM, UART, LED
                       
Phase 2 (After 500μs): Testbench drives memory interface
                       Tests: HBM3 bridge, controller, data path
```

---

## 8. Key Takeaways

1. **Boot ROM loads at elaboration time** - not runtime
2. **Core reads ROM every cycle via PC** - direct wire connection
3. **UART is a peripheral** - program writes characters to it
4. **HBM3 tests bypass core** - testbench directly drives signals
5. **Two separate verification domains** - core vs. memory subsystem

The system is working correctly if:
- ✅ PC advances through ROM addresses
- ✅ Registers update with expected values
- ✅ UART prints "CVA6 Booting..." and "LED ON/OFF"
- ✅ LED toggles in simulation
- ✅ HBM3 loopback tests pass (Phase 2)

---

**Document Created:** March 2026  
**System:** CVA6 RISC-V Minimal Boot System  
**Target:** PYNQ Z2 FPGA Board
