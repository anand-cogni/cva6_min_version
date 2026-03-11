// ============================================================================
// Memory-to-AXI Bridge Module
// ============================================================================
// Converts simple memory interface to AXI4 protocol
// Supports single-beat transactions (no bursts for simplicity)
// ============================================================================

module mem_to_axi_bridge (
    input  wire         clk,
    input  wire         resetn,
    
    // Memory Interface (from simple_riscv_core)
    input  wire         mem_req,
    input  wire         mem_we,
    input  wire [3:0]   mem_be,
    input  wire [31:0]  mem_addr,
    input  wire [31:0]  mem_wdata,
    output reg  [31:0]  mem_rdata,
    output reg          mem_valid,
    output wire         mem_ready,
    
    // AXI4 Master Interface
    output reg  [3:0]   m_axi_awid,
    output reg  [31:0]  m_axi_awaddr,
    output reg  [7:0]   m_axi_awlen,
    output reg  [2:0]   m_axi_awsize,
    output reg  [1:0]   m_axi_awburst,
    output reg          m_axi_awlock,
    output reg  [3:0]   m_axi_awcache,
    output reg  [2:0]   m_axi_awprot,
    output reg  [3:0]   m_axi_awqos,
    output reg  [3:0]   m_axi_awregion,
    output reg  [31:0]  m_axi_awuser,
    output reg          m_axi_awvalid,
    input  wire         m_axi_awready,
    output reg  [63:0]  m_axi_wdata,
    output reg  [7:0]   m_axi_wstrb,
    output reg          m_axi_wlast,
    output reg  [31:0]  m_axi_wuser,
    output reg          m_axi_wvalid,
    input  wire         m_axi_wready,
    input  wire [3:0]   m_axi_bid,
    input  wire [1:0]   m_axi_bresp,
    input  wire [31:0]  m_axi_buser,
    input  wire         m_axi_bvalid,
    output reg          m_axi_bready,
    output reg  [3:0]   m_axi_arid,
    output reg  [31:0]  m_axi_araddr,
    output reg  [7:0]   m_axi_arlen,
    output reg  [2:0]   m_axi_arsize,
    output reg  [1:0]   m_axi_arburst,
    output reg          m_axi_arlock,
    output reg  [3:0]   m_axi_arcache,
    output reg  [2:0]   m_axi_arprot,
    output reg  [3:0]   m_axi_arqos,
    output reg  [3:0]   m_axi_arregion,
    output reg  [31:0]  m_axi_aruser,
    output reg          m_axi_arvalid,
    input  wire         m_axi_arready,
    input  wire [3:0]   m_axi_rid,
    input  wire [63:0]  m_axi_rdata,
    input  wire [1:0]   m_axi_rresp,
    input  wire         m_axi_rlast,
    input  wire [31:0]  m_axi_ruser,
    input  wire         m_axi_rvalid,
    output reg          m_axi_rready
);

    localparam IDLE        = 3'b000;
    localparam WRITE_ADDR  = 3'b001;
    localparam WRITE_DATA  = 3'b010;
    localparam WRITE_RESP  = 3'b011;
    localparam READ_ADDR   = 3'b100;
    localparam READ_DATA   = 3'b101;
    
    reg [2:0] state, next_state;
    reg [3:0] transaction_id;
    
    always @(posedge clk) begin
        if (!resetn) begin
            state <= IDLE;
            transaction_id <= 4'h0;
        end else begin
            state <= next_state;
            if (state == IDLE && mem_req) begin
                transaction_id <= transaction_id + 1'b1;
            end
        end
    end
    
    always @(*) begin
        next_state = state;
        case (state)
            IDLE: begin
                if (mem_req) begin
                    if (mem_we)
                        next_state = WRITE_ADDR;
                    else
                        next_state = READ_ADDR;
                end
            end
            WRITE_ADDR: begin
                if (m_axi_awready)
                    next_state = WRITE_DATA;
            end
            WRITE_DATA: begin
                if (m_axi_wready)
                    next_state = WRITE_RESP;
            end
            WRITE_RESP: begin
                if (m_axi_bvalid)
                    next_state = IDLE;
            end
            READ_ADDR: begin
                if (m_axi_arready)
                    next_state = READ_DATA;
            end
            READ_DATA: begin
                if (m_axi_rvalid)
                    next_state = IDLE;
            end
            default: next_state = IDLE;
        endcase
    end
    
    always @(posedge clk) begin
        if (!resetn) begin
            m_axi_awvalid <= 1'b0;
            m_axi_awaddr  <= 32'h0;
            m_axi_awid    <= 4'h0;
            m_axi_awlen   <= 8'h0;
            m_axi_awsize  <= 3'b010;
            m_axi_awburst <= 2'b01;
            m_axi_awlock  <= 1'b0;
            m_axi_awcache <= 4'b0011;
            m_axi_awprot  <= 3'b000;
            m_axi_awqos   <= 4'h0;
            m_axi_awregion <= 4'h0;
            m_axi_awuser  <= 32'h0;
        end else begin
            if (state == IDLE && mem_req && mem_we) begin
                m_axi_awvalid  <= 1'b1;
                m_axi_awaddr   <= mem_addr;
                m_axi_awid     <= transaction_id;
                m_axi_awlen    <= 8'h0;
                m_axi_awsize   <= 3'b010;
            end else if (state == WRITE_ADDR && m_axi_awready) begin
                m_axi_awvalid <= 1'b0;
            end
        end
    end
    
    always @(posedge clk) begin
        if (!resetn) begin
            m_axi_wvalid <= 1'b0;
            m_axi_wdata  <= 64'h0;
            m_axi_wstrb  <= 8'h0;
            m_axi_wlast  <= 1'b0;
            m_axi_wuser  <= 32'h0;
        end else begin
            if (state == WRITE_ADDR && m_axi_awready) begin
                m_axi_wvalid <= 1'b1;
                m_axi_wdata  <= {32'h0, mem_wdata};
                m_axi_wstrb  <= {4'h0, mem_be};
                m_axi_wlast  <= 1'b1;
                m_axi_wuser  <= 32'h0;
            end else if (state == WRITE_DATA && m_axi_wready) begin
                m_axi_wvalid <= 1'b0;
            end
        end
    end
    
    always @(posedge clk) begin
        if (!resetn) begin
            m_axi_bready <= 1'b0;
        end else begin
            if (state == WRITE_RESP)
                m_axi_bready <= 1'b1;
            else
                m_axi_bready <= 1'b0;
        end
    end
    
    always @(posedge clk) begin
        if (!resetn) begin
            m_axi_arvalid <= 1'b0;
            m_axi_araddr  <= 32'h0;
            m_axi_arid    <= 4'h0;
            m_axi_arlen   <= 8'h0;
            m_axi_arsize  <= 3'b010;
            m_axi_arburst <= 2'b01;
            m_axi_arlock  <= 1'b0;
            m_axi_arcache <= 4'b0011;
            m_axi_arprot  <= 3'b000;
            m_axi_arqos   <= 4'h0;
            m_axi_arregion <= 4'h0;
            m_axi_aruser  <= 32'h0;
        end else begin
            if (state == IDLE && mem_req && !mem_we) begin
                m_axi_arvalid  <= 1'b1;
                m_axi_araddr   <= mem_addr;
                m_axi_arid     <= transaction_id;
                m_axi_arlen    <= 8'h0;
                m_axi_arsize   <= 3'b010;
            end else if (state == READ_ADDR && m_axi_arready) begin
                m_axi_arvalid <= 1'b0;
            end
        end
    end
    
    always @(posedge clk) begin
        if (!resetn) begin
            m_axi_rready <= 1'b0;
        end else begin
            if (state == READ_DATA)
                m_axi_rready <= 1'b1;
            else
                m_axi_rready <= 1'b0;
        end
    end
    
    always @(posedge clk) begin
        if (!resetn) begin
            mem_rdata <= 32'h0;
            mem_valid <= 1'b0;
        end else begin
            if (state == READ_DATA && m_axi_rvalid) begin
                mem_rdata <= m_axi_rdata[31:0];
                mem_valid <= 1'b1;
            end else if (state == WRITE_RESP && m_axi_bvalid) begin
                mem_valid <= 1'b1;
            end else if (state == IDLE) begin
                mem_valid <= 1'b0;
            end
        end
    end
    
    assign mem_ready = (state == IDLE);

endmodule
