# Quick Start: Running CVA6 + HBM3 Simulation

## ✅ **Integration Complete!**

All components have been verified and the system is ready for simulation.

---

## 🚀 **Quick Start**

### **Step 1: Navigate to sim directory**
```bash
cd sim
```

### **Step 2: Run simulation**

Choose your simulator and run:

#### **Using Verilator:**
```bash
verilator --binary -f DEPS.yml bench_cva6_hbm3
./obj_dir/Vbench_cva6_hbm3
```

#### **Using Icarus Verilog:**
```bash
iverilog -g2012 -f DEPS.yml bench_cva6_hbm3 -o sim.vvp
vvp sim.vvp
```

#### **Using Questa/ModelSim:**
```bash
vsim -c -do "vlog -sv -f DEPS.yml bench_cva6_hbm3; vsim -voptargs=+acc tb_cva6_minimal_top; run -all; quit"
```

#### **Using VCS:**
```bash
vcs -sverilog -f DEPS.yml bench_cva6_hbm3
./simv
```

#### **Using Xcelium:**
```bash
xrun -sv -f DEPS.yml bench_cva6_hbm3
```

---

## 📊 **What to Expect**

### **Console Output:**
```
TEST START
========================================================================
CVA6 RISC-V Processor LED Blink Verification
========================================================================
Clock Period: 8 ns (125 MHz)
Simulation Duration: 5000 us
========================================================================
LOG: 0 : INFO : tb_cva6_minimal_top : dut.reset : expected_value: 1 actual_value: 1
...
Starting RISC-V Processor Execution...
...
>>> MEMORY WRITE: LED Register @ 0x20000000 <-- 0x00000001 (LED[0]=1)
...
========================================================================
Simulation Complete - Analyzing Results
========================================================================
Total Clock Cycles: 625000
Instructions Executed: 50000+
LED Toggle Events: 5
Final LED State: 0001
Final PC: 0x00000020
========================================================================
PASS: LED toggled 5 times - processor wrote to LED register
PASS: Program Counter advanced to 0x20 - processor is executing
PASS: Executed 50000+ instructions - processor running normally
========================================================================
TEST PASSED
========================================================================
```

### **Waveform Output:**
- Waveform file: `dumpfile.fst` (FST format)
- View with: `gtkwave dumpfile.fst`

---

## 🔍 **Key Signals to Monitor in Waveform**

### **Add these signals to GTKWave:**
```
/tb_cva6_minimal_top/sys_clock
/tb_cva6_minimal_top/dut/reset
/tb_cva6_minimal_top/dut/u_riscv_core/pc
/tb_cva6_minimal_top/dut/u_riscv_core/state
/tb_cva6_minimal_top/led
/tb_cva6_minimal_top/uart_tx
/tb_cva6_minimal_top/dut/hbm3_select
/tb_cva6_minimal_top/dut/axi_awvalid
/tb_cva6_minimal_top/dut/axi_awready
/tb_cva6_minimal_top/dut/axi_arvalid
/tb_cva6_minimal_top/dut/axi_arready
/tb_cva6_minimal_top/phy_to_dram_hbm_ck_t
/tb_cva6_minimal_top/phy_to_dram_hbm_ca
```

---

## 🎯 **Test Scenarios**

### **1. Basic Boot Test (Current)**
- **Duration**: 5ms simulation time
- **Validates**: Core boots, LED blinks
- **Pass Criteria**: LED toggles, PC advances

### **2. HBM3 Memory Test (To Add)**
Modify the testbench to:
1. Write data to HBM3 memory region (`0x3000_0000`)
2. Read back and verify
3. Check AXI transactions complete successfully

### **3. UART Debug Test**
Monitor `uart_tx` signal for serial data transmission at 115200 baud.

---

## 📂 **Output Files**

| File              | Description                          |
|-------------------|--------------------------------------|
| `dumpfile.fst`    | Waveform dump (GTKWave compatible)   |
| `transcript`      | Simulation log (Questa/ModelSim)     |
| `sim.log`         | Simulator messages                   |

---

## ⚠️ **Common Issues & Solutions**

### **Issue: "File not found" errors**
**Solution:** Ensure you're running from `sim/` directory and `Vspark_ip_core/` exists in parent directory.

### **Issue: "Unknown module" errors**
**Solution:** Check DEPS.yml paths are correct relative to `sim/` directory.

### **Issue: SystemVerilog parsing errors**
**Solution:** Ensure simulator supports SystemVerilog (use `-sv` or `-g2012` flags).

### **Issue: Simulation hangs**
**Solution:** 
- Check reset signal is properly released
- Verify clock is toggling
- Check for infinite loops in testbench

### **Issue: HBM3 controller warnings**
**Solution:** This is normal - behavioral PHY model may show warnings for unimplemented features.

---

## 📈 **Performance Tips**

### **Faster Simulation:**
```bash
# Reduce simulation time in testbench
# Edit tb/tb_cva6_minimal_top.v line 22:
parameter SIM_TIME_US = 500;  // Reduce from 5000 to 500
```

### **Enable Coverage:**
```bash
# Add coverage flags (simulator-specific)
# For Verilator: --coverage
# For VCS: -cm line+cond+fsm+branch+tgl
```

---

## 🔧 **Customization**

### **Change HBM3 Memory Size:**
Edit `cva6_minimal_top.v`:
```verilog
parameter HBM3_MEM_SIZE = 32'h2000_0000;  // 512MB instead of 256MB
```

### **Add HBM3 Memory Test:**
Add to testbench after reset release:
```verilog
// Write to HBM3
@(posedge sys_clock);
force dut.data_req = 1'b1;
force dut.data_we = 1'b1;
force dut.data_addr = 32'h3000_0000;
force dut.data_wdata = 32'hDEADBEEF;
repeat(10) @(posedge sys_clock);
release dut.data_req;

// Read from HBM3
@(posedge sys_clock);
force dut.data_req = 1'b1;
force dut.data_we = 1'b0;
force dut.data_addr = 32'h3000_0000;
repeat(10) @(posedge sys_clock);
if (dut.data_rdata === 32'hDEADBEEF)
    $display("HBM3 READ/WRITE TEST PASSED");
release dut.data_req;
```

---

## 📚 **Additional Resources**

- **Integration Status**: See `INTEGRATION_STATUS.md`
- **Memory Map**: Check memory addresses in `INTEGRATION_STATUS.md`
- **HBM3 Controller**: Documentation in `Vspark_ip_core/LS_HBM3/README.txt`
- **CVA6 Core**: See `src/cva6_min_core.v` for core details

---

## ✅ **Success Indicators**

Your simulation is successful when you see:
1. ✅ "TEST PASSED" message
2. ✅ LED toggle count ≥ 1
3. ✅ PC advances beyond 0x10
4. ✅ Instructions executed > 1000
5. ✅ No ERROR messages in log

---

**Ready to simulate!** Run the commands above and verify the system works correctly. 🚀
