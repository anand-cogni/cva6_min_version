
// ============================================================================
// Memory-to-AXI Bridge Module
// ============================================================================
// Converts simple memory interface to AXI4 protocol
// Supports single-beat transactions (no bursts for simplicity)
// ============================================================================

module mem_to_axi_bridge (
    input  wire         clk,
    input  wire         resetn,
    
    // Memory Interface
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
    
    // FSM state update
    always @(posedge clk) begin
        if (!resetn) begin
            state <= IDLE;
            transaction_id <= 4'h0;
        end else begin
            state <= next_state;
            if (state == IDLE && mem_req)
                transaction_id <= transaction_id + 1'b1;
        end
    end
    
    // FSM next state logic
    always @(*) begin
        next_state = state;
        case (state)
            IDLE:        if (mem_req) next_state = mem_we ? WRITE_ADDR : READ_ADDR;
            WRITE_ADDR:  if (m_axi_awready) next_state = WRITE_DATA;
            WRITE_DATA:  if (m_axi_wready)  next_state = WRITE_RESP;
            WRITE_RESP:  if (m_axi_bvalid)  next_state = IDLE;
            READ_ADDR:   if (m_axi_arready) next_state = READ_DATA;
            READ_DATA:   if (m_axi_rvalid )  next_state = IDLE;
        endcase
    end
    
    // WRITE ADDRESS
    always @(posedge clk) begin
        if (!resetn) begin
            m_axi_awvalid <= 0;
        end else begin
            if (state == IDLE && mem_req && mem_we) begin
                m_axi_awvalid <= 1;
                m_axi_awaddr  <= mem_addr;
                m_axi_awid    <= transaction_id;
                m_axi_awlen   <= 0;
                m_axi_awsize  <= 3'b010;
            end else if (m_axi_awready) begin
                m_axi_awvalid <= 0;
            end
        end
    end
    
    // WRITE DATA
    always @(posedge clk) begin
        if (!resetn) begin
            m_axi_wvalid <= 0;
        end else begin
            if (state == WRITE_ADDR && m_axi_awready) begin
                m_axi_wvalid <= 1;
                m_axi_wdata  <= {32'h0, mem_wdata};
                m_axi_wstrb  <= {4'h0, mem_be};
                m_axi_wlast  <= 1;
            end else if (m_axi_wready) begin
                m_axi_wvalid <= 0;
            end
        end
    end
    
    // WRITE RESPONSE
    always @(posedge clk) begin
        if (!resetn)
            m_axi_bready <= 0;
        else
            m_axi_bready <= (state == WRITE_RESP);
    end
    
    // READ ADDRESS
    always @(posedge clk) begin
        if (!resetn) begin
            m_axi_arvalid <= 0;
        end else begin
            if (state == IDLE && mem_req && !mem_we) begin
                m_axi_arvalid <= 1;
                m_axi_araddr  <= mem_addr;
                m_axi_arid    <= transaction_id;
                m_axi_arlen   <= 0;
                m_axi_arsize  <= 3'b010;
            end else if (m_axi_arready) begin
                m_axi_arvalid <= 0;
            end
        end
    end
    
    // READ DATA - Assert m_axi_rready when in READ_ADDR or READ_DATA states
    /*always @(posedge clk) begin
        if (!resetn)
            m_axi_rready <= 0;
        else
            m_axi_rready <= (state == READ_ADDR) || (state == READ_DATA);
    end
    */ //this above always blobk is making below to get delayed for some
    //cycles delay
    // Memory read data and valid signal generation
    always @(posedge clk) begin
        if (!resetn) begin
            mem_rdata <= 0;
            mem_valid <= 0;
            m_axi_rready <= 0;
    end else begin 
            if (m_axi_rready <= (state == READ_DATA)) begin
                mem_rdata <= m_axi_rdata[31:0];
                mem_valid <= 1;
            end else if (state == WRITE_RESP && m_axi_bvalid && m_axi_bready) begin
                mem_valid <= 1;
            end else if (state == IDLE) begin
                mem_valid <= 0;
            end
        end
    end
    
    assign mem_ready = (state == IDLE);

endmodule
