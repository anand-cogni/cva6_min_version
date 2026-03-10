// ==============================================================================
// DFI RTL Defines Header File
// ==============================================================================
// Description: Centralized parameter definitions and type definitions for
//              HBM3 DFI5 Interface modules
// Compliance: JEDEC JESD238B.01 (HBM3), DFI 5.0
// ==============================================================================

`ifndef DFI_RTL_DEFINES_SVH
`define DFI_RTL_DEFINES_SVH

// ==============================================================================
// HBM3 Channel Configuration Parameters
// ==============================================================================
`ifndef DFI_RTL_NUM_CHANNELS
    `define DFI_RTL_NUM_CHANNELS 16
`endif

`ifndef DFI_RTL_NUM_BANKS_PER_CHANNEL
    `define DFI_RTL_NUM_BANKS_PER_CHANNEL 16
`endif

`ifndef DFI_RTL_NUM_BANK_GROUPS
    `define DFI_RTL_NUM_BANK_GROUPS 4
`endif

// ==============================================================================
// Data Width Configuration Parameters
// ==============================================================================
`ifndef DFI_RTL_DATA_WIDTH
    //`define DFI_RTL_DATA_WIDTH 128
    `define DFI_RTL_DATA_WIDTH 64
`endif

`ifndef DFI_RTL_ENABLE_ECC
    `define DFI_RTL_ENABLE_ECC 1
`endif

// DFI Data Width based on DATA_WIDTH
// 32-bit -> 39 bits with ECC (32 + 7)
// 64-bit -> 72 bits with ECC (64 + 8)
// 128-bit -> 137 bits with ECC (128 + 9)
`ifndef DFI_RTL_PHY_DATA_WIDTH
    `define DFI_RTL_PHY_DATA_WIDTH ((`DFI_RTL_DATA_WIDTH == 32) ? 39 : \
                                    (`DFI_RTL_DATA_WIDTH == 64) ? 72 : 137)
`endif

`ifndef DFI_RTL_PHY_MASK_WIDTH
    `define DFI_RTL_PHY_MASK_WIDTH (`DFI_RTL_PHY_DATA_WIDTH / 8)
`endif

`ifndef DFI_RTL_MASK_WIDTH
    `define DFI_RTL_MASK_WIDTH (`DFI_RTL_DATA_WIDTH / 8)
`endif

// ==============================================================================
// Buffer Depth Parameters
// ==============================================================================
`ifndef DFI_RTL_CMD_QUEUE_DEPTH
    `define DFI_RTL_CMD_QUEUE_DEPTH 8
`endif

// ==============================================================================
// Latency Configuration Parameters
// ==============================================================================
`ifndef DFI_RTL_MAX_READ_LATENCY
    `define DFI_RTL_MAX_READ_LATENCY 32  // Maximum CL for array sizing
`endif

`ifndef DFI_RTL_DEFAULT_READ_LATENCY
    `define DFI_RTL_DEFAULT_READ_LATENCY 16  // Default CL if not specified
`endif

`ifndef DFI_RTL_DEFAULT_WRITE_LATENCY
    `define DFI_RTL_DEFAULT_WRITE_LATENCY 8  // Default CWL if not specified
`endif

// ==============================================================================
// Address Width Parameters (Derived)
// ==============================================================================
`ifndef DFI_RTL_CHANNEL_WIDTH
    `define DFI_RTL_CHANNEL_WIDTH $clog2(`DFI_RTL_NUM_CHANNELS)
`endif

`ifndef DFI_RTL_BANK_WIDTH
    `define DFI_RTL_BANK_WIDTH $clog2(`DFI_RTL_NUM_BANKS_PER_CHANNEL)
`endif

`ifndef DFI_RTL_ROW_WIDTH
    `define DFI_RTL_ROW_WIDTH 15  // HBM3 row address width
`endif

`ifndef DFI_RTL_COLUMN_WIDTH
    `define DFI_RTL_COLUMN_WIDTH 10  // HBM3 column address width
`endif

`ifndef DFI_RTL_ADDRESS_WIDTH
    `define DFI_RTL_ADDRESS_WIDTH 18  // DFI5 address bus width
`endif

// ==============================================================================
// Command Type Definitions
// ==============================================================================
`ifndef DFI_RTL_CMD_NOP
    `define DFI_RTL_CMD_NOP    4'h0
`endif

`ifndef DFI_RTL_CMD_ACT
    `define DFI_RTL_CMD_ACT    4'h1
`endif

`ifndef DFI_RTL_CMD_RD
    `define DFI_RTL_CMD_RD     4'h2
`endif

`ifndef DFI_RTL_CMD_WR
    `define DFI_RTL_CMD_WR     4'h3
`endif

`ifndef DFI_RTL_CMD_PRE
    `define DFI_RTL_CMD_PRE    4'h4
`endif

`ifndef DFI_RTL_CMD_REFab
    `define DFI_RTL_CMD_REFab  4'h5
`endif

`ifndef DFI_RTL_CMD_REFpb
    `define DFI_RTL_CMD_REFpb  4'h6
`endif

`ifndef DFI_RTL_CMD_TYPE_WIDTH
    `define DFI_RTL_CMD_TYPE_WIDTH 4
`endif

// ==============================================================================
// Bank State Definitions
// ==============================================================================
`ifndef DFI_RTL_BANK_IDLE
    `define DFI_RTL_BANK_IDLE        3'h0
`endif

`ifndef DFI_RTL_BANK_ACTIVATING
    `define DFI_RTL_BANK_ACTIVATING  3'h1
`endif

`ifndef DFI_RTL_BANK_ACTIVE
    `define DFI_RTL_BANK_ACTIVE      3'h2
`endif

`ifndef DFI_RTL_BANK_READING
    `define DFI_RTL_BANK_READING     3'h3
`endif

`ifndef DFI_RTL_BANK_WRITING
    `define DFI_RTL_BANK_WRITING     3'h4
`endif

`ifndef DFI_RTL_BANK_PRECHARGING
    `define DFI_RTL_BANK_PRECHARGING 3'h5
`endif

`ifndef DFI_RTL_BANK_REFRESHING
    `define DFI_RTL_BANK_REFRESHING  3'h6
`endif

`ifndef DFI_RTL_BANK_STATE_WIDTH
    `define DFI_RTL_BANK_STATE_WIDTH 3
`endif

// ==============================================================================
// Timing Parameter Widths
// ==============================================================================
`ifndef DFI_RTL_TIMING_COUNTER_WIDTH
    `define DFI_RTL_TIMING_COUNTER_WIDTH 8  // Width for tRCD, tRAS, tRP, tRC counters
`endif

`ifndef DFI_RTL_TIMING_COUNTER_WIDE_WIDTH
    `define DFI_RTL_TIMING_COUNTER_WIDE_WIDTH 16  // Width for tRFC (wider counter)
`endif

// ==============================================================================
// ID and Burst Length Widths
// ==============================================================================
`ifndef DFI_RTL_CMD_ID_WIDTH
    `define DFI_RTL_CMD_ID_WIDTH 8
`endif

`ifndef DFI_RTL_BURST_LEN_WIDTH
    `define DFI_RTL_BURST_LEN_WIDTH 8
`endif

// ==============================================================================
// ECC Configuration
// ==============================================================================
`ifndef DFI_RTL_ECC_CHECK_BITS_WIDTH
    `define DFI_RTL_ECC_CHECK_BITS_WIDTH 9  // For 128-bit data
`endif

`ifndef DFI_RTL_ECC_SYNDROME_WIDTH
    `define DFI_RTL_ECC_SYNDROME_WIDTH 9
`endif

`ifndef DFI_RTL_ECC_ERROR_WIDTH
    `define DFI_RTL_ECC_ERROR_WIDTH 2  // 2'b00: No error, 2'b01: Corrected, 2'b10: Uncorrectable
`endif

// ==============================================================================
// DFI Control Signal Default Values
// ==============================================================================
`ifndef DFI_RTL_CS_IDLE
    `define DFI_RTL_CS_IDLE 1'b1  // Chip select idle (inactive high)
`endif

`ifndef DFI_RTL_RAS_IDLE
    `define DFI_RTL_RAS_IDLE 1'b1  // RAS idle (inactive high)
`endif

`ifndef DFI_RTL_CAS_IDLE
    `define DFI_RTL_CAS_IDLE 1'b1  // CAS idle (inactive high)
`endif

`ifndef DFI_RTL_WE_IDLE
    `define DFI_RTL_WE_IDLE 1'b1  // WE idle (inactive high)
`endif

`ifndef DFI_RTL_ACT_IDLE
    `define DFI_RTL_ACT_IDLE 1'b1  // ACT idle (inactive high)
`endif

`ifndef DFI_RTL_CKE_ACTIVE
    `define DFI_RTL_CKE_ACTIVE 1'b1  // CKE active (clock enable)
`endif

// ==============================================================================
// Bank Group Width
// ==============================================================================
`ifndef DFI_RTL_BANK_GROUP_WIDTH
    `define DFI_RTL_BANK_GROUP_WIDTH 2
`endif

// ==============================================================================
// Queue Level Counter Width
// ==============================================================================
`ifndef DFI_RTL_QUEUE_LEVEL_WIDTH
    `define DFI_RTL_QUEUE_LEVEL_WIDTH ($clog2(`DFI_RTL_CMD_QUEUE_DEPTH) + 1)
`endif

`endif // DFI_RTL_DEFINES_SVH
