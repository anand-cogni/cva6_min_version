// ============================================================================
// AXI Address Map and Decoder Module
// ============================================================================
// Description:
//   Address map decoder for CVA6 minimal system with range checking.
//   Validates AXI addresses against configured IP address ranges and
//   generates slave select signals for routing transactions.
//
//   Features:
//   - Configurable address ranges with start/end boundaries
//   - Address validation on read and write channels
//   - Slave select signal generation
//   - Error response for out-of-range addresses
//   - Support for multiple memory-mapped regions
//
// ============================================================================

module axi_addr_map #(
    parameter AXI_ADDR_WIDTH = 32,
    
    // Address Map Configuration
    parameter BOOT_ROM_BASE  = 32'h0000_0000,
    parameter BOOT_ROM_END   = 32'h0000_03FF,  // 1KB
    parameter DATA_RAM_BASE  = 32'h1000_0000,
    parameter DATA_RAM_END   = 32'h1000_0FFF,  // 4KB
    parameter LED_REG_BASE   = 32'h2000_0000,
    parameter LED_REG_END    = 32'h2000_0003,  // Single register
    parameter UART_BASE      = 32'h2100_0000,
    parameter UART_END       = 32'h2100_0007,  // 8 bytes
    parameter HBM3_MEM_BASE  = 32'h3000_0000,
    parameter HBM3_MEM_END   = 32'h3FFF_FFFF,  // 256MB
    parameter HBM3_CFG_BASE  = 32'h4000_0000,
    parameter HBM3_CFG_END   = 32'h4000_0FFF   // 4KB
) (
    input  wire                         clk,
    input  wire                         resetn,
    
    // AXI Address Inputs (from master)
    input  wire [AXI_ADDR_WIDTH-1:0]   axi_awaddr,    // Write address
    input  wire                         axi_awvalid,   // Write address valid
    input  wire [AXI_ADDR_WIDTH-1:0]   axi_araddr,    // Read address
    input  wire                         axi_arvalid,   // Read address valid
    
    // Slave Select Outputs
    output wire                         boot_rom_select,
    output wire                         data_ram_select,
    output wire                         led_reg_select,
    output wire                         uart_select,
    output wire                         hbm3_mem_select,
    output wire                         hbm3_cfg_select,
    
    // Address Validation Outputs
    output wire                         addr_valid_write,  // Write address is valid
    output wire                         addr_valid_read,   // Read address is valid
    output wire                         addr_error_write,  // Write address out of range
    output wire                         addr_error_read,   // Read address out of range
    
    // Address Range Information (for debugging)
    output wire [AXI_ADDR_WIDTH-1:0]   matched_base_write,
    output wire [AXI_ADDR_WIDTH-1:0]   matched_end_write,
    output wire [AXI_ADDR_WIDTH-1:0]   matched_base_read,
    output wire [AXI_ADDR_WIDTH-1:0]   matched_end_read
);

    // ========================================================================
    // Write Address Decoding
    // ========================================================================
    wire wr_boot_rom_hit;
    wire wr_data_ram_hit;
    wire wr_led_reg_hit;
    wire wr_uart_hit;
    wire wr_hbm3_mem_hit;
    wire wr_hbm3_cfg_hit;
    
    // Write address range checking
    assign wr_boot_rom_hit = axi_awvalid && 
                             (axi_awaddr >= BOOT_ROM_BASE) && 
                             (axi_awaddr <= BOOT_ROM_END);
    
    assign wr_data_ram_hit = axi_awvalid && 
                             (axi_awaddr >= DATA_RAM_BASE) && 
                             (axi_awaddr <= DATA_RAM_END);
    
    assign wr_led_reg_hit  = axi_awvalid && 
                             (axi_awaddr >= LED_REG_BASE) && 
                             (axi_awaddr <= LED_REG_END);
    
    assign wr_uart_hit     = axi_awvalid && 
                             (axi_awaddr >= UART_BASE) && 
                             (axi_awaddr <= UART_END);
    
    assign wr_hbm3_mem_hit = axi_awvalid && 
                             (axi_awaddr >= HBM3_MEM_BASE) && 
                             (axi_awaddr <= HBM3_MEM_END);
    
    assign wr_hbm3_cfg_hit = axi_awvalid && 
                             (axi_awaddr >= HBM3_CFG_BASE) && 
                             (axi_awaddr <= HBM3_CFG_END);
    
    // Write address validation
    assign addr_valid_write = wr_boot_rom_hit | wr_data_ram_hit | wr_led_reg_hit | 
                              wr_uart_hit | wr_hbm3_mem_hit | wr_hbm3_cfg_hit;
    
    assign addr_error_write = axi_awvalid && !addr_valid_write;
    
    // ========================================================================
    // Read Address Decoding
    // ========================================================================
    wire rd_boot_rom_hit;
    wire rd_data_ram_hit;
    wire rd_led_reg_hit;
    wire rd_uart_hit;
    wire rd_hbm3_mem_hit;
    wire rd_hbm3_cfg_hit;
    
    // Read address range checking
    assign rd_boot_rom_hit = axi_arvalid && 
                             (axi_araddr >= BOOT_ROM_BASE) && 
                             (axi_araddr <= BOOT_ROM_END);
    
    assign rd_data_ram_hit = axi_arvalid && 
                             (axi_araddr >= DATA_RAM_BASE) && 
                             (axi_araddr <= DATA_RAM_END);
    
    assign rd_led_reg_hit  = axi_arvalid && 
                             (axi_araddr >= LED_REG_BASE) && 
                             (axi_araddr <= LED_REG_END);
    
    assign rd_uart_hit     = axi_arvalid && 
                             (axi_araddr >= UART_BASE) && 
                             (axi_araddr <= UART_END);
    
    assign rd_hbm3_mem_hit = axi_arvalid && 
                             (axi_araddr >= HBM3_MEM_BASE) && 
                             (axi_araddr <= HBM3_MEM_END);
    
    assign rd_hbm3_cfg_hit = axi_arvalid && 
                             (axi_araddr >= HBM3_CFG_BASE) && 
                             (axi_araddr <= HBM3_CFG_END);
    
    // Read address validation
    assign addr_valid_read = rd_boot_rom_hit | rd_data_ram_hit | rd_led_reg_hit | 
                             rd_uart_hit | rd_hbm3_mem_hit | rd_hbm3_cfg_hit;
    
    assign addr_error_read = axi_arvalid && !addr_valid_read;
    
    // ========================================================================
    // Slave Select Signal Generation
    // ========================================================================
    // Combine read and write hits for overall slave selection
    assign boot_rom_select  = wr_boot_rom_hit | rd_boot_rom_hit;
    assign data_ram_select  = wr_data_ram_hit | rd_data_ram_hit;
    assign led_reg_select   = wr_led_reg_hit  | rd_led_reg_hit;
    assign uart_select      = wr_uart_hit     | rd_uart_hit;
    assign hbm3_mem_select  = wr_hbm3_mem_hit | rd_hbm3_mem_hit;
    assign hbm3_cfg_select  = wr_hbm3_cfg_hit | rd_hbm3_cfg_hit;
    
    // ========================================================================
    // Matched Address Range Information (for debugging)
    // ========================================================================
    // Write channel matched range
    assign matched_base_write = wr_boot_rom_hit ? BOOT_ROM_BASE :
                                wr_data_ram_hit ? DATA_RAM_BASE :
                                wr_led_reg_hit  ? LED_REG_BASE  :
                                wr_uart_hit     ? UART_BASE     :
                                wr_hbm3_mem_hit ? HBM3_MEM_BASE :
                                wr_hbm3_cfg_hit ? HBM3_CFG_BASE :
                                {AXI_ADDR_WIDTH{1'b0}};
    
    assign matched_end_write  = wr_boot_rom_hit ? BOOT_ROM_END :
                                wr_data_ram_hit ? DATA_RAM_END :
                                wr_led_reg_hit  ? LED_REG_END  :
                                wr_uart_hit     ? UART_END     :
                                wr_hbm3_mem_hit ? HBM3_MEM_END :
                                wr_hbm3_cfg_hit ? HBM3_CFG_END :
                                {AXI_ADDR_WIDTH{1'b0}};
    
    // Read channel matched range
    assign matched_base_read  = rd_boot_rom_hit ? BOOT_ROM_BASE :
                                rd_data_ram_hit ? DATA_RAM_BASE :
                                rd_led_reg_hit  ? LED_REG_BASE  :
                                rd_uart_hit     ? UART_BASE     :
                                rd_hbm3_mem_hit ? HBM3_MEM_BASE :
                                rd_hbm3_cfg_hit ? HBM3_CFG_BASE :
                                {AXI_ADDR_WIDTH{1'b0}};
    
    assign matched_end_read   = rd_boot_rom_hit ? BOOT_ROM_END :
                                rd_data_ram_hit ? DATA_RAM_END :
                                rd_led_reg_hit  ? LED_REG_END  :
                                rd_uart_hit     ? UART_END     :
                                rd_hbm3_mem_hit ? HBM3_MEM_END :
                                rd_hbm3_cfg_hit ? HBM3_CFG_END :
                                {AXI_ADDR_WIDTH{1'b0}};
    
    // ========================================================================
    // Address Range Overlap Detection (Synthesis-time check)
    // ========================================================================
    // This section uses generate blocks to create compile-time warnings
    // if address ranges overlap
    
    initial begin
        // Check for overlapping ranges
        if ((BOOT_ROM_BASE <= DATA_RAM_END) && (DATA_RAM_BASE <= BOOT_ROM_END))
            $display("WARNING: Boot ROM and Data RAM address ranges overlap!");
        
        if ((BOOT_ROM_BASE <= LED_REG_END) && (LED_REG_BASE <= BOOT_ROM_END))
            $display("WARNING: Boot ROM and LED register address ranges overlap!");
        
        if ((BOOT_ROM_BASE <= UART_END) && (UART_BASE <= BOOT_ROM_END))
            $display("WARNING: Boot ROM and UART address ranges overlap!");
        
        if ((DATA_RAM_BASE <= LED_REG_END) && (LED_REG_BASE <= DATA_RAM_END))
            $display("WARNING: Data RAM and LED register address ranges overlap!");
        
        if ((HBM3_MEM_BASE <= HBM3_CFG_END) && (HBM3_CFG_BASE <= HBM3_MEM_END))
            $display("WARNING: HBM3 memory and config address ranges overlap!");
        
        // Display address map at simulation start
        $display("========================================");
        $display("AXI Address Map Configuration:");
        $display("========================================");
        $display("Boot ROM:    0x%08h - 0x%08h", BOOT_ROM_BASE, BOOT_ROM_END);
        $display("Data RAM:    0x%08h - 0x%08h", DATA_RAM_BASE, DATA_RAM_END);
        $display("LED Reg:     0x%08h - 0x%08h", LED_REG_BASE, LED_REG_END);
        $display("UART:        0x%08h - 0x%08h", UART_BASE, UART_END);
        $display("HBM3 Memory: 0x%08h - 0x%08h", HBM3_MEM_BASE, HBM3_MEM_END);
        $display("HBM3 Config: 0x%08h - 0x%08h", HBM3_CFG_BASE, HBM3_CFG_END);
        $display("========================================");
    end
    
    // ========================================================================
    // Runtime Address Error Monitoring
    // ========================================================================
    // Optionally monitor and report address errors during simulation
    always @(posedge clk) begin
        if (resetn) begin
            if (addr_error_write) begin
                $display("ERROR @ %t: Write address 0x%08h out of range!", 
                         $time, axi_awaddr);
            end
            if (addr_error_read) begin
                $display("ERROR @ %t: Read address 0x%08h out of range!", 
                         $time, axi_araddr);
            end
        end
    end

endmodule
