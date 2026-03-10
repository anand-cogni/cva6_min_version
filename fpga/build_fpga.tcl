# ============================================================================
# Vivado TCL Script for CVA6 + HBM3 FPGA Build
# ============================================================================
# Target Board: PYNQ-Z2 (XC7Z020-1CLG400C)
# Description: Synthesizes CVA6 + HBM3 integration for FPGA testing
# ============================================================================

# Set project name and directory
set project_name "cva6_hbm3_fpga"
set project_dir "./vivado_project"

# Create project
create_project $project_name $project_dir -part xc7z020clg400-1 -force

# Set target board
set_property board_part tul.com.tw:pynq-z2:part0:1.0 [current_project]

# Add source files
puts "Adding CVA6 source files..."
add_files {
    ../src/cva6_boot_rom.v
    ../src/cva6_data_ram.v
    ../src/cva6_min_core.v
    ../simple_uart_tx.v
}

# Add HBM3 controller files (SystemVerilog)
puts "Adding HBM3 controller files..."
add_files -fileset sources_1 {
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/apb_slave/src/apb_slave.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/apb_slave/src/apb_rtl_defines.svh
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/axi5_slave/src/axi_slave_interface.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/axi5_slave/src/axi_rtl_defines.svh
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/cmd_manager/src/command_manager.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/cmd_manager/src/cmdmgr_rtl_defines.svh
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/command_processor/src/command_processor.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/command_processor/src/cmdpr_rtl_defines.svh
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/refresh_controller/src/refresh_ctrl.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/dfi/src/dfi_rtl_defines.svh
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/dfi/src/hbm3_dfi_interface.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/integration/src/hbm3_controller_top.sv
}

# Add HBM3 PHY (behavioral - won't synthesize properly but will be optimized away)
add_files -fileset sources_1 {
    ../Vspark_ip_core/LS_HBM3/testbench/hbm3_sv_core_2.0/src/hbm3_phy/src/hbm3_phy.sv
}

# Set include directories for HBM3
set_property include_dirs {
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/dfi/src
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/refresh_controller/src
    ../Vspark_ip_core/LS_HBM3/testbench/hbm3_sv_core_2.0/src/hbm3_phy/src
} [current_fileset]

# Add top-level file
add_files ../cva6_minimal_top.v

# Set top module
set_property top cva6_minimal_top [current_fileset]

# Add constraints
add_files -fileset constrs_1 ../constraints/cva6_constraints.xdc

# Set Verilog/SystemVerilog properties
set_property file_type {Verilog Header} [get_files *.svh]
set_property file_type SystemVerilog [get_files *.sv]

# Synthesis settings
set_property strategy Flow_PerfOptimized_high [get_runs synth_1]
set_property STEPS.SYNTH_DESIGN.ARGS.DIRECTIVE RuntimeOptimized [get_runs synth_1]
set_property STEPS.SYNTH_DESIGN.ARGS.RETIMING true [get_runs synth_1]

# Implementation settings  
set_property strategy Performance_ExtraTimingOpt [get_runs impl_1]
set_property STEPS.PLACE_DESIGN.ARGS.DIRECTIVE Explore [get_runs impl_1]
set_property STEPS.ROUTE_DESIGN.ARGS.DIRECTIVE AggressiveExplore [get_runs impl_1]

# Set number of jobs (use all available cores)
set_param general.maxThreads 8

puts "=========================================================================="
puts "Project setup complete!"
puts "=========================================================================="
puts "Next steps:"
puts "  1. Run synthesis:      launch_runs synth_1 -jobs 8"
puts "  2. Wait for synthesis: wait_on_run synth_1"
puts "  3. Run implementation: launch_runs impl_1 -to_step write_bitstream -jobs 8"
puts "  4. Wait for bitstream:  wait_on_run impl_1"
puts "=========================================================================="
puts ""
puts "Or run all steps automatically:"
puts "  source build_fpga.tcl"
puts "  launch_runs synth_1 -jobs 8"
puts "  wait_on_run synth_1"
puts "  launch_runs impl_1 -to_step write_bitstream -jobs 8"
puts "  wait_on_run impl_1"
puts "=========================================================================="

# Uncomment to auto-run synthesis and implementation:
# launch_runs synth_1 -jobs 8
# wait_on_run synth_1
# launch_runs impl_1 -to_step write_bitstream -jobs 8
# wait_on_run impl_1
# 
# puts "Build complete! Bitstream: $project_dir/$project_name.runs/impl_1/cva6_minimal_top.bit"
