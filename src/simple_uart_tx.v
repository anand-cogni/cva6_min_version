// ============================================================================
// Simple UART Transmitter for Debug Tracing
// ============================================================================
// Description:
//   Minimal UART TX module for outputting debug trace information
//   - Transmit-only (no receive)
//   - Configurable baud rate
//   - Memory-mapped interface
//   - 8-bit data, 1 stop bit, no parity
//
// Memory Map:
//   Offset 0x00: TX Data Register (write-only)
//   Offset 0x04: Status Register (read-only)
//                bit[0]: TX Busy (1 = transmitting, 0 = ready)
//                bit[1]: TX FIFO Full (1 = full, 0 = space available)
//
// ============================================================================

module simple_uart_tx #(
    parameter CLOCK_FREQ = 125_000_000,  // System clock frequency in Hz
    parameter BAUD_RATE  = 115_200,      // UART baud rate
    parameter FIFO_DEPTH = 16            // TX FIFO depth (power of 2)
)(
    input  wire        clock,
    input  wire        reset,
    
    // Memory-mapped interface
    input  wire        req,
    input  wire        we,
    input  wire [2:0]  addr,      // Word address (0 = data, 1 = status)
    input  wire [31:0] wdata,
    output wire [31:0] rdata,
    
    // UART TX pin
    output wire        uart_tx
);

    // ========================================================================
    // Parameters
    // ========================================================================
    localparam CLKS_PER_BIT = CLOCK_FREQ / BAUD_RATE;
    localparam FIFO_ADDR_WIDTH = $clog2(FIFO_DEPTH);
    
    // UART States
    localparam IDLE  = 3'b000;
    localparam START = 3'b001;
    localparam DATA  = 3'b010;
    localparam STOP  = 3'b011;
    
    // ========================================================================
    // TX FIFO
    // ========================================================================
    reg [7:0] fifo_mem [0:FIFO_DEPTH-1];
    reg [FIFO_ADDR_WIDTH:0] fifo_wr_ptr;
    reg [FIFO_ADDR_WIDTH:0] fifo_rd_ptr;
    
    wire fifo_full;
    wire fifo_empty;
    wire fifo_wr_en;
    wire fifo_rd_en;
    wire [7:0] fifo_rd_data;
    
    // FIFO full/empty logic
    assign fifo_full  = (fifo_wr_ptr[FIFO_ADDR_WIDTH] != fifo_rd_ptr[FIFO_ADDR_WIDTH]) &&
                        (fifo_wr_ptr[FIFO_ADDR_WIDTH-1:0] == fifo_rd_ptr[FIFO_ADDR_WIDTH-1:0]);
    assign fifo_empty = (fifo_wr_ptr == fifo_rd_ptr);
    
    // FIFO write enable
    assign fifo_wr_en = req && we && (addr[2:0] == 3'b000) && !fifo_full;
    
    // FIFO write logic
    always @(posedge clock) begin
        if (reset) begin
            fifo_wr_ptr <= 0;
        end else if (fifo_wr_en) begin
            fifo_mem[fifo_wr_ptr[FIFO_ADDR_WIDTH-1:0]] <= wdata[7:0];
            fifo_wr_ptr <= fifo_wr_ptr + 1;
        end
    end
    
    // FIFO read logic
    assign fifo_rd_data = fifo_mem[fifo_rd_ptr[FIFO_ADDR_WIDTH-1:0]];
    
    always @(posedge clock) begin
        if (reset) begin
            fifo_rd_ptr <= 0;
        end else if (fifo_rd_en) begin
            fifo_rd_ptr <= fifo_rd_ptr + 1;
        end
    end
    
    // ========================================================================
    // UART TX State Machine
    // ========================================================================
    reg [2:0]  tx_state;
    reg [15:0] clk_count;
    reg [2:0]  bit_index;
    reg [7:0]  tx_data;
    reg        tx_active;
    reg        tx_line;
    
    assign fifo_rd_en = !fifo_empty && (tx_state == IDLE);
    assign uart_tx = tx_line;
    
    always @(posedge clock) begin
        if (reset) begin
            tx_state   <= IDLE;
            clk_count  <= 0;
            bit_index  <= 0;
            tx_data    <= 8'h00;
            tx_active  <= 1'b0;
            tx_line    <= 1'b1;  // UART idle state is high
        end else begin
            case (tx_state)
                IDLE: begin
                    tx_line    <= 1'b1;
                    clk_count  <= 0;
                    bit_index  <= 0;
                    tx_active  <= 1'b0;
                    
                    if (!fifo_empty) begin
                        tx_data    <= fifo_rd_data;
                        tx_state   <= START;
                        tx_active  <= 1'b1;
                    end
                end
                
                START: begin
                    tx_line <= 1'b0;  // Start bit
                    
                    if (clk_count < CLKS_PER_BIT - 1) begin
                        clk_count <= clk_count + 1;
                    end else begin
                        clk_count <= 0;
                        tx_state  <= DATA;
                    end
                end
                
                DATA: begin
                    tx_line <= tx_data[bit_index];
                    
                    if (clk_count < CLKS_PER_BIT - 1) begin
                        clk_count <= clk_count + 1;
                    end else begin
                        clk_count <= 0;
                        
                        if (bit_index < 7) begin
                            bit_index <= bit_index + 1;
                        end else begin
                            bit_index <= 0;
                            tx_state  <= STOP;
                        end
                    end
                end
                
                STOP: begin
                    tx_line <= 1'b1;  // Stop bit
                    
                    if (clk_count < CLKS_PER_BIT - 1) begin
                        clk_count <= clk_count + 1;
                    end else begin
                        clk_count <= 0;
                        tx_state  <= IDLE;
                    end
                end
                
                default: begin
                    tx_state <= IDLE;
                end
            endcase
        end
    end
    
    // ========================================================================
    // Memory-mapped Read Interface
    // ========================================================================
    reg [31:0] rdata_reg;
    
    always @(*) begin
        if (addr[2:0] == 3'b000) begin
            // Data register (not readable, return 0)
            rdata_reg = 32'h0000_0000;
        end else if (addr[2:0] == 3'b001) begin
            // Status register
            rdata_reg = {30'h0, fifo_full, tx_active};
        end else begin
            rdata_reg = 32'h0000_0000;
        end
    end
    
    assign rdata = rdata_reg;

endmodule
