# CVA6 Minimal RISC-V System - Complete Documentation

**Project:** CVA6 Minimal RISC-V Processor  
**Version:** 1.0  
**Target:** PYNQ Z2 FPGA Board  
**Date:** February 2026

---

## Table of Contents

1. [System Overview](#system-overview)
2. [Architecture](#architecture)
3. [File Structure](#file-structure)
4. [Memory Map](#memory-map)
5. [RTL Modules](#rtl-modules)
6. [Testbench](#testbench)
7. [Simulation Guide](#simulation-guide)
8. [FPGA Implementation](#fpga-implementation)

---

## System Overview

### Description
Minimal RISC-V RV32I processor system executing LED blink program from boot ROM. Designed for educational purposes and FPGA deployment.

### Key Features
- **Processor:** 32-bit RISC-V RV32I core
- **Memory:** 1KB boot ROM + 4KB data RAM
- **I/O:** Memory-mapped LED register
- **Clock:** 125 MHz system clock
- **Target Board:** PYNQ Z2 (Zynq-7000)

### Supported Instructions
- `LUI` - Load Upper Immediate
- `ADDI` - Add Immediate  
- `SW` - Store Word
- `BNE` - Branch Not Equal
- `JAL` - Jump And Link

---

## Architecture

### Block Diagram
```
┌─────────────────────────────────────────────────────────┐
│                  cva6_minimal_top                       │
│                                                         │
│  ┌──────────────┐    ┌─────────────┐   ┌────────────┐  │
│  │ simple_riscv │◄──►│ cva6_boot   │   │ cva6_data  │  │
│  │    _core     │    │   _rom      │   │   _ram     │  │
│  │ (Processor)  │    │   (1KB)     │   │   (4KB)    │  │
│  └──────┬───────┘    └─────────────┘   └────────────┘  │
│         │                                               │
│         └──────────► LED Register (0x20000000)          │
│                                                         │
└─────────────────────────────────────────────────────────┘
         │                           │
    sys_clock (125MHz)           led[3:0]
```

### Pipeline Stages
1. **FETCH** - Fetch instruction from ROM
2. **DECODE** - Decode instruction and read registers
3. **EXECUTE** - Execute ALU operation or compute address
4. **MEMORY** - Access data memory (if needed)
5. **WRITEBACK** - Implicit in execute stage

---

## File Structure

```
cva6_min_version/
├── src/
│   ├── cva6_minimal_top.v       # Top-level system (178 lines)
│   ├── cva6_min_core.v          # RISC-V processor core (215 lines)
│   ├── cva6_boot_rom.v          # Boot ROM with program (84 lines)
│   └── cva6_data_ram.v          # 4KB data memory (80 lines)
├── tb/
│   └── tb_cva6_minimal_top.v    # System testbench (360+ lines)
├── sim/
│   └── DEPS.yml                 # Simulation configuration
├── constraints/
│   └── cva6_constraints.xdc     # PYNQ Z2 pin constraints
└── doc/
    ├── README.md                # Project documentation
    └── SYSTEM_DOCUMENTATION.md  # This file
```

---

## Memory Map

| Address Range            | Size | Device      | Access | Description           |
|--------------------------|------|-------------|--------|-----------------------|
| `0x0000_0000 - 0x0000_03FF` | 1KB  | Boot ROM    | R      | Instruction memory    |
| `0x1000_0000 - 0x1000_0FFF` | 4KB  | Data RAM    | R/W    | Stack and data        |
| `0x2000_0000`            | 4B   | LED Reg     | R/W    | LED control register  |

---

## RTL Modules

### 1. cva6_minimal_top.v
**Purpose:** Top-level system integration  
**Key Components:**
- Clock and reset management
- Address decoder for memory/IO
- Module instantiations

**Interfaces:**
```verilog
input  wire       sys_clock      // 125 MHz
input  wire       sys_reset_n    // Active-low reset
output wire [3:0] led            // LED outputs
```

### 2. cva6_min_core.v
**Purpose:** RISC-V RV32I processor core  
**Features:**
- 32 x 32-bit register file
- 5-stage FSM pipeline
- Instruction decoder
- ALU for arithmetic/logic operations

**Key Signals:**
```verilog
// Instruction memory
output [31:0] instr_addr
input  [31:0] instr_data

// Data memory
output        data_req, data_we
output [31:0] data_addr, data_wdata
input  [31:0] data_rdata
```

### 3. cva6_boot_rom.v
**Purpose:** 1KB boot ROM with LED blink program  
**Contains:** Pre-compiled RISC-V machine code  
**Program:** LED blinks at ~1 Hz

**ROM Contents:**
- 15 instructions (60 bytes used of 1KB)
- Initializes at simulation/synthesis
- Read-only synchronous memory

### 4. cva6_data_ram.v
**Purpose:** 4KB data RAM  
**Features:**
- Byte-addressable (byte enable support)
- Synchronous read/write
- Used for stack and program data

---

## Testbench

### tb_cva6_minimal_top.v

**Simulation Duration:** 5ms (5000 µs)  
**Clock Period:** 8ns (125 MHz)

**Key Features:**
- **Pipeline Monitoring** - Displays FETCH/DECODE/EXECUTE/MEMORY states
- **Instruction Trace** - Shows first 50 instructions in detail
- **Register Tracking** - Monitors x1-x10 register changes
- **Memory Monitoring** - Logs all read/write operations
- **LED Tracking** - Counts LED toggle events
- **Pass/Fail** - Automated verification

**Pass Criteria:**
1. LED toggles at least once
2. Program counter advances beyond 0x10
3. More than 1000 instructions executed

**Example Output:**
```
FETCH (PC=0x0)
DECODE (Instr=0x10001137)
  → LUI (rd=x2, imm=0x10001000)
EXECUTE
  → Writing x2 = 0x10001000
REGISTER UPDATE: x2 = 0x10001000

MEMORY WRITE: LED Register @ 0x20000000 <-- 0x1 (LED[0]=1)
>>> LED Toggle #1

TEST PASSED
Total Clock Cycles: 625017
Instructions Executed: 208339
```

---

## Simulation Guide

### Running Simulation

**Step 1:** Navigate to sim directory
```bash
cd cva6_min_version/sim
```

**Step 2:** Run simulation
```bash
eda sim bench_cva6_minimal
```

**Step 3:** Check results
- Look for `TEST PASSED` message
- Review `sim.log` for detailed trace
- Check LED toggle count (expect ≥1 in 5ms)

### Expected Results
```
Total Clock Cycles: ~625,000
Instructions Executed: ~208,000
LED Toggle Events: 1
Final PC: 0x18
Status: TEST PASSED
```

### Available Targets
| Target             | Use Case                    |
|--------------------|-----------------------------|
| bench_cva6_minimal | Full system test (default)  |
| cva6_system        | DUT only                    |
| boot_rom           | ROM module test             |
| data_ram           | RAM module test             |
| riscv_core         | Core standalone test        |

---

## FPGA Implementation

### Target Board
**PYNQ Z2** - Zynq-7000 (xc7z020clg400-1)

### Pin Assignments
See `constraints/cva6_constraints.xdc`

**Key Pins:**
- `sys_clock` - 125 MHz input clock
- `sys_reset_n` - Push button (active-low)
- `led[0]` - LD0 (program output)
- `led[1]` - LD1 (aux)
- `led[2]` - LD2 (system running indicator)
- `led[3]` - LD3 (instruction fetch activity)

### Synthesis Steps
1. Open Vivado
2. Create new project targeting PYNQ Z2
3. Add all files from `src/`
4. Add constraints from `constraints/`
5. Set `cva6_minimal_top` as top module
6. Run synthesis and implementation
7. Generate bitstream
8. Program FPGA

### Expected Behavior
- LED[0] blinks at ~1 Hz (program output)
- LED[2] stays ON (system running)
- LED[3] blinks rapidly (instruction activity)

---

## Boot Program

### LED Blink Program Flow
```
1. Initialize: SP = 0x10001000
2. Loop Start: Load LED address (0x20000000)
3. LED ON: Write 1 to LED register
4. Delay: ~125M cycles (1 second @ 125MHz)
5. LED OFF: Write 0 to LED register
6. Delay: ~125M cycles
7. Jump to Loop Start
```

### Assembly Equivalent
```asm
_start:
    lui   sp, 0x10001      # SP = 0x10001000
loop:
    lui   t0, 0x20000      # t0 = LED base addr
    addi  t1, zero, 1      # t1 = 1
    sw    t1, 0(t0)        # LED = 1 (ON)
    li    a0, 125000000    # Load delay count
delay1:
    addi  a0, a0, -1       # Decrement
    bnez  a0, delay1       # Loop while a0 != 0
    addi  t1, zero, 0      # t1 = 0
    sw    t1, 0(t0)        # LED = 0 (OFF)
    li    a0, 125000000    # Load delay count
delay2:
    addi  a0, a0, -1       # Decrement
    bnez  a0, delay2       # Loop while a0 != 0
    jal   zero, loop       # Jump to loop
```

---

## Technical Specifications

### Processor Core
- **Architecture:** RISC-V RV32I
- **Data Width:** 32 bits
- **Address Width:** 32 bits
- **Register File:** 32 × 32-bit (x0 = 0)
- **Pipeline:** 5-stage FSM
- **Supported Instructions:** 5 (LUI, ADDI, SW, BNE, JAL)

### Memory Subsystem
- **Boot ROM:** 1KB (256 × 32-bit words)
- **Data RAM:** 4KB (1024 × 32-bit words)
- **Access Time:** Single cycle
- **ROM Contents:** LED blink program (15 instructions)

### System Timing
- **Clock Frequency:** 125 MHz
- **Clock Period:** 8 ns
- **Reset:** Synchronous, active-low
- **LED Blink Rate:** ~1 Hz

### Resource Utilization (Estimated)
- **LUTs:** ~500-800
- **FFs:** ~200-400
- **BRAMs:** 2 (1KB ROM + 4KB RAM)
- **IOs:** 6 (clock, reset, 4 LEDs)

---

## Troubleshooting

### Simulation Issues

**Problem:** File not found errors  
**Solution:** Ensure you're in `sim/` directory when running `eda sim`

**Problem:** No LED toggles  
**Solution:** Check reset is properly released and processor is executing

**Problem:** PC stuck at 0x0  
**Solution:** Verify reset polarity (should be active-low)

### FPGA Issues

**Problem:** LEDs don't blink  
**Solution:** 
- Verify bitstream programming
- Check clock source
- Ensure reset button released

**Problem:** Wrong blink rate  
**Solution:** Verify clock frequency is 125 MHz

---

## Quick Reference

### Common Commands
```bash
# Run simulation
cd sim && eda sim bench_cva6_minimal

# View RTL files
ls -la src/

# Check testbench
cat tb/tb_cva6_minimal_top.v

# View documentation
cat doc/README.md
cat doc/SYSTEM_DOCUMENTATION.md
```

### Key Files
- **Top Module:** `src/cva6_minimal_top.v`
- **Processor Core:** `src/cva6_min_core.v`
- **Testbench:** `tb/tb_cva6_minimal_top.v`
- **Simulation Config:** `sim/DEPS.yml`
- **Constraints:** `constraints/cva6_constraints.xdc`

---

## Revision History

| Version | Date    | Changes                           |
|---------|---------|-----------------------------------|
| 1.0     | Feb 2026| Initial release                   |
|         |         | - Basic RISC-V core               |
|         |         | - LED blink demo                  |
|         |         | - Comprehensive testbench         |

---

**End of Documentation**
