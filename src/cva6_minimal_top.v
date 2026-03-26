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
//   0x21000000 - 0x21000007 : UART Debug (8 bytes)
//   0x30000000 - 0x3FFFFFFF : HBM3 Memory (256MB)
//   0x40000000 - 0x40000FFF : HBM3 Config Registers (4KB)
//
// ============================================================================

module cva6_minimal_top (
    // Clock and Reset
    input  wire         sys_clock,      // 125 MHz system clock from PYNQ Z2
    input  wire         sys_reset_n,    // Active-low reset button
    
    // LED Output
    output wire [3:0]   led,            // PYNQ Z2 LEDs (we'll use LED[0])
    
    // UART Debug Output
    output wire         uart_tx,        // UART transmit pin for debug
    
    // HBM3 PHY-to-DRAM Interface (exposed for testbench connectivity)
    output wire         phy_to_dram_hbm_ck_t,
    output wire         phy_to_dram_hbm_ck_c,
    output wire         phy_to_dram_hbm_cke,
    output wire         phy_to_dram_hbm_cs_n,
    output wire [5:0]   phy_to_dram_hbm_ca,
    inout  wire [127:0] phy_to_dram_io_hbm_dq,
    inout  wire [8:0]   phy_to_dram_io_hbm_ecc,
    output wire [15:0]  phy_to_dram_hbm_dm
);


    // ========================================================================
    // Parameters
    // ========================================================================
    parameter BOOT_ROM_BASE  = 32'h0000_0000;
    parameter BOOT_ROM_SIZE  = 32'h0000_0400;  // 1KB
    parameter DATA_RAM_BASE  = 32'h1000_0000;
    parameter DATA_RAM_SIZE  = 32'h0000_1000;  // 4KB
    parameter LED_REG_ADDR   = 32'h2000_0000;
    parameter UART_BASE      = 32'h2100_0000;  // UART debug base
    parameter UART_SIZE      = 32'h0000_0008;  // 8 bytes (2 registers)
    parameter HBM3_MEM_BASE  = 32'h3000_0000;  // HBM3 memory region
    parameter HBM3_MEM_SIZE  = 32'h1000_0000;  // 256MB HBM3 memory
    parameter HBM3_CFG_BASE  = 32'h4000_0000;  // HBM3 config registers
    parameter HBM3_CFG_SIZE  = 32'h0000_1000;  // 4KB config space
    parameter TRACE_CTRL_ADDR = 32'h2200_0000;  // Trace control register
    
    // Choose mode: 0 = Test mode (no CVA6), 1 = CVA6 mode
    parameter USE_CVA6 = 0;  // Set to 1 when CVA6 sources are added
    
    // ========================================================================
    // Clock and Reset Management
    // ========================================================================
    reg [3:0] reset_sync;
    wire reset;
    wire clk;
    wire aresetn;  // Active-low reset for AXI/HBM3
    
    // Synchronize reset
    assign clk = sys_clock;
    assign reset = ~reset_sync[3];  // Invert: sys_reset_n (active-low) → reset (active-high)
    assign aresetn = ~reset;  // Convert to active-low for AXI
    
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
    wire        uart_select;
    wire        hbm3_select;
    wire        hbm3_cfg_select;
    
    reg  [31:0] led_reg;
    wire [31:0] uart_rdata;
    
    // ========================================================================
    // HBM3-specific signals
    // ========================================================================
    wire [31:0] hbm3_rdata;
    wire        hbm3_valid;
    wire        hbm3_ready;
    
    // ========================================================================
    // AXI Address Map Decoder Signals
    // ========================================================================
    wire        addrmap_boot_rom_select;
    wire        addrmap_data_ram_select;
    wire        addrmap_led_reg_select;
    wire        addrmap_uart_select;
    wire        addrmap_hbm3_mem_select;
    wire        addrmap_hbm3_cfg_select;
    wire        addrmap_addr_valid_write;
    wire        addrmap_addr_valid_read;
    wire        addrmap_addr_error_write;
    wire        addrmap_addr_error_read;
    wire [31:0] addrmap_matched_base_write;
    wire [31:0] addrmap_matched_end_write;
    wire [31:0] addrmap_matched_base_read;
    wire [31:0] addrmap_matched_end_read;
    
    // ========================================================================
    // Instruction Trace Module Signals
    // ========================================================================
    // Trace signals from processor core
    wire [31:0] trace_pc;
    wire [31:0] trace_instr;
    wire        trace_valid;
    
    // Trace control and status
    reg         trace_enable;       // Enable instruction tracing (bit 0)
    reg         trace_data_enable;  // Enable HBM3 data tracing (bit 1)
    wire        trace_ctrl_select;
    wire        trace_fifo_full;
    wire        trace_fifo_empty;
    wire [31:0] trace_count;
    
    // Trace UART interface signals
    wire        trace_uart_req;
    wire        trace_uart_we;
    wire [31:0] trace_uart_addr;
    wire [31:0] trace_uart_wdata;
    wire        uart_ready;
    wire        uart_fifo_full;   // UART TX FIFO full indicator
    
    // UART Multiplexer signals
    wire        uart_req_mux;
    wire        uart_we_mux;
    wire [31:0] uart_addr_mux;
    wire [31:0] uart_wdata_mux;
    
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
    
    // UART debug region selection
    assign uart_select = (data_addr >= UART_BASE) && 
                         (data_addr < UART_BASE + UART_SIZE);
    
    // HBM3 memory region selection
    assign hbm3_select = (data_addr >= HBM3_MEM_BASE) && 
                         (data_addr < HBM3_MEM_BASE + HBM3_MEM_SIZE);
    
    // HBM3 config register selection
    assign hbm3_cfg_select = (data_addr >= HBM3_CFG_BASE) && 
                             (data_addr < HBM3_CFG_BASE + HBM3_CFG_SIZE);
    
    // Trace control register selection
    assign trace_ctrl_select = (data_addr == TRACE_CTRL_ADDR);
    
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
    // AXI Bridge Signals (Memory Interface to AXI4)
    // ========================================================================
    // AXI Write Address Channel
    wire [3:0]  axi_awid;
    wire [31:0] axi_awaddr;
    wire [7:0]  axi_awlen;
    wire [2:0]  axi_awsize;
    wire [1:0]  axi_awburst;
    wire        axi_awlock;
    wire [3:0]  axi_awcache;
    wire [2:0]  axi_awprot;
    wire [3:0]  axi_awqos;
    wire [3:0]  axi_awregion;
    wire [31:0] axi_awuser;
    wire        axi_awvalid;
    wire        axi_awready;
    
    // AXI Write Data Channel
    wire [63:0] axi_wdata;
    wire [7:0]  axi_wstrb;
    wire        axi_wlast;
    wire [31:0] axi_wuser;
    wire        axi_wvalid;
    wire        axi_wready;
    
    // AXI Write Response Channel
    wire [3:0]  axi_bid;
    wire [1:0]  axi_bresp;
    wire [31:0] axi_buser;
    wire        axi_bvalid;
    wire        axi_bready;
    
    // AXI Read Address Channel
    wire [3:0]  axi_arid;
    wire [31:0] axi_araddr;
    wire [7:0]  axi_arlen;
    wire [2:0]  axi_arsize;
    wire [1:0]  axi_arburst;
    wire        axi_arlock;
    wire [3:0]  axi_arcache;
    wire [2:0]  axi_arprot;
    wire [3:0]  axi_arqos;
    wire [3:0]  axi_arregion;
    wire [31:0] axi_aruser;
    wire        axi_arvalid;
    wire        axi_arready;
    
    // AXI Read Data Channel
    wire [3:0]  axi_rid;
    wire [63:0] axi_rdata;
    wire [1:0]  axi_rresp;
    wire        axi_rlast;
    wire [31:0] axi_ruser;
    wire        axi_rvalid;
    wire        axi_rready;
    
    // ========================================================================
    // APB Configuration Interface Signals
    // ========================================================================
    reg  [11:0] apb_paddr;
    reg         apb_psel;
    reg         apb_penable;
    reg         apb_pwrite;
    reg  [31:0] apb_pwdata;
    wire [31:0] apb_prdata;
    wire        apb_pready;
    wire        apb_pslverr;
    
    // APB Configuration State Machine
    localparam APB_IDLE   = 2'b00;
    localparam APB_SETUP  = 2'b01;
    localparam APB_ACCESS = 2'b10;
    
    reg [1:0] apb_state;
    reg [31:0] apb_rdata_reg;
    
    // Simple APB configuration handler for HBM3 config registers
    always @(posedge clk) begin
        if (reset) begin
            apb_state <= APB_IDLE;
            apb_psel <= 1'b0;
            apb_penable <= 1'b0;
            apb_pwrite <= 1'b0;
            apb_paddr <= 12'h0;
            apb_pwdata <= 32'h0;
            apb_rdata_reg <= 32'h0;
        end else begin
            case (apb_state)
                APB_IDLE: begin
                    if (data_req && hbm3_cfg_select) begin
                        apb_psel <= 1'b1;
                        apb_pwrite <= data_we;
                        apb_paddr <= data_addr[11:0];
                        apb_pwdata <= data_wdata;
                        apb_state <= APB_SETUP;
                    end
                end
                
                APB_SETUP: begin
                    apb_penable <= 1'b1;
                    apb_state <= APB_ACCESS;
                end
                
                APB_ACCESS: begin
                    if (apb_pready) begin
                        apb_psel <= 1'b0;
                        apb_penable <= 1'b0;
                        apb_rdata_reg <= apb_prdata;
                        apb_state <= APB_IDLE;
                    end
                end
                
                default: apb_state <= APB_IDLE;
            endcase
        end
    end
    
    // ========================================================================
    // Trace Control Register
    // ========================================================================
    // Control register at 0x22000000 to enable/disable tracing
    // Bit[0]: Enable instruction tracing
    // Bit[1]: Enable HBM3 data transaction tracing
    always @(posedge clk) begin
        if (reset) begin
            trace_enable      <= 1'b1;  // Enable instruction tracing by default
            trace_data_enable <= 1'b1;  // Enable HBM3 data tracing by default
        end else if (data_req && data_we && trace_ctrl_select) begin
            if (data_be[0]) begin
                trace_enable      <= data_wdata[0];
                trace_data_enable <= data_wdata[1];
            end
        end
    end
    
    // ========================================================================
    // UART Multiplexing Logic
    // ========================================================================
    // Priority mux: Trace has higher priority to avoid FIFO overflow
    // When trace module needs UART, it takes precedence over application
    assign uart_req_mux   = trace_uart_req ? trace_uart_req   : (data_req && uart_select);
    assign uart_we_mux    = trace_uart_req ? trace_uart_we    : data_we;
    assign uart_addr_mux  = trace_uart_req ? trace_uart_addr  : data_addr;
    assign uart_wdata_mux = trace_uart_req ? trace_uart_wdata : data_wdata;
    
    // UART ready signal - based on FIFO full status
    // When FIFO is NOT full, UART is ready to accept more data
    assign uart_ready = !uart_fifo_full;
    
    // ========================================================================
    // UART Debug Transmitter (with Multiplexed Inputs)
    // ========================================================================
    simple_uart_tx #(
        .CLOCK_FREQ (125_000_000),
        .BAUD_RATE  (921_600),
        .FIFO_DEPTH (256)
    ) u_uart_debug (
        .clock          (clk),
        .reset          (reset),
        .req            (uart_req_mux),
        .we             (uart_we_mux),
        .addr           (uart_addr_mux[2:0]),
        .wdata          (uart_wdata_mux),
        .rdata          (uart_rdata),
        .uart_tx        (uart_tx),
        .tx_fifo_full   (uart_fifo_full)   // Connect FIFO full status
    );
    
    // ========================================================================
    // Unified Trace Module Instance (Instructions + HBM3 Data Transactions)
    // ========================================================================
    // Captures instruction execution AND HBM3 data transactions
    // Sends formatted traces via UART for debugging
    riscv_instr_trace #(
        .FIFO_DEPTH     (64),             // Buffer 64 trace entries (increased from 8)
        .UART_BASE      (UART_BASE),      // UART base address
        .HBM3_MEM_BASE  (HBM3_MEM_BASE),  // HBM3 memory base
        .HBM3_MEM_SIZE  (HBM3_MEM_SIZE)   // HBM3 memory size
    ) u_instr_trace (
        .clk            (clk),
        .reset          (reset),
        
        // Pipeline interface from processor core
        .commit_pc      (trace_pc),
        .commit_instr   (trace_instr),
        .commit_valid   (trace_valid),
        
        // Data bus monitoring for HBM3 transactions
        .data_req       (data_req),
        .data_we        (data_we),
        .data_addr      (data_addr),
        .data_wdata     (data_wdata),
        .data_rdata     (data_rdata),
        .data_valid     (data_valid),
        
        // UART interface (multiplexed)
        .uart_req       (trace_uart_req),
        .uart_we        (trace_uart_we),
        .uart_addr      (trace_uart_addr),
        .uart_wdata     (trace_uart_wdata),
        .uart_rdata     (uart_rdata),
        .uart_ready     (uart_ready),
        
        // Control and status
        .trace_enable       (trace_enable),
        .trace_data_enable  (trace_data_enable),
        .fifo_full          (trace_fifo_full),
        .fifo_empty         (trace_fifo_empty),
        .trace_count        (trace_count)
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
    // AXI Address Map Decoder Instance
    // ========================================================================
    // This module validates AXI addresses and generates peripheral select signals
    // It ensures that when the core executes instructions, addresses are checked
    // against the defined memory map before routing to IPs
    
    axi_addr_map #(
        .AXI_ADDR_WIDTH (32),
        .BOOT_ROM_BASE  (BOOT_ROM_BASE),
        .BOOT_ROM_END   (BOOT_ROM_BASE + BOOT_ROM_SIZE - 1),
        .DATA_RAM_BASE  (DATA_RAM_BASE),
        .DATA_RAM_END   (DATA_RAM_BASE + DATA_RAM_SIZE - 1),
        .LED_REG_BASE   (LED_REG_ADDR),
        .LED_REG_END    (LED_REG_ADDR + 3),
        .UART_BASE      (UART_BASE),
        .UART_END       (UART_BASE + UART_SIZE - 1),
        .HBM3_MEM_BASE  (HBM3_MEM_BASE),
        .HBM3_MEM_END   (HBM3_MEM_BASE + HBM3_MEM_SIZE - 1),
        .HBM3_CFG_BASE  (HBM3_CFG_BASE),
        .HBM3_CFG_END   (HBM3_CFG_BASE + HBM3_CFG_SIZE - 1)
    ) u_axi_addr_map (
        .clk                  (clk),
        .resetn               (aresetn),
        
        // AXI Address Inputs (from mem_to_axi_bridge)
        .axi_awaddr           (axi_awaddr),
        .axi_awvalid          (axi_awvalid),
        .axi_araddr           (axi_araddr),
        .axi_arvalid          (axi_arvalid),
        
        // Slave Select Outputs
        .boot_rom_select      (addrmap_boot_rom_select),
        .data_ram_select      (addrmap_data_ram_select),
        .led_reg_select       (addrmap_led_reg_select),
        .uart_select          (addrmap_uart_select),
        .hbm3_mem_select      (addrmap_hbm3_mem_select),
        .hbm3_cfg_select      (addrmap_hbm3_cfg_select),
        
        // Address Validation Outputs
        .addr_valid_write     (addrmap_addr_valid_write),
        .addr_valid_read      (addrmap_addr_valid_read),
        .addr_error_write     (addrmap_addr_error_write),
        .addr_error_read      (addrmap_addr_error_read),
        
        // Address Range Information (for debugging)
        .matched_base_write   (addrmap_matched_base_write),
        .matched_end_write    (addrmap_matched_end_write),
        .matched_base_read    (addrmap_matched_base_read),
        .matched_end_read     (addrmap_matched_end_read)
    );
    
    // ========================================================================
    // Memory-to-AXI Bridge Instance
    // ========================================================================
    mem_to_axi_bridge u_mem_to_axi_bridge (
        .clk            (clk),
        .resetn         (aresetn),
        
        // Memory Interface (from simple_riscv_core)
        .mem_req        (data_req && hbm3_select),
        .mem_we         (data_we),
        .mem_be         (data_be),
        .mem_addr       (data_addr),
        .mem_wdata      (data_wdata),
        .mem_rdata      (hbm3_rdata),
        .mem_valid      (hbm3_valid),
        .mem_ready      (hbm3_ready),
        
        // AXI4 Master Interface
        .m_axi_awid     (axi_awid),
        .m_axi_awaddr   (axi_awaddr),
        .m_axi_awlen    (axi_awlen),
        .m_axi_awsize   (axi_awsize),
        .m_axi_awburst  (axi_awburst),
        .m_axi_awlock   (axi_awlock),
        .m_axi_awcache  (axi_awcache),
        .m_axi_awprot   (axi_awprot),
        .m_axi_awqos    (axi_awqos),
        .m_axi_awregion (axi_awregion),
        .m_axi_awuser   (axi_awuser),
        .m_axi_awvalid  (axi_awvalid),
        .m_axi_awready  (axi_awready),
        .m_axi_wdata    (axi_wdata),
        .m_axi_wstrb    (axi_wstrb),
        .m_axi_wlast    (axi_wlast),
        .m_axi_wuser    (axi_wuser),
        .m_axi_wvalid   (axi_wvalid),
        .m_axi_wready   (axi_wready),
        .m_axi_bid      (axi_bid),
        .m_axi_bresp    (axi_bresp),
        .m_axi_buser    (axi_buser),
        .m_axi_bvalid   (axi_bvalid),
        .m_axi_bready   (axi_bready),
        .m_axi_arid     (axi_arid),
        .m_axi_araddr   (axi_araddr),
        .m_axi_arlen    (axi_arlen),
        .m_axi_arsize   (axi_arsize),
        .m_axi_arburst  (axi_arburst),
        .m_axi_arlock   (axi_arlock),
        .m_axi_arcache  (axi_arcache),
        .m_axi_arprot   (axi_arprot),
        .m_axi_arqos    (axi_arqos),
        .m_axi_arregion (axi_arregion),
        .m_axi_aruser   (axi_aruser),
        .m_axi_arvalid  (axi_arvalid),
        .m_axi_arready  (axi_arready),
        .m_axi_rid      (axi_rid),
        .m_axi_rdata    (axi_rdata),
        .m_axi_rresp    (axi_rresp),
        .m_axi_rlast    (axi_rlast),
        .m_axi_ruser    (axi_ruser),
        .m_axi_rvalid   (axi_rvalid),
        .m_axi_rready   (axi_rready)
    );
    
    // ========================================================================
    // HBM3 Controller Instance
    // ========================================================================
    hbm3_controller_top #(
        .AXI_ID_WIDTH   (4),
        .AXI_ADDR_WIDTH (32),
        .AXI_DATA_WIDTH (64),
        .BANK_WIDTH     (3),
        .ROW_WIDTH      (16),
        .COL_WIDTH      (10),
        .NUM_CHANNELS   (16)
    ) u_hbm3_controller (
        // Global Signals
        .aclk           (clk),
        .aresetn        (aresetn),
        .pclk           (clk),
        .presetn        (aresetn),
        
        // APB Interface (Control Path)
        .paddr          (apb_paddr),
        .psel           (apb_psel),
        .penable        (apb_penable),
        .pwrite         (apb_pwrite),
        .pwdata         (apb_pwdata),
        .prdata         (apb_prdata),
        .pready         (apb_pready),
        .pslverr        (apb_pslverr),
        
        // AXI Interface (Data Path)
        .awid           (axi_awid),
        .awaddr         (axi_awaddr),
        .awlen          (axi_awlen),
        .awsize         (axi_awsize),
        .awburst        (axi_awburst),
        .awlock         (axi_awlock),
        .awcache        (axi_awcache),
        .awprot         (axi_awprot),
        .awqos          (axi_awqos),
        .awregion       (axi_awregion),
        .awuser         (axi_awuser),
        .awvalid        (axi_awvalid),
        .awready        (axi_awready),
        .wdata          (axi_wdata),
        .wstrb          (axi_wstrb),
        .wlast          (axi_wlast),
        .wuser          (axi_wuser),
        .wvalid         (axi_wvalid),
        .wready         (axi_wready),
        .bid            (axi_bid),
        .bresp          (axi_bresp),
        .buser          (axi_buser),
        .bvalid         (axi_bvalid),
        .bready         (axi_bready),
        .arid           (axi_arid),
        .araddr         (axi_araddr),
        .arlen          (axi_arlen),
        .arsize         (axi_arsize),
        .arburst        (axi_arburst),
        .arlock         (axi_arlock),
        .arcache        (axi_arcache),
        .arprot         (axi_arprot),
        .arqos          (axi_arqos),
        .arregion       (axi_arregion),
        .aruser         (axi_aruser),
        .arvalid        (axi_arvalid),
        .arready        (axi_arready),
        .rid            (axi_rid),
        .rdata          (axi_rdata),
        .rresp          (axi_rresp),
        .rlast          (axi_rlast),
        .ruser          (axi_ruser),
        .rvalid         (axi_rvalid),
        .rready         (axi_rready),
        
        // HBM3 PHY-to-DRAM Interface
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
    // Data Read Multiplexer
    // ========================================================================
    assign data_rdata = ram_select        ? ram_rdata :
                        led_select        ? led_reg :
                        uart_select       ? uart_rdata :
                        hbm3_select       ? hbm3_rdata :
                        hbm3_cfg_select   ? apb_rdata_reg :
                        trace_ctrl_select ? {30'h0, trace_data_enable, trace_enable} :
                        32'h0000_0000;
    
    // Data valid generation
    assign data_valid = (ram_select || led_select || uart_select || trace_ctrl_select) ? data_req :
                        hbm3_select ? hbm3_valid :
                        hbm3_cfg_select ? (apb_state == APB_IDLE) :
                        1'b0;
    
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
        .data_rdata  (data_rdata),
        
        // Trace interface outputs
        // NOTE: simple_riscv_core module must be updated to include these outputs:
        // - trace_pc:    PC of committed/executed instruction
        // - trace_instr: Instruction word that was executed
        // - trace_valid: Pulse when instruction commits/completes
        .trace_pc    (trace_pc),
        .trace_instr (trace_instr),
        .trace_valid (trace_valid)
    );
    
    // Instruction always valid (ROM has no wait states)
    assign instr_req = 1'b1;
    assign instr_valid = 1'b1;
    
    // ========================================================================
    // LED Output Assignment
    // ========================================================================
    assign led[0] = led_reg[0];                         // Main LED - controlled by processor
    assign led[1] = trace_enable;                       // Trace enabled indicator
    assign led[2] = trace_fifo_full;                    // Trace FIFO overflow warning
    assign led[3] = !trace_fifo_empty;                  // Trace activity indicator

endmodule

