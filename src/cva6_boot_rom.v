// ============================================================================
// CVA6 Boot ROM - UART Hello World + LED Blink Program (Verilog Version)
// ============================================================================
// Description:
//   Boot ROM containing pre-compiled RISC-V program with UART debug output.
//
// Memory Size: 1KB (256 words of 32-bit instructions)
//
// Program: 
//   1. Prints "CVA6 Booting...\n" via UART (0x21000000)
//   2. Blinks LED at ~1 Hz by writing to LED register (0x20000000)
//   3. Prints "LED ON" and "LED OFF" messages
// ============================================================================

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
    // ROM Initialization with UART Hello World + LED Blink
    // ========================================================================
    integer i;
    initial begin
        // Initialize all locations to NOP (addi x0, x0, 0)
        for (i = 0; i < 256; i = i + 1) begin
            rom[i] = 32'h00000013;  // NOP
        end
        
        // ====================================================================
        // UART Hello World + LED Blink Program (RISC-V machine code)
        // ====================================================================
        
        // _start: Initialize stack pointer
        rom[0]  = 32'h10001137;   // lui sp(x2), 0x10001
        
        // Initialize UART base address (0x21000000)
        rom[1]  = 32'h210002B7;   // lui t0(x5), 0x21000  (UART_BASE = 0x21000000)
        
        // Initialize LED base address (0x20000000) 
        rom[2]  = 32'h20000337;   // lui t1(x6), 0x20000  (LED_BASE = 0x20000000)
        
        // --------------------------------------------------------------------
        // Print "CVA6 Booting...\n"
        // --------------------------------------------------------------------
        rom[3]  = 32'h04300393;   // li t2, 'C' (0x43)
        rom[4]  = 32'h0072A023;   // sw t2, 0(t0) - Write to UART
        
        rom[5]  = 32'h05600393;   // li t2, 'V' (0x56)
        rom[6]  = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[7]  = 32'h04100393;   // li t2, 'A' (0x41)
        rom[8]  = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[9]  = 32'h03600393;   // li t2, '6' (0x36)
        rom[10] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[11] = 32'h02000393;   // li t2, ' ' (0x20)
        rom[12] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[13] = 32'h04200393;   // li t2, 'B' (0x42)
        rom[14] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[15] = 32'h06F00393;   // li t2, 'o' (0x6F)
        rom[16] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[17] = 32'h06F00393;   // li t2, 'o' (0x6F)
        rom[18] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[19] = 32'h07400393;   // li t2, 't' (0x74)
        rom[20] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[21] = 32'h06900393;   // li t2, 'i' (0x69)
        rom[22] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[23] = 32'h06E00393;   // li t2, 'n' (0x6E)
        rom[24] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[25] = 32'h06700393;   // li t2, 'g' (0x67)
        rom[26] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[27] = 32'h02E00393;   // li t2, '.' (0x2E)
        rom[28] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[29] = 32'h02E00393;   // li t2, '.' (0x2E)
        rom[30] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[31] = 32'h02E00393;   // li t2, '.' (0x2E)
        rom[32] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[33] = 32'h00A00393;   // li t2, '\n' (0x0A)
        rom[34] = 32'h0072A023;   // sw t2, 0(t0)
        
        // ====================================================================
        // LED Blink Loop
        // ====================================================================
        
        // loop_start:
        rom[35] = 32'h00100E13;   // li t3, 1 (LED ON value)
        rom[36] = 32'h01C32023;   // sw t3, 0(t1) - Turn LED ON
        
        // --------------------------------------------------------------------
        // Print "LED ON\n"
        // --------------------------------------------------------------------
        rom[37] = 32'h04C00393;   // li t2, 'L' (0x4C)
        rom[38] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[39] = 32'h04500393;   // li t2, 'E' (0x45)
        rom[40] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[41] = 32'h04400393;   // li t2, 'D' (0x44)
        rom[42] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[43] = 32'h02000393;   // li t2, ' ' (0x20)
        rom[44] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[45] = 32'h04F00393;   // li t2, 'O' (0x4F)
        rom[46] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[47] = 32'h04E00393;   // li t2, 'N' (0x4E)
        rom[48] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[49] = 32'h00A00393;   // li t2, '\n' (0x0A)
        rom[50] = 32'h0072A023;   // sw t2, 0(t0)
        
        // Delay loop (reduced for faster sim: ~12.5M cycles = ~100ms at 125MHz)
        rom[51] = 32'h00BED537;   // lui a0(x10), 0x00BED (12.5M)
        rom[52] = 32'h94050513;   // addi a0, a0, -0x6C0
        
        // delay1: 
        rom[53] = 32'hFFF50513;   // addi a0, a0, -1
        rom[54] = 32'hFE051EE3;   // bnez a0, delay1 (branch to rom[53])
        
        // Turn LED OFF
        rom[55] = 32'h00000E13;   // li t3, 0 (LED OFF value)
        rom[56] = 32'h01C32023;   // sw t3, 0(t1) - Turn LED OFF
        
        // --------------------------------------------------------------------
        // Print "LED OFF\n"
        // --------------------------------------------------------------------
        rom[57] = 32'h04C00393;   // li t2, 'L' (0x4C)
        rom[58] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[59] = 32'h04500393;   // li t2, 'E' (0x45)
        rom[60] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[61] = 32'h04400393;   // li t2, 'D' (0x44)
        rom[62] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[63] = 32'h02000393;   // li t2, ' ' (0x20)
        rom[64] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[65] = 32'h04F00393;   // li t2, 'O' (0x4F)
        rom[66] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[67] = 32'h04600393;   // li t2, 'F' (0x46)
        rom[68] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[69] = 32'h04600393;   // li t2, 'F' (0x46)
        rom[70] = 32'h0072A023;   // sw t2, 0(t0)
        
        rom[71] = 32'h00A00393;   // li t2, '\n' (0x0A)
        rom[72] = 32'h0072A023;   // sw t2, 0(t0)
        
        // Delay loop again
        rom[73] = 32'h00BED537;   // lui a0, 0x00BED
        rom[74] = 32'h94050513;   // addi a0, a0, -0x6C0
        
        // delay2:
        rom[75] = 32'hFFF50513;   // addi a0, a0, -1
        rom[76] = 32'hFE051EE3;   // bnez a0, delay2 (branch to rom[75])
        
        // Jump back to loop_start (rom[35])
        rom[77] = 32'hF71FF06F;   // jal x0, -144 (jump to rom[35])
    end
    
    // ========================================================================
    // Synchronous Read
    // ========================================================================
    always @(posedge clk) begin
        rdata <= rom[addr];
    end

endmodule
