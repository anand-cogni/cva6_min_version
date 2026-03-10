# 📡 UART Setup Guide - Step-by-Step for PYNQ-Z2

## How to See UART Messages on Your Computer

---

## 🎯 **Goal:**
Connect your PYNQ-Z2 board to your computer and see the messages "CVA6 Booting...", "LED ON", "LED OFF" on your screen.

---

## 📦 **What You Need:**

1. **PYNQ-Z2 board** (with CVA6 design programmed)
2. **USB cable** (micro-USB, same cable used for programming)
3. **Computer** (Linux/Windows/Mac)
4. **Terminal software** (instructions below)

---

## 🔌 **Physical Setup**

### **Step 1: Connect the Board**

```
  Your Computer                    PYNQ-Z2 Board
  ┌──────────┐                    ┌─────────────┐
  │          │                    │             │
  │  USB     │  ══════════════════│ USB Port    │
  │  Port    │  Micro-USB Cable   │ (UART/PROG) │
  │          │                    │             │
  └──────────┘                    └─────────────┘
                                   LD0 LD1 LD2 LD3
                                    ●   ●   ●   ●
```

**Physical Steps:**
1. Take your **micro-USB cable**
2. Plug **micro-USB end** into PYNQ-Z2 board (labeled "PROG/UART" or "USB")
3. Plug **standard USB end** into your computer's USB port
4. **Power on** the board (switch or USB power)

**⚠️ Important:** The PYNQ-Z2 has ONE USB port that does BOTH:
- FPGA programming (via JTAG)
- UART communication (via USB-to-UART chip)

You're using the **SAME cable** for programming AND UART!

---

## 🖥️ **Software Setup**

### **Step 2: Find the UART Device**

When you plug in the USB cable, your computer creates a "virtual serial port" device.

#### **On Linux (Ubuntu):**

```bash
# List all USB serial devices
ls -la /dev/ttyUSB*

# You'll see something like:
# /dev/ttyUSB0  ← This is your UART port!
# or
# /dev/ttyUSB1
```

**If you see multiple devices**, try them one by one. PYNQ-Z2 usually shows up as:
- `/dev/ttyUSB0` - First UART (PROG/UART port)
- `/dev/ttyUSB1` - Second UART (if board has two)

#### **On Windows:**

1. Open **Device Manager**
2. Look under **Ports (COM & LPT)**
3. Find "USB Serial Port (COM3)" or similar
4. Note the **COM number** (e.g., COM3, COM5)

#### **On Mac:**

```bash
ls -la /dev/tty.usbserial*

# You'll see something like:
# /dev/tty.usbserial-A12345  ← This is your UART port!
```

---

### **Step 3: Open a Serial Terminal**

A **serial terminal** is a program that lets you see text coming from the UART.

#### **Method 1: Using `screen` (Linux/Mac - Pre-installed)**

```bash
# Replace /dev/ttyUSB0 with your device
sudo screen /dev/ttyUSB0 115200
```

**What the command means:**
- `sudo` - Run with admin rights (needed for serial ports)
- `screen` - Terminal program
- `/dev/ttyUSB0` - The UART device we found
- `115200` - Speed (baud rate) - MUST match your design!

**To exit screen:**
- Press: `Ctrl-A` (hold Control, press A)
- Then press: `K` (capital K)
- Then press: `Y` (to confirm)

#### **Method 2: Using `picocom` (Linux - Install first)**

```bash
# Install if needed:
sudo apt-get install picocom

# Then run:
sudo picocom -b 115200 /dev/ttyUSB0
```

**To exit picocom:**
- Press: `Ctrl-A` then `Ctrl-X`

#### **Method 3: Using Python `miniterm` (All platforms)**

```bash
# This should already be installed if you have Python
python3 -m serial.tools.miniterm /dev/ttyUSB0 115200
```

**To exit miniterm:**
- Press: `Ctrl-]` (Control + right bracket)

#### **Method 4: Using PuTTY (Windows)**

1. **Download PuTTY** from: https://www.putty.org/
2. **Open PuTTY**
3. **Select:**
   - Connection type: **Serial**
   - Serial line: **COM3** (your COM port)
   - Speed: **115200**
4. **Click Open**

---

## 📺 **Step 4: See the UART Output**

### **What You Should See:**

After opening the terminal, you should immediately see:

```
CVA6 Booting...
LED ON
LED OFF
LED ON
LED OFF
LED ON
LED OFF
(keeps repeating...)
```

**If the screen is blank:**
1. Press the **reset button (BTN0)** on the board
2. You should see "CVA6 Booting..." appear
3. Then "LED ON" and "LED OFF" messages repeating

---

## 🎬 **Complete Walkthrough Example (Linux)**

Here's a complete session from start to finish:

```bash
# 1. Check if board is connected
$ ls /dev/ttyUSB*
/dev/ttyUSB0  ← Board found!

# 2. Open serial terminal
$ sudo screen /dev/ttyUSB0 115200
[sudo] password for user: ****

# 3. Screen opens and shows:
CVA6 Booting...
LED ON
LED OFF
LED ON
LED OFF
LED ON
LED OFF
...

# 4. Press reset on board, you see:
CVA6 Booting...
LED ON
LED OFF
...

# 5. To exit: Press Ctrl-A, then K, then Y
[screen is terminating]
$
```

**That's it!** You've successfully seen UART output from your FPGA! 🎉

---

## 🔍 **What's Actually Happening?**

### **Behind the Scenes:**

1. **Your CVA6 processor** writes bytes (like 0x43 = 'C') to UART register
2. **UART module** (`simple_uart_tx.v`) converts bytes to serial bits
3. **FPGA UART TX pin** sends electrical signal (high/low voltage)
4. **USB-UART chip** (on PYNQ board) converts FPGA signals to USB
5. **USB cable** carries data to your computer
6. **Computer** sees it as `/dev/ttyUSB0` (virtual serial port)
7. **Terminal program** (`screen`) reads from `/dev/ttyUSB0`
8. **Your screen** displays the text: "CVA6 Booting..."

### **Visual Data Flow:**

```
CVA6 CPU          UART Module       FPGA Pin     USB Chip    Computer
┌─────┐          ┌──────────┐       ┌──────┐    ┌──────┐   ┌─────────┐
│Write│  0x43 →  │ Serialize│  TX → │ GPIO │ →  │ USB  │ → │Terminal │
│0x43 │          │ 8 bits   │       │ Pin  │    │ UART │   │ Display │
└─────┘          └──────────┘       └──────┘    └──────┘   └─────────┘
  'C'              10000011b         voltage      USB        'C'
```

---

## 🎯 **TL;DR - Simplest Possible Steps**

### **3 Commands, That's It:**

```bash
# 1. Find UART
ls /dev/ttyUSB*

# 2. Open it (replace ttyUSB0 with your device)
sudo screen /dev/ttyUSB0 115200

# 3. Watch messages appear!
CVA6 Booting...
LED ON
LED OFF
...
```

**To exit:** Press `Ctrl-A`, then `K`, then `Y`

---

## ❓ **Common Questions**

### **Q: Do I need a special cable?**
**A:** No! Use the same micro-USB cable you used to program the FPGA.

### **Q: Do I need to install anything?**
**A:** On Linux, `screen` is usually pre-installed. On Windows, download PuTTY.

### **Q: Which USB port on PYNQ-Z2?**
**A:** The one labeled "PROG/UART" or just "USB" - it's the micro-USB connector.

### **Q: What is 115200?**
**A:** It's the speed (baud rate) - how many bits per second. Must match your design!

### **Q: What if I see garbage characters?**
**A:** Wrong baud rate! Make sure you're using **115200** exactly.

### **Q: What if nothing appears?**
**A:** Press the reset button (BTN0) on the board to restart the processor.

### **Q: Can I use the same USB for programming AND UART?**
**A:** Yes! The PYNQ-Z2's USB does both. Just close Vivado first, then open the serial terminal.

---

## 🎥 **Video Tutorial Steps**

If you were making a video, here's the script:

```
[Scene 1: Show PYNQ-Z2 board]
"Here's our PYNQ-Z2 board with the CVA6 processor design programmed."

[Scene 2: Plug in USB cable]
"I'm connecting the USB cable from the board to my computer."

[Scene 3: Open terminal window]
"Now I'll open a terminal and check for the UART device..."

[Type: ls /dev/ttyUSB*]
"There it is - /dev/ttyUSB0"

[Type: sudo screen /dev/ttyUSB0 115200]
"Opening the serial terminal at 115200 baud..."

[Scene 4: Show messages appearing]
"And there we go! We can see the CVA6 Booting message, followed by
LED ON and LED OFF messages repeating. This proves both the boot 
sequence and UART communication are working perfectly."

[Scene 5: Press reset button]
"If I press reset, we see the boot message again..."

[Press BTN0, show "CVA6 Booting..." appear]

"Perfect! Everything works."
```

---

## 🛠️ **Troubleshooting Guide**

### **Problem 1: "Permission denied" error**

```bash
$ sudo screen /dev/ttyUSB0 115200
/dev/ttyUSB0: Permission denied

# Solution: Add yourself to dialout group
sudo usermod -a -G dialout $USER
# Then log out and log back in
```

### **Problem 2: "Device not found"**

```bash
$ ls /dev/ttyUSB*
ls: cannot access '/dev/ttyUSB*': No such file or directory

# Solutions:
# 1. Check USB cable is connected
# 2. Check board is powered on
# 3. Try a different USB port on computer
# 4. Check USB cable is data-capable (not charge-only)
# 5. Install FTDI/Silicon Labs drivers (Windows)
```

### **Problem 3: See garbage like "��▒▒��"**

```
# Wrong baud rate!
# Exit terminal and reconnect with correct rate:
sudo screen /dev/ttyUSB0 115200
#                         ^^^^^^ Make sure it's 115200!
```

### **Problem 4: Terminal opens but nothing appears**

```
# Processor might be stuck
# Press reset button (BTN0) on PYNQ board
# You should see: CVA6 Booting...
```

---

## ✅ **Success Checklist**

Step-by-step confirmation:

- [ ] USB cable connected to PYNQ-Z2
- [ ] USB cable connected to computer
- [ ] Board powered on
- [ ] Terminal program installed (`screen`, `picocom`, or PuTTY)
- [ ] Found UART device (`/dev/ttyUSB0` or `COM3`)
- [ ] Opened terminal at 115200 baud
- [ ] See "CVA6 Booting..." message
- [ ] See "LED ON" and "LED OFF" messages
- [ ] Messages keep appearing continuously

**If all checked:** ✅ **UART TEST COMPLETE!**

---

## 📸 **Screenshot Examples**

### **What You'll See in Terminal:**

```
┌─────────────────────────────────────────────────────────┐
│ screen /dev/ttyUSB0 115200                              │
├─────────────────────────────────────────────────────────┤
│ CVA6 Booting...                                         │
│ LED ON                                                  │
│ LED OFF                                                 │
│ LED ON                                                  │
│ LED OFF                                                 │
│ LED ON                                                  │
│ LED OFF                                                 │
│ LED ON                                                  │
│ LED OFF                                                 │
│ LED ON                                                  │
│ LED OFF                                                 │
│ _                                                       │
│                                                         │
│                                                         │
└─────────────────────────────────────────────────────────┘
```

---

## 🎓 **Understanding the Connection**

### **Simple Explanation:**

Think of UART like a **telephone line** between the FPGA and your computer:

1. **FPGA talks** → Sends letters through UART
2. **USB cable carries** → Like telephone wire
3. **Computer listens** → Terminal program "hears" the letters
4. **You see** → Messages appear on your screen!

### **Why 115200?**

This is the **speed** - how many bits per second are sent:
- Too slow → Missed characters
- Too fast → Garbled text
- Just right (115200) → Perfect messages! ✅

**Both sides must use the same speed!**
- FPGA side: Set in `simple_uart_tx.v` (parameter BAUD_RATE = 115200)
- Computer side: Set in terminal command (115200)

---

## 🚀 **Quick Start (Copy-Paste Ready)**

### **For Linux Users:**

```bash
# Step 1: Find UART device
ls /dev/ttyUSB*
# Note the device name (probably /dev/ttyUSB0)

# Step 2: Open terminal
sudo screen /dev/ttyUSB0 115200

# Step 3: Watch output!
# You should see: CVA6 Booting...

# Step 4: Exit when done
# Press: Ctrl-A, then K, then Y
```

### **For Windows Users:**

```
Step 1: Download PuTTY
   → Go to: https://www.putty.org/
   → Download and install

Step 2: Find COM Port
   → Open Device Manager
   → Look under "Ports (COM & LPT)"
   → Note your COM number (e.g., COM3)

Step 3: Open PuTTY
   → Connection type: Serial
   → Serial line: COM3 (your port)
   → Speed: 115200
   → Click "Open"

Step 4: Watch output!
   → You should see: CVA6 Booting...
```

### **For Mac Users:**

```bash
# Step 1: Find UART device  
ls /dev/tty.usbserial*
# Note the device name

# Step 2: Open terminal
screen /dev/tty.usbserial-XXXXX 115200

# Step 3: Watch output!
# You should see: CVA6 Booting...

# Step 4: Exit when done
# Press: Ctrl-A, then K, then Y
```

---

## 💡 **Pro Tips**

### **Tip 1: Check if Board is Sending Data**

Before opening terminal, check if data is flowing:

```bash
# Watch for activity on UART device
cat /dev/ttyUSB0
# You should see garbage characters appearing
# Press Ctrl-C to stop
# This proves data IS coming from board!
```

### **Tip 2: Log Everything to File**

```bash
# Capture all UART output to a file
python3 -m serial.tools.miniterm /dev/ttyUSB0 115200 | tee uart_capture.txt
```

Now you have **proof** in `uart_capture.txt` file!

### **Tip 3: Count Messages Automatically**

```bash
# Count how many times "LED ON" appears in 10 seconds
timeout 10 python3 -m serial.tools.miniterm /dev/ttyUSB0 115200 | grep "LED ON" | wc -l

# Should be ~50 (5 per second × 10 seconds)
```

---

## 🎯 **What Success Looks Like**

### **Visual Indicators:**

| Indicator | What You See | Status |
|-----------|--------------|--------|
| **Terminal shows text** | "CVA6 Booting..." | ✅ WORKING |
| **New lines keep appearing** | "LED ON", "LED OFF" repeating | ✅ WORKING |
| **Matches LED blinks** | "LED ON" when LD0 lights up | ✅ PERFECT |
| **Reset shows boot msg** | Press BTN0 → "CVA6 Booting..." | ✅ PERFECT |

### **Failure Indicators:**

| Indicator | Problem | Solution |
|-----------|---------|----------|
| **No text at all** | Not connected or wrong port | Check USB, try different device |
| **Random garbage: ��▒▒** | Wrong baud rate | Use 115200, not 9600 or other |
| **Permission denied** | Need admin rights | Use `sudo` |
| **Device not found** | USB not detected | Check cable, check power |

---

## 📚 **Still Confused? Here's the Absolute Basics:**

### **Think of it like this:**

**FPGA → Computer connection is like:**
- 📞 **Phone call** from FPGA to computer
- 📺 **TV broadcast** where computer watches
- 📻 **Radio transmission** computer tunes into

**The terminal program is like:**
- 📺 **TV screen** that shows what FPGA is saying
- 📱 **Messaging app** where FPGA sends texts
- 🎧 **Headphones** where you hear FPGA talking

**The USB cable is like:**
- 📡 **Phone wire** carrying the conversation
- 🔌 **Cable TV wire** bringing the signal
- 🌉 **Bridge** connecting two devices

---

## ✅ **Bottom Line**

**If you can:**
1. Plug in USB cable ✅
2. Type one command: `sudo screen /dev/ttyUSB0 115200` ✅
3. See "CVA6 Booting..." on screen ✅

**Then you've successfully verified UART communication!** 🎉

---

## 📞 **Need More Help?**

Try this **ultra-simple test** first:

```bash
# Just see if ANYTHING is coming from the board
cat /dev/ttyUSB0
```

If you see **ANY characters** appearing (even garbage), the connection works!  
Then just use correct baud rate (115200) to see proper messages.

---

**You got this!** 💪 The hardest part is just knowing which command to type!
