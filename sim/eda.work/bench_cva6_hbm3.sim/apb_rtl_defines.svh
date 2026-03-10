// ============================================================================
// APB RTL Defines Header
// ============================================================================
// Description:
//   Common address map, version constants, and configuration parameters
//   for APB slave RTL module
// ============================================================================

`ifndef APB_RTL_DEFINES_SVH
`define APB_RTL_DEFINES_SVH

// ============================================================================
// Module Configuration Parameters
// ============================================================================
`define APB_ADDR_WIDTH        32    // APB address bus width
`define APB_DATA_WIDTH        32    // APB data bus width (32-bit registers)
`define APB_NUM_CHANNELS      16    // Number of HBM3 pseudo-channels
`define APB_NUM_BANKS         16    // Number of banks per channel
`define APB_CMD_QUEUE_DEPTH   32    // Command queue depth (for status reporting)
`define APB_REORDER_QUEUE_DEPTH 32  // Reorder buffer depth (for config register)

// ============================================================================
// Register Address Map (12-bit offsets)
// ============================================================================

// ----------------------------------------------------------------------------
// Global Register Addresses (0x000 - 0x01F)
// ----------------------------------------------------------------------------
`define ADDR_HBM_CTRL         12'h000  // Control register
`define ADDR_HBM_STATUS       12'h004  // Status register (read-only)
`define ADDR_HBM_VERSION      12'h008  // Version register (read-only)
`define ADDR_HBM_CONFIG       12'h00C  // Configuration register (read-only)
`define ADDR_HBM_FEAT         12'h010  // Feature register (read-only)

// ----------------------------------------------------------------------------
// Per-Channel Register Addresses (0x500 - 0x8FF)
// Channel N base = 0x500 + (N × 0x40), where N = 0..15
// Each channel has 64 bytes (0x40) of address space
// ----------------------------------------------------------------------------
`define ADDR_CH_BASE          12'h500  // Base address for channel 0
`define ADDR_CH_STRIDE        12'h040  // Address stride per channel (64 bytes)
`define ADDR_CH_CFG_OFFSET    12'h000  // Offset: Channel config register
`define ADDR_CH_STATUS_OFFSET 12'h004  // Offset: Channel status register
`define ADDR_CH_RD_CNT_OFFSET 12'h008  // Offset: Channel read counter
`define ADDR_CH_WR_CNT_OFFSET 12'h00C  // Offset: Channel write counter

// ----------------------------------------------------------------------------
// Timing Parameter Register Addresses (0xA00 - 0xA1F)
// ----------------------------------------------------------------------------
`define ADDR_TIMING_TRCD      12'hA00  // tRCD timing parameter
`define ADDR_TIMING_TRP       12'hA04  // tRP timing parameter
`define ADDR_TIMING_TRAS      12'hA08  // tRAS timing parameter
`define ADDR_TIMING_TRC       12'hA0C  // tRC timing parameter
`define ADDR_TIMING_TRFC      12'hA10  // tRFC timing parameter
`define ADDR_TIMING_WL        12'hA14  // Write latency
`define ADDR_TIMING_RL        12'hA18  // Read latency

// ----------------------------------------------------------------------------
// Debug Register Addresses (0xB00 - 0xB0F)
// ----------------------------------------------------------------------------
`define ADDR_DBG_CTRL         12'hB00  // Debug control register
`define ADDR_DBG_LAST_CMD     12'hB04  // Debug last command register

// ============================================================================
// Version Constants (Hard-coded version information)
// ============================================================================
`define VERSION_MAJOR         8'h01     // Major version = 1
`define VERSION_MINOR         8'h00     // Minor version = 0
`define VERSION_PATCH         16'h0000  // Patch version = 0

`endif // APB_RTL_DEFINES_SVH
