// ============================================================================
// CVA6 Minimal Boot System for PYNQ Z2 - Verilog Version
// ============================================================================
// Description:
//   Ultra-minimal system for PYNQ Z2 board.
//   Test mode: Blinks LED using counter (no CVA6 needed)
//   CVA6 mode: Real RISC-V processor (requires CVA6 sources)
//
//   Memory Map:
//   0x00000000 - 0x000003FF : Boot ROM (1KB) - Contains LED blink program
//   0x10000000 - 0x10000FFF : Data RAM (4KB) - For stack and data
//   0x20000000              : LED Register (1 bit)
//
// ============================================================================

module cva6_minimal_top (
    // Clock and Reset
    input  wire         sys_clock,      // 125 MHz system clock from PYNQ Z2
    input  wire         sys_reset_n,    // Active-low reset button
    
    // LED Output
    output wire [3:0]   led             // PYNQ Z2 LEDs (we'll use LED[0])
);

    // ========================================================================
    // Parameters
    // ========================================================================
    parameter BOOT_ROM_BASE  = 32'h0000_0000;
    parameter BOOT_ROM_SIZE  = 32'h0000_0400;  // 1KB
    parameter DATA_RAM_BASE  = 32'h1000_0000;
    parameter DATA_RAM_SIZE  = 32'h0000_1000;  // 4KB
    parameter LED_REG_ADDR   = 32'h2000_0000;
    
    // Choose mode: 0 = Test mode (no CVA6), 1 = CVA6 mode
    parameter USE_CVA6 = 0;  // Set to 1 when CVA6 sources are added
    
    // ========================================================================
    // Clock and Reset Management
    // ========================================================================
    reg [3:0] reset_sync;
    wire reset;
    wire clk;
    
    // Synchronize reset (active-low input to active-high internal)
    assign clk = sys_clock;
    assign reset = ~reset_sync[3];  // Invert: sys_reset_n is active-low
    
    always @(posedge clk) begin
        // Synchronize the button input
        reset_sync <= {reset_sync[2:0], sys_reset_n};
    end
    
    // ========================================================================
    // Memory Interface Signals
    // ========================================================================
    // Instruction Memory Interface
    wire        instr_req;
    wire [31:0] instr_addr;
    wire [31:0] instr_rdata;
    wire        instr_valid;
    
    // Data Memory Interface
    wire        data_req;
    wire        data_we;
    wire [3:0]  data_be;      // Byte enable
    wire [31:0] data_addr;
    wire [31:0] data_wdata;
    wire [31:0] data_rdata;
    wire        data_valid;
    
    // ========================================================================
    // Memory/Register Signals
    // ========================================================================
    wire [31:0] rom_rdata;
    wire        rom_select;
    wire [31:0] ram_rdata;
    wire        ram_select;
    wire        led_select;
    
    reg  [31:0] led_reg;
    
    // ========================================================================
    // Address Decoding
    // ========================================================================
    // Instruction fetch (always from ROM)
    assign rom_select = (instr_addr >= BOOT_ROM_BASE) && 
                        (instr_addr < BOOT_ROM_BASE + BOOT_ROM_SIZE);
    
    // Data access decoding
    assign ram_select = (data_addr >= DATA_RAM_BASE) && 
                        (data_addr < DATA_RAM_BASE + DATA_RAM_SIZE);
    assign led_select = (data_addr == LED_REG_ADDR);
    
    // ========================================================================
    // Instruction ROM (Boot Code)
    // ========================================================================
    cva6_boot_rom u_boot_rom (
        .clk        (clk),
        .addr       (instr_addr[11:2]),  // Word address (1KB = 256 words)
        .rdata      (rom_rdata)
    );
    
    assign instr_rdata = rom_rdata;
    assign instr_valid = instr_req;  // Single cycle access
    
    // ========================================================================
    // Data RAM
    // ========================================================================
    cva6_data_ram u_data_ram (
        .clk        (clk),
        .req        (data_req && ram_select),
        .we         (data_we),
        .be         (data_be),
        .addr       (data_addr[13:2]),   // Word address (4KB = 1024 words)
        .wdata      (data_wdata),
        .rdata      (ram_rdata)
    );
    
    // ========================================================================
    // LED Register
    // ========================================================================
    always @(posedge clk) begin
        if (reset) begin
            led_reg <= 32'h0;
        end else if (data_req && data_we && led_select) begin
            // Write to LED register
            if (data_be[0]) led_reg[7:0]   <= data_wdata[7:0];
            if (data_be[1]) led_reg[15:8]  <= data_wdata[15:8];
            if (data_be[2]) led_reg[23:16] <= data_wdata[23:16];
            if (data_be[3]) led_reg[31:24] <= data_wdata[31:24];
        end
    end
    
    // ========================================================================
    // Data Read Multiplexer
    // ========================================================================
    assign data_rdata = ram_select ? ram_rdata :
                        led_select ? led_reg :
                        32'h0000_0000;
    
    assign data_valid = data_req;  // Single cycle access
    
    // ========================================================================
    // REAL RISC-V Processor Core
    // ========================================================================
    // This is an actual processor that executes instructions from ROM!
    
    simple_riscv_core u_riscv_core (
        .clk         (clk),
        .reset       (reset),
        
        // Instruction memory interface
        .instr_addr  (instr_addr),
        .instr_data  (instr_rdata),
        
        // Data memory interface
        .data_req    (data_req),
        .data_we     (data_we),
        .data_be     (data_be),
        .data_addr   (data_addr),
        .data_wdata  (data_wdata),
        .data_rdata  (data_rdata)
    );
    
    // Instruction always valid (ROM has no wait states)
    assign instr_req = 1'b1;
    assign instr_valid = 1'b1;
    
    // ========================================================================
    // LED Output Assignment
    // ========================================================================
    assign led[0] = led_reg[0];          // Main LED - CONTROLLED BY PROCESSOR SOFTWARE!
    assign led[1] = led_reg[1];          // Secondary LED
    assign led[2] = ~reset;              // System running indicator (ON when NOT in reset)
    assign led[3] = instr_addr[5];       // Instruction fetch activity

endmodule
