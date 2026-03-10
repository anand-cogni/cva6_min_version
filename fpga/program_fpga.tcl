# ============================================================================
# FPGA Programming Script for PYNQ-Z2
# ============================================================================
# Description: Programs the CVA6 + HBM3 bitstream to PYNQ-Z2 board
# ============================================================================

set bitstream "vivado_project/cva6_hbm3_fpga.runs/impl_1/cva6_minimal_top.bit"

# Check if bitstream exists
if {![file exists $bitstream]} {
    puts "ERROR: Bitstream not found: $bitstream"
    puts "Please run synthesis and implementation first!"
    exit 1
}

puts "=========================================================================="
puts "Programming PYNQ-Z2 with CVA6 + HBM3 Bitstream"
puts "=========================================================================="
puts "Bitstream: $bitstream"
puts ""

# Open hardware manager
open_hw_manager

# Connect to hardware server
puts "Connecting to hardware server..."
connect_hw_server -allow_non_jtag

# Open hardware target
puts "Opening hardware target..."
open_hw_target

# Get the FPGA device
set device [get_hw_devices xc7z020_1]
if {$device == ""} {
    puts "ERROR: PYNQ-Z2 board not found!"
    puts "Check:"
    puts "  1. Board is powered on"
    puts "  2. USB cable connected to PROG/UART port"
    puts "  3. Jumper set to JTAG mode"
    puts "  4. Xilinx cable drivers installed"
    exit 1
}

current_hw_device $device
refresh_hw_device -update_hw_probes false $device

# Set bitstream
puts "Setting bitstream: $bitstream"
set_property PROGRAM.FILE $bitstream $device

# Program device
puts "Programming device..."
puts "This will take about 10-30 seconds..."
program_hw_devices $device

# Verify programming
puts ""
puts "=========================================================================="
puts "✅ Programming Complete!"
puts "=========================================================================="
puts ""
puts "Next steps:"
puts "  1. Press BTN0 (reset button) to restart the processor"
puts "  2. Observe LEDs - they should start blinking"
puts "  3. LED[0] should toggle every ~1 second"
puts ""
puts "LED Meaning:"
puts "  LD0 (LED[0]): Processor heartbeat (toggles in code)"
puts "  LD1 (LED[1]): May be used by processor"
puts "  LD2 (LED[2]): May be used by processor"  
puts "  LD3 (LED[3]): May be used by processor"
puts ""
puts "UART TX Output:"
puts "  - Connect to PMOD JA Pin 1 (Y18)"
puts "  - Baud rate: 115200, 8N1"
puts "  - Use USB-UART adapter to view debug output"
puts "=========================================================================="

# Close hardware manager
close_hw_manager
