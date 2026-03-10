# ⚡ Vivado Quick Start - File List

## 🎯 **Simple Answer: Which Files?**

You need **14 design files + 1 constraint file** = **15 files total**

---

## 📋 **The 15 Files You Need**

### **CVA6 Core (5 files)**
```
1.  src/cva6_boot_rom.v          ← Boot ROM with UART
2.  src/cva6_data_ram.v          ← 4KB RAM  
3.  src/cva6_min_core.v          ← RISC-V processor
4.  src/cva6_minimal_top.v       ← TOP MODULE ⭐
5.  simple_uart_tx.v             ← UART transmitter
```

### **HBM3 Controller (8 files)**
```
6.  Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/apb_slave/src/apb_slave.sv
7.  Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/axi5_slave/src/axi_slave_interface.sv
8.  Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/cmd_manager/src/command_manager.sv
9.  Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/refresh_controller/src/refresh_ctrl.sv
10. Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/command_processor/src/command_processor.sv
11. Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/dfi/src/hbm3_dfi_interface.sv
12. Vspark_ip_core/LS_HBM3/testbench/hbm3_sv_core_2.0/src/hbm3_phy/src/hbm3_phy.sv
13. Vspark_ip_core/LS_HBM3/rtl_cores/integration/src/hbm3_controller_top.sv
```

### **Constraints (1 file)**
```
14. constraints/cva6_constraints.xdc  ← Pin mappings
```

**Plus 3 include directories** (for SystemVerilog headers)

---

## 🚀 **Easiest Way: Use TCL Script**

### **Option 1: Automatic (RECOMMENDED)**

```bash
# Go to fpga directory
cd fpga

# Run TCL script (creates project automatically)
vivado -mode batch -source create_vivado_project.tcl

# Open the created project
vivado vivado_project/cva6_fpga.xpr &
```

**Done!** All 15 files added automatically! ✅

---

### **Option 2: Manual (If you prefer GUI)**

1. **Open Vivado**

2. **Create Project:**
   - File → Project → New
   - Name: `cva6_fpga`
   - Type: RTL Project
   - Board: PYNQ-Z2

3. **Add Design Sources:**
   - Click "Add Sources" (Alt+A)
   - Select "Add or create design sources"
   - Click "Add Files"
   - Navigate and add all 13 design files (listed above)
   - Click Finish

4. **Add Constraints:**
   - Click "Add Sources" (Alt+A)
   - Select "Add or create constraints"
   - Add: `constraints/cva6_constraints.xdc`
   - Click Finish

5. **Set Top Module:**
   - In Sources window
   - Right-click `cva6_minimal_top`
   - Select "Set as Top"

6. **Add Include Directories:**
   - Settings → Simulation → Verilog Options
   - Add 3 include paths (see detailed guide)

---

## 📊 **Visual File Organization**

```
Your Project
│
├── Design Sources (13 files)
│   ├── ⭐ cva6_minimal_top.v     ← TOP MODULE
│   ├── cva6_min_core.v
│   ├── cva6_boot_rom.v
│   ├── cva6_data_ram.v
│   ├── simple_uart_tx.v
│   └── [8 HBM3 .sv files]
│
└── Constraints (1 file)
    └── cva6_constraints.xdc
```

---

## ✅ **How to Verify**

### **Check in Vivado:**

1. **Open Sources window** (View → Sources)

2. **Count files:**
   - Design Sources: Should show **(13)** or **(14)**
   - Constraints: Should show **(1)**

3. **Check top module:**
   - `cva6_minimal_top` should have ⭐ icon
   - Or be marked as TOP

4. **No errors:**
   - Check Messages window
   - Should say "elaboration successful" or no red errors

---

## 🎯 **What Each File Does**

| File | Purpose |
|------|---------|
| `cva6_minimal_top.v` | **Main file** - connects everything |
| `cva6_min_core.v` | RISC-V processor logic |
| `cva6_boot_rom.v` | Boot code storage |
| `cva6_data_ram.v` | Program data memory |
| `simple_uart_tx.v` | UART transmitter |
| `hbm3_*.sv` (8 files) | Memory controller |
| `cva6_constraints.xdc` | Pin assignments |

---

## 🔧 **If You See Errors**

### **Error: "Cannot find module 'xyz'"**
**Solution:** You forgot to add a file. Check list above.

### **Error: "No top module"**
**Solution:** Right-click `cva6_minimal_top.v` → Set as Top

### **Error: "Cannot find include file"**
**Solution:** Add include directories (see detailed guide)

### **Error: "File not found"**
**Solution:** Check file paths are relative to project location

---

## 📂 **File Locations (Relative Paths)**

If your Vivado project is in `fpga/vivado_project/`, files are at:

```
fpga/vivado_project/          ← Project folder
    └── cva6_fpga.xpr         ← Project file

Files relative to project:
    ../src/*.v                ← CVA6 files
    ../simple_uart_tx.v       ← UART
    ../Vspark_ip_core/...     ← HBM3 files
    ../constraints/*.xdc      ← Constraints
```

**The `..` means "go up one folder"** from vivado_project to cva6_min_version

---

## 💾 **Ready-to-Use TCL Script**

Already created for you at:
```
fpga/create_vivado_project.tcl
```

**Just run it:**
```bash
cd fpga
vivado -mode batch -source create_vivado_project.tcl
```

**Or in Vivado GUI:**
```tcl
Tools → Run Tcl Script → select create_vivado_project.tcl
```

---

## 📱 **Quick Commands**

### **List all required files:**
```bash
# From project root
ls src/*.v simple_uart_tx.v constraints/*.xdc
find Vspark_ip_core -name "*.sv" | grep -E "(apb|axi|cmd|refresh|processor|dfi|phy|controller_top)"
```

### **Count files:**
```bash
# Should show 14 total
ls src/*.v simple_uart_tx.v | wc -l  # 5 files
find Vspark_ip_core -name "*.sv" | wc -l  # More files, but we need 8 specific ones
```

---

## 🎓 **Understanding the Files**

### **What's a "Top Module"?**

Think of it like a main() function in C:

```
cva6_minimal_top.v  ← This is your "main"
    │
    ├─ calls: cva6_min_core (processor)
    ├─ calls: cva6_boot_rom (memory)
    ├─ calls: simple_uart_tx (UART)
    └─ calls: hbm3_controller (HBM3)
```

Vivado starts synthesis from the **top module**.

### **What's a Constraint File (.xdc)?**

It tells Vivado:
- Which FPGA pin connects to which signal
- Timing requirements (clock speed, etc.)
- I/O standards (voltage levels)

**Example:**
```tcl
# This line says: Connect signal "led[0]" to FPGA pin "R14"
set_property PACKAGE_PIN R14 [get_ports {led[0]}]
```

---

## ✅ **Checklist Before Synthesis**

Before clicking "Run Synthesis":

- [ ] All 13 design files added
- [ ] Constraint file added
- [ ] Top module set to `cva6_minimal_top`
- [ ] Include directories added (3 paths)
- [ ] No red errors in Messages window
- [ ] Board set to PYNQ-Z2

**If all checked:** You're ready to synthesize! 🚀

---

## 🎯 **TL;DR - Absolute Minimum**

**Run these 3 commands:**

```bash
cd fpga
vivado -mode batch -source create_vivado_project.tcl
vivado vivado_project/cva6_fpga.xpr &
```

**Then in Vivado GUI:**
- Click "Run Synthesis"
- Wait 20-30 minutes
- Click "Run Implementation"
- Click "Generate Bitstream"

**Done!** 🎉

---

## 📞 **Need Help?**

**See detailed guide:** `VIVADO_FILE_LIST.md`

**Quick reference:** This file (VIVADO_QUICK_START.md)

**TCL script:** `fpga/create_vivado_project.tcl`

---

**You got this!** The TCL script does everything automatically! 💪
