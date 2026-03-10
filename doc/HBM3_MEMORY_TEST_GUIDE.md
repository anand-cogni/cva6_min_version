# HBM3 Memory Test Guide

## 🎯 **Purpose**

This document describes how to run dedicated HBM3 memory read/write verification tests for your CVA6 + HBM3 integration.

---

## 📋 **Test Overview**

The HBM3 memory test (`bench_hbm3_memtest`) performs comprehensive verification of:

### **Test Coverage:**
1. ✅ Single word writes to HBM3 memory
2. ✅ Single word reads from HBM3 memory
3. ✅ Data integrity verification (write → read → compare)
4. ✅ Multiple address testing
5. ✅ Walking 1s/0s pattern testing
6. ✅ Boundary value testing (all 0s, all 1s, alternating patterns)
7. ✅ Sequential access pattern testing
8. ✅ AXI protocol transaction monitoring
9. ✅ HBM3 controller status checking

### **Memory Address Range:**
- **HBM3 Base:** `0x30000000`
- **HBM3 Size:** 256MB (`0x30000000` - `0x3FFFFFFF`)

---

## 🚀 **Running the HBM3 Memory Test**

### **Quick Start:**

```bash
cd /home/smita/cva6_min_version/sim
eda sim --tool verilator DEPS.yml bench_hbm3_memtest
```

### **Alternative Simulators:**

#### **Icarus Verilog:**
```bash
cd sim
iverilog -g2012 -f DEPS.yml bench_hbm3_memtest -o hbm3_test.vvp
vvp hbm3_test.vvp
```

#### **Questa/ModelSim:**
```bash
cd sim
vsim -c -do "vlog -sv -f DEPS.yml bench_hbm3_memtest; vsim -voptargs=+acc tb_hbm3_memtest; run -all; quit"
```

#### **VCS:**
```bash
cd sim
vcs -sverilog -f DEPS.yml bench_hbm3_memtest
./simv
```

---

## 📊 **Expected Output**

### **Test Start:**
```
================================================================================
HBM3 MEMORY TEST - CVA6 Integration Verification
================================================================================
Test Start Time: 0
Clock Period: 8 ns (125 MHz)
HBM3 Base Address: 0x30000000
================================================================================

[160] INFO: Applying system reset...
[336] INFO: Reset released
[1136] INFO: System stabilized, starting HBM3 tests...
```

### **Individual Test Results:**
```
[Test 1] Single Write/Read
  Address: 0x30000000, Data: 0xdeadbeef
  → Writing to HBM3...
[1216] HBM3 WRITE: Addr=0x30000000, Data=0xdeadbeef
[1344] AXI AW: Addr=0x30000000, ID=0, Len=0
[1352] AXI W:  Data=0x00000000deadbeef, Strb=0x0f, Last=1
  → Reading from HBM3...
[1808] HBM3 READ:  Addr=0x30000000
[1936] AXI AR: Addr=0x30000000, ID=1, Len=0
[2816] AXI R:  Data=0x00000000deadbeef, ID=1, Last=1, Resp=0
[2816] HBM3 VALID: Data=0xdeadbeef
  ✅ PASS: Read data matches (0xdeadbeef)

[Test 2] Address 0x100 Offset
  Address: 0x30000100, Data: 0x12345678
  → Writing to HBM3...
  → Reading from HBM3...
  ✅ PASS: Read data matches (0x12345678)
```

### **Test Summary:**
```
================================================================================
HBM3 MEMORY TEST SUMMARY
================================================================================
Total Tests:  20
Passed:       20
Failed:       0
Pass Rate:    100%
================================================================================
✅ ALL TESTS PASSED
================================================================================
```

---

## 🔍 **Test Breakdown**

### **TEST 1: Single Write/Read**
- **Purpose:** Basic functionality check
- **Address:** `0x30000000`
- **Data:** `0xDEADBEEF`
- **Validates:** Basic HBM3 write → read cycle

### **TEST 2-4: Multiple Address Test**
- **Purpose:** Verify different address locations
- **Addresses:** 
  - `0x30000100` (256 bytes offset)
  - `0x30001000` (4KB offset)
  - `0x30010000` (64KB offset)
- **Validates:** Address decoder, memory controller addressing

### **TEST 5-9: Walking 1s Pattern**
- **Purpose:** Detect stuck-at faults in data bus
- **Patterns:**
  - `0x00000001` (bit 0)
  - `0x00000100` (bit 8)
  - `0x00010000` (bit 16)
  - `0x01000000` (bit 24)
  - `0x80000000` (bit 31)
- **Validates:** All data lines functional

### **TEST 10-13: Boundary Patterns**
- **Purpose:** Test edge cases
- **Patterns:**
  - `0x00000000` (all zeros)
  - `0xFFFFFFFF` (all ones)
  - `0x55555555` (alternating 0101)
  - `0xAAAAAAAA` (alternating 1010)
- **Validates:** Full data bus width, no crosstalk

### **TEST 14: Sequential Access**
- **Purpose:** Burst-like access pattern
- **Count:** 16 sequential locations
- **Data:** Address-based pattern
- **Validates:** Sequential addressing, memory coherency

---

## 📈 **Monitoring & Debug**

### **Waveform Analysis:**

View the waveform for detailed signal analysis:
```bash
gtkwave hbm3_memtest.fst
```

### **Key Signals to Monitor:**

#### **HBM3 Access Signals:**
```
tb_hbm3_memtest/dut/hbm3_select        - HBM3 region selected
tb_hbm3_memtest/dut/hbm3_valid         - HBM3 data valid
tb_hbm3_memtest/dut/hbm3_rdata         - HBM3 read data
tb_hbm3_memtest/dut/data_addr          - Memory address
tb_hbm3_memtest/dut/data_wdata         - Write data
tb_hbm3_memtest/dut/data_rdata         - Read data
```

#### **AXI Interface Signals:**
```
tb_hbm3_memtest/dut/axi_awvalid        - Write address valid
tb_hbm3_memtest/dut/axi_awready        - Write address ready
tb_hbm3_memtest/dut/axi_awaddr         - Write address
tb_hbm3_memtest/dut/axi_wvalid         - Write data valid
tb_hbm3_memtest/dut/axi_wready         - Write data ready
tb_hbm3_memtest/dut/axi_wdata          - Write data (64-bit)
tb_hbm3_memtest/dut/axi_arvalid        - Read address valid
tb_hbm3_memtest/dut/axi_arready        - Read address ready
tb_hbm3_memtest/dut/axi_araddr         - Read address
tb_hbm3_memtest/dut/axi_rvalid         - Read data valid
tb_hbm3_memtest/dut/axi_rready         - Read data ready
tb_hbm3_memtest/dut/axi_rdata          - Read data (64-bit)
tb_hbm3_memtest/dut/axi_rresp          - Read response
```

#### **HBM3 PHY Signals:**
```
tb_hbm3_memtest/phy_to_dram_hbm_ck_t   - HBM3 clock (true)
tb_hbm3_memtest/phy_to_dram_hbm_ck_c   - HBM3 clock (complement)
tb_hbm3_memtest/phy_to_dram_hbm_ca     - Command/Address bus
tb_hbm3_memtest/phy_to_dram_io_hbm_dq  - Data bus
```

---

## ⚠️ **Troubleshooting**

### **Issue: Test Timeouts**

**Symptom:**
```
⚠ WARNING: Write timeout at address 0x30000000
```

**Possible Causes:**
1. HBM3 controller not initialized
2. AXI handshake not completing
3. Clock/reset issues

**Solutions:**
- Check `aresetn` signal is properly released
- Verify AXI `awready`/`wready` signals are responding
- Increase timeout value in test (currently 100,000 cycles)

### **Issue: Data Mismatches**

**Symptom:**
```
❌ FAIL: Data mismatch!
   Expected: 0xdeadbeef
   Got:      0x00000000
```

**Possible Causes:**
1. HBM3 memory not storing data correctly
2. Read/write address mismatch
3. AXI data width conversion error

**Solutions:**
- Check AXI transaction logs for address/data values
- Verify `mem_to_axi_bridge` width conversion (32-bit → 64-bit)
- Check HBM3 PHY model is functional

### **Issue: Simulation Hangs**

**Possible Causes:**
1. Deadlock in AXI handshakes
2. Infinite wait loop in test tasks

**Solutions:**
- Enable timeout protection (already included)
- Check waveform for stuck signals
- Verify `hbm3_valid` signal eventually asserts

---

## 📝 **Test Customization**

### **Add More Test Patterns:**

Edit `tb/tb_hbm3_memtest.v` and add tests in the main sequence:

```verilog
// Add your custom test
run_test("My Custom Test", HBM3_BASE + 32'h2000, 32'h12345678);
```

### **Change Test Addresses:**

Modify test addresses to explore different memory regions:

```verilog
run_test("High Address Test", HBM3_BASE + 32'h00FF_FFF0, 32'hABCD1234);
```

### **Adjust Timeout:**

Increase timeout for slower simulations:

```verilog
parameter TEST_TIMEOUT = 200000;  // Increase from 100000
```

### **Add Burst Testing:**

Modify the sequential test to use longer burst lengths:

```verilog
run_sequential_test(HBM3_BASE + 32'h400, 64);  // Test 64 locations
```

---

## 🎯 **Performance Metrics**

### **Expected Performance:**
- **Single Write Latency:** ~100-200 clock cycles
- **Single Read Latency:** ~100-200 clock cycles
- **AXI Transaction Overhead:** ~10-20 cycles
- **Total Test Duration:** ~50,000-100,000 cycles (400-800 μs @ 125 MHz)

### **Timing Breakdown:**
1. **Write Phase:**
   - Memory request → AXI AW handshake: ~10 cycles
   - AXI W handshake: ~5 cycles
   - HBM3 controller processing: ~50-100 cycles
   - Write response: ~10 cycles

2. **Read Phase:**
   - Memory request → AXI AR handshake: ~10 cycles
   - HBM3 controller processing: ~50-100 cycles
   - AXI R handshake: ~5 cycles
   - Data return: ~5 cycles

---

## 📚 **Additional Resources**

### **Related Files:**
- **Testbench:** `tb/tb_hbm3_memtest.v`
- **DUT:** `cva6_minimal_top.v`
- **HBM3 Controller:** `Vspark_ip_core/LS_HBM3/rtl_cores/integration/src/hbm3_controller_top.sv`
- **AXI Bridge:** Inline in `cva6_minimal_top.v` (lines 526-758)

### **Documentation:**
- **Integration Status:** `INTEGRATION_STATUS.md`
- **Run Guide:** `RUN_SIMULATION.md`
- **Memory Map:** See `INTEGRATION_STATUS.md` section "Memory Map"

---

## ✅ **Success Criteria**

Your HBM3 memory test is successful when:

1. ✅ **All tests pass** (0 failures)
2. ✅ **No timeouts** occur during write/read operations
3. ✅ **AXI transactions** complete for every access
4. ✅ **Data integrity** maintained across all test patterns
5. ✅ **No X/Z values** in read data
6. ✅ **100% pass rate** in test summary

---

## 🔬 **Advanced Testing**

### **Stress Testing:**

Modify the test to run continuous access:

```verilog
// Continuous stress test
for (i = 0; i < 1000; i = i + 1) begin
    run_test($sformatf("Stress Test %0d", i), 
             HBM3_BASE + (i * 4), 
             $random);
end
```

### **Concurrent Access:**

Test simultaneous read/write (requires testbench modification):

```verilog
fork
    hbm3_write(HBM3_BASE, 32'hAAAAAAAA);
    hbm3_write(HBM3_BASE + 32'h100, 32'h55555555);
join
```

### **Performance Profiling:**

Add cycle counters to measure throughput:

```verilog
integer write_start_time, write_end_time;
write_start_time = $time;
hbm3_write(addr, data);
write_end_time = $time;
$display("Write latency: %0d ns", write_end_time - write_start_time);
```

---

**Ready to test your HBM3 memory integration!** 🚀

Run the test and verify that your CVA6 + HBM3 system can reliably read and write to HBM3 memory.
