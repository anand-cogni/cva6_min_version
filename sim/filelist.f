#################################################
# Include directories
#################################################

+incdir+../src
+incdir+../tb

+incdir+../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/apb_slave/src
+incdir+../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/axi5_slave/src
+incdir+../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/cmd_manager/src
+incdir+../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/command_processor/src
+incdir+../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/refresh_controller/src
+incdir+../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/dfi/src
+incdir+../Vspark_ip_core/LS_HBM3/testbench/hbm3_sv_core_2.0/src/hbm3_phy/src

#################################################
# CVA6 RTL
#################################################

../src/cva6_boot_rom.v
../src/cva6_data_ram.v
../src/cva6_min_core.v
../src/cva6_minimal_top.v

#################################################
# UART
#################################################

../src/simple_uart_tx.v

#################################################
# HBM3 SUBMODULES
#################################################

../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/apb_slave/src/apb_slave.sv
../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/axi5_slave/src/axi_slave_interface.sv
../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/cmd_manager/src/command_manager.sv
../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/command_processor/src/command_processor.sv
../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/refresh_controller/src/refresh_ctrl.sv
../Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/dfi/src/hbm3_dfi_interface.sv

#################################################
# HBM3 PHY
#################################################

../Vspark_ip_core/LS_HBM3/testbench/hbm3_sv_core_2.0/src/hbm3_phy/src/hbm3_phy.sv

#################################################
# HBM3 CONTROLLER TOP
#################################################

../Vspark_ip_core/LS_HBM3/rtl_cores/integration/src/hbm3_controller_top.sv

#################################################
# TESTBENCH
#################################################

../tb/tb_cva6_minimal_top.v
