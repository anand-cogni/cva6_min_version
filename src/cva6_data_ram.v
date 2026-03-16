// ============================================================================
// CVA6 Data RAM (Verilog Version)
// ============================================================================
// Description:
//   Simple synchronous RAM for CVA6 processor data and stack.
//   Supports byte-addressable writes with byte-enable signals.
//
// Size: 4KB (1024 words of 32-bit data)
// Address Range: 0x10000000 - 0x10000FFF
// ============================================================================

module cva6_data_ram (
    input  wire        clk,
    input  wire        req,         // Request signal
    input  wire        we,          // Write enable
    input  wire [3:0]  be,          // Byte enable (active high)
    input  wire [11:0] addr,        // Word address (1024 words = 4KB)
    input  wire [31:0] wdata,       // Write data
    output reg  [31:0] rdata        // Read data
);

    // ========================================================================
    // RAM Memory Array
    // ========================================================================
    reg [31:0] ram [0:1023];
    
    // ========================================================================
    // RAM Initialization
    // ========================================================================
    integer i;
    initial begin
        for (i = 0; i < 1024; i = i + 1) begin
            ram[i] = 32'h00000000;
        end
    end
    
    // ========================================================================
    // RAM Read/Write Logic
    // ========================================================================
    always @(posedge clk) begin
        if (req) begin
            if (we) begin
                // Write operation with byte enables
                if (be[0]) ram[addr][7:0]   <= wdata[7:0];
                if (be[1]) ram[addr][15:8]  <= wdata[15:8];
                if (be[2]) ram[addr][23:16] <= wdata[23:16];
                if (be[3]) ram[addr][31:24] <= wdata[31:24];
            end
            // Read operation (always performed, even during write)
            rdata <= ram[addr];
        end
    end

endmodule
