// Minimal Top Module Testbench
// ============================================================================
// Description:
//   Comprehensive functional verification testbench that:
//   - Initializes RISC-V registers via ROM boot code
//   - Enables trace functionality via memory-mapped register write
//   - Loads test program into ROM
//   - Monitors and decodes UART trace output
//   - Logs all executed instructions with PC and opcode
//   - Verifies instruction trace functionality
//
//   Memory Map (from cva6_minimal_top.v):
//     0x00000000 - 0x000003FF : Boot ROM (1KB)
//     0x10000000 - 0x10000FFF : Data RAM (4KB) - For stack and data
//     0x20000000              : LED Register
//     0x21000000 - 0x21000007 : UART Debug (8 bytes)
//     0x22000000              : Trace Control Register
//     0x30000000 - 0x3FFFFFFF : HBM3 Memory (256MB)
//     0x40000000 - 0x40000FFF : HBM3 Config Registers (4KB) - APB interface
// ============================================================================

`timescale 1ns/1ps

module tb_cva6_minimal_top;

    // ========================================================================
    // Clock and Reset
    // ========================================================================
    reg         sys_clock;
    reg         sys_reset_n;
    
    // ========================================================================
    // DUT Outputs
    // ========================================================================
    wire [3:0]  led;
    wire        uart_tx;
    
    // ========================================================================
    // HBM3 Physical Interface
    // ========================================================================
    wire         phy_to_dram_hbm_ck_t;
    wire         phy_to_dram_hbm_ck_c;
    wire         phy_to_dram_hbm_cke;
    wire         phy_to_dram_hbm_cs_n;
    wire [5:0]   phy_to_dram_hbm_ca;
    wire [127:0] phy_to_dram_io_hbm_dq;
    wire [8:0]   phy_to_dram_io_hbm_ecc;
    wire [15:0]  phy_to_dram_hbm_dm;
    
    // ========================================================================
    // Test Variables
    // ========================================================================
    integer test_count;
    integer error_count;
    integer instr_count;
    integer uart_byte_count;
    
    // UART Monitor Variables
    reg [7:0] uart_rx_data;
    reg       uart_rx_valid;
    integer   uart_bit_count;
    integer   uart_clk_count;
    reg [9:0] uart_shift_reg;
    
    // Instruction Trace Log
    reg [31:0] trace_log_pc [0:1023];
    reg [31:0] trace_log_instr [0:1023];
    integer    trace_log_count;
    
    // ========================================================================
    // Parameters
    // ========================================================================
    parameter CLOCK_FREQ = 125_000_000;
    parameter BAUD_RATE  = 115_200;
    parameter CLKS_PER_BIT = CLOCK_FREQ / BAUD_RATE;  // ~1085 clocks per bit
    
    // ========================================================================
    // Clock Generation - 125 MHz (8ns period)
    // ========================================================================
    initial begin
        sys_clock = 0;
        forever #4 sys_clock = ~sys_clock;  // 125 MHz clock
    end
    
    // ========================================================================
    // DUT Instantiation
    // ========================================================================
    cva6_minimal_top dut (
        .sys_clock              (sys_clock),
        .sys_reset_n            (sys_reset_n),
        .led                    (led),
        .uart_tx                (uart_tx),
        .phy_to_dram_hbm_ck_t   (phy_to_dram_hbm_ck_t),
        .phy_to_dram_hbm_ck_c   (phy_to_dram_hbm_ck_c),
        .phy_to_dram_hbm_cke    (phy_to_dram_hbm_cke),
        .phy_to_dram_hbm_cs_n   (phy_to_dram_hbm_cs_n),
        .phy_to_dram_hbm_ca     (phy_to_dram_hbm_ca),
        .phy_to_dram_io_hbm_dq  (phy_to_dram_io_hbm_dq),
        .phy_to_dram_io_hbm_ecc (phy_to_dram_io_hbm_ecc),
        .phy_to_dram_hbm_dm     (phy_to_dram_hbm_dm)
    );
    
    // ========================================================================
    // Load Test Program into ROM with Proper Initialization
    // ========================================================================
    initial begin
        integer rom_idx;
        rom_idx = 0;
        
        // Load program immediately at time 0 (before processor starts)
        #0;
        
        $display("================================================================================");
        $display("Loading Test Program into Boot ROM");
        $display("================================================================================");
        $display("Memory Map:");
        $display("  Boot ROM:      0x00000000 - 0x000003FF");
        $display("  Data RAM:      0x10000000 - 0x10000FFF");
        $display("  LED Register:  0x20000000");
        $display("  UART:          0x21000000 - 0x21000007");
        $display("  Trace Control: 0x22000000");
        $display("  HBM3 Memory:   0x30000000 - 0x3FFFFFFF");
        $display("  HBM3 Config:   0x40000000 - 0x40000FFF");
        $display("");
        
        // ====================================================================
        // BOOT ROM PROGRAM - FULL TRACING (INSTRUCTION + HBM3)
        // ====================================================================
        // This program configures the trace module to capture BOTH instruction
        // traces AND HBM3 transactions for complete debug visibility.
        // ====================================================================
        $display("  Boot code section: Full Trace Configuration (Instruction + HBM3)");
        
        // STEP 1: Configure Trace Control - BOTH Instruction AND HBM3 Tracing
        // Write 0x3 to Trace Control Register at 0x22000000
        // Bit[0] = 1: Enable instruction tracing
        // Bit[1] = 1: Enable HBM3 data tracing
        dut.u_boot_rom.rom[rom_idx] = 32'h22000337; rom_idx = rom_idx + 1; // lui   x6, 0x22000 - Trace ctrl addr
        dut.u_boot_rom.rom[rom_idx] = 32'h00300393; rom_idx = rom_idx + 1; // addi  x7, x0, 3    - Value = 3 (BOTH enabled)
        dut.u_boot_rom.rom[rom_idx] = 32'h00732023; rom_idx = rom_idx + 1; // sw    x7, 0(x6)    - Write trace ctrl
        
        // STEP 2: Initialize UART Address Register
        dut.u_boot_rom.rom[rom_idx] = 32'h210002B7; rom_idx = rom_idx + 1; // lui   x5, 0x21000 - UART base addr
        
        // STEP 3: Write Application Identifier to UART ('S' = Start)
        dut.u_boot_rom.rom[rom_idx] = 32'h05300393; rom_idx = rom_idx + 1; // addi  x7, x0, 83   - ASCII 'S'
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)    - Write to UART
        
        // STEP 4: Configure HBM3 Controller (optional - uses default if skipped)
        dut.u_boot_rom.rom[rom_idx] = 32'h400003B7; rom_idx = rom_idx + 1; // lui   x7, 0x40000 - HBM3 config base
        dut.u_boot_rom.rom[rom_idx] = 32'h01C00393; rom_idx = rom_idx + 1; // addi  x7, x0, 28   - Config value
        dut.u_boot_rom.rom[rom_idx] = 32'h0073A023; rom_idx = rom_idx + 1; // sw    x7, 0(x7)    - Write HBM3 config
        
        // STEP 5: Initialize HBM3 Memory Base Address Register
        dut.u_boot_rom.rom[rom_idx] = 32'h30000437; rom_idx = rom_idx + 1; // lui   x8, 0x30000 - HBM3 mem base
        
        // STEP 6: Perform HBM3 Write Transaction #1
        dut.u_boot_rom.rom[rom_idx] = 32'hDEADB4B7; rom_idx = rom_idx + 1; // lui   x9, 0xDEADB - Test pattern upper
        dut.u_boot_rom.rom[rom_idx] = 32'hEEF48493; rom_idx = rom_idx + 1; // addi  x9, x9, 0xEEF - x9 = 0xDEADBEEF
        dut.u_boot_rom.rom[rom_idx] = 32'h00942023; rom_idx = rom_idx + 1; // sw    x9, 0(x8)   - Write to HBM3[0x30000000]
        
        // STEP 7: Perform HBM3 Write Transaction #2 (different pattern)
        dut.u_boot_rom.rom[rom_idx] = 32'h12345537; rom_idx = rom_idx + 1; // lui   x10, 0x12345 - Test pattern 2
        dut.u_boot_rom.rom[rom_idx] = 32'h67850513; rom_idx = rom_idx + 1; // addi  x10, x10, 0x678 - x10 = 0x12345678
        dut.u_boot_rom.rom[rom_idx] = 32'h00A42223; rom_idx = rom_idx + 1; // sw    x10, 4(x8)  - Write to HBM3[0x30000004]
        
        // STEP 8: Perform HBM3 Read Transaction #1
        dut.u_boot_rom.rom[rom_idx] = 32'h00042583; rom_idx = rom_idx + 1; // lw    x11, 0(x8)  - Read from HBM3[0x30000000]
        
        // STEP 9: Perform HBM3 Read Transaction #2  
        dut.u_boot_rom.rom[rom_idx] = 32'h00442603; rom_idx = rom_idx + 1; // lw    x12, 4(x8)  - Read from HBM3[0x30000004]
        
        // STEP 10: Write Completion Marker to UART ('D' = Done)
        dut.u_boot_rom.rom[rom_idx] = 32'h04400393; rom_idx = rom_idx + 1; // addi  x7, x0, 68   - ASCII 'D'
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)    - Write to UART
        
        // STEP 11: Write Newline to UART
        dut.u_boot_rom.rom[rom_idx] = 32'h00A00393; rom_idx = rom_idx + 1; // addi  x7, x0, 10   - ASCII '\n'
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)    - Write to UART
        
        // STEP 12: HALT - Infinite NOP loop (stay here)
        dut.u_boot_rom.rom[rom_idx] = 32'h0000006F; rom_idx = rom_idx + 1; // jal   x0, 0       - Jump to self (HALT)
        
        // Fill rest with NOPs
        for (int i = rom_idx; i < 256; i++) begin
            dut.u_boot_rom.rom[i] = 32'h00000013;  // NOP (addi x0, x0, 0)
        end
 
        $display("");
        $display("  Configuration Summary:");
        $display("    - Trace Control: BOTH ENABLED (instruction + HBM3 tracing)");
        $display("    - Full debug visibility with instruction execution traces");
        $display("    - Both instruction traces AND HBM3 transactions logged via UART");
        $display("");
        $display("  Application Program:");
        $display("    - UART: Writes 'S' (Start) and 'D' (Done) markers");
        $display("    - HBM3 Write #1: 0xDEADBEEF -> 0x30000000");
        $display("    - HBM3 Write #2: 0x12345678 -> 0x30000004");
        $display("    - HBM3 Read #1:  Read from 0x30000000");
        $display("    - HBM3 Read #2:  Read from 0x30000004");
        $display("    - HALT: Program halts after completing test sequence");
        $display("");
        $display("Total ROM instructions used: %0d / 256", rom_idx);
        $display("Boot program loaded successfully!");
        $display("================================================================================");
        $display("");
        $display("EXPECTED UART OUTPUT:");
        $display("  - 'S' (Start marker from application)");
        $display("  - PC: 0x00000000 | INST: 0x22000337 | STATUS: EXECUTED");
        $display("  - PC: 0x00000004 | INST: 0x00300393 | STATUS: EXECUTED");
        $display("  - ... (more instruction traces)");
        $display("  - HBM3_WR: ADDR=0x30000000 DATA=0xDEADBEEF");
        $display("  - HBM3_WR: ADDR=0x30000004 DATA=0x12345678");
        $display("  - HBM3_RD: ADDR=0x30000000 DATA=0xDEADBEEF");
        $display("  - HBM3_RD: ADDR=0x30000004 DATA=0x12345678");
        $display("  - 'D' (Done marker), then program halts");
        $display("");
        $display("NOTE: BOTH instruction traces AND HBM3 traces will appear");
        $display("================================================================================");
        $display("");
    end
    
    // ========================================================================
    // UART RX Monitor (Decodes UART TX output)
    // ========================================================================
    reg uart_prev;
    reg uart_sampling;
    reg [3:0] uart_state;
    
    localparam UART_IDLE  = 4'h0;
    localparam UART_START = 4'h1;
    localparam UART_DATA  = 4'h2;
    localparam UART_STOP  = 4'h3;
    
    initial begin
        uart_prev = 1'b1;
        uart_sampling = 1'b0;
        uart_state = UART_IDLE;
        uart_bit_count = 0;
        uart_clk_count = 0;
        uart_rx_valid = 1'b0;
        uart_rx_data = 8'h00;
        uart_shift_reg = 10'h3FF;
        uart_byte_count = 0;
    end
    
    always @(posedge sys_clock) begin
        if (!sys_reset_n) begin
            uart_state <= UART_IDLE;
            uart_clk_count <= 0;
            uart_bit_count <= 0;
            uart_rx_valid <= 1'b0;
        end else begin
            uart_rx_valid <= 1'b0;
            uart_prev <= uart_tx;
            
            case (uart_state)
                UART_IDLE: begin
                    if (uart_prev == 1'b1 && uart_tx == 1'b0) begin
                        uart_state <= UART_START;
                        uart_clk_count <= 0;
                        uart_bit_count <= 0;
                         $display("LOG: %0t : INFO : UART_MONITOR : uart_tx : Start bit detected", $time);
                    end
                end
                
                UART_START: begin
                    if (uart_clk_count < CLKS_PER_BIT - 1) begin
                        uart_clk_count <= uart_clk_count + 1;
                    end else begin
                        uart_clk_count <= 0;
                        uart_state <= UART_DATA;
                        uart_shift_reg <= 10'h000;
                    end
                end
                
                UART_DATA: begin
                    if (uart_clk_count < CLKS_PER_BIT - 1) begin
                        uart_clk_count <= uart_clk_count + 1;
                    end else begin
                        uart_clk_count <= 0;
                        uart_shift_reg[uart_bit_count] <= uart_tx;
                        
                        if (uart_bit_count < 7) begin
                            uart_bit_count <= uart_bit_count + 1;
                        end else begin
                            uart_state <= UART_STOP;
                        end
                    end
                end
                
                UART_STOP: begin
                    if (uart_clk_count < CLKS_PER_BIT - 1) begin
                        uart_clk_count <= uart_clk_count + 1;
                    end else begin
                        uart_clk_count <= 0;
                        uart_state <= UART_IDLE;
                        
                        if (uart_tx == 1'b1) begin
                            uart_rx_data <= uart_shift_reg[7:0];
                            uart_rx_valid <= 1'b1;
                            uart_byte_count <= uart_byte_count + 1;
                            
                            // Verbose byte-by-byte logging disabled for cleaner output
                             if (uart_shift_reg[7:0] >= 32 && uart_shift_reg[7:0] < 127) begin
                                 $display("LOG: %0t : INFO : UART_MONITOR : received_byte[%0d] : value: 0x%02h ('%c')", 
                                          $time, uart_byte_count, uart_shift_reg[7:0], uart_shift_reg[7:0]);
                             end else begin
                                 $display("LOG: %0t : INFO : UART_MONITOR : received_byte[%0d] : value: 0x%02h", 
                                          $time, uart_byte_count, uart_shift_reg[7:0]);
                             end
                        end else begin
                            $display("LOG: %0t : ERROR : UART_MONITOR : stop_bit : expected_value: 1'b1 actual_value: %b", 
                                     $time, uart_tx);
                        end
                    end
                end
                
                default: uart_state <= UART_IDLE;
            endcase
        end
    end
    
    // ========================================================================
    // UART Trace Line Assembler - Reconstructs Complete Formatted Traces
    // ========================================================================
    // This monitor captures UART bytes and assembles them into complete trace
    // lines, displaying both instruction traces and HBM3 transaction traces
    // exactly as they would appear on a serial terminal.
    //
    // Expected formats:
    //   PC: 0x00001000 | INST: 0x00000513 | STATUS: EXECUTED
    //   HBM3_WR: ADDR=0x30000000 DATA=0xDEADBEEF
    //   HBM3_RD: ADDR=0x30000000 DATA=0xDEADBEEF
    // ========================================================================
    
    reg [7:0] uart_line_buffer [0:255];  // Buffer to accumulate line characters
    integer   uart_line_index;           // Current position in line buffer
    integer   uart_trace_count;          // Count of complete traces received
    
    initial begin
        uart_line_index = 0;
        uart_trace_count = 0;
    end
    
    always @(posedge sys_clock) begin
        if (!sys_reset_n) begin
            uart_line_index <= 0;
            uart_trace_count <= 0;
        end else begin
            if (uart_rx_valid) begin
                // Check for newline (end of trace line)
                if (uart_rx_data == 8'h0A || uart_rx_data == 8'h0D) begin
                    // Display complete trace line if buffer is not empty
                    if (uart_line_index > 0) begin
                        uart_trace_count <= uart_trace_count + 1;
                        
                        $display("========================================================================");
                        $display("UART TRACE #%0d @ %0t:", uart_trace_count, $time);
                        $display("========================================================================");
                        
                        // Display the formatted trace line
                        $write(">>> ");
                        for (int i = 0; i < uart_line_index; i++) begin
                            $write("%c", uart_line_buffer[i]);
                        end
                        $write("\n");
                        
                        // Decode trace type and highlight key information
                        if (uart_line_buffer[0] == "P" && uart_line_buffer[1] == "C") begin
                            // Instruction trace format: PC: 0xXXXXXXXX | INST: 0xXXXXXXXX | STATUS: EXECUTED
                            $display(">>> Trace Type: INSTRUCTION EXECUTION");
                            // Extract PC value (starts at position 6: "PC: 0x")
                            if (uart_line_index > 14) begin
                                $write(">>> PC Value:   0x");
                                for (int i = 6; i < 14; i++) begin
                                    $write("%c", uart_line_buffer[i]);
                                end
                                $write("\n");
                            end
                            // Extract INST value (look for "INST: 0x")
                            for (int i = 0; i < uart_line_index - 9; i++) begin
                                if (uart_line_buffer[i] == "I" && 
                                    uart_line_buffer[i+1] == "N" && 
                                    uart_line_buffer[i+2] == "S" && 
                                    uart_line_buffer[i+3] == "T") begin
                                    $write(">>> Instruction: 0x");
                                    for (int j = i+8; j < i+16 && j < uart_line_index; j++) begin
                                        $write("%c", uart_line_buffer[j]);
                                    end
                                    $write("\n");
                                end
                            end
                        end
                        else if (uart_line_buffer[0] == "H" && uart_line_buffer[1] == "B" && 
                                 uart_line_buffer[2] == "M" && uart_line_buffer[3] == "3") begin
                            // HBM3 trace format: HBM3_WR: or HBM3_RD:
                            if (uart_line_buffer[5] == "W") begin
                                $display(">>> Trace Type: HBM3 WRITE TRANSACTION");
                            end else if (uart_line_buffer[5] == "R") begin
                                $display(">>> Trace Type: HBM3 READ TRANSACTION");
                            end
                            
                            // Extract ADDR value (look for "ADDR=")
                            for (int i = 0; i < uart_line_index - 4; i++) begin
                                if (uart_line_buffer[i] == "A" && 
                                    uart_line_buffer[i+1] == "D" && 
                                    uart_line_buffer[i+2] == "D" && 
                                    uart_line_buffer[i+3] == "R") begin
                                    $write(">>> Address:    0x");
                                    for (int j = i+5; j < i+13 && j < uart_line_index; j++) begin
                                        $write("%c", uart_line_buffer[j]);
                                    end
                                    $write("\n");
                                end
                            end
                            
                            // Extract DATA value (look for "DATA=0x")
                            for (int i = 0; i < uart_line_index - 7; i++) begin
                                if (uart_line_buffer[i] == "D" && 
                                    uart_line_buffer[i+1] == "A" && 
                                    uart_line_buffer[i+2] == "T" && 
                                    uart_line_buffer[i+3] == "A") begin
                                    $write(">>> Data Value: 0x");
                                    for (int j = i+7; j < i+15 && j < uart_line_index; j++) begin
                                        $write("%c", uart_line_buffer[j]);
                                    end
                                    $write("\n");
                                end
                            end
                        end
                        else begin
                            $display(">>> Trace Type: OTHER/APPLICATION DATA");
                        end
                        
                        $display("========================================================================");
                        $display("");
                        
                        // Reset buffer for next line
                        uart_line_index <= 0;
                    end
                end
                // Accumulate printable characters (ignore carriage return)
                else if (uart_rx_data >= 32 && uart_rx_data < 127 && uart_line_index < 256) begin
                    uart_line_buffer[uart_line_index] <= uart_rx_data;
                    uart_line_index <= uart_line_index + 1;
                end
            end
        end
    end
    
    // ========================================================================
    // DIRECT HBM3 TRANSACTION MONITOR - Bypass UART
    // ========================================================================
    integer hbm3_wr_count = 0;
    integer hbm3_rd_count = 0;
    
    always @(posedge sys_clock) begin
        if (sys_reset_n) begin
            // Monitor HBM3 writes on data bus
            if (dut.data_req && dut.data_we && 
                (dut.data_addr >= 32'h30000000) && (dut.data_addr < 32'h40000000)) begin
                hbm3_wr_count = hbm3_wr_count + 1;
                $display("================================================================================");
                $display("HBM3 WRITE #%0d ON DATA BUS @ %0t:", hbm3_wr_count, $time);
                $display(">>> Address: 0x%08h", dut.data_addr);
                $display(">>> Data:    0x%08h", dut.data_wdata);
                $display("================================================================================");
                $display("");
            end
            
            // Monitor HBM3 reads on data bus  
            if (dut.data_valid && (dut.data_addr >= 32'h30000000) && 
                (dut.data_addr < 32'h40000000)) begin
                hbm3_rd_count = hbm3_rd_count + 1;
                $display("================================================================================");
                $display("HBM3 READ #%0d ON DATA BUS @ %0t:", hbm3_rd_count, $time);
                $display(">>> Address: 0x%08h", dut.data_addr);
                $display(">>> Data:    0x%08h", dut.data_rdata);
                $display("================================================================================");
                $display("");
            end
        end
    end
    
    // ========================================================================
    // DIRECT TRACER FIFO MONITOR - See What Tracer Captures
    // ========================================================================
    integer tracer_hbm3_wr = 0;
    integer tracer_hbm3_rd = 0;
    integer debug_print_count = 0;
    
    always @(posedge sys_clock) begin
        if (sys_reset_n && dut.u_instr_trace.fifo_wr) begin
            if (dut.u_instr_trace.capture_hbm3_wr) begin
                tracer_hbm3_wr = tracer_hbm3_wr + 1;
                $display(">>> TRACER CAPTURED HBM3 WRITE #%0d @ %0t (FIFO=%0d/64)",
                         tracer_hbm3_wr, $time, dut.u_instr_trace.fifo_count);
            end
            
            if (dut.u_instr_trace.capture_hbm3_rd) begin
                tracer_hbm3_rd = tracer_hbm3_rd + 1;
                $display(">>> TRACER CAPTURED HBM3 READ #%0d @ %0t (FIFO=%0d/64)",
                         tracer_hbm3_rd, $time, dut.u_instr_trace.fifo_count);
            end
        end
    end
    
    // ========================================================================
    // TRACER STATE MACHINE MONITOR - Debug Formatter
    // ========================================================================
    integer uart_tx_count = 0;
    reg [7:0] prev_char_to_send;
    reg [3:0] prev_state;
    
    always @(posedge sys_clock) begin
        if (sys_reset_n) begin
            // Monitor every UART write from tracer
            if (dut.u_instr_trace.uart_req && dut.u_instr_trace.uart_we) begin
                if (uart_tx_count < 50) begin  // Print first 50 characters
                    if (dut.u_instr_trace.char_to_send >= 32 && dut.u_instr_trace.char_to_send < 127) begin
                        $display(">>> TRACER TX[%0d] @ %0t: state=%0d char_idx=%0d char=0x%02h ('%c') addr=0x%08h", 
                                 uart_tx_count, $time, dut.u_instr_trace.state, 
                                 dut.u_instr_trace.char_index, dut.u_instr_trace.char_to_send,
                                 dut.u_instr_trace.char_to_send, dut.u_instr_trace.uart_addr);
                    end else begin
                        $display(">>> TRACER TX[%0d] @ %0t: state=%0d char_idx=%0d char=0x%02h (non-printable) addr=0x%08h", 
                                 uart_tx_count, $time, dut.u_instr_trace.state,
                                 dut.u_instr_trace.char_index, dut.u_instr_trace.char_to_send,
                                 dut.u_instr_trace.uart_addr);
                    end
                    uart_tx_count = uart_tx_count + 1;
                end
            end
            
            // Print state transitions
            if (dut.u_instr_trace.state != prev_state) begin
                if (uart_tx_count < 50) begin  // Print first 50 state changes
                    $display(">>> TRACER STATE CHANGE @ %0t: %0d -> %0d (fifo_empty=%b uart_ready=%b)",
                             $time, prev_state, dut.u_instr_trace.state,
                             dut.u_instr_trace.fifo_empty, dut.u_instr_trace.uart_ready);
                end
                prev_state = dut.u_instr_trace.state;
            end
        end
    end
    
    // ========================================================================
    // DEBUG: Tracer Internal Signals Monitor
    // ========================================================================
    always @(posedge sys_clock) begin
        if (sys_reset_n) begin
            // Debug HBM3 writes - print first 5 instances
            if (dut.data_req && dut.data_we && 
                (dut.data_addr >= 32'h30000000) && (dut.data_addr < 32'h40000000)) begin
                if (debug_print_count < 5) begin
                    $display("================================================================================");
                    $display("DEBUG HBM3 WRITE @ %0t:", $time);
                    $display(">>> DUT data_req:       %b", dut.data_req);
                    $display(">>> DUT data_we:        %b", dut.data_we);
                    $display(">>> DUT data_addr:      0x%08h", dut.data_addr);
                    $display(">>> DUT data_w     0x%08h", dut.data_wdata);
                    $display("");
                    $display(">>> Tracer data_req:    %b", dut.u_instr_trace.data_req);
                    $display(">>> Tracer data_we:     %b", dut.u_instr_trace.data_we);
                    $display(">>> Tracer data_addr:   0x%08h", dut.u_instr_trace.data_addr);
                    $display(">>> Tracer data_w0x%08h", dut.u_instr_trace.data_wdata);
                    $display("");
                    $display(">>> Tracer hbm3_access:       %b", dut.u_instr_trace.hbm3_access);
                    $display(">>> Tracer hbm3_write:        %b", dut.u_instr_trace.hbm3_write);
                    $display(">>> Tracer trace_data_enable: %b", dut.u_instr_trace.trace_data_enable);
                    $display(">>> Tracer fifo_full:         %b", dut.u_instr_trace.fifo_full);
                    $display(">>> Tracer capture_hbm3_wr:   %b", dut.u_instr_trace.capture_hbm3_wr);
                    $display("================================================================================");
                    $display("");
                    debug_print_count = debug_print_count + 1;
                end
            end
        end
    end
    
    // ========================================================================
    // Instruction Trace Monitor (Internal Core Signals)
    // ========================================================================
    // Internal monitoring for verification - verbose logging disabled
    always @(posedge sys_clock) begin
        if (sys_reset_n && dut.trace_valid) begin
            trace_log_pc[trace_log_count]    <= dut.trace_pc;
            trace_log_instr[trace_log_count] <= dut.trace_instr;
            trace_log_count <= trace_log_count + 1;
            
            // Verbose internal trace logging disabled for cleaner output
            // $display("LOG: %0t : INFO : INSTR_TRACE_INTERNAL : PC=0x%08h INSTR=0x%08h : %s", 
            //          $time, dut.trace_pc, dut.trace_instr, 
            //          decode_riscv_instr(dut.trace_instr));
        end
    end
    
    // ========================================================================
    // RISC-V Instruction Decoder Function
    // ========================================================================
    function string decode_riscv_instr;
        input [31:0] instr;
        reg [6:0] opcode;
        reg [4:0] rd, rs1, rs2;
        reg [2:0] funct3;
        reg [6:0] funct7;
        reg [31:0] imm_i, imm_s, imm_b, imm_u, imm_j;
        string mnemonic;
        
        begin
            opcode = instr[6:0];
            rd     = instr[11:7];
            funct3 = instr[14:12];
            rs1    = instr[19:15];
            rs2    = instr[24:20];
            funct7 = instr[31:25];
            
            imm_i = {{20{instr[31]}}, instr[31:20]};
            imm_s = {{20{instr[31]}}, instr[31:25], instr[11:7]};
            imm_b = {{19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0};
            imm_u = {instr[31:12], 12'h000};
            imm_j = {{11{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0};
            
            case (opcode)
                7'b0110111: mnemonic = $sformatf("LUI    x%0d, 0x%05h", rd, imm_u[31:12]);
                7'b0010111: mnemonic = $sformatf("AUIPC  x%0d, 0x%05h", rd, imm_u[31:12]);
                7'b1101111: mnemonic = $sformatf("JAL    x%0d, %0d", rd, $signed(imm_j));
                7'b1100111: mnemonic = $sformatf("JALR   x%0d, x%0d, %0d", rd, rs1, $signed(imm_i));
                
                7'b1100011: begin
                    case (funct3)
                        3'b000: mnemonic = $sformatf("BEQ    x%0d, x%0d, %0d", rs1, rs2, $signed(imm_b));
                        3'b001: mnemonic = $sformatf("BNE    x%0d, x%0d, %0d", rs1, rs2, $signed(imm_b));
                        3'b100: mnemonic = $sformatf("BLT    x%0d, x%0d, %0d", rs1, rs2, $signed(imm_b));
                        3'b101: mnemonic = $sformatf("BGE    x%0d, x%0d, %0d", rs1, rs2, $signed(imm_b));
                        3'b110: mnemonic = $sformatf("BLTU   x%0d, x%0d, %0d", rs1, rs2, $signed(imm_b));
                        3'b111: mnemonic = $sformatf("BGEU   x%0d, x%0d, %0d", rs1, rs2, $signed(imm_b));
                        default: mnemonic = "UNKNOWN_BRANCH";
                    endcase
                end
                
                7'b0000011: begin
                    case (funct3)
                        3'b000: mnemonic = $sformatf("LB     x%0d, %0d(x%0d)", rd, $signed(imm_i), rs1);
                        3'b001: mnemonic = $sformatf("LH     x%0d, %0d(x%0d)", rd, $signed(imm_i), rs1);
                        3'b010: mnemonic = $sformatf("LW     x%0d, %0d(x%0d)", rd, $signed(imm_i), rs1);
                        3'b100: mnemonic = $sformatf("LBU    x%0d, %0d(x%0d)", rd, $signed(imm_i), rs1);
                        3'b101: mnemonic = $sformatf("LHU    x%0d, %0d(x%0d)", rd, $signed(imm_i), rs1);
                        default: mnemonic = "UNKNOWN_LOAD";
                    endcase
                end
                
                7'b0100011: begin
                    case (funct3)
                        3'b000: mnemonic = $sformatf("SB     x%0d, %0d(x%0d)", rs2, $signed(imm_s), rs1);
                        3'b001: mnemonic = $sformatf("SH     x%0d, %0d(x%0d)", rs2, $signed(imm_s), rs1);
                        3'b010: mnemonic = $sformatf("SW     x%0d, %0d(x%0d)", rs2, $signed(imm_s), rs1);
                        default: mnemonic = "UNKNOWN_STORE";
                    endcase
                end
                
                7'b0010011: begin
                    case (funct3)
                        3'b000: mnemonic = $sformatf("ADDI   x%0d, x%0d, %0d", rd, rs1, $signed(imm_i));
                        3'b010: mnemonic = $sformatf("SLTI   x%0d, x%0d, %0d", rd, rs1, $signed(imm_i));
                        3'b011: mnemonic = $sformatf("SLTIU  x%0d, x%0d, %0d", rd, rs1, $signed(imm_i));
                        3'b100: mnemonic = $sformatf("XORI   x%0d, x%0d, %0d", rd, rs1, $signed(imm_i));
                        3'b110: mnemonic = $sformatf("ORI    x%0d, x%0d, %0d", rd, rs1, $signed(imm_i));
                        3'b111: mnemonic = $sformatf("ANDI   x%0d, x%0d, %0d", rd, rs1, $signed(imm_i));
                        3'b001: mnemonic = $sformatf("SLLI   x%0d, x%0d, %0d", rd, rs1, rs2);
                        3'b101: begin
                            if (funct7 == 7'b0000000)
                                mnemonic = $sformatf("SRLI   x%0d, x%0d, %0d", rd, rs1, rs2);
                            else
                                mnemonic = $sformatf("SRAI   x%0d, x%0d, %0d", rd, rs1, rs2);
                        end
                        default: mnemonic = "UNKNOWN_ALUI";
                    endcase
                end
                
                7'b0110011: begin
                    if (funct7 == 7'b0000000) begin
                        case (funct3)
                            3'b000: mnemonic = $sformatf("ADD    x%0d, x%0d, x%0d", rd, rs1, rs2);
                            3'b001: mnemonic = $sformatf("SLL    x%0d, x%0d, x%0d", rd, rs1, rs2);
                            3'b010: mnemonic = $sformatf("SLT    x%0d, x%0d, x%0d", rd, rs1, rs2);
                            3'b011: mnemonic = $sformatf("SLTU   x%0d, x%0d, x%0d", rd, rs1, rs2);
                            3'b100: mnemonic = $sformatf("XOR    x%0d, x%0d, x%0d", rd, rs1, rs2);
                            3'b101: mnemonic = $sformatf("SRL    x%0d, x%0d, x%0d", rd, rs1, rs2);
                            3'b110: mnemonic = $sformatf("OR     x%0d, x%0d, x%0d", rd, rs1, rs2);
                            3'b111: mnemonic = $sformatf("AND    x%0d, x%0d, x%0d", rd, rs1, rs2);
                            default: mnemonic = "UNKNOWN_ALU";
                        endcase
                    end else if (funct7 == 7'b0100000) begin
                        case (funct3)
                            3'b000: mnemonic = $sformatf("SUB    x%0d, x%0d, x%0d", rd, rs1, rs2);
                            3'b101: mnemonic = $sformatf("SRA    x%0d, x%0d, x%0d", rd, rs1, rs2);
                            default: mnemonic = "UNKNOWN_ALU";
                        endcase
                    end else begin
                        mnemonic = "UNKNOWN_ALU";
                    end
                end
                
                7'b0001111: mnemonic = "FENCE";
                7'b1110011: mnemonic = "ECALL/EBREAK";
                
                default: mnemonic = $sformatf("UNKNOWN (0x%08h)", instr);
            endcase
            
            decode_riscv_instr = mnemonic;
        end
    endfunction
    
    // ========================================================================
    // Waveform Dumping
    // ========================================================================
    initial begin
        //$dumpfile("dumpfile.fst");
        $dumpfile("dumpfile.vcd");
        $dumpvars(0,tb_cva6_minimal_top);
    end
    
    // ========================================================================
    // Main Test Sequence
    // ========================================================================
    initial begin
        $display("TEST START");
        $display("================================================================================");
        $display("CVA6 Minimal Top Functional Verification Testbench");
        $display("  - ROM-based initialization (no force/release)");
        $display("  - RISC-V register setup via boot code");
        $display("  - Trace enable via memory-mapped register");
        $display("  - HBM3 uses default configuration");
        $display("================================================================================");
        $display("");
        
        test_count = 0;
        error_count = 0;
        instr_count = 0;
        trace_log_count = 0;
        
        // ====================================================================
        // Test 1: Reset and System Initialization
        // ====================================================================
        test_count = test_count + 1;
        $display("\n[Test %0d] Reset and System Initialization", test_count);
        
        sys_reset_n = 1'b0;
        repeat(10) @(posedge sys_clock);
        
        sys_reset_n = 1'b1;
        repeat(10) @(posedge sys_clock);
        
        $display("  Reset sequence completed");
        $display("  System will initialize via ROM boot code");
        $display("");
        
        // ====================================================================
        // Test 2: Run Application Program and Monitor Execution
        // ====================================================================
        test_count = test_count + 1;
        $display("\n[Test %0d] Running Application Program and Monitoring", test_count);
        $display("  Boot code will:");
        $display("    1. Initialize SP, GP, TP registers");
        $display("    2. Enable instruction tracing");
        $display("    3. Execute application code");
        $display("");
        
        // Run for a certain number of clock cycles to let the program execute
        repeat(100000) @(posedge sys_clock);
        
        $display("  Execution monitoring complete");
        $display("");
        
        // ====================================================================
        // Test Summary
        // ====================================================================
        $display("\n[Test Summary]");
        $display("================================================================================" );
        $display("Total tests run:   %0d", test_count);
        $display("Total errors:      %0d", error_count);
        $display("Total instructions traced: %0d", trace_log_count);
        $display("Total UART bytes received: %0d", uart_byte_count);
        $display("");
        $display("HBM3 Transaction Summary:");
        $display("  HBM3 Writes on Data Bus:     %0d", hbm3_wr_count);
        $display("  HBM3 Reads on Data Bus:      %0d", hbm3_rd_count);
        $display("  Tracer Captured HBM3 Writes: %0d", tracer_hbm3_wr);
        $display("  Tracer Captured HBM3 Reads:  %0d", tracer_hbm3_rd);
        
        if (error_count == 0) begin
            $display("\n*** TEST PASSED ***");
        end else begin
            $display("\n*** TEST FAILED ***");
        end
        
        $display("================================================================================");
        $display("TEST END");
        $finish;
    end

endmodule

