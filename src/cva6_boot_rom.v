// ============================================================================
// CVA6 Boot ROM - LED Blink Program (Verilog Version)
/// ============================================================================
// Description:
//   Boot ROM containing pre-compiled RISC-V LED blink program.
//
// Memory Size: 1KB (256 words of 32-bit instructions)
//
// Program: Blinks LED at ~1 Hz by writing to LED register (0x20000000)
/// ============================================================================

module cva6_boot_rom (
    input  wire        clk,
    input  wire [9:0]  addr,      // Word address (256 words = 1KB)
    output reg  [31:0] rdata
);

    // ========================================================================
    // Boot ROM Memory Array
    // ========================================================================
    reg [31:0] rom [0:255];
    
    // ========================================================================
    // ROM Initialization
    // ========================================================================
    integer i;
    initial begin
        // Initialize all locations to NOP (addi x0, x0, 0)
        for (i = 0; i < 256; i = i + 1) begin
            rom[i] = 32'h00000013;  // NOP
        end
        
        // LED Blink Program (RISC-V machine code)
        // _start: Initialize stack pointer
        rom[0] = 32'h10001137;   // lui sp(x2), 0x10001
        
        // loop: Load LED register address
        rom[1] = 32'h200002B7;   // lui t0(x5), 0x20000
        
        // li t1, 1
        rom[2] = 32'h00100313;   // addi t1(x6), x0, 1
        
        // sw t1, 0(t0) - Turn LED on
        rom[3] = 32'h0062A023;   // sw t1, 0(t0)
        
        // li a0, 125000000 (delay count)
        rom[4] = 32'h07735537;   // lui a0(x10), 0x07735
        rom[5] = 32'h94050513;   // addi a0, a0, -0x6C0
        
        // delay1: addi a0, a0, -1
        rom[6] = 32'hFFF50513;   // addi a0, a0, -1
        
        // bnez a0, delay1
        rom[7] = 32'hFE051EE3;   // bnez a0, -4
        
        // li t1, 0
        rom[8] = 32'h00000313;   // addi t1, x0, 0
        
        // sw t1, 0(t0) - Turn LED off
        rom[9] = 32'h0062A023;   // sw t1, 0(t0)
        
        // li a0, 125000000 again
        rom[10] = 32'h07735537;  // lui a0, 0x07735
        rom[11] = 32'h94050513;  // addi a0, a0, -0x6C0
        
        // delay2: addi a0, a0, -1
        rom[12] = 32'hFFF50513;  // addi a0, a0, -1
        
        // bnez a0, delay2
        rom[13] = 32'hFE051EE3;  // bnez a0, -4
        
        // j loop (jump to rom[1])
        rom[14] = 32'hFCDFF06F;  // jal x0, -52
    end
    
    // ========================================================================
    // Synchronous Read
    // ========================================================================
    always @(posedge clk) begin
        rdata <= rom[addr];
    end

endmodule
