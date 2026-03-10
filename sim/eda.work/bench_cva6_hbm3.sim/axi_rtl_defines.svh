// =============================================================================
// AXI RTL Configuration Parameters
// SystemVerilog Header File
// This file contains standalone parameter declarations that can be included
// directly in the module body using `include
// =============================================================================

`ifndef AXI_RTL_DEFINES_SVH
`define AXI_RTL_DEFINES_SVH

// AXI Interface Configuration
parameter int AXI_DATA_WIDTH        = 64;       // 32, 64, or 128
parameter int AXI_ADDR_WIDTH        = 32;       // 12-48
parameter int AXI_ID_WIDTH          = 4;        // 1-16
parameter int AXI_AWUSER_WIDTH      = 32;       // 0-32 (AXI5 only) - NOW 32-BIT
parameter int AXI_WUSER_WIDTH       = 32;       // 0-32 (AXI5 only) - NOW 32-BIT
parameter int AXI_BUSER_WIDTH       = 32;       // 0-32 (AXI5 only) - NOW 32-BIT
parameter int AXI_ARUSER_WIDTH      = 32;       // 0-32 (AXI5 only) - NOW 32-BIT
parameter int AXI_RUSER_WIDTH       = 32;       // 0-32 (AXI5 only) - NOW 32-BIT

// Command Queue Interface Configuration
parameter int CMD_DATA_WIDTH        = 64;      // Fixed for command_queue_manager

// Transaction Management
parameter int MAX_OUTSTANDING_READS  = 16;      // 1-64

// Buffer Configuration
parameter int READ_BUFFER_DEPTH     = 8;        // 2-32

// Derived Parameters
parameter int AXI_STRB_WIDTH        = AXI_DATA_WIDTH / 8;
parameter int OUTSTANDING_RD_WIDTH  = $clog2(MAX_OUTSTANDING_READS + 1);
parameter int RD_BUF_ADDR_WIDTH     = $clog2(READ_BUFFER_DEPTH);

// Safe user widths - ensure minimum of 1 bit
parameter int AWUSER_WIDTH_SAFE     = (AXI_AWUSER_WIDTH > 0) ? AXI_AWUSER_WIDTH : 1;
parameter int WUSER_WIDTH_SAFE      = (AXI_WUSER_WIDTH > 0) ? AXI_WUSER_WIDTH : 1;
parameter int BUSER_WIDTH_SAFE      = (AXI_BUSER_WIDTH > 0) ? AXI_BUSER_WIDTH : 1;
parameter int ARUSER_WIDTH_SAFE     = (AXI_ARUSER_WIDTH > 0) ? AXI_ARUSER_WIDTH : 1;
parameter int RUSER_WIDTH_SAFE      = (AXI_RUSER_WIDTH > 0) ? AXI_RUSER_WIDTH : 1;

// =============================================================================
// AXI Response Codes (Defines)
// =============================================================================
`define RESP_OKAY    2'b00  // Normal access success
`define RESP_EXOKAY  2'b01  // Exclusive access okay
`define RESP_SLVERR  2'b10  // Slave error
`define RESP_DECERR  2'b11  // Decode error

`endif // AXI_RTL_DEFINES_SVH
