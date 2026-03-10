// =============================================================================
// File: cmdpr_rtl_defines.svh
// Description: Macro definitions for command processor pipelined module
// =============================================================================

`ifndef CMDPR_RTL_DEFINES_SVH
`define CMDPR_RTL_DEFINES_SVH

// HBM3 Configuration Macros
`ifndef CMDPR_CHANNEL_WIDTH
    `define CMDPR_CHANNEL_WIDTH 4   // HBM3 channel address width
`endif

`ifndef CMDPR_BANK_WIDTH
    `define CMDPR_BANK_WIDTH 4   // Bank address width (16 banks per channel = 4 bits)
`endif

`ifndef CMDPR_ROW_WIDTH
    `define CMDPR_ROW_WIDTH 15   // Row address width
`endif

`ifndef CMDPR_COL_WIDTH
    `define CMDPR_COL_WIDTH 10   // Column address width
`endif

`ifndef CMDPR_DATA_WIDTH
    `define CMDPR_DATA_WIDTH 64   // Data bus width (supports 32, 64, 128, 256, etc.)
`endif

`ifndef CMDPR_MASK_WIDTH
    `define CMDPR_MASK_WIDTH (`CMDPR_DATA_WIDTH / 8)   // Byte mask width (auto-calculated)
`endif

`ifndef CMDPR_PIPELINE_DEPTH
    `define CMDPR_PIPELINE_DEPTH 2   // Pipeline depth (fixed at 2 for two-stage design)
`endif

`endif // CMDPR_RTL_DEFINES_SVH
