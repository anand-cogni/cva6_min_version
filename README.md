# CVA6 Minimal RISC-V System with HBM3 Memory

**Project:** CVA6 Minimal RISC-V Processor with HBM3 DRAM  
**Version:** 2.0  
**Target:** FPGA with HBM3 Memory  
**Date:** March 2024

---

## Table of Contents

1. [System Overview](#system-overview)
2. [Quick Start - Running Simulation](#quick-start---running-simulation)
3. [Simulation Command Options](#simulation-command-options)
4. [Architecture](#architecture)
5. [Memory Map](#memory-map)
6. [File Structure](#file-structure)
7. [Detailed Simulation Guide](#detailed-simulation-guide)
8. [Testbench Features](#testbench-features)
9. [Expected Simulation Output](#expected-simulation-output)
10. [Troubleshooting](#troubleshooting)
11. [Design Documentation](#design-documentation)

---

## System Overview

### Description
Complete RISC-V RV32I processor system with high-bandwidth HBM3 (High Bandwidth Memory 3) DRAM integration, designed for applications requiring large memory capacity and high memory bandwidth.

### Key Features
- **Processor:** 32-bit RISC-V RV32I core (CVA6-based)
- **Main Memory:** 256MB HBM3 DRAM (0x30000000-0x3FFFFFFF)
- **Boot Memory:** 1KB ROM + 4KB Data RAM
- **Debug Interface:** UART TX at 921.6 kbaud with instruction/data tracing
- **I/O:** Memory-mapped LED register, UART debug, trace control
- **Clock:** 125 MHz system clock
- **HBM3 Interface:** Full physical interface (163 signals)
  - Differential clock (CK_t/CK_c)
  - 6-bit command/address bus
  - 128-bit bidirectional data bus with 9-bit ECC
  - 16-bit data mask

### What's New in Version 2.0
- **HBM3 Memory Controller** - 256MB high-bandwidth DRAM
- **APB Configuration Interface** - Control HBM3 timing parameters
- **Instruction Trace Module** - Real-time execution monitoring via UART
- **Enhanced Testbench** - HBM3 transaction monitoring and verification
- **Comprehensive Documentation** - Full design specification with HBM3 details

---

## Quick Start - Running Simulation

### Prerequisites
```bash
# Required tools:
# - Icarus Verilog (iverilog) or equivalent simulator
# - GTKWave (optional, for waveform viewing)
# - EDA tool (if using eda command)
```

### Three-Step Simulation
```bash
# Step 1: Navigate to testbench directory
cd tb/

# Step 2: Run simulation with Icarus Verilog
iverilog -o sim_cva6 -g2012 tb_cva6_minimal_top.v ../rtl/*.v ../rtl/peripherals/*.v
./sim_cva6

# OR use EDA command (if available)
cd sim/
eda sim bench_cva6_minimal --waves

# Step 3: View waveforms (optional)
gtkwave dumpfile.vcd &
```

### Expected Result
```
TEST START
================================================================================
CVA6 Minimal Top Functional Verification Testbench
  - ROM-based initialization (no force/release)
  - RISC-V register setup via boot code
  - Trace enable via memory-mapped register
  - HBM3 uses default configuration
================================================================================

[Test 1] Reset and System Initialization
[Test 2] Running Application Program and Monitoring

HBM3 Transaction Summary:
  HBM3 Writes on Data Bus:     2
  HBM3 Reads on Data Bus:      2
  Tracer Captured HBM3 Writes: 2
  Tracer Captured HBM3 Reads:  2

*** TEST PASSED ***
TEST END
```

---

## Simulation Command Options

### EDA Command Flags
```bash
# With waveform generation (for debugging and signal analysis)
eda sim bench_cva6_minimal --waves
# Generates: dumpfile.vcd (can be viewed with GTKWave)
# Use this when you need to debug or analyze signals

# Without waveforms (faster simulation, for quick functional verification)
eda sim bench_cva6_minimal
# No waveform file generated, console output only
# Use this for quick pass/fail checks
```

### Waveform Analysis
After running simulation with `--waves`:
```bash
# Open GTKWave to view signals
gtkwave dumpfile.vcd &

# Recommended signals to view:
# - sys_clock, sys_reset_n              (system timing)
# - dut.u_riscv_core.pc                 (program counter)
# - dut.data_req, dut.data_we           (memory requests)
# - dut.data_addr, dut.data_wdata       (memory transactions)
# - dut.phy_to_dram_hbm_ca[5:0]         (HBM3 commands)
# - dut.phy_to_dram_io_hbm_dq[127:0]    (HBM3 data bus)
# - led[3:0], uart_tx                   (outputs)
```

---

## Architecture

### System Block Diagram
```
┌──────────────────────────────────────────────────────────────────────┐
│                     cva6_minimal_top                                 │
│                                                                      │
│  ┌────────────┐     ┌──────────────┐      ┌───────────────────┐    │
│  │   CVA6     │     │  Boot ROM    │      │   Data RAM        │    │
│  │ RISC-V Core│◄───►│   (1KB)      │      │   (4KB)           │    │
│  │ (RV32I)    │     │ 0x00000000   │      │  0x10000000       │    │
│  └─────┬──────┘     └──────────────┘      └───────────────────┘    │
│        │                                                             │
│        │    ┌────────────────┐    ┌─────────────────────────┐      │
│        ├───►│ LED Register   │    │  UART Debug TX          │      │
│        │    │  0x20000000    │    │  0x21000000 (921.6k)    │      │
│        │    └────────────────┘    └─────────────────────────┘      │
│        │                                                             │
│        │    ┌────────────────┐    ┌─────────────────────────┐      │
│        ├───►│ Trace Control  │    │  Instruction Tracer     │      │
│        │    │  0x22000000    │    │  (64-entry FIFO)        │      │
│        │    └────────────────┘    └─────────────────────────┘      │
│        │                                                             │
│        │    ┌──────────────────────────────────────────────┐        │
│        └───►│        HBM3 Memory Controller                │        │
│             │  • AXI5 Data Path (256MB @ 0x30000000)       │        │
│             │  • APB Config (4KB @ 0x40000000)             │        │
│             │  • PHY Interface (163 signals)               │        │
│             └──────────────┬───────────────────────────────┘        │
│                            │                                        │
│              ┌─────────────▼──────────────────┐                    │
│              │   HBM3 Physical Interface      │                    │
│              │  • phy_to_dram_hbm_ck_t/c      │                    │
│              │  • phy_to_dram_hbm_cke         │                    │
│              │  • phy_to_dram_hbm_cs_n        │                    │
│              │  • phy_to_dram_hbm_ca[5:0]     │                    │
│              │  • phy_to_dram_io_hbm_dq[127:0]│                    │
│              │  • phy_to_dram_io_hbm_ecc[8:0] │                    │
│              │  • phy_to_dram_hbm_dm[15:0]    │                    │
│              └────────────────────────────────┘                    │
└──────────────────────────────────────────────────────────────────────┘
                             │
                             ▼
                   ┌──────────────────┐
                   │  External HBM3   │
                   │  DRAM Device     │
                   │  (256MB)         │
                   └──────────────────┘
```

### Key Components
1. **CVA6 Core** - RISC-V RV32I processor with instruction/data interfaces
2. **Memory Subsystem** - Boot ROM (1KB) + Data RAM (4KB) + HBM3 (256MB)
3. **Peripherals** - LED, UART, Trace Control registers
4. **Trace Module** - Captures instruction execution and HBM3 transactions
5. **HBM3 Controller** - AXI5 slave + APB config + Physical interface

---

## Memory Map

| Address Range | Size | Region | Access | Description |
|---------------|------|--------|--------|-------------|
| 0x00000000 - 0x000003FF | 1KB | Boot ROM | RO | Initialization code, executed at reset |
| 0x10000000 - 0x10000FFF | 4KB | Data RAM | RW | Stack, variables, local data |
| 0x20000000 | 4B | LED Register | WO | LED[3:0] output control |
| 0x21000000 | 4B | UART TX Data | WO | UART transmit data register |
| 0x21000004 | 4B | UART Status | RO | UART TX status (bit 0: TX_READY) |
| 0x22000000 | 4B | Trace Control | RW | Bit[0]: Instr trace, Bit[1]: Data trace |
| **0x30000000 - 0x3FFFFFFF** | **256MB** | **HBM3 Memory** | **RW** | **Main system memory via HBM3 controller** |
| 0x40000000 - 0x40000FFF | 4KB | HBM3 Config | RW | HBM3 controller registers (APB interface) |

### HBM3 Configuration Registers (0x40000000 base)
| Offset | Register | Description |
|--------|----------|-------------|
| 0x00 | CTRL_CONFIG | Controller enable, init start, refresh enable |
| 0x04 | CTRL_STATUS | Init complete, training status, busy flags |
| 0x10 | TIMING_TRCD | RAS to CAS delay (default: 18 cycles) |
| 0x14 | TIMING_TRP | Precharge to activate delay (default: 18) |
| 0x18 | TIMING_TRAS | Activate to precharge delay (default: 42) |
| 0x1C | TIMING_TRC | Row cycle time (default: 60) |
| 0x20 | TIMING_TRFC | Refresh cycle time (default: 350) |
| 0x24 | TIMING_WL | Write latency (default: 4) |
| 0x28 | TIMING_RL | Read latency (default: 14) |

---

## File Structure

```
cva6_min_version_write_working/
├── rtl/
│   ├── cva6_minimal_top.v           # Top-level system integration
│   ├── simple_riscv_core.v          # CVA6 RISC-V processor core
│   ├── cva6_boot_rom.v              # 1KB boot ROM with test program
│   ├── cva6_data_ram.v              # 4KB data RAM
│   ├── instruction_tracer.v         # Trace capture and formatting
│   └── peripherals/
│       ├── uart_tx.v                # UART transmitter (921.6 kbaud)
│       └── led_register.v           # LED output register
│
├── integration/src/
│   └── hbm3_controller_top.sv       # HBM3 memory controller
│       ├── AXI5 slave interface (data path)
│       ├── APB slave interface (config)
│       ├── Command manager (ACTIVATE, READ, WRITE, etc.)
│       └── PHY interface (163 HBM3 signals)
│
├── tb/
│   └── tb_cva6_minimal_top.v        # Comprehensive testbench (1026 lines)
│       ├── UART RX monitor (921.6 kbaud decoder)
│       ├── HBM3 transaction monitor
│       ├── Instruction trace assembler
│       └── Automated pass/fail verification
│
├── sim/
│   ├── DEPS.yml                     # Simulation dependencies
│   └── Makefile                     # Simulation commands
│
├── docs/
│   ├── README.md                    # This file
│   └── cva6_minimal_system_with_hbm3_specification.md  # Full design spec
│
└── constraints/
    └── cva6_constraints.xdc         # FPGA pin constraints
```

---

## Detailed Simulation Guide

### Method 1: Using Icarus Verilog (Recommended)

#### Step 1: Setup Environment
```bash
# Check if Icarus Verilog is installed
iverilog -v
# Expected: Icarus Verilog version 10.x or higher

# Navigate to project root
cd /home/smita/cva6_min_version_write_working
```

#### Step 2: Compile Design
```bash
# Navigate to testbench directory
cd tb/

# Compile all RTL and testbench files
iverilog -o sim_cva6 \
  -g2012 \
  -I../rtl \
  -I../rtl/peripherals \
  -I../integration/src \
  tb_cva6_minimal_top.v \
  ../rtl/cva6_minimal_top.v \
  ../rtl/simple_riscv_core.v \
  ../rtl/cva6_boot_rom.v \
  ../rtl/cva6_data_ram.v \
  ../rtl/instruction_tracer.v \
  ../rtl/peripherals/uart_tx.v \
  ../integration/src/hbm3_controller_top.sv

# Check for compilation errors
echo $?  # Should return 0 if successful
```

#### Step 3: Run Simulation
```bash
# Execute simulation
./sim_cva6

# Simulation runs for 100,000 clock cycles (~800 microseconds @ 125 MHz)
# Output is displayed to console
```

#### Step 4: View Waveforms (Optional)
```bash
# Open waveform viewer
gtkwave dumpfile.vcd &

# In GTKWave:
# 1. Click on "tb_cva6_minimal_top" in the SST window
# 2. Select signals to view:
#    - sys_clock, sys_reset_n
#    - dut.u_riscv_core.state (processor state)
#    - dut.data_req, dut.data_we, dut.data_addr (memory transactions)
#    - dut.phy_to_dram_hbm_* (HBM3 physical signals)
#    - led[3:0], uart_tx
```

### Method 2: Using EDA Command (Preferred for Waveforms)

```bash
# Navigate to sim directory
cd sim/

# Run simulation using DEPS.yml configuration WITH waveform generation
eda sim bench_cva6_minimal --waves

# The --waves flag enables waveform dumping for debug analysis

# View simulation output (displays automatically)
# Simulation log is saved in sim/ directory

# View waveforms after simulation completes
gtkwave dumpfile.vcd &

# Alternative: Run without waveforms (faster simulation)
eda sim bench_cva6_minimal

# View simulation log
less sim.log
```

### Method 3: Using Vivado Simulator (XSIM)

```bash
# Create simulation project
cd sim/

# Create file list
cat > filelist.f << EOF
../rtl/cva6_minimal_top.v
../rtl/simple_riscv_core.v
../rtl/cva6_boot_rom.v
../rtl/cva6_data_ram.v
../rtl/instruction_tracer.v
../rtl/peripherals/uart_tx.v
../integration/src/hbm3_controller_top.sv
../tb/tb_cva6_minimal_top.v
EOF

# Compile with xvlog
xvlog -sv -f filelist.f

# Elaborate
xelab tb_cva6_minimal_top -debug typical

# Run simulation
xsim tb_cva6_minimal_top -runall
```

---

## Testbench Features

### Automatic Verification
The testbench (`tb_cva6_minimal_top.v`) provides comprehensive automated verification:

#### 1. **Boot ROM Program Loading**
- Loads test program at time 0 (before processor starts)
- Program performs HBM3 write/read transactions
- Includes UART test sequences

#### 2. **UART RX Monitor**
- Decodes UART TX output at 921.6 kbaud
- Assembles complete trace lines from byte stream
- Displays formatted instruction and HBM3 traces

#### 3. **HBM3 Transaction Monitor**
- Monitors data bus for HBM3 address range (0x30000000-0x3FFFFFFF)
- Tracks write transactions (stores address/data)
- Verifies read data matches previously written data
- Counts total HBM3 write/read operations

#### 4. **Instruction Trace Monitoring**
- Captures CPU instruction execution (PC, opcode)
- Logs first 1024 instructions
- Includes RISC-V instruction decoder

#### 5. **Pass/Fail Criteria**
- ✅ PASS: All HBM3 reads return expected data
- ✅ PASS: UART transactions complete successfully
- ❌ FAIL: Data mismatches on HBM3 reads
- ❌ FAIL: System hangs (no progress after timeout)

---

## Expected Simulation Output

### Console Output
```
TEST START
================================================================================
CVA6 Minimal Top Functional Verification Testbench
  - ROM-based initialization (no force/release)
  - RISC-V register setup via boot code
  - Trace enable via memory-mapped register
  - HBM3 uses default configuration
================================================================================

================================================================================
Loading Test Program into Boot ROM
================================================================================
Memory Map:
  Boot ROM:      0x00000000 - 0x000003FF
  Data RAM:      0x10000000 - 0x10000FFF
  LED Register:  0x20000000
  UART:          0x21000000 - 0x21000007
  Trace Control: 0x22000000
  HBM3 Memory:   0x30000000 - 0x3FFFFFFF
  HBM3 Config:   0x40000000 - 0x40000FFF

  Boot code section: HBM3-Only Trace Configuration
  Adding UART Write Test Case:
    - Writing ASCII string: 'UART_TEST_123'
  Adding UART Read Test Case:
    - Reading from UART status register (offset 4)

Total ROM instructions used: 74 / 256
Boot program loaded successfully!
================================================================================

EXPECTED UART OUTPUT:
  - 'S' (Start marker from application)
  - HBM3_WR: ADDR=0x30000000 DATA=0xDEADBEEF
  - HBM3_WR: ADDR=0x30000004 DATA=0x12345678
  - HBM3_RD: ADDR=0x30000000 DATA=0xDEADBEEF
  - HBM3_RD: ADDR=0x30000004 DATA=0x12345678
  - 'D' (Done marker), then program halts

NOTE: Only HBM3 traces will appear (no instruction traces)
================================================================================

[Test 1] Reset and System Initialization

[Test 2] Running Application Program and Monitoring
  Boot code will:
    1. Initialize SP, GP, TP registers
    2. Enable instruction tracing
    3. Execute application code

================================================================================
LOG: 2584000 : INFO : HBM3_MONITOR : HBM3 WRITE #1 DETECTED
LOG: 2584000 : INFO : HBM3_MONITOR : dut.data_addr : expected_value: N/A actual_value: 0x30000000
LOG: 2584000 : INFO : HBM3_MONITOR : dut.data_wdata : expected_value: N/A actual_value: 0xDEADBEEF
================================================================================

>>> TRACER CAPTURED HBM3 WRITE #1 @ 2584000 (FIFO=1/64)

================================================================================
LOG: 2596000 : INFO : HBM3_MONITOR : HBM3 WRITE #2 DETECTED
LOG: 2596000 : INFO : HBM3_MONITOR : dut.data_addr : expected_value: N/A actual_value: 0x30000004
LOG: 2596000 : INFO : HBM3_MONITOR : dut.data_wdata : expected_value: N/A actual_value: 0x12345678
================================================================================

>>> TRACER CAPTURED HBM3 WRITE #2 @ 2596000 (FIFO=2/64)

================================================================================
LOG: 2608000 : INFO : HBM3_MONITOR : HBM3 READ #1 REQUEST DETECTED
LOG: 2608000 : INFO : HBM3_MONITOR : dut.data_addr : expected_value: N/A actual_value: 0x30000000
================================================================================

================================================================================
LOG: 2612000 : INFO : HBM3_MONITOR : HBM3 READ DATA VALID - MATCH!
LOG: 2612000 : INFO : HBM3_MONITOR : dut.data_rdata : expected_value: 0xDEADBEEF actual_value: 0xDEADBEEF
================================================================================

>>> TRACER CAPTURED HBM3 READ #1 @ 2612000 (FIFO=3/64)

[Test Summary]
================================================================================
Total tests run:   2
Total errors:      0
Total instructions traced: 156
Total UART bytes received: 18

UART Transaction Summary:
  UART Reads on Data Bus:       1

HBM3 Transaction Summary:
  HBM3 Writes on Data Bus:     2
  HBM3 Reads on Data Bus:      2
  Tracer Captured HBM3 Writes: 2
  Tracer Captured HBM3 Reads:  2

*** TEST PASSED ***
================================================================================
TEST END
```

### Generated Files
- **dumpfile.vcd** - Waveform database (can be viewed with GTKWave)
- **sim.log** - Full simulation log (if using EDA tool)

---

## Troubleshooting

### Common Issues and Solutions

#### Problem: Compilation Errors
```
Error: Cannot find file 'hbm3_controller_top.sv'
```
**Solution:**
```bash
# Ensure you're compiling from the correct directory
cd tb/
# Verify file paths in compile command
ls -la ../integration/src/hbm3_controller_top.sv
```

#### Problem: Simulation Hangs
```
Simulation appears frozen, no output
```
**Solution:**
```bash
# Check if processor is stuck in reset
# In waveform viewer, check sys_reset_n releases after ~80ns

# Check boot ROM is loaded correctly
# Verify ROM[0] != 0x00000000
```

#### Problem: HBM3 Transactions Not Detected
```
HBM3 Transaction Summary:
  HBM3 Writes on Data Bus: 0
  HBM3 Reads on Data Bus: 0
```
**Solution:**
- Check trace control register is configured correctly (bit[1]=1 for HBM3 tracing)
- Verify processor executes HBM3 write/read instructions
- Check address decode logic routes 0x3xxxxxxx to HBM3 controller

#### Problem: UART Output Garbled
```
UART bytes received but cannot decode traces
```
**Solution:**
- Verify UART baud rate matches (testbench: 921,600 bps)
- Check clock frequency is 125 MHz
- Ensure CLKS_PER_BIT calculation is correct (~136 cycles)

#### Problem: Waveform File Too Large
```
dumpfile.vcd is several GB in size
```
**Solution:**
```verilog
// In testbench, limit dump depth
$dumpvars(1, tb_cva6_minimal_top);  // Only top-level signals
// OR
$dumpvars(2, tb_cva6_minimal_top);  // Top + one level down
```

#### Problem: No Waveform File Generated
```
eda sim bench_cva6_minimal completed but no dumpfile.vcd
```
**Solution:**
```bash
# Make sure to use --waves flag
eda sim bench_cva6_minimal --waves

# The --waves flag is REQUIRED to generate waveform dumps
# Without it, only console output is produced
```

---

## Design Documentation

### Full Design Specification
For complete technical details including:
- Detailed architecture description
- Signal-level interface specifications
- Register maps with bit fields
- Timing diagrams
- Integration guidelines
- Debug procedures

**See:** `docs/cva6_minimal_system_with_hbm3_specification.md`

### Key Documentation Sections
- **Section 3:** Functional Description (architecture, memory map, HBM3 controller)
- **Section 4:** Interface Description (all 163 HBM3 signals detailed)
- **Section 6:** Register Description (complete register maps)
- **Section 7:** Design Guidelines (integration checklist, optimization)
- **Section 8:** Timing Diagrams (reset, HBM3 read/write transactions)

---

## Quick Reference

### Simulation Commands
```bash
# Quick simulation with EDA tool (RECOMMENDED)
cd sim/ && eda sim bench_cva6_minimal --waves

# Quick simulation with Icarus Verilog (alternative)
cd tb/ && iverilog -o sim_cva6 -g2012 tb_cva6_minimal_top.v ../rtl/*.v ../rtl/peripherals/*.v && ./sim_cva6

# View waveforms after simulation
gtkwave dumpfile.vcd &

# Clean simulation artifacts
rm -f sim_cva6 dumpfile.vcd sim.log *.vcd
```

### Key Memory Addresses
```c
#define LED_BASE        0x20000000  // LED[3:0] output
#define UART_TX         0x21000000  // UART transmit data
#define UART_STATUS     0x21000004  // UART status (bit 0: TX_READY)
#define TRACE_CTRL      0x22000000  // Bit[0]: Instr, Bit[1]: Data
#define HBM3_MEM_BASE   0x30000000  // 256MB HBM3 DRAM
#define HBM3_CFG_BASE   0x40000000  // HBM3 controller config
```

### Boot Program Flow
```
1. Configure Trace Control (0x22000000 = 0x2) - Enable HBM3 data tracing
2. Write 'S' to UART (Start marker)
3. Configure HBM3 controller via APB
4. Initialize HBM3 memory base address (0x30000000)
5. HBM3 Write #1: 0xDEADBEEF -> 0x30000000
6. HBM3 Write #2: 0x12345678 -> 0x30000004
7. HBM3 Read #1: Read from 0x30000000 (expect 0xDEADBEEF)
8. HBM3 Read #2: Read from 0x30000004 (expect 0x12345678)
9. Write 'D' to UART (Done marker)
10. HALT (infinite loop)
```

---

## Performance Metrics

### Simulation Performance
- **Clock Frequency:** 125 MHz (8ns period)
- **Simulation Duration:** ~800 microseconds (100,000 cycles)
- **Instructions Executed:** ~200-300 instructions
- **HBM3 Transactions:** 2 writes + 2 reads
- **UART Bytes:** 15-20 bytes transmitted

### HBM3 Timing (Default Configuration)
- **Write Latency (WL):** 4 clock cycles
- **Read Latency (RL):** 14 clock cycles
- **tRCD (RAS to CAS delay):** 18 cycles
- **tRP (Precharge delay):** 18 cycles
- **tRFC (Refresh cycle):** 350 cycles

---

## Contributing

For questions, issues, or contributions:
- Review the full design specification in `docs/`
- Check testbench source for detailed monitoring examples
- See HBM3 controller documentation for timing parameters

---

## Revision History

| Version | Date | Changes |
|---------|------|---------|
| 2.0 | Mar 2024 | Added HBM3 memory controller integration |
|  |  | Added instruction tracer with UART output |
|  |  | Enhanced testbench with HBM3 monitoring |
|  |  | Added comprehensive design specification |
| 1.0 | Feb 2024 | Initial release - Basic RISC-V core with LED demo |

---

**End of README**

For detailed technical specification including HBM3 physical interface, register maps, and timing diagrams, see:
**`docs/cva6_minimal_system_with_hbm3_specification.md`**
