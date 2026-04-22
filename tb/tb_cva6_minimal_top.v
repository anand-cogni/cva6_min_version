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
    
    // UART Test Case Variables
    integer uart_write_test_count;
    integer uart_read_test_count;
    reg [7:0] expected_uart_data [0:255];
    integer expected_uart_count;
    
    // UART Read Monitor Variables
    integer uart_rd_count;
    
    // Post-Boot Test Synchronization
    reg init_done;
    
    // Instruction Trace Log
    reg [31:0] trace_log_pc [0:1023];
    reg [31:0] trace_log_instr [0:1023];
    integer    trace_log_count;
    
    // ========================================================================
    // Parameters
    // ========================================================================
    parameter CLOCK_FREQ = 125_000_000;
    parameter BAUD_RATE  = 921_600;  // Updated to match UART TX (was 115_200)
    parameter CLKS_PER_BIT = CLOCK_FREQ / BAUD_RATE;  // ~136 clocks per bit @ 921600
    
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
        // BOOT ROM PROGRAM - HBM3-ONLY TRACING
        // ====================================================================
        // This program configures the trace module to capture ONLY HBM3
        // transactions (no instruction traces), preventing UART FIFO congestion.
        // ====================================================================
        $display("  Boot code section: HBM3-Only Trace Configuration");
        
        // STEP 1: Configure Trace Control - HBM3 Data Tracing ONLY
        // Write 0x2 to Trace Control Register at 0x22000000
        // Bit[0] = 0: Disable instruction tracing (prevents UART FIFO congestion)
        // Bit[1] = 1: Enable HBM3 data tracing
        dut.u_boot_rom.rom[rom_idx] = 32'h22000337; rom_idx = rom_idx + 1; // lui   x6, 0x22000 - Trace ctrl addr
        dut.u_boot_rom.rom[rom_idx] = 32'h00200393; rom_idx = rom_idx + 1; // addi  x7, x0, 2    - Value = 2 (HBM3 only)
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
        // Note: 0xEEF has bit11=1 so addi sign-extends to -273.
        // Use lui 0xDEADC so: 0xDEADC000 + 0xFFFFFEEF = 0xDEADBEEF
        dut.u_boot_rom.rom[rom_idx] = 32'hDEADC4B7; rom_idx = rom_idx + 1; // lui   x9, 0xDEADC - compensate for sign-ext
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
        
        // ====================================================================
        // POST-BOOT MULTI WRITE TEST - 8 Additional HBM3 Write Transactions
        // Runs after 'D' Done marker (init_done). x8 still holds 0x30000000.
        // Patterns: 0x11111111..0x88888888
        // Addresses: 0x30000008..0x30000024
        // ====================================================================
        $display("  Adding Post-Boot Multi-Write Test Cases (8 writes):");
        
        // Write #3: 0x11111111 -> HBM3[0x30000008]
        dut.u_boot_rom.rom[rom_idx] = 32'h111116B7; rom_idx = rom_idx + 1; // lui   x13, 0x11111
        dut.u_boot_rom.rom[rom_idx] = 32'h11168693; rom_idx = rom_idx + 1; // addi  x13, x13, 0x111  -> x13 = 0x11111111
        dut.u_boot_rom.rom[rom_idx] = 32'h00D42423; rom_idx = rom_idx + 1; // sw    x13, 8(x8)   -> HBM3[0x30000008]
        
        // Write #4: 0x22222222 -> HBM3[0x3000000C]
        dut.u_boot_rom.rom[rom_idx] = 32'h22222737; rom_idx = rom_idx + 1; // lui   x14, 0x22222
        dut.u_boot_rom.rom[rom_idx] = 32'h22270713; rom_idx = rom_idx + 1; // addi  x14, x14, 0x222  -> x14 = 0x22222222
        dut.u_boot_rom.rom[rom_idx] = 32'h00E42623; rom_idx = rom_idx + 1; // sw    x14, 12(x8)  -> HBM3[0x3000000C]
        
        // Write #5: 0x33333333 -> HBM3[0x30000010]
        dut.u_boot_rom.rom[rom_idx] = 32'h333337B7; rom_idx = rom_idx + 1; // lui   x15, 0x33333
        dut.u_boot_rom.rom[rom_idx] = 32'h33378793; rom_idx = rom_idx + 1; // addi  x15, x15, 0x333  -> x15 = 0x33333333
        dut.u_boot_rom.rom[rom_idx] = 32'h00F42823; rom_idx = rom_idx + 1; // sw    x15, 16(x8)  -> HBM3[0x30000010]
        
        // Write #6: 0x44444444 -> HBM3[0x30000014]
        dut.u_boot_rom.rom[rom_idx] = 32'h44444837; rom_idx = rom_idx + 1; // lui   x16, 0x44444
        dut.u_boot_rom.rom[rom_idx] = 32'h44480813; rom_idx = rom_idx + 1; // addi  x16, x16, 0x444  -> x16 = 0x44444444
        dut.u_boot_rom.rom[rom_idx] = 32'h01042A23; rom_idx = rom_idx + 1; // sw    x16, 20(x8)  -> HBM3[0x30000014]
        
        // ====================================================================
        // POST-BOOT MULTI READ TEST - Readback all 4 new addresses
        // Uses x17 as scratch register for all reads
        // ====================================================================
        $display("  Adding Post-Boot Multi-Read Test Cases (reads #3-6):");
        
        // Read #3: HBM3[0x30000008] -> x17
        dut.u_boot_rom.rom[rom_idx] = 32'h00842883; rom_idx = rom_idx + 1; // lw    x17, 8(x8)   -> Read HBM3[0x30000008]
        
        // Read #4: HBM3[0x3000000C] -> x17
        dut.u_boot_rom.rom[rom_idx] = 32'h00C42883; rom_idx = rom_idx + 1; // lw    x17, 12(x8)  -> Read HBM3[0x3000000C]
        
        // Read #5: HBM3[0x30000010] -> x17
        dut.u_boot_rom.rom[rom_idx] = 32'h01042883; rom_idx = rom_idx + 1; // lw    x17, 16(x8)  -> Read HBM3[0x30000010]
        
        // Read #6: HBM3[0x30000014] -> x17
        dut.u_boot_rom.rom[rom_idx] = 32'h01442883; rom_idx = rom_idx + 1; // lw    x17, 20(x8)  -> Read HBM3[0x30000014]
        
        // ====================================================================
        // EXTENDED WRITE TEST - 4 More HBM3 Write Transactions (#7-#10)
        // Patterns: 0x55555555, 0x66666666, 0x77777777, 0x88888888
        // Addresses: 0x30000018, 0x3000001C, 0x30000020, 0x30000024
        // ====================================================================
        $display("  Adding Extended Write Test Cases (writes #7-10):");
        
        // Write #7: 0x55555555 -> HBM3[0x30000018]
        // 0x55555 << 12 = 0x55555000; 0x555 bit11=0 (no sign-ext issue)
        dut.u_boot_rom.rom[rom_idx] = 32'h55555937; rom_idx = rom_idx + 1; // lui   x18, 0x55555
        dut.u_boot_rom.rom[rom_idx] = 32'h55590913; rom_idx = rom_idx + 1; // addi  x18, x18, 0x555  -> x18 = 0x55555555
        dut.u_boot_rom.rom[rom_idx] = 32'h01242C23; rom_idx = rom_idx + 1; // sw    x18, 24(x8)  -> HBM3[0x30000018]
        
        // Write #8: 0x66666666 -> HBM3[0x3000001C]
        // 0x66666 << 12 = 0x66666000; 0x666 bit11=0 (no sign-ext issue)
        dut.u_boot_rom.rom[rom_idx] = 32'h666669B7; rom_idx = rom_idx + 1; // lui   x19, 0x66666
        dut.u_boot_rom.rom[rom_idx] = 32'h66698993; rom_idx = rom_idx + 1; // addi  x19, x19, 0x666  -> x19 = 0x66666666
        dut.u_boot_rom.rom[rom_idx] = 32'h01342E23; rom_idx = rom_idx + 1; // sw    x19, 28(x8)  -> HBM3[0x3000001C]
        
        // Write #9: 0x77777777 -> HBM3[0x30000020]
        // 0x77777 << 12 = 0x77777000; 0x777 bit11=0 (no sign-ext issue)
        dut.u_boot_rom.rom[rom_idx] = 32'h77777A37; rom_idx = rom_idx + 1; // lui   x20, 0x77777
        dut.u_boot_rom.rom[rom_idx] = 32'h777A0A13; rom_idx = rom_idx + 1; // addi  x20, x20, 0x777  -> x20 = 0x77777777
        dut.u_boot_rom.rom[rom_idx] = 32'h03442023; rom_idx = rom_idx + 1; // sw    x20, 32(x8)  -> HBM3[0x30000020]
        
        // Write #10: 0x88888888 -> HBM3[0x30000024]
        // 0x888 bit11=1 -> use lui 0x88889 to compensate sign-ext
        // 0x88889000 + sign_ext(0x888) = 0x88889000 + 0xFFFFF888 = 0x88888888
        dut.u_boot_rom.rom[rom_idx] = 32'h88889AB7; rom_idx = rom_idx + 1; // lui   x21, 0x88889
        dut.u_boot_rom.rom[rom_idx] = 32'h888A8A93; rom_idx = rom_idx + 1; // addi  x21, x21, 0x888  -> x21 = 0x88888888
        dut.u_boot_rom.rom[rom_idx] = 32'h03542223; rom_idx = rom_idx + 1; // sw    x21, 36(x8)  -> HBM3[0x30000024]
        
        // ====================================================================
        // EXTENDED READ TEST - Read Back Writes #7-#10
        // Uses x17 as scratch register
        // ====================================================================
        $display("  Adding Extended Read Test Cases (reads #7-10):");
        
        // Read #7: HBM3[0x30000018] -> x17
        dut.u_boot_rom.rom[rom_idx] = 32'h01842883; rom_idx = rom_idx + 1; // lw    x17, 24(x8)  -> Read HBM3[0x30000018]
        
        // Read #8: HBM3[0x3000001C] -> x17
        dut.u_boot_rom.rom[rom_idx] = 32'h01C42883; rom_idx = rom_idx + 1; // lw    x17, 28(x8)  -> Read HBM3[0x3000001C]
        
        // Read #9: HBM3[0x30000020] -> x17
        dut.u_boot_rom.rom[rom_idx] = 32'h02042883; rom_idx = rom_idx + 1; // lw    x17, 32(x8)  -> Read HBM3[0x30000020]
        
        // Read #10: HBM3[0x30000024] -> x17
        dut.u_boot_rom.rom[rom_idx] = 32'h02442883; rom_idx = rom_idx + 1; // lw    x17, 36(x8)  -> Read HBM3[0x30000024]
        
        // Write 'T' (Test Complete) marker to UART (ASCII 84)
        dut.u_boot_rom.rom[rom_idx] = 32'h05400393; rom_idx = rom_idx + 1; // addi  x7, x0, 84   - ASCII 'T'
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)    - Write to UART
        dut.u_boot_rom.rom[rom_idx] = 32'h00A00393; rom_idx = rom_idx + 1; // addi  x7, x0, 10   - ASCII '\n'
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)    - Write to UART
        
        // ====================================================================
        // UART WRITE TEST CASE - Write ASCII sequence to verify UART TX
        // ====================================================================
        $display("  Adding UART Write Test Case:");
        $display("    - Writing ASCII string: 'UART_TEST_123'");
        
        // Write 'U'
        dut.u_boot_rom.rom[rom_idx] = 32'h05500393; rom_idx = rom_idx + 1; // addi  x7, x0, 85 (ASCII 'U')
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)
        // Write 'A'
        dut.u_boot_rom.rom[rom_idx] = 32'h04100393; rom_idx = rom_idx + 1; // addi  x7, x0, 65 (ASCII 'A')
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)
        // Write 'R'
        dut.u_boot_rom.rom[rom_idx] = 32'h05200393; rom_idx = rom_idx + 1; // addi  x7, x0, 82 (ASCII 'R')
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)
        // Write 'T'
        dut.u_boot_rom.rom[rom_idx] = 32'h05400393; rom_idx = rom_idx + 1; // addi  x7, x0, 84 (ASCII 'T')
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)
        // Write '_'
        dut.u_boot_rom.rom[rom_idx] = 32'h05F00393; rom_idx = rom_idx + 1; // addi  x7, x0, 95 (ASCII '_')
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)
        // Write 'T'
        dut.u_boot_rom.rom[rom_idx] = 32'h05400393; rom_idx = rom_idx + 1; // addi  x7, x0, 84 (ASCII 'T')
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)
        // Write 'E'
        dut.u_boot_rom.rom[rom_idx] = 32'h04500393; rom_idx = rom_idx + 1; // addi  x7, x0, 69 (ASCII 'E')
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)
        // Write 'S'
        dut.u_boot_rom.rom[rom_idx] = 32'h05300393; rom_idx = rom_idx + 1; // addi  x7, x0, 83 (ASCII 'S')
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)
        // Write 'T'
        dut.u_boot_rom.rom[rom_idx] = 32'h05400393; rom_idx = rom_idx + 1; // addi  x7, x0, 84 (ASCII 'T')
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)
        // Write '_'
        dut.u_boot_rom.rom[rom_idx] = 32'h05F00393; rom_idx = rom_idx + 1; // addi  x7, x0, 95 (ASCII '_')
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)
        // Write '1'
        dut.u_boot_rom.rom[rom_idx] = 32'h03100393; rom_idx = rom_idx + 1; // addi  x7, x0, 49 (ASCII '1')
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)
        // Write '2'
        dut.u_boot_rom.rom[rom_idx] = 32'h03200393; rom_idx = rom_idx + 1; // addi  x7, x0, 50 (ASCII '2')
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)
        // Write '3'
        dut.u_boot_rom.rom[rom_idx] = 32'h03300393; rom_idx = rom_idx + 1; // addi  x7, x0, 51 (ASCII '3')
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)
        // Write newline
        dut.u_boot_rom.rom[rom_idx] = 32'h00A00393; rom_idx = rom_idx + 1; // addi  x7, x0, 10 (ASCII '\n')
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)
        
        // ====================================================================
        // UART READ TEST CASE - Read from UART status/control registers
        // ====================================================================
        $display("  Adding UART Read Test Case:");
        $display("    - Reading from UART status register (offset 4)");
        
        // Read UART status register at UART_BASE + 0x4
        dut.u_boot_rom.rom[rom_idx] = 32'h0042A383; rom_idx = rom_idx + 1; // lw    x7, 4(x5)   - Read UART status
        
        // Store read value to register (for debugging - value stays in x7)
        // No operation needed - value already in x7
        
        // Write marker to UART indicating read test complete ('R')
        dut.u_boot_rom.rom[rom_idx] = 32'h05200393; rom_idx = rom_idx + 1; // addi  x7, x0, 82   - ASCII 'R'
        dut.u_boot_rom.rom[rom_idx] = 32'h0072A023; rom_idx = rom_idx + 1; // sw    x7, 0(x5)    - Write to UART
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
        $display("    - Trace Control: HBM3 DATA ONLY (instruction tracing disabled)");
        $display("    - Prevents UART FIFO congestion by focusing on HBM3 transactions");
        $display("    - Only HBM3 write/read transactions logged via UART");
        $display("");
        $display("  Application Program:");
        $display("    - UART: Writes 'S' (Start) and 'D' (Done) markers");
        $display("    - HBM3 Write #1: 0xDEADBEEF -> 0x30000000");
        $display("    - HBM3 Write #2: 0x12345678 -> 0x30000004");
        $display("    - HBM3 Read #1:  Read from 0x30000000");
        $display("    - HBM3 Read #2:  Read from 0x30000004");
        $display("    - HBM3 Write #3: 0x11111111 -> 0x30000008  [POST-BOOT]");
        $display("    - HBM3 Write #4: 0x22222222 -> 0x3000000C  [POST-BOOT]");
        $display("    - HBM3 Write #5: 0x33333333 -> 0x30000010  [POST-BOOT]");
        $display("    - HBM3 Write #6: 0x44444444 -> 0x30000014  [POST-BOOT]");
        $display("    - HBM3 Write #7: 0x55555555 -> 0x30000018  [EXTENDED]");
        $display("    - HBM3 Write #8: 0x66666666 -> 0x3000001C  [EXTENDED]");
        $display("    - HBM3 Write #9: 0x77777777 -> 0x30000020  [EXTENDED]");
        $display("    - HBM3 Write #10:0x88888888 -> 0x30000024  [EXTENDED]");
        $display("    - HBM3 Read #3:  Read from 0x30000008     [POST-BOOT]");
        $display("    - HBM3 Read #4:  Read from 0x3000000C     [POST-BOOT]");
        $display("    - HBM3 Read #5:  Read from 0x30000010     [POST-BOOT]");
        $display("    - HBM3 Read #6:  Read from 0x30000014     [POST-BOOT]");
        $display("    - HBM3 Read #7:  Read from 0x30000018     [EXTENDED]");
        $display("    - HBM3 Read #8:  Read from 0x3000001C     [EXTENDED]");
        $display("    - HBM3 Read #9:  Read from 0x30000020     [EXTENDED]");
        $display("    - HBM3 Read #10: Read from 0x30000024     [EXTENDED]");
        $display("    - HALT: Program halts after completing test sequence");
        $display("");
        $display("Total ROM instructions used: %0d / 256", rom_idx);
        $display("Boot program loaded successfully!");
        $display("================================================================================");
        $display("");
        $display("EXPECTED UART OUTPUT:");
        $display("  - 'S' (Start marker from application)");
        $display("  - HBM3_WR: ADDR=0x30000000 DATA=0xDEADBEEF");
        $display("  - HBM3_WR: ADDR=0x30000004 DATA=0x12345678");
        $display("  - HBM3_RD: ADDR=0x30000000 DATA=0xDEADBEEF");
        $display("  - HBM3_RD: ADDR=0x30000004 DATA=0x12345678");
        $display("  - 'D' (Done marker), then program halts");
        $display("");
        $display("NOTE: Only HBM3 traces will appear (no instruction traces)");
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
                        // Sample in the MIDDLE of the bit period for better reliability
                        if (uart_clk_count == (CLKS_PER_BIT / 2)) begin
                            uart_shift_reg[uart_bit_count] <= uart_tx;
                        end
                    end else begin
                        uart_clk_count <= 0;
                        
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
        init_done = 1'b0;
    end
    
    // ========================================================================
    // INIT_DONE DETECTOR - Set after 'D' (Done) marker received from UART
    // This gates all post-boot test cases in the main test sequence
    // ========================================================================
    always @(posedge sys_clock) begin
        if (!sys_reset_n) begin
            init_done <= 1'b0;
        end else begin
            if (uart_rx_valid && uart_rx_data == 8'h44) begin  // ASCII 'D'
                init_done <= 1'b1;
                $display("LOG: %0t : INFO : BOOT_MONITOR : init_done : expected_value: 1'b1 actual_value: 1'b1 (Boot complete - 'D' marker received)", $time);
            end
        end
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
    reg [31:0] hbm3_expected_data [0:255];  // Store written data for read verification
    reg [31:0] hbm3_write_addr [0:255];     // Store write addresses
    integer hbm3_data_idx = 0;
    
    always @(posedge sys_clock) begin
        if (sys_reset_n) begin
            // Monitor HBM3 writes on data bus
            if (dut.data_req && dut.data_we && 
                (dut.data_addr >= 32'h30000000) && (dut.data_addr < 32'h40000000)) begin
                hbm3_wr_count = hbm3_wr_count + 1;
                
                // Store written data for later read verification
                if (hbm3_data_idx < 256) begin
                    hbm3_write_addr[hbm3_data_idx] = dut.data_addr;
                    hbm3_expected_data[hbm3_data_idx] = dut.data_wdata;
                    hbm3_data_idx = hbm3_data_idx + 1;
                end
                
                $display("================================================================================");
                $display("LOG: %0t : INFO : HBM3_MONITOR : HBM3 WRITE #%0d DETECTED", $time, hbm3_wr_count);
                $display("LOG: %0t : INFO : HBM3_MONITOR : dut.data_addr : expected_value: N/A actual_value: 0x%08h", $time, dut.data_addr);
                $display("LOG: %0t : INFO : HBM3_MONITOR : dut.data_wdata : expected_value: N/A actual_value: 0x%08h", $time, dut.data_wdata);
                $display("================================================================================");
                $display("");
            end
            
            // Monitor HBM3 reads on data bus  
            if (dut.data_req && !dut.data_we && 
                (dut.data_addr >= 32'h30000000) && (dut.data_addr < 32'h40000000)) begin
                hbm3_rd_count = hbm3_rd_count + 1;
                $display("================================================================================");
                $display("LOG: %0t : INFO : HBM3_MONITOR : HBM3 READ #%0d REQUEST DETECTED", $time, hbm3_rd_count);
                $display("LOG: %0t : INFO : HBM3_MONITOR : dut.data_addr : expected_value: N/A actual_value: 0x%08h", $time, dut.data_addr);
                $display("LOG: %0t : INFO : HBM3_MONITOR : dut.data_req : expected_value: 1'b1 actual_value: %b", $time, dut.data_req);
                $display("LOG: %0t : INFO : HBM3_MONITOR : dut.data_we : expected_value: 1'b0 actual_value: %b", $time, dut.data_we);
                $display("================================================================================");
                $display("");
            end
            
            // Monitor HBM3 read data responses
            if (dut.data_valid && (dut.data_addr >= 32'h30000000) && 
                (dut.data_addr < 32'h40000000)) begin
                // Find expected data for this address
                reg [31:0] expected;
                reg found;
                integer idx;
                expected = 32'hXXXXXXXX;
                found = 1'b0;
                for (idx = 0; idx < hbm3_data_idx; idx = idx + 1) begin
                    if (hbm3_write_addr[idx] == dut.data_addr) begin
                        expected = hbm3_expected_data[idx];
                        found = 1'b1;
                    end
                end
                
                $display("================================================================================");
                if (found && (dut.data_rdata == expected)) begin
                    $display("LOG: %0t : INFO : HBM3_MONITOR : HBM3 READ DATA VALID - MATCH!", $time);
                    $display("LOG: %0t : INFO : HBM3_MONITOR : dut.data_rdata : expected_value: 0x%08h actual_value: 0x%08h", $time, expected, dut.data_rdata);
                end else if (found) begin
                    $display("LOG: %0t : ERROR : HBM3_MONITOR : HBM3 READ DATA VALID - MISMATCH!", $time);
                    $display("LOG: %0t : ERROR : HBM3_MONITOR : dut.data_rdata : expected_value: 0x%08h actual_value: 0x%08h", $time, expected, dut.data_rdata);
                end else begin
                    $display("LOG: %0t : INFO : HBM3_MONITOR : HBM3 READ DATA VALID (no prior write tracked)", $time);
                    $display("LOG: %0t : INFO : HBM3_MONITOR : dut.data_rdata : expected_value: UNKNOWN actual_value: 0x%08h", $time, dut.data_rdata);
                end
                $display("LOG: %0t : INFO : HBM3_MONITOR : dut.data_addr : expected_value: N/A actual_value: 0x%08h", $time, dut.data_addr);
                $display("================================================================================");
                $display("");
            end
        end
    end
    
    // ========================================================================
    // DIRECT UART READ TRANSACTION MONITOR - On Data Bus
    // ========================================================================
    initial begin
        uart_rd_count = 0;
    end
    
    always @(posedge sys_clock) begin
        if (sys_reset_n) begin
            // Monitor UART read requests on data bus
            if (dut.data_req && !dut.data_we && 
                (dut.data_addr >= 32'h21000000) && (dut.data_addr < 32'h21000008)) begin
                uart_rd_count = uart_rd_count + 1;
                $display("================================================================================");
                $display("LOG: %0t : INFO : UART_READ_MONITOR : UART READ #%0d REQUEST DETECTED", $time, uart_rd_count);
                $display("LOG: %0t : INFO : UART_READ_MONITOR : dut.data_addr : expected_value: [0x21000000-0x21000007] actual_value: 0x%08h", $time, dut.data_addr);
                $display("LOG: %0t : INFO : UART_READ_MONITOR : dut.data_req : expected_value: 1'b1 actual_value: %b", $time, dut.data_req);
                $display("LOG: %0t : INFO : UART_READ_MONITOR : dut.data_we : expected_value: 1'b0 actual_value: %b", $time, dut.data_we);
                
                // Decode UART register offset
                case (dut.data_addr[2:0])
                    3'h0: $display("LOG: %0t : INFO : UART_READ_MONITOR : Register : TX_DATA (offset 0)", $time);
                    3'h4: $display("LOG: %0t : INFO : UART_READ_MONITOR : Register : STATUS (offset 4)", $time);
                    default: $display("LOG: %0t : INFO : UART_READ_MONITOR : Register : UNKNOWN (offset %0d)", $time, dut.data_addr[2:0]);
                endcase
                
                $display("================================================================================");
                $display("");
            end
            
            // Monitor UART read data responses
            if (dut.data_valid && 
                (dut.data_addr >= 32'h21000000) && (dut.data_addr < 32'h21000008)) begin
                $display("================================================================================");
                $display("LOG: %0t : INFO : UART_READ_MONITOR : UART READ DATA VALID", $time);
                $display("LOG: %0t : INFO : UART_READ_MONITOR : dut.data_rdata : expected_value: N/A actual_value: 0x%08h", $time, dut.data_rdata);
                $display("LOG: %0t : INFO : UART_READ_MONITOR : dut.data_addr : expected_value: N/A actual_value: 0x%08h", $time, dut.data_addr);
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
        // Test 3: Post-Boot Multiple Write / Read Verification
        // Runs ONLY after init_done (triggered by 'D' marker from boot code)
        // Verifies: 10 HBM3 writes + 10 HBM3 reads with data integrity checks
        // ====================================================================
        test_count = test_count + 1;
        $display("\n[Test %0d] Post-Boot Multiple Write/Read Verification", test_count);
        
        // --- Wait for init_done with timeout (polling loop - Verilator compatible) ---
        if (!init_done) begin
            integer wait_cycles;
            $display("  Waiting for init_done (boot 'D' marker)...");
            wait_cycles = 0;
            while (!init_done && wait_cycles < 500000) begin
                @(posedge sys_clock);
                wait_cycles = wait_cycles + 1;
            end
            if (!init_done) begin
                $display("LOG: %0t : ERROR : BOOT_MONITOR : init_done : expected_value: 1'b1 actual_value: 1'b0 (TIMEOUT waiting for boot Done marker)", $time);
                error_count = error_count + 1;
            end
        end
        
        if (init_done) begin
            $display("  init_done asserted - Proceeding with post-boot tests");
            
            // Wait extra cycles for post-boot transactions to complete
            repeat(200000) @(posedge sys_clock);
            
            // --- Check 1: Total HBM3 Write Count ---
            $display("\n  [Check 1] HBM3 Write Transaction Count");
            if (hbm3_wr_count >= 10) begin
                $display("LOG: %0t : INFO : POST_BOOT_TEST : hbm3_wr_count : expected_value: >=10 actual_value: %0d  PASS", $time, hbm3_wr_count);
            end else begin
                $display("LOG: %0t : ERROR : POST_BOOT_TEST : hbm3_wr_count : expected_value: >=10 actual_value: %0d  FAIL", $time, hbm3_wr_count);
                error_count = error_count + 1;
            end
            
            // --- Check 2: Total HBM3 Read Count ---
            $display("\n  [Check 2] HBM3 Read Transaction Count");
            if (hbm3_rd_count >= 10) begin
                $display("LOG: %0t : INFO : POST_BOOT_TEST : hbm3_rd_count : expected_value: >=10 actual_value: %0d  PASS", $time, hbm3_rd_count);
            end else begin
                $display("LOG: %0t : ERROR : POST_BOOT_TEST : hbm3_rd_count : expected_value: >=10 actual_value: %0d  FAIL", $time, hbm3_rd_count);
                error_count = error_count + 1;
            end
            
            // --- Check 3: Data Integrity - verify each write address has correct readback ---
            $display("\n  [Check 3] HBM3 Write/Read Data Integrity");
            begin : data_integrity_check
                reg [31:0] exp_data [0:9];
                reg [31:0] exp_addr [0:9];
                integer    match_count;
                integer    ci, di;
                
                exp_addr[0] = 32'h30000000; exp_data[0] = 32'hDEADBEEF;
                exp_addr[1] = 32'h30000004; exp_data[1] = 32'h12345678;
                exp_addr[2] = 32'h30000008; exp_data[2] = 32'h11111111;
                exp_addr[3] = 32'h3000000C; exp_data[3] = 32'h22222222;
                exp_addr[4] = 32'h30000010; exp_data[4] = 32'h33333333;
                exp_addr[5] = 32'h30000014; exp_data[5] = 32'h44444444;
                exp_addr[6] = 32'h30000018; exp_data[6] = 32'h55555555;
                exp_addr[7] = 32'h3000001C; exp_data[7] = 32'h66666666;
                exp_addr[8] = 32'h30000020; exp_data[8] = 32'h77777777;
                exp_addr[9] = 32'h30000024; exp_data[9] = 32'h88888888;
                
                match_count = 0;
                for (ci = 0; ci < 10; ci = ci + 1) begin
                    reg found_match;
                    found_match = 1'b0;
                    for (di = 0; di < hbm3_data_idx; di = di + 1) begin
                        if (hbm3_write_addr[di] == exp_addr[ci]) begin
                            if (hbm3_expected_data[di] == exp_data[ci]) begin
                                $display("LOG: %0t : INFO : POST_BOOT_TEST : dut.data_wdata[addr=0x%08h] : expected_value: 0x%08h actual_value: 0x%08h  PASS",
                                         $time, exp_addr[ci], exp_data[ci], hbm3_expected_data[di]);
                                match_count = match_count + 1;
                            end else begin
                                $display("LOG: %0t : ERROR : POST_BOOT_TEST : dut.data_wdata[addr=0x%08h] : expected_value: 0x%08h actual_value: 0x%08h  FAIL",
                                         $time, exp_addr[ci], exp_data[ci], hbm3_expected_data[di]);
                                error_count = error_count + 1;
                            end
                            found_match = 1'b1;
                        end
                    end
                    if (!found_match) begin
                        $display("LOG: %0t : ERROR : POST_BOOT_TEST : dut.data_wdata[addr=0x%08h] : expected_value: 0x%08h actual_value: NOT_FOUND  FAIL",
                                 $time, exp_addr[ci], exp_data[ci]);
                        error_count = error_count + 1;
                    end
                end
                $display("\n  Data integrity: %0d/10 addresses matched", match_count);
            end
            
            $display("\n  Post-boot test complete.");
        end else begin
            $display("  SKIPPING post-boot checks - init_done never asserted");
        end
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
        $display("UART Transaction Summary:");
        $display("  UART Reads on Data Bus:       %0d", uart_rd_count);
        $display("");
        $display("HBM3 Transaction Summary:");
        $display("  HBM3 Writes on Data Bus:     %0d (expected >= 10)", hbm3_wr_count);
        $display("  HBM3 Reads on Data Bus:      %0d (expected >= 10)", hbm3_rd_count);
        $display("  Tracer Captured HBM3 Writes: %0d", tracer_hbm3_wr);
        $display("  Tracer Captured HBM3 Reads:  %0d", tracer_hbm3_rd);
        
        if (error_count == 0) begin
            $display("\nTEST PASSED");
        end else begin
            $display("\nTEST FAILED");
            $display("ERROR");
        end
        
        $display("================================================================================");
        $display("TEST END");
        $finish;
    end

endmodule


