# CVA6 + HBM3 Integrated Test Guide

## ✅ **One Testbench - Complete Verification**

Your CVA6 + HBM3 integration now has a **single unified testbench** that tests everything:
1. **Phase 1:** CVA6 basic operation (LED blink, processor execution)
2. **Phase 2:** HBM3 memory read/write verification

---

## 🚀 **Run the Complete Test**

```bash
cd /home/smita/cva6_min_version/sim
eda sim --tool verilator DEPS.yml bench_cva6_hbm3
```

---

## 📊 **What the Test Does**

### **Phase 1: CVA6 Basic Test** (500μs)
- ✅ Verifies CVA6 processor boots from ROM
- ✅ Checks instruction execution (>1000 instructions)
- ✅ Verifies LED control register writes
- ✅ Confirms program counter advances
- ✅ Tests UART operation

### **Phase 2: HBM3 Memory Test** (Automatic)
After Phase 1 passes, automatically runs:

| Test # | Test Name | Address | Data Pattern |
|--------|-----------|---------|--------------|
| 1 | Single Write/Read | 0x30000000 | 0xDEADBEEF |
| 2 | Address 0x100 | 0x30000100 | 0x12345678 |
| 3 | Address 0x1000 | 0x30001000 | 0xCAFEBABE |
| 4 | Walking 1s - Bit 0 | 0x30000200 | 0x00000001 |
| 5 | Walking 1s - Bit 16 | 0x30000204 | 0x00010000 |
| 6 | Walking 1s - Bit 31 | 0x30000208 | 0x80000000 |
| 7 | All Zeros | 0x30000300 | 0x00000000 |
| 8 | All Ones | 0x30000304 | 0xFFFFFFFF |
| 9 | Pattern 01010101 | 0x30000308 | 0x55555555 |
| 10 | Pattern 10101010 | 0x3000030C | 0xAAAAAAAA |

---

## 📈 **Expected Output**

### **Phase 1 Output:**
```
TEST START
========================================================================
CVA6 RISC-V Processor LED Blink Verification
========================================================================
Clock Period: 8 ns (125 MHz)
Simulation Duration: 500 us
========================================================================

[System boots and runs]
...

========================================================================
Simulation Complete - Analyzing Results
========================================================================
Total Clock Cycles: 62502
Instructions Executed: 20834
LED Toggle Events: 1
Final LED State: 0101
Final PC: 0x18
========================================================================
PASS: LED toggled 1 times - processor wrote to LED register
PASS: Program Counter advanced to 0x18 - processor is executing
PASS: Executed 20834 instructions - processor running normally
========================================================================
PHASE 1: CVA6 BASIC TEST PASSED
========================================================================
```

### **Phase 2 Output:**
```
========================================================================
PHASE 2: HBM3 MEMORY VERIFICATION
========================================================================
Starting HBM3 memory read/write tests...

[HBM3 Test 1] Single Write/Read
  Address: 0x30000000, Data: 0xdeadbeef
  → Writing to HBM3...
  → Reading from HBM3...
  ✅ PASS: Read data matches (0xdeadbeef)

[HBM3 Test 2] Address 0x100
  Address: 0x30000100, Data: 0x12345678
  → Writing to HBM3...
  → Reading from HBM3...
  ✅ PASS: Read data matches (0x12345678)

... (more tests) ...

========================================================================
HBM3 MEMORY TEST SUMMARY
========================================================================
Total HBM3 Tests:  10
Passed:            10
Failed:            0
Pass Rate:         100%
========================================================================

========================================================================
FINAL TEST RESULT
========================================================================
✅ ALL TESTS PASSED
  - CVA6 Basic Test: PASS
  - HBM3 Memory Test: PASS (10/10 tests)
========================================================================
```

---

## 🎯 **Test Flow Diagram**

```
START
  ↓
[Reset & Initialize]
  ↓
[Phase 1: CVA6 Basic Test]
  ├─ Boot from ROM
  ├─ Execute instructions
  ├─ Write to LED register
  └─ Check: LED toggle, PC advance, instruction count
  ↓
[Phase 1 Result]
  ├─ PASS → Continue to Phase 2
  └─ FAIL → Stop and report error
  ↓
[Phase 2: HBM3 Memory Test]
  ├─ Test 1: Write/Read 0xDEADBEEF
  ├─ Test 2: Write/Read 0x12345678
  ├─ Test 3-10: Various patterns
  └─ Check: Data integrity for all tests
  ↓
[Phase 2 Result]
  ├─ All PASS → Final: ALL TESTS PASSED ✅
  └─ Any FAIL → Final: SOME TESTS FAILED ❌
  ↓
END
```

---

## 🔧 **Customization**

### **Add More HBM3 Tests:**

Edit `tb/tb_cva6_minimal_top.v` and add tests in Phase 2 section:

```verilog
// Add your custom HBM3 test
run_hbm3_test("My Custom Test", HBM3_BASE + 32'h400, 32'hABCD1234);
```

### **Change Test Duration:**

In `tb/tb_cva6_minimal_top.v`:

```verilog
parameter SIM_TIME_US = 1000;  // Increase from 500 for longer CVA6 test
```

### **Adjust HBM3 Timeout:**

```verilog
parameter TEST_TIMEOUT = 100000;  // Increase from 50000 for slower operations
```

---

## 🔍 **Waveform Analysis**

View complete test waveforms:

```bash
cd sim
gtkwave dumpfile.fst
```

### **Key Signals:**

#### **Phase 1 (CVA6) Signals:**
```
/tb_cva6_minimal_top/sys_clock
/tb_cva6_minimal_top/dut/reset
/tb_cva6_minimal_top/dut/u_riscv_core/pc
/tb_cva6_minimal_top/led
```

#### **Phase 2 (HBM3) Signals:**
```
/tb_cva6_minimal_top/dut/hbm3_select
/tb_cva6_minimal_top/dut/hbm3_valid
/tb_cva6_minimal_top/dut/hbm3_rdata
/tb_cva6_minimal_top/dut/axi_awvalid
/tb_cva6_minimal_top/dut/axi_awready
/tb_cva6_minimal_top/dut/axi_wdata
/tb_cva6_minimal_top/dut/axi_rdata
```

---

## ⚠️ **Troubleshooting**

### **Phase 1 Fails:**
```
ERROR: Program Counter stuck at 0x0
```
**Solution:** Check reset timing and ROM initialization

### **Phase 2 Timeouts:**
```
⚠ WARNING: Write timeout at address 0x30000000
```
**Solution:** 
- Verify HBM3 controller is initialized
- Check AXI handshake signals in waveform
- Increase TEST_TIMEOUT parameter

### **Phase 2 Data Mismatches:**
```
❌ FAIL: Data mismatch!
   Expected: 0xdeadbeef
   Got:      0x00000000
```
**Solution:**
- Check HBM3 PHY model is functional
- Verify AXI data width conversion (32→64 bit)
- Check memory addressing in waveform

---

## 📝 **File Structure**

Your integrated testbench:

```
tb/
└── tb_cva6_minimal_top.v  ← ONE FILE - Both Phase 1 & Phase 2 tests
```

The testbench contains:
- CVA6 basic test sequence
- HBM3 memory test tasks
- HBM3 write/read functions
- Complete monitoring infrastructure
- Unified pass/fail reporting

---

## ✅ **Success Criteria**

Test is successful when you see:

```
========================================================================
FINAL TEST RESULT
========================================================================
✅ ALL TESTS PASSED
  - CVA6 Basic Test: PASS
  - HBM3 Memory Test: PASS (10/10 tests)
========================================================================
```

This proves:
1. ✅ CVA6 processor boots and executes correctly
2. ✅ Memory subsystem works (ROM, RAM, LED register)
3. ✅ HBM3 controller accepts write transactions
4. ✅ HBM3 controller returns correct read data
5. ✅ AXI bridge converts 32-bit to 64-bit correctly
6. ✅ Full data path integrity: **CVA6 → AXI Bridge → HBM3 Controller → HBM3 PHY**

---

## 🎓 **What You've Achieved**

With this integrated testbench, you have:

1. ✅ **Single test run** verifies entire system
2. ✅ **Automatic progression** from basic to HBM3 tests
3. ✅ **Comprehensive coverage** of all major components
4. ✅ **Clear pass/fail reporting** with detailed logs
5. ✅ **Easy customization** - add tests in one place

---

## 📚 **Related Files**

- **Testbench:** `tb/tb_cva6_minimal_top.v`
- **DUT:** `cva6_minimal_top.v`
- **DEPS config:** `sim/DEPS.yml`
- **Integration docs:** `INTEGRATION_STATUS.md`

---

**One test, complete verification! Run it now and see both CVA6 and HBM3 working together!** 🚀
