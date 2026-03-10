# 📋 Vivado File List - Complete Guide

## Files Needed for FPGA Synthesis

---

## 🎯 **Quick Answer**

You need to add **3 types of files** to Vivado:

1. **RTL Source Files** (.v, .sv) - Your design
2. **Constraint File** (.xdc) - Pin mappings and timing
3. **Top-Level Module** - Main file that connects everything

---

## 📁 **Complete File List for CVA6 + HBM3 Project**

### **1. CVA6 Core Files (Verilog)**

```
📂 src/
├── cva6_boot_rom.v         ← Boot ROM with UART code
├── cva6_data_ram.v         ← Data RAM (4KB)
├── cva6_min_core.v         ← RISC-V processor core
└── cva6_minimal_top.v      ← Top-level integration
```

### **2. UART Module**

```
📂 (root directory)
└── simple_uart_tx.v        ← UART transmitter
```

### **3. HBM3 Controller Files (SystemVerilog)**

```
📂 Vspark_ip_core/LS_HBM3/rtl_cores/

├── integration/src/
│   └── hbm3_controller_top.sv         ← HBM3 top-level

├── sub_modules/apb_slave/src/
│   └── apb_slave.sv                   ← APB interface

├── sub_modules/axi5_slave/src/
│   └── axi_slave_interface.sv         ← AXI interface

├── sub_modules/cmd_manager/src/
│   └── command_manager.sv             ← Command manager

├── sub_modules/refresh_controller/src/
│   └── refresh_ctrl.sv                ← Refresh controller

├── sub_modules/command_processor/src/
│   └── command_processor.sv           ← Command processor

└── sub_modules/dfi/src/
    └── hbm3_dfi_interface.sv          ← DFI interface
```

### **4. HBM3 PHY (Optional - for interface)**

```
📂 Vspark_ip_core/LS_HBM3/testbench/hbm3_sv_core_2.0/src/hbm3_phy/src/
└── hbm3_phy.sv                        ← PHY layer (signals only)
```

### **5. Constraint File**

```
📂 constraints/
└── cva6_constraints.xdc               ← Pin assignments & timing
```

### **6. Include Directories**

You also need to add these as **include directories** for SystemVerilog headers:

```
📂 Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/dfi/src/
📂 Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/refresh_controller/src/
📂 Vspark_ip_core/LS_HBM3/testbench/hbm3_sv_core_2.0/src/hbm3_phy/src/
```

---

## 🚀 **How to Add Files to Vivado**

### **Method 1: Using Vivado GUI**

#### **Step 1: Create New Project**

1. Open Vivado
2. Click **"Create Project"**
3. Click **"Next"**
4. Enter project name: `cva6_fpga`
5. Choose location: `fpga/vivado_project/`
6. Click **"Next"**
7. Select **"RTL Project"**
8. Check **"Do not specify sources at this time"** (we'll add them next)
9. Click **"Next"**

#### **Step 2: Select Board**

1. In "Default Part" page
2. Click **"Boards"** tab
3. Search: **"PYNQ-Z2"**
4. Select **"PYNQ-Z2"**
5. Click **"Next"**, then **"Finish"**

#### **Step 3: Add Source Files**

In Vivado GUI:

```
1. Click "Add Sources" (or press Alt+A)
2. Select "Add or create design sources"
3. Click "Next"
4. Click "Add Files"
5. Navigate and add these files:
```

**Add these files in order:**

```
✅ CVA6 Core Files:
   src/cva6_boot_rom.v
   src/cva6_data_ram.v
   src/cva6_min_core.v
   src/cva6_minimal_top.v

✅ UART:
   simple_uart_tx.v

✅ HBM3 Controller:
   Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/apb_slave/src/apb_slave.sv
   Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/axi5_slave/src/axi_slave_interface.sv
   Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/cmd_manager/src/command_manager.sv
   Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/refresh_controller/src/refresh_ctrl.sv
   Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/command_processor/src/command_processor.sv
   Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/dfi/src/hbm3_dfi_interface.sv
   Vspark_ip_core/LS_HBM3/testbench/hbm3_sv_core_2.0/src/hbm3_phy/src/hbm3_phy.sv
   Vspark_ip_core/LS_HBM3/rtl_cores/integration/src/hbm3_controller_top.sv

6. Click "OK"
7. In "Add or Create Design Sources" window, click "Finish"
```

#### **Step 4: Add Constraint File**

```
1. Click "Add Sources" again (Alt+A)
2. Select "Add or create constraints"
3. Click "Next"
4. Click "Add Files"
5. Navigate to: constraints/cva6_constraints.xdc
6. Click "OK"
7. Click "Finish"
```

#### **Step 5: Add Include Directories**

```
1. Right-click on "Design Sources" in Sources panel
2. Select "Set as Top" on "cva6_minimal_top"
3. Go to "Tools" → "Settings" → "General"
4. Click "IP" → "Repository"
5. Or go to "Project Settings" → "Simulation" → "Verilog Options"
6. Add include directories:
   - Click "+" button
   - Add: Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/dfi/src
   - Add: Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/refresh_controller/src
   - Add: Vspark_ip_core/LS_HBM3/testbench/hbm3_sv_core_2.0/src/hbm3_phy/src
```

#### **Step 6: Set Top Module**

```
1. In "Sources" window
2. Find "cva6_minimal_top" under "Design Sources"
3. Right-click → "Set as Top"
4. The file icon should change (shows it's top-level)
```

---

### **Method 2: Using TCL Script (EASIER!)**

Create a file called `create_project.tcl` with this content:

```tcl
# Create Vivado project for CVA6 + HBM3 on PYNQ-Z2

# Set project name and location
set project_name "cva6_fpga"
set project_dir "./vivado_project"

# Create project
create_project ${project_name} ${project_dir} -part xc7z020clg400-1 -force

# Set board
set_property board_part tul.com.tw:pynq-z2:part0:1.0 [current_project]

# Add source files
add_files {
    ../src/cva6_boot_rom.v
    ../src/cva6_data_ram.v
    ../src/cva6_min_core.v
    ../src/cva6_minimal_top.v
    ../simple_uart_tx.v
}

# Add HBM3 SystemVerilog files
add_files {
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/apb_slave/src/apb_slave.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/axi5_slave/src/axi_slave_interface.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/cmd_manager/src/command_manager.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/refresh_controller/src/refresh_ctrl.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/command_processor/src/command_processor.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/dfi/src/hbm3_dfi_interface.sv
    ../Vspark_ip_core/LS_HBM3/testbench/hbm3_sv_core_2.0/src/hbm3_phy/src/hbm3_phy.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/integration/src/hbm3_controller_top.sv
}

# Add constraint file
add_files -fileset constrs_1 {
    ../constraints/cva6_constraints.xdc
}

# Set include directories
set_property include_dirs {
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/dfi/src
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/refresh_controller/src
    ../Vspark_ip_core/LS_HBM3/testbench/hbm3_sv_core_2.0/src/hbm3_phy/src
} [current_fileset]

# Set top module
set_property top cva6_minimal_top [current_fileset]

# Update compile order
update_compile_order -fileset sources_1

# Project settings
set_property target_language Verilog [current_project]
set_property simulator_language Mixed [current_project]

puts "Project created successfully!"
puts "Top module: cva6_minimal_top"
puts "Board: PYNQ-Z2"
```

**Then run it:**

```bash
cd fpga
vivado -mode batch -source create_project.tcl
```

Or in Vivado TCL console:
```tcl
source create_project.tcl
```

---

## 📊 **File Summary Table**

| File Type | Count | Purpose |
|-----------|-------|---------|
| **Verilog (.v)** | 5 | CVA6 core + UART |
| **SystemVerilog (.sv)** | 8 | HBM3 controller |
| **Constraints (.xdc)** | 1 | Pin mapping & timing |
| **Include Dirs** | 3 | SystemVerilog headers |
| **Total Files** | 14 | Complete design |

---

## ✅ **Checklist: Files Added to Vivado**

### **Design Sources:**

- [ ] `src/cva6_boot_rom.v`
- [ ] `src/cva6_data_ram.v`
- [ ] `src/cva6_min_core.v`
- [ ] `src/cva6_minimal_top.v` ← **Set as TOP**
- [ ] `simple_uart_tx.v`
- [ ] `Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/apb_slave/src/apb_slave.sv`
- [ ] `Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/axi5_slave/src/axi_slave_interface.sv`
- [ ] `Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/cmd_manager/src/command_manager.sv`
- [ ] `Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/refresh_controller/src/refresh_ctrl.sv`
- [ ] `Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/command_processor/src/command_processor.sv`
- [ ] `Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/dfi/src/hbm3_dfi_interface.sv`
- [ ] `Vspark_ip_core/LS_HBM3/testbench/hbm3_sv_core_2.0/src/hbm3_phy/src/hbm3_phy.sv`
- [ ] `Vspark_ip_core/LS_HBM3/rtl_cores/integration/src/hbm3_controller_top.sv`

### **Constraints:**

- [ ] `constraints/cva6_constraints.xdc`

### **Settings:**

- [ ] Top module set to: `cva6_minimal_top`
- [ ] Board set to: PYNQ-Z2
- [ ] Include directories added (3 paths)
- [ ] Language set to: Mixed (Verilog + SystemVerilog)

---

## 🎯 **Top Module: What It Is**

### **Top Module = Main Entry Point**

Think of it like `main()` in C programming:

```
cva6_minimal_top.v  ← This is your "main" file
│
├── Instantiates: cva6_min_core.v (processor)
├── Instantiates: cva6_boot_rom.v (boot ROM)
├── Instantiates: cva6_data_ram.v (data RAM)
├── Instantiates: simple_uart_tx.v (UART)
└── Instantiates: hbm3_controller_top.sv (HBM3)
```

**Vivado needs to know which file is the "main" file** - that's `cva6_minimal_top`.

---

## 🔍 **How to Verify Files Are Added**

### **In Vivado GUI:**

```
1. Look at "Sources" window (usually on left side)
2. Expand "Design Sources (14)" - should show 14 files
3. Expand "Constraints" - should show 1 file
4. Check that "cva6_minimal_top" has different icon (it's TOP)
```

### **Should Look Like This:**

```
Sources
├── Design Sources (14)
│   ├── cva6_minimal_top (cva6_minimal_top.v) ⭐ ← TOP MODULE
│   ├── cva6_min_core (cva6_min_core.v)
│   ├── cva6_boot_rom (cva6_boot_rom.v)
│   ├── cva6_data_ram (cva6_data_ram.v)
│   ├── simple_uart_tx (simple_uart_tx.v)
│   ├── hbm3_controller_top (hbm3_controller_top.sv)
│   ├── apb_slave (apb_slave.sv)
│   ├── axi_slave_interface (axi_slave_interface.sv)
│   ├── command_manager (command_manager.sv)
│   ├── refresh_ctrl (refresh_ctrl.sv)
│   ├── command_processor (command_processor.sv)
│   ├── hbm3_dfi_interface (hbm3_dfi_interface.sv)
│   └── hbm3_phy (hbm3_phy.sv)
│
└── Constraints (1)
    └── cva6_constraints.xdc
```

---

## ⚠️ **Common Mistakes to Avoid**

### **Mistake 1: Missing Files**

```
❌ Error: "Cannot find module 'cva6_boot_rom'"
✅ Fix: Add src/cva6_boot_rom.v to project
```

### **Mistake 2: Wrong Top Module**

```
❌ Error: Synthesis starts with wrong file
✅ Fix: Right-click cva6_minimal_top → "Set as Top"
```

### **Mistake 3: Missing Constraint File**

```
❌ Error: No pin assignments
✅ Fix: Add constraints/cva6_constraints.xdc
```

### **Mistake 4: Missing Include Paths**

```
❌ Error: "Cannot find included file 'xyz.svh'"
✅ Fix: Add include directories in settings
```

---

## 📂 **Directory Structure (for Reference)**

Your project folder should look like this:

```
cva6_min_version/
├── src/                          ← CVA6 core files
│   ├── cva6_boot_rom.v
│   ├── cva6_data_ram.v
│   ├── cva6_min_core.v
│   └── cva6_minimal_top.v
│
├── simple_uart_tx.v              ← UART module
│
├── Vspark_ip_core/               ← HBM3 files
│   └── LS_HBM3/
│       ├── rtl_cores/
│       │   ├── integration/src/
│       │   └── sub_modules/
│       └── testbench/
│
├── constraints/                  ← Pin constraints
│   └── cva6_constraints.xdc
│
└── fpga/                         ← Vivado project folder
    └── vivado_project/           ← Created by Vivado
        └── cva6_fpga.xpr         ← Vivado project file
```

---

## 🚀 **Quick Start Steps**

### **Fastest Way to Create Project:**

1. **Create the TCL script** (copy from Method 2 above)
2. **Save as:** `fpga/create_project.tcl`
3. **Run:**
   ```bash
   cd fpga
   vivado -mode batch -source create_project.tcl
   ```
4. **Open project:**
   ```bash
   vivado vivado_project/cva6_fpga.xpr &
   ```
5. **Start synthesis:**
   - Click "Run Synthesis" in Vivado

**Done!** All files added automatically.

---

## 💡 **Pro Tips**

### **Tip 1: Organize with Hierarchy**

In Vivado, you can create **file groups**:
```
Design Sources
├── CVA6_Core/
│   ├── cva6_min_core.v
│   ├── cva6_boot_rom.v
│   └── cva6_data_ram.v
├── Peripherals/
│   └── simple_uart_tx.v
└── HBM3/
    └── (all HBM3 files)
```

### **Tip 2: Check Elaborated Design**

After adding files:
```
1. Click "Open Elaborated Design"
2. Check "Schematic" - should show your design hierarchy
3. No errors = all files found correctly
```

### **Tip 3: Save Often**

```
File → Project → Save
or Ctrl+S
```

---

## ✅ **Summary: What You Need**

**Essential files for FPGA:**

1. **14 source files** (5 Verilog + 8 SystemVerilog + 1 top)
2. **1 constraint file** (XDC)
3. **3 include directories**
4. **1 top module designation** (cva6_minimal_top)

**That's it!** These 14 files + 1 constraint are enough to build the complete CVA6 + HBM3 design for PYNQ-Z2.

---

## 📞 **Need the Files Listed?**

Run this command to see all files you need:

```bash
find . -name "cva6*.v" -o -name "simple_uart*.v" -o -name "*hbm3*.sv" -o -name "*apb*.sv" -o -name "*axi*.sv" -o -name "*refresh*.sv" -o -name "*command*.sv" -o -name "*dfi*.sv" | sort
```

Or see the complete TCL script above for exact paths!

---

**Ready to create your Vivado project?** Use the TCL script method - it's the easiest! 🚀
