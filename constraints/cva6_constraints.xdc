## ============================================================================
## PYNQ Z2 Board Constraints for CVA6 Minimal System
## ============================================================================
## Board: PYNQ Z2 (Zynq-7000 XC7Z020-1CLG400C)
## Description: Pin constraints and timing for CVA6 minimal boot system
## ============================================================================

## ============================================================================
## Clock Signal - 125 MHz System Clock
## ============================================================================
## PYNQ Z2 has a 125 MHz clock on H16
set_property -dict {PACKAGE_PIN H16 IOSTANDARD LVCMOS33} [get_ports sys_clock]

## Create clock constraint
create_clock -period 8.000 -name sys_clock_pin -waveform {0.000 4.000} -add [get_ports sys_clock]

## ============================================================================
## Reset Button - BTN0
## ============================================================================
## BTN0 is the rightmost button on PYNQ Z2
set_property -dict {PACKAGE_PIN M20 IOSTANDARD LVCMOS33} [get_ports sys_reset_n]

## Debounce the reset button input
set_false_path -from [get_ports sys_reset_n]

## ============================================================================
## LEDs - LD3, LD2, LD1, LD0
## ============================================================================
## PYNQ Z2 has 4 LEDs near the corner
set_property -dict {PACKAGE_PIN R14 IOSTANDARD LVCMOS33} [get_ports {led[0]}]
set_property -dict {PACKAGE_PIN P14 IOSTANDARD LVCMOS33} [get_ports {led[1]}]
set_property -dict {PACKAGE_PIN N16 IOSTANDARD LVCMOS33} [get_ports {led[2]}]
set_property -dict {PACKAGE_PIN M14 IOSTANDARD LVCMOS33} [get_ports {led[3]}]

## ============================================================================
## UART TX - Debug Output
## ============================================================================
## Using PMOD connector JA (Pin 1) for UART TX - connects to external USB-Serial adapter
## For onboard USB-UART (recommended): Use pin Y18 (PMOD JA1)
## Note: PYNQ-Z2's onboard FTDI UART typically connects to PS, not PL
##       So we use PMOD for PL-based UART output
set_property -dict {PACKAGE_PIN Y18 IOSTANDARD LVCMOS33} [get_ports uart_tx]

## ============================================================================
## Timing Constraints
## ============================================================================
## Set input delay for reset button (asynchronous, so set to 0)
set_input_delay -clock [get_clocks sys_clock_pin] 0.000 [get_ports sys_reset_n]

## Set output delay for LEDs (non-critical path)
set_output_delay -clock [get_clocks sys_clock_pin] 0.000 [get_ports {led[*]}]

## ============================================================================
## Configuration Settings
## ============================================================================
## Configuration voltage
set_property CONFIG_VOLTAGE 3.3 [current_design]
set_property CFGBVS VCCO [current_design]

## Bitstream settings
set_property BITSTREAM.GENERAL.COMPRESS TRUE [current_design]
set_property BITSTREAM.CONFIG.CONFIGRATE 50 [current_design]
set_property BITSTREAM.CONFIG.SPI_BUSWIDTH 4 [current_design]

## ============================================================================
## HBM3 PHY Signals - Unconnected (No real HBM3 on PYNQ-Z2)
## ============================================================================
## Mark HBM3 PHY signals as unconnected - synthesis will optimize them away
## These signals are part of the design but won't be routed to physical pins

## Mark all HBM3 ports as unconnected
set_property DONT_TOUCH false [get_ports phy_to_dram_*]

## Disable timing analysis on HBM3 signals (they're unconnected)
set_false_path -to [get_ports phy_to_dram_*]

## ============================================================================
## Additional Constraints (Optional)
## ============================================================================
## Disable timing on LED outputs (they're not timing critical)
set_false_path -to [get_ports {led[*]}]

## Disable timing on UART TX (non-critical)
set_false_path -to [get_ports uart_tx]

## Set maximum fanout for better timing closure
set_max_fanout 20 [current_design]

## ============================================================================
## Synthesis Settings for CVA6 + HBM3
## ============================================================================
## Allow synthesis to optimize away unconnected HBM3 logic
set_property KEEP_HIERARCHY soft [current_design]
