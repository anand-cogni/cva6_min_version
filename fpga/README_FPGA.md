# FPGA Build and Programming Guide - CVA6 + HBM3 on PYNQ-Z2

## 🎯 Overview

This guide helps you synthesize and program the CVA6 + HBM3 integration onto your PYNQ-Z2 FPGA board.

**Important:** Since PYNQ-Z2 doesn't have real HBM3 memory, the HBM3 PHY signals will be unconnected. Vivado will optimize away unused HBM3 logic during synthesis.

---

## ⚠️ Expected Behavior

### **What WILL Work:**
- ✅ CVA6 processor boots from ROM
- ✅ LEDs blink (controlled by processor)
- ✅ UART TX outputs debug messages
- ✅ Processor executes instructions

### **What WON'T Work:**
- ❌ Actual HBM3 memory access (no HBM3 chip on board)
- ❌ HBM3 read/write operations will hang or return zero

**You'll see:** CVA6 boots and LEDs blink, proving the processor works!

---

## 📋 Prerequisites

1. **Vivado 2020.2 or later** installed
2. **PYNQ-Z2 board** connected via USB
3. **Xilinx cable drivers** installed
4. **8GB+ RAM** for synthesis

---

## 🚀 Quick Start

### **Option 1: Use TCL Script (Recommended)**

```bash
cd fpga
vivado -mode batch -source build_fpga.tcl
```

This creates the project but **doesn't run synthesis** (to let you inspect it first).

To run synthesis and implementation:

```tcl
# In Vivado TCL console
launch_runs synth_1 -jobs 8
wait_on_run synth_1
launch_runs impl_1 -to_step write_bitstream -jobs 8
wait_on_run impl_1
```

### **Option 2: Manual Vivado GUI**

1. **Open Vivado:**
   ```bash
   cd fpga
   vivado &
   ```

2. **Run TCL Script:**
   ```tcl
   source build_fpga.tcl
   ```

3. **Run Synthesis:**
   - Click "Run Synthesis" in Flow Navigator
   - Wait 10-30 minutes

4. **Run Implementation:**
   - Click "Run Implementation"
   - Wait 10-20 minutes

5. **Generate Bitstream:**
   - Click "Generate Bitstream"
   - Wait 5-10 minutes

---

## 📁 Output Files

After successful build:
- **Bitstream:** `vivado_project/cva6_hbm3_fpga.runs/impl_1/cva6_minimal_top.bit`
- **Reports:** `vivado_project/cva6_hbm3_fpga.runs/impl_1/`

---

## 💾 Programming the FPGA

### **Method 1: Vivado Hardware Manager**

1. **Connect PYNQ-Z2:**
   - Connect USB cable (PROG/UART port)
   - Power on the board
   - Set jumper to JTAG mode

2. **Open Hardware Manager:**
   ```tcl
   open_hw_manager
   connect_hw_server
   open_hw_target
   ```

3. **Program Device:**
   ```tcl
   set_property PROGRAM.FILE {vivado_project/cva6_hbm3_fpga.runs/impl_1/cva6_minimal_top.bit} [get_hw_devices xc7z020_1]
   program_hw_devices [get_hw_devices xc7z020_1]
   ```

### **Method 2: Command Line**

```bash
vivado -mode batch -source program_fpga.tcl
```

(Create program_fpga.tcl with the hardware manager commands above)

---

## 🔍 Testing on FPGA

### **What to Observe:**

1. **LEDs (LD0-LD3):**
   - Should start blinking after programming
   - LD0 toggles based on processor execution
   - Pattern: Blink every ~1 second

2. **UART TX (PMOD JA Pin 1):**
   - Connect logic analyzer or UART-to-USB adapter
   - 115200 baud, 8N1
   - Should see debug messages from processor

3. **Reset Button (BTN0):**
   - Press to reset the processor
   - LEDs should stop, then restart blinking

---

## 📊 Expected Synthesis Results

### **Resource Usage (Estimated):**

| Resource | Used | Available | Utilization |
|----------|------|-----------|-------------|
| LUTs | ~15,000 | 53,200 | ~28% |
| FFs | ~8,000 | 106,400 | ~8% |
| BRAM | ~10 | 140 | ~7% |
| DSPs | 0 | 220 | 0% |

**Note:** Actual usage depends on how much HBM3 logic Vivado optimizes away.

### **Timing:**
- **Target:** 125 MHz (8ns period)
- **Expected WNS:** 0-2ns positive slack
- If timing fails, design will still work at slower speed

---

## ⚠️ Synthesis Warnings (Expected)

You will see warnings - these are **normal**:

### **1. Unconnected HBM3 Ports:**
```
WARNING: [Synth 8-3331] Unconnected output port 'phy_to_dram_hbm_ck_t'
```
**Expected:** No real HBM3 on board, signals are unconnected

### **2. Unused Signals:**
```
WARNING: [Synth 8-3332] Sequential element ... is unused
```
**Expected:** HBM3 controller logic optimized away

### **3. Inferred Latches:**
```
WARNING: [Synth 8-327] Inferring latch for variable '...'
```
**May need fixing:** Check if critical paths have latches

### **4. Timing Warnings:**
```
WARNING: [Timing 38-282] Could not find timing requirement
```
**Usually OK:** Non-critical paths without constraints

---

## 🐛 Troubleshooting

### **Synthesis Fails with Errors:**

**Problem:** HBM3 SystemVerilog not parsing
**Solution:** Check Vivado version supports SystemVerilog (2018.3+)

**Problem:** Out of memory
**Solution:** Close other applications, use 64-bit Vivado

**Problem:** File not found errors
**Solution:** Check all paths in build_fpga.tcl are correct

### **Timing Doesn't Meet 125 MHz:**

**Solution 1:** Reduce clock to 100 MHz
```xdc
create_clock -period 10.000 -name sys_clock_pin ...
```

**Solution 2:** Add pipeline stages in critical paths

**Solution 3:** Use performance-optimized synthesis strategies

### **LEDs Don't Blink on Board:**

**Check:**
1. Bitstream programmed successfully?
2. Board powered on?
3. Reset button pressed after programming?
4. Check UART output for processor activity

---

## 📝 Design Files Used

### **CVA6 Core:**
- `src/cva6_boot_rom.v` - Boot ROM (1KB)
- `src/cva6_data_ram.v` - Data RAM (4KB)
- `src/cva6_min_core.v` - RISC-V processor
- `simple_uart_tx.v` - UART transmitter

### **HBM3 Controller:**
- `Vspark_ip_core/LS_HBM3/rtl_cores/` - Controller modules
- HBM3 PHY signals remain unconnected

### **Integration:**
- `cva6_minimal_top.v` - Top-level integration

### **Constraints:**
- `constraints/cva6_constraints.xdc` - Pin and timing constraints

---

## 🎓 What This Demonstrates

### **Successful Synthesis Proves:**
1. ✅ CVA6 + HBM3 integration **compiles** for FPGA
2. ✅ RTL **synthesizes** without errors
3. ✅ Integration **architecture is sound**

### **On FPGA, You'll See:**
1. ✅ CVA6 processor **boots and runs**
2. ✅ LED blink pattern from **processor execution**
3. ✅ UART debug output (if monitored)

### **What's Missing:**
- ❌ Real HBM3 memory (not available on PYNQ-Z2)
- ❌ HBM3 memory read/write (would need actual HBM3 chip)

---

## 🔄 Iteration Workflow

1. **Synthesize** → Check resource usage and timing
2. **If fails:** Simplify design or fix errors
3. **Program FPGA** → Test with LEDs
4. **Observe behavior** → Verify processor execution
5. **Debug** → Use ChipScope/ILA if needed

---

## 📞 Need Help?

### **Synthesis Issues:**
- Check Vivado log: `vivado_project/*.log`
- Review synthesis report: `*_runs/synth_1/*.rpt`

### **Programming Issues:**
- Verify board connection: `ls /dev/ttyUSB*`
- Check JTAG cable: Hardware Manager → Auto Connect

### **On-Board Issues:**
- Use ChipScope ILA to debug internal signals
- Monitor UART for processor debug output
- Check waveforms in simulation first

---

## ✅ Success Checklist

- [ ] Vivado project created successfully
- [ ] Synthesis completes without critical errors
- [ ] Implementation meets timing (or close)
- [ ] Bitstream generated
- [ ] FPGA programmed successfully
- [ ] LEDs blink on board
- [ ] Reset button works
- [ ] (Optional) UART shows debug output

---

**Ready to synthesize!** Run the build script and see your CVA6 + HBM3 integration come alive on FPGA! 🚀
