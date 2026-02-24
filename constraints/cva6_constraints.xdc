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
## Additional Constraints (Optional)
## ============================================================================
## Disable timing on LED outputs (they're not timing critical)
set_false_path -to [get_ports {led[*]}]

## Set maximum fanout for better timing closure
set_max_fanout 20 [current_design]
