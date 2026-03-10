debImport "dump.fsdb"
wvCreateWindow
wvSetPosition -win $_nWave2 {("G1" 0)}
wvOpenFile -win $_nWave2 \
           {/projects/cva6/users/smita.s/cva6_min_version/sim/dump.fsdb}
verdiSetActWin -win $_nWave2
verdiWindowResize -win $_Verdi_1 "545" "221" "900" "700"
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
verdiSetActWin -win $_nWave2
wvSetFileTimeRange -win $_nWave2 -time_unit 1p 0 509356000
verdiWindowResize -win $_Verdi_1 "386" "99" "900" "700"
verdiWindowResize -win $_Verdi_1 "256" "27" "665" "700"
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
verdiSetActWin -win $_nWave2
wvGetSignalOpen -win $_nWave2
wvGetSignalSetScope -win $_nWave2 "/tb_cva6_minimal_top"
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvGetSignalSetScope -win $_nWave2 "/tb_cva6_minimal_top"
wvScrollDown -win $_nWave2 0
wvGetSignalSetOptions -win $_nWave2 -input on
wvGetSignalSetSignalFilter -win $_nWave2 "*"
wvScrollDown -win $_nWave2 0
wvScrollDown -win $_nWave2 0
wvGetSignalSetScope -win $_nWave2 "/tb_cva6_minimal_top"
wvGetSignalSetSignalFilter -win $_nWave2 "*aw*"
wvSetPosition -win $_nWave2 {("G1" 0)}
wvSetPosition -win $_nWave2 {("G1" 0)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G1" \
}
wvSetPosition -win $_nWave2 {("G1" 0)}
wvGetSignalSetSignalFilter -win $_nWave2 "*w*"
wvSetPosition -win $_nWave2 {("G1" 0)}
wvSetPosition -win $_nWave2 {("G1" 0)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G1" \
}
wvSetPosition -win $_nWave2 {("G1" 0)}
wvGetSignalSetSignalFilter -win $_nWave2 "*"
wvSetPosition -win $_nWave2 {("G1" 0)}
wvSetPosition -win $_nWave2 {("G1" 0)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G1" \
}
wvSetPosition -win $_nWave2 {("G1" 0)}
wvGetSignalSetSignalFilter -win $_nWave2 "*addr*"
wvSetPosition -win $_nWave2 {("G1" 0)}
wvSetPosition -win $_nWave2 {("G1" 0)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G1" \
}
wvSetPosition -win $_nWave2 {("G1" 0)}
wvSetPosition -win $_nWave2 {("G1" 1)}
wvSetPosition -win $_nWave2 {("G1" 1)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G1" \
{/tb_cva6_minimal_top/dut/u_mem_to_axi_bridge/mem_addr\[31:0\]} -height 16 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
}
wvSelectSignal -win $_nWave2 {( "G1" 1 )} 
wvSetPosition -win $_nWave2 {("G1" 1)}
wvSetCursor -win $_nWave2 11542398.550820 -snap {("G1" 1)}
wvSetCursor -win $_nWave2 16173607.845902 -snap {("G1" 1)}
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoom -win $_nWave2 495473961.475410 512341160.163934
wvSetCursor -win $_nWave2 508884766.990047 -snap {("G1" 1)}
wvZoom -win $_nWave2 504598839.454438 508504563.740920
wvZoom -win $_nWave2 507360058.468409 507680199.803366
wvZoom -win $_nWave2 507444029.966094 507581139.677172
verdiWindowResize -win $_Verdi_1 "276" "27" "984" "700"
wvGetSignalSetScope -win $_nWave2 "/tb_cva6_minimal_top/dut/u_boot_rom"
wvSetPosition -win $_nWave2 {("G1" 2)}
wvSetPosition -win $_nWave2 {("G1" 2)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G1" \
{/tb_cva6_minimal_top/dut/u_mem_to_axi_bridge/mem_addr\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_boot_rom/addr\[9:0\]} -height 16 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
}
wvSelectSignal -win $_nWave2 {( "G1" 2 )} 
wvSetPosition -win $_nWave2 {("G1" 2)}
wvGetSignalSetScope -win $_nWave2 "/tb_cva6_minimal_top/dut/u_data_ram"
wvSetPosition -win $_nWave2 {("G1" 8)}
wvSetPosition -win $_nWave2 {("G1" 8)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G1" \
{/tb_cva6_minimal_top/dut/u_mem_to_axi_bridge/mem_addr\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_boot_rom/addr\[9:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/addr\[11:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/be\[3:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/clk} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/req} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/wdata\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/we} -height 16 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
}
wvSelectSignal -win $_nWave2 {( "G1" 3 4 5 6 7 8 )} 
wvSetPosition -win $_nWave2 {("G1" 8)}
wvSetCursor -win $_nWave2 507642069.467103 -snap {("G1" 5)}
wvSetCursor -win $_nWave2 507540525.133676 -snap {("G1" 7)}
wvZoomAll -win $_nWave2
wvSetCursor -win $_nWave2 311092175.068154 -snap {("G1" 1)}
wvZoom -win $_nWave2 0.000000 10199743.444857
wvZoom -win $_nWave2 0.000000 227503.571261
wvSetCursor -win $_nWave2 42286.909156 -snap {("G1" 5)}
wvZoomOut -win $_nWave2
wvGetSignalSetScope -win $_nWave2 "/tb_cva6_minimal_top"
wvGetSignalSetSignalFilter -win $_nWave2 "*clk*"
wvSetPosition -win $_nWave2 {("G1" 8)}
wvSetPosition -win $_nWave2 {("G1" 8)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G1" \
{/tb_cva6_minimal_top/dut/u_mem_to_axi_bridge/mem_addr\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_boot_rom/addr\[9:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/addr\[11:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/be\[3:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/clk} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/req} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/wdata\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/we} -height 16 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
}
wvSelectSignal -win $_nWave2 {( "G1" 3 4 5 6 7 8 )} 
wvSetPosition -win $_nWave2 {("G1" 8)}
wvGetSignalSetSignalFilter -win $_nWave2 "*c*"
wvSetPosition -win $_nWave2 {("G1" 8)}
wvSetPosition -win $_nWave2 {("G1" 8)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G1" \
{/tb_cva6_minimal_top/dut/u_mem_to_axi_bridge/mem_addr\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_boot_rom/addr\[9:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/addr\[11:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/be\[3:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/clk} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/req} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/wdata\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/we} -height 16 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
}
wvSelectSignal -win $_nWave2 {( "G1" 3 4 5 6 7 8 )} 
wvSetPosition -win $_nWave2 {("G1" 8)}
wvSetPosition -win $_nWave2 {("G1" 9)}
wvSetPosition -win $_nWave2 {("G1" 9)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G1" \
{/tb_cva6_minimal_top/dut/u_mem_to_axi_bridge/mem_addr\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_boot_rom/addr\[9:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/addr\[11:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/be\[3:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/clk} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/req} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/wdata\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/we} -height 16 \
{/tb_cva6_minimal_top/dut/sys_clock} -height 16 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
}
wvSelectSignal -win $_nWave2 {( "G1" 9 )} 
wvSetPosition -win $_nWave2 {("G1" 9)}
wvGetSignalSetSignalFilter -win $_nWave2 "*r*"
wvSetPosition -win $_nWave2 {("G1" 9)}
wvSetPosition -win $_nWave2 {("G1" 9)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G1" \
{/tb_cva6_minimal_top/dut/u_mem_to_axi_bridge/mem_addr\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_boot_rom/addr\[9:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/addr\[11:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/be\[3:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/clk} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/req} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/wdata\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/we} -height 16 \
{/tb_cva6_minimal_top/dut/sys_clock} -height 16 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
}
wvSelectSignal -win $_nWave2 {( "G1" 9 )} 
wvSetPosition -win $_nWave2 {("G1" 9)}
wvGetSignalSetScope -win $_nWave2 "/tb_cva6_minimal_top"
wvGetSignalSetSignalFilter -win $_nWave2 "*r*"
wvSetPosition -win $_nWave2 {("G1" 9)}
wvSetPosition -win $_nWave2 {("G1" 9)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G1" \
{/tb_cva6_minimal_top/dut/u_mem_to_axi_bridge/mem_addr\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_boot_rom/addr\[9:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/addr\[11:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/be\[3:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/clk} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/req} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/wdata\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/we} -height 16 \
{/tb_cva6_minimal_top/dut/sys_clock} -height 16 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
}
wvSelectSignal -win $_nWave2 {( "G1" 9 )} 
wvSetPosition -win $_nWave2 {("G1" 9)}
wvGetSignalSetSignalFilter -win $_nWave2 "*r*"
wvSetPosition -win $_nWave2 {("G1" 9)}
wvSetPosition -win $_nWave2 {("G1" 9)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G1" \
{/tb_cva6_minimal_top/dut/u_mem_to_axi_bridge/mem_addr\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_boot_rom/addr\[9:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/addr\[11:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/be\[3:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/clk} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/req} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/wdata\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/we} -height 16 \
{/tb_cva6_minimal_top/dut/sys_clock} -height 16 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
}
wvSelectSignal -win $_nWave2 {( "G1" 9 )} 
wvSetPosition -win $_nWave2 {("G1" 9)}
wvGetSignalSetSignalFilter -win $_nWave2 "*r*"
wvSetPosition -win $_nWave2 {("G1" 9)}
wvSetPosition -win $_nWave2 {("G1" 9)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G1" \
{/tb_cva6_minimal_top/dut/u_mem_to_axi_bridge/mem_addr\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_boot_rom/addr\[9:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/addr\[11:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/be\[3:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/clk} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/req} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/wdata\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/we} -height 16 \
{/tb_cva6_minimal_top/dut/sys_clock} -height 16 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
}
wvSelectSignal -win $_nWave2 {( "G1" 9 )} 
wvSetPosition -win $_nWave2 {("G1" 9)}
wvGetSignalSetSignalFilter -win $_nWave2 "*r*"
wvSetPosition -win $_nWave2 {("G1" 9)}
wvSetPosition -win $_nWave2 {("G1" 9)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G1" \
{/tb_cva6_minimal_top/dut/u_mem_to_axi_bridge/mem_addr\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_boot_rom/addr\[9:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/addr\[11:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/be\[3:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/clk} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/req} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/wdata\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/we} -height 16 \
{/tb_cva6_minimal_top/dut/sys_clock} -height 16 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
}
wvSelectSignal -win $_nWave2 {( "G1" 9 )} 
wvSetPosition -win $_nWave2 {("G1" 9)}
wvGetSignalSetSignalFilter -win $_nWave2 "*r*"
wvGetSignalSetSignalFilter -win $_nWave2 "*r*"
wvSetPosition -win $_nWave2 {("G1" 9)}
wvSetPosition -win $_nWave2 {("G1" 9)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G1" \
{/tb_cva6_minimal_top/dut/u_mem_to_axi_bridge/mem_addr\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_boot_rom/addr\[9:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/addr\[11:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/be\[3:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/clk} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/req} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/wdata\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/we} -height 16 \
{/tb_cva6_minimal_top/dut/sys_clock} -height 16 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
}
wvSelectSignal -win $_nWave2 {( "G1" 9 )} 
wvSetPosition -win $_nWave2 {("G1" 9)}
wvGetSignalSetScope -win $_nWave2 "/tb_cva6_minimal_top/dut"
wvSetPosition -win $_nWave2 {("G1" 10)}
wvSetPosition -win $_nWave2 {("G1" 10)}
wvAddSignal -win $_nWave2 -clear
wvAddSignal -win $_nWave2 -group {"G1" \
{/tb_cva6_minimal_top/dut/u_mem_to_axi_bridge/mem_addr\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_boot_rom/addr\[9:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/addr\[11:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/be\[3:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/clk} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/req} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/wdata\[31:0\]} -height 16 \
{/tb_cva6_minimal_top/dut/u_data_ram/we} -height 16 \
{/tb_cva6_minimal_top/dut/sys_clock} -height 16 \
{/tb_cva6_minimal_top/dut/sys_reset_n} -height 16 \
}
wvAddSignal -win $_nWave2 -group {"G2" \
}
wvSelectSignal -win $_nWave2 {( "G1" 10 )} 
wvSetPosition -win $_nWave2 {("G1" 10)}
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomAll -win $_nWave2
wvZoomAll -win $_nWave2
wvZoomAll -win $_nWave2
wvZoomAll -win $_nWave2
wvZoomAll -win $_nWave2
wvSetCursor -win $_nWave2 58011040.842627 -snap {("G2" 0)}
wvZoom -win $_nWave2 0.000000 3187419.826518
wvSetCursor -win $_nWave2 872886.966122 -snap {("G1" 1)}
wvSetCursor -win $_nWave2 872886.966122 -snap {("G1" 1)}
wvSetCursor -win $_nWave2 1129618.426746 -snap {("G1" 1)}
wvSetCursor -win $_nWave2 1133517.002959 -snap {("G1" 1)}
wvSetCursor -win $_nWave2 1173012.368916 -snap {("G1" 1)}
wvZoom -win $_nWave2 1082173.027215 1224356.344659
wvZoomAll -win $_nWave2
wvZoomAll -win $_nWave2
wvZoomAll -win $_nWave2
wvZoom -win $_nWave2 495048177.566910 508191049.537713
wvSetCursor -win $_nWave2 500740224.308513 -snap {("G1" 10)}
wvSetCursor -win $_nWave2 6971158.368942 -snap {("G1" 9)}
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoomOut -win $_nWave2
wvZoom -win $_nWave2 492544773.381995 508191049.537713
wvZoom -win $_nWave2 499930120.277786 503223071.342189
wvSetCursor -win $_nWave2 502065330.639411 -snap {("G1" 1)}
wvSetCursor -win $_nWave2 502037288.477062 -snap {("G1" 1)}
wvSetCursor -win $_nWave2 502081354.732182 -snap {("G1" 1)}
wvZoom -win $_nWave2 501961174.036401 502149457.126458
