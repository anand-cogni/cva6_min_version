#!/usr/bin/bash

/usr/bin/verilator \
--binary \
-Wno-CASEINCOMPLETE \
-Wno-REALCVT \
-Wno-SELRANGE \
-Wno-TIMESCALEMOD \
-Wno-UNSIGNED \
-Wno-WIDTH \
--timing \
--assert \
--autoflush \
-sv \
-CFLAGS \
-O1 \
-j \
1 \
-top \
tb_cva6_minimal_top \
-o \
sim.exe \
+incdir+/home/smita/cva6_min_version/Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/dfi/src \
+incdir+/home/smita/cva6_min_version/Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/refresh_controller/src \
+incdir+/home/smita/cva6_min_version/Vspark_ip_core/LS_HBM3/testbench/hbm3_sv_core_2.0/src/hbm3_phy/src \
+define+SIMULATION=1 \
/home/smita/cva6_min_version/src/cva6_boot_rom.v \
/home/smita/cva6_min_version/src/cva6_data_ram.v \
/home/smita/cva6_min_version/src/cva6_min_core.v \
/home/smita/cva6_min_version/src/simple_uart_tx.v \
/home/smita/cva6_min_version/Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/apb_slave/src/apb_slave.sv \
/home/smita/cva6_min_version/Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/axi5_slave/src/axi_slave_interface.sv \
/home/smita/cva6_min_version/Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/cmd_manager/src/command_manager.sv \
/home/smita/cva6_min_version/Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/refresh_controller/src/refresh_ctrl.sv \
/home/smita/cva6_min_version/Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/command_processor/src/command_processor.sv \
/home/smita/cva6_min_version/Vspark_ip_core/LS_HBM3/rtl_cores/sub_modules/dfi/src/hbm3_dfi_interface.sv \
/home/smita/cva6_min_version/Vspark_ip_core/LS_HBM3/testbench/hbm3_sv_core_2.0/src/hbm3_phy/src/hbm3_phy.sv \
/home/smita/cva6_min_version/Vspark_ip_core/LS_HBM3/rtl_cores/integration/src/hbm3_controller_top.sv \
/home/smita/cva6_min_version/src/cva6_minimal_top.v \
/home/smita/cva6_min_version/tb/tb_cva6_minimal_top.v \
2>&1 | tee compile.log && test ${PIPESTATUS} -eq 0 

