//==============================================================================
// File: cmdmgr_rtl_defines.svh
//==============================================================================
// Description:
//   Command Manager RTL configuration defines
//   Contains all parameterizable values for the command_manager module
//
// Usage:
//   `include "cmdmgr_rtl_defines.svh"
//
// Author: Cognichip Design Assistant
// Date: 2024
//==============================================================================

`ifndef CMDMGR_RTL_DEFINES_SVH
`define CMDMGR_RTL_DEFINES_SVH

//==============================================================================
// Queue Configuration
//==============================================================================
`define CMDMGR_QUEUE_DEPTH       16    // Number of command queue entries (must be power of 2)
`define CMDMGR_READ_QUEUE_DEPTH  16    // Read data queue depth
`define CMDMGR_DATA_WIDTH        64    // Data path width (64 bits)
`define CMDMGR_MASK_WIDTH        8     // Data mask width (8 bits for 64-bit data)

//==============================================================================
// Address Configuration
//==============================================================================
`define CMDMGR_BANK_WIDTH        3     // Number of bank address bits (2-4)
`define CMDMGR_ROW_WIDTH         16    // Number of row address bits (12-18)
`define CMDMGR_COL_WIDTH         10    // Number of column address bits (8-12)
`define CMDMGR_NUM_BANKS         8     // Number of banks in DRAM device (4-16)
`define CMDMGR_CHANNEL_WIDTH     4     // Number of HBM3 channel address bits (4 bits for 16 channels)

//==============================================================================
// Feature Enable/Disable
//==============================================================================
`define CMDMGR_PRIORITY_ENABLE   0     // Enable prioritization (1=enabled, 0=FIFO mode)
`define CMDMGR_DECODE_ENABLE     1     // Enable command decoder (1=enabled, 0=passthrough)

//==============================================================================
// Priority Weights (Tunable for DRAM timing profiles)
//==============================================================================
`define CMDMGR_BASE_PRIORITY     10    // Base priority for all commands (0-20)
`define CMDMGR_ROW_HIT_BOOST     16    // Priority boost for row buffer hits (0-32)
`define CMDMGR_REFRESH_PENALTY   -8    // Priority penalty for refresh conflicts (-16-0)
`define CMDMGR_BANK_READY_BOOST  8     // Priority boost for ready banks (0-16)
`define CMDMGR_AGE_WEIGHT        1     // Age counter weight for starvation prevention (0-4)

`endif // CMDMGR_RTL_DEFINES_SVH
