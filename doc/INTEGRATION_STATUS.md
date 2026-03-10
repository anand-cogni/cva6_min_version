# CVA6 + HBM3 Integration Status Report

## 📋 **INTEGRATION STATUS: READY FOR SIMULATION** ✅

All components have been verified and integrated. The system is ready for simulation testing.

---

## 🏗️ **System Architecture**

```
┌─────────────────────────────────────────────────────────────────┐
│                    cva6_minimal_top (Top Module)                 │
├─────────────────────────────────────────────────────────────────┤
│                                                                   │
│  ┌─────────────────────┐        ┌──────────────────────┐        │
│  │ simple_riscv_core   │        │   simple_uart_tx     │        │
│  │  (CVA6 Processor)   │        │  (Debug Interface)   │        │
│  └──────────┬──────────┘        └──────────────────────┘        │
│             │                                                     │
│             │ Instruction/Data Bus                               │
│             │                                                     │
│  ┌──────────▼──────────┐        ┌──────────────────────┐        │
│  │   cva6_boot_rom     │        │   cva6_data_ram      │        │
│  │     (1KB ROM)       │        │      (4KB RAM)       │        │
│  └─────────────────────┘        └──────────────────────┘        │
│                                                                   │
│  ┌────────────────────────────────────────────────────────┐     │
│  │          mem_to_axi_bridge (32-bit → AXI4)             │     │
│  └────────────────────┬───────────────────────────────────┘     │
│                       │ AXI4 Interface                           │
│  ┌────────────────────▼───────────────────────────────────┐     │
│  │              hbm3_controller_top                        │     │
│  │  ┌──────────────────────────────────────────────────┐  │     │
│  │  │  APB Config  │  AXI Slave  │  Command Manager   │  │     │
│  │  ├──────────────┼─────────────┼────────────────────┤  │     │
│  │  │ Refresh Ctrl │  Cmd Proc   │  DFI Interface     │  │     │
│  │  ├──────────────┴─────────────┴────────────────────┤  │     │
│  │  │              HBM3 PHY Layer                      │  │     │
│  │  └──────────────────────────────────────────────────┘  │     │
│  └────────────────────┬───────────────────────────────────┘     │
│                       │ HBM3 Physical Interface                  │
└───────────────────────┼──────────────────────────────────────────┘
                        ▼
              HBM3 DRAM (256MB @ 0x3000_0000)
```

---

## 📍 **Memory Map**

| Address Range              | Size  | Component           | Description              |
|----------------------------|-------|---------------------|--------------------------|
| `0x0000_0000 - 0x0000_03FF`| 1KB   | Boot ROM            | Executable code          |
| `0x1000_0000 - 0x1000_0FFF`| 4KB   | Data RAM            | Stack and data           |
| `0x2000_0000`              | 4B    | LED Register        | LED control              |
| `0x2100_0000 - 0x2100_0007`| 8B    | UART Debug          | Debug output             |
| `0x3000_0000 - 0x3FFF_FFFF`| 256MB | **HBM3 Memory**     | High-bandwidth memory    |
| `0x4000_0000 - 0x4000_0FFF`| 4KB   | **HBM3 Config**     | APB configuration regs   |

---

## 📦 **Components Integrated**

### ✅ **CVA6 Core Components**
- [x] `simple_riscv_core` - RISC-V processor core
- [x] `cva6_boot_rom` - 1KB instruction ROM
- [x] `cva6_data_ram` - 4KB data RAM
- [x] `simple_uart_tx` - UART debug transmitter
- [x] `mem_to_axi_bridge` - Memory to AXI4 protocol converter

### ✅ **HBM3 Controller Components**
- [x] `hbm3_controller_top` - Top-level integration
- [x] `apb_slave` - APB configuration interface
- [x] `axi_slave_interface` - AXI4 data path interface
- [x] `command_manager` - Command queue management
- [x] `command_processor` - Command execution pipeline
- [x] `refresh_ctrl` - DRAM refresh controller
- [x] `hbm3_dfi_interface` - DDR Foundation Interface
- [x] `hbm3_phy` - HBM3 physical layer

---

## 🔌 **Interface Connections**

### **CVA6 → HBM3 Data Path**
```
simple_riscv_core
  └─► mem_to_axi_bridge (converts 32-bit memory ops to AXI4)
      └─► hbm3_controller_top (AXI4 slave interface)
          └─► HBM3 DRAM physical interface
```

### **HBM3 Configuration Path**
```
simple_riscv_core (writes to 0x4000_0000+)
  └─► APB State Machine (in cva6_minimal_top)
      └─► hbm3_controller_top (APB interface)
          └─► Internal CSR registers
```

---

## 📂 **File Structure**

```
Project Root
├── src/
│   ├── cva6_boot_rom.v              # Boot ROM
│   ├── cva6_data_ram.v              # Data RAM
│   ├── cva6_min_core.v              # RISC-V core
│   └── cva6_minimal_top.v           # CVA6 top (Verilog)
├── cva6_minimal_top.v               # System integration top
├── simple_uart_tx.v                 # UART transmitter
├── tb/
│   └── tb_cva6_minimal_top.v        # System testbench
├── sim/
│   └── DEPS.yml                     # ✅ UPDATED - Simulation config
└── Vspark_ip_core/
    └── LS_HBM3/
        ├── rtl_cores/
        │   ├── integration/
        │   │   └── src/
        │   │       └── hbm3_controller_top.sv  # HBM3 top
        │   └── sub_modules/
        │       ├── apb_slave/
        │       ├── axi5_slave/
        │       ├── cmd_manager/
        │       ├── command_processor/
        │       ├── dfi/
        │       └── refresh_controller/
        └── testbench/
            └── hbm3_sv_core_2.0/
                └── src/hbm3_phy/
                    └── src/hbm3_phy.sv         # HBM3 PHY
```

---

## ✅ **Fixed Issues**

### **1. DEPS.yml Updated**
- ✅ Added all HBM3 controller sub-modules
- ✅ Added `simple_uart_tx.v` dependency
- ✅ Created `bench_cva6_hbm3` simulation target
- ✅ Added include directories for DFI interface

### **2. Testbench Updated**
- ✅ Added HBM3 physical interface port declarations
- ✅ Added UART TX port declaration
- ✅ Connected all ports in DUT instantiation

### **3. Integration Verified**
- ✅ Port names match between CVA6 top and HBM3 controller
- ✅ Port widths match (AXI4, APB, HBM3 physical)
- ✅ Memory addressing consistent (0x3000_0000 for HBM3)

---

## 🚀 **Running Simulation**

### **Option 1: Full CVA6 + HBM3 System**
```bash
cd sim
# Run complete system with HBM3
<simulator> -f DEPS.yml bench_cva6_hbm3
```

### **Option 2: Test Individual Components**

#### Test HBM3 Controller Only
```bash
cd sim
<simulator> -f DEPS.yml hbm3_controller
```

#### Test CVA6 Core Only
```bash
cd sim
<simulator> -f DEPS.yml riscv_core
```

### **Simulation Targets Available**

| Target               | Description                           |
|---------------------|---------------------------------------|
| `bench_cva6_hbm3`   | Full system with CVA6 + HBM3         |
| `cva6_hbm3_system`  | DUT only (no testbench)              |
| `hbm3_controller`   | HBM3 controller only                 |
| `riscv_core`        | CVA6 core only                       |
| `uart_tx`           | UART module only                     |

---

## 📊 **Expected Simulation Behavior**

### **Normal Operation:**
1. ✅ CVA6 processor boots from ROM at `0x0000_0000`
2. ✅ LED blinks via writes to `0x2000_0000`
3. ✅ UART debug messages transmitted
4. ✅ HBM3 accessible at `0x3000_0000 - 0x3FFF_FFFF`
5. ✅ HBM3 config registers at `0x4000_0000`

### **Test Pass Criteria:**
- Program Counter (PC) advances beyond `0x10`
- LED toggles at least once during simulation
- Instruction count > 1000
- No simulation errors from HBM3 controller

---

## 🔍 **Monitoring Points**

### **Key Signals to Watch:**
```verilog
// CVA6 Core
dut.u_riscv_core.pc                  // Program counter
dut.u_riscv_core.state               // Core state machine

// HBM3 Integration
dut.hbm3_select                      // HBM3 access indicator
dut.data_addr                        // Memory address bus
dut.axi_awvalid, dut.axi_awready     // AXI write address
dut.axi_arvalid, dut.axi_arready     // AXI read address

// HBM3 Physical Interface
dut.phy_to_dram_hbm_ck_t             // HBM3 clock
dut.phy_to_dram_hbm_ca               // HBM3 command/address
dut.phy_to_dram_io_hbm_dq            // HBM3 data bus
```

---

## ⚠️ **Known Limitations**

1. **Simulation Only**: HBM3 PHY is a behavioral model (not for synthesis)
2. **Single Channel**: Only one HBM3 channel implemented
3. **No ECC**: Error correction not fully implemented
4. **Simple Addressing**: Direct memory mapping without virtual memory

---

## 🎯 **Next Steps**

### **Immediate Actions:**
1. ✅ Integration complete
2. ⏭️ Run simulation with `bench_cva6_hbm3` target
3. ⏭️ Verify HBM3 read/write operations
4. ⏭️ Check AXI protocol compliance
5. ⏭️ Measure HBM3 bandwidth performance

### **Future Enhancements:**
- [ ] Add HBM3 DRAM model for realistic simulation
- [ ] Implement burst transfers for better performance
- [ ] Add performance counters
- [ ] Enable ECC error injection testing
- [ ] Multi-channel HBM3 support

---

## 📝 **Notes**

- **Verilog + SystemVerilog Mixed**: CVA6 uses Verilog, HBM3 uses SystemVerilog
- **Clock Domain**: All running on same clock (125 MHz)
- **Reset**: Active-low reset (`aresetn`) for HBM3, active-high for CVA6 core
- **Include Directories**: DFI interface requires include path for header files

---

## 🆘 **Troubleshooting**

### **Simulation doesn't start:**
- Check all file paths in DEPS.yml are correct
- Verify Vspark_ip_core folder is in project root

### **HBM3 controller errors:**
- Check timing parameters in APB registers
- Verify AXI handshake signals (valid/ready)
- Monitor command queue status (full/empty)

### **CVA6 core hangs:**
- Check if reset is properly released
- Verify boot ROM is loaded correctly
- Check data_valid signal returns for all memory accesses

---

**Generated:** 2025-01-20  
**Integration Version:** v1.0  
**Status:** ✅ Ready for Simulation Testing
