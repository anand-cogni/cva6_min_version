# ⚡ FPGA Quick Test Card - PYNQ-Z2

## 🎯 What You Can Check (Quick Reference)

---

## ✅ **TEST 1: LED Blinking (30 seconds)**

**No equipment needed!**

1. **Program FPGA** (see FPGA build guide)
2. **Look at board:** LD0 should blink ON/OFF
3. **Press BTN0 (reset):** LEDs stop, then restart
4. **Success:** LD0 blinks steadily at ~5 Hz

**Proves:** Processor boots and runs ✅

---

## ✅ **TEST 2: UART Messages (2 minutes)**

**Equipment: USB cable + Terminal program**

### **Quick Setup:**

```bash
# Find UART device
ls /dev/ttyUSB*

# Open terminal (choose one):
sudo screen /dev/ttyUSB0 115200           # Option 1
sudo picocom -b 115200 /dev/ttyUSB0       # Option 2  
python3 -m serial.tools.miniterm /dev/ttyUSB0 115200  # Option 3
```

### **Expected Output:**

```
CVA6 Booting...
LED ON
LED OFF
LED ON
LED OFF
(repeating...)
```

### **Exit Terminal:**
- `screen`: Press `Ctrl-A` then `K` then `Y`
- `picocom`: Press `Ctrl-A` then `Ctrl-X`
- `miniterm`: Press `Ctrl-]`

**Proves:** UART works, boot completes ✅

---

## ✅ **TEST 3: Reset Button (15 seconds)**

1. **Watch LEDs** blinking
2. **Press BTN0** → LEDs stop
3. **Release BTN0** → LEDs restart
4. **Check UART** (if connected) → Shows "CVA6 Booting..." again

**Proves:** Reset logic works ✅

---

## ✅ **TEST 4: Long Run (5-60 minutes)**

**Leave board running and check:**
- LEDs keep blinking
- UART keeps showing messages
- No freezing or errors

**Proves:** Stable, production-ready ✅

---

## 📊 **Visual Reference**

### **PYNQ-Z2 Board Layout:**

```
[PYNQ-Z2 Board]
    
    ┌────────────────────────────┐
    │  [USB UART/PROG]           │ ← Connect here for programming + UART
    │                            │
    │  BTN0 (Reset) ●            │ ← Press to reset processor
    │                            │
    │  LD0 LD1 LD2 LD3           │ ← Watch LD0 blink
    │  ●   ●   ●   ●             │
    │                            │
    │  PMOD JA                   │ ← Pin 1 = UART TX (alt. connection)
    │  [1][2][3][4]              │
    │  [5][6][7][8]              │
    └────────────────────────────┘
```

### **Expected LED Pattern:**

```
Time:    0ms    100ms   200ms   300ms   400ms
LD0:     ███    ░░░     ███     ░░░     ███
State:   ON     OFF     ON      OFF     ON
UART:    LED ON LED OFF LED ON  LED OFF LED ON
```

---

## 🔧 **Troubleshooting**

| Problem | Solution |
|---------|----------|
| **No LEDs blinking** | Check FPGA programming succeeded |
| **LEDs always ON/OFF** | Press reset button (BTN0) |
| **No UART output** | Check baud rate = 115200, check device `/dev/ttyUSB0` |
| **Garbage on UART** | Wrong baud rate, try 115200 |
| **Permission denied** | Run with `sudo` or: `sudo usermod -a -G dialout $USER` |
| **Device not found** | Reconnect USB cable, try different port |
| **LEDs blink too slow/fast** | Clock frequency issue, check constraints |

---

## 📱 **Quick Commands**

### **Find UART:**
```bash
ls -la /dev/ttyUSB*
```

### **Connect Terminal:**
```bash
sudo screen /dev/ttyUSB0 115200
```

### **Log UART to File:**
```bash
python3 -m serial.tools.miniterm /dev/ttyUSB0 115200 | tee uart_log.txt
```

### **Count Messages (1 min):**
```bash
timeout 60 python3 -m serial.tools.miniterm /dev/ttyUSB0 115200 | grep "LED ON" | wc -l
# Should be ~600 (10 per second × 60 sec)
```

---

## ✅ **Success Checklist**

**Minimum (5 min):**
- [ ] FPGA programmed
- [ ] LD0 blinks
- [ ] Reset button works

**Complete (15 min):**
- [ ] UART shows "CVA6 Booting..."
- [ ] UART shows "LED ON/OFF"
- [ ] Runs for 5+ minutes

**Production (1 hour):**
- [ ] All above tests pass
- [ ] Runs for 1+ hour continuously
- [ ] No errors or freezes

---

## 🎥 **For Meeting Demo**

**Show this sequence (30 seconds):**

1. **"Here's the board running..."**
   - Point to blinking LD0

2. **"And here's the UART output..."**
   - Show terminal with messages

3. **"Watch what happens when I press reset..."**
   - Press BTN0, show restart

4. **"It's been running continuously for X minutes..."**
   - Emphasize stability

---

## 📋 **Hardware Checklist**

**Required:**
- [x] PYNQ-Z2 board
- [x] USB cable
- [x] Power (USB or 12V)

**Recommended:**
- [x] USB cable connected to computer
- [x] Serial terminal software installed
- [x] USB permissions configured

---

## 🚀 **What Each Test Proves**

| Test | Proves |
|------|--------|
| LED blinks | ✅ Bootrom works, processor runs |
| UART "CVA6 Booting..." | ✅ Boot sequence completes |
| UART "LED ON/OFF" | ✅ Main loop runs, UART + LED sync |
| Reset works | ✅ Can restart cleanly |
| Long run (1hr) | ✅ Production-ready, stable |

---

**Print this card and keep it handy during FPGA testing!** 📄
