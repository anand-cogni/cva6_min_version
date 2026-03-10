# ============================================================================
# Vivado Project Creation Script - CVA6 + HBM3 on PYNQ-Z2
# ============================================================================
# Usage: vivado -mode batch -source create_vivado_project.tcl
# Or in Vivado TCL console: source create_vivado_project.tcl
# ============================================================================

puts "========================================================================"
puts "Creating Vivado Project: CVA6 + HBM3 for PYNQ-Z2"
puts "========================================================================"

# Set project name and location
set project_name "cva6_fpga"
set project_dir "./vivado_project"

# Create project
puts "\n[1/6] Creating project..."
create_project ${project_name} ${project_dir} -part xc7z020clg400-1 -force

# Set board part for PYNQ-Z2 (try to set, but continue if not available)
puts "[2/6] Setting board to PYNQ-Z2..."
if {[catch {set_property board_part tul.com.tw:pynq-z2:part0:1.0 [current_project]} result]} {
    puts "  ⚠ PYNQ-Z2 board files not installed (this is OK)"
    puts "  ✓ Using FPGA part directly: xc7z020clg400-1"
} else {
    puts "  ✓ Board set successfully"
}

# Add CVA6 core source files
puts "[3/6] Adding CVA6 core files..."
add_files {
    ../src/cva6_boot_rom.v
    ../src/cva6_data_ram.v
    ../src/cva6_min_core.v
    ../src/cva6_minimal_top.v
    ../simple_uart_tx.v
}

# Add HBM3 SystemVerilog files
puts "[4/6] Adding HBM3 controller files..."
add_files {
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/apb_slave/src/apb_slave.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/axi5_slave/src/axi_slave_interface.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/cmd_manager/src/command_manager.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/refresh_controller/src/refresh_ctrl.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/command_processor/src/command_processor.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/dfi/src/hbm3_dfi_interface.sv
    ../Vspark_ip_core/LS_HBM3/testbench/hbm3_sv_core_2.0/src/hbm3_phy/src/hbm3_phy.sv
    ../Vspark_ip_core/LS_HBM3/rtl_cores/integration/src/hbm3_controller_top.sv
}

# Add constraint file
puts "[5/6] Adding constraint file..."
add_files -fileset constrs_1 {
    ../constraints/cva6_constraints.xdc
}

# Set include directories for SystemVerilog headers
puts "[6/6] Setting include directories..."
set_property include_dirs {
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/dfi/src
    ../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/refresh_controller/src
    ../Vspark_ip_core/LS_HBM3/testbench/hbm3_sv_core_2.0/src/hbm3_phy/src
} [current_fileset]

# Set top module
set_property top cva6_minimal_top [current_fileset]

# Update compile order
update_compile_order -fileset sources_1

# Project settings
set_property target_language Verilog [current_project]
set_property simulator_language Mixed [current_project]

puts "========================================================================"
puts "✅ Project created successfully!"
puts "========================================================================"
puts "Project name: ${project_name}"
puts "Project location: ${project_dir}"
puts "Top module: cva6_minimal_top"
puts "Board: PYNQ-Z2 (xc7z020clg400-1)"
puts "========================================================================"
puts "\nNext steps:"
puts "  1. Open project: vivado ${project_dir}/${project_name}.xpr &"
puts "  2. Run synthesis: Click 'Run Synthesis' in Vivado"
puts "  3. Wait 10-30 minutes for synthesis to complete"
puts "========================================================================"
