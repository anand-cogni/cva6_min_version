// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cva6_minimal_top.h for the primary calling header

#include "Vtb_cva6_minimal_top__pch.h"
#include "Vtb_cva6_minimal_top__Syms.h"
#include "Vtb_cva6_minimal_top___024root.h"

VL_ATTR_COLD void Vtb_cva6_minimal_top___024root___eval_initial__TOP(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ tb_cva6_minimal_top__DOT__mem_idx;
    tb_cva6_minimal_top__DOT__mem_idx = 0;
    IData/*31:0*/ tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__i;
    tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__i = 0;
    IData/*31:0*/ tb_cva6_minimal_top__DOT__dut__DOT__u_data_ram__DOT__i;
    tb_cva6_minimal_top__DOT__dut__DOT__u_data_ram__DOT__i = 0;
    IData/*31:0*/ tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    vlSelf->tb_cva6_minimal_top__DOT__uart_rx_state = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__uart_bit_counter = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__uart_bit_index = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__uart_rx_byte = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__prev_regs[0U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__prev_regs[1U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__prev_regs[2U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__prev_regs[3U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__prev_regs[4U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__prev_regs[5U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__prev_regs[6U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__prev_regs[7U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__prev_regs[8U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__prev_regs[9U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__prev_regs[0xaU] = 0U;
    tb_cva6_minimal_top__DOT__mem_idx = 0U;
    while (VL_GTS_III(32, 0x400U, tb_cva6_minimal_top__DOT__mem_idx)) {
        vlSelf->tb_cva6_minimal_top__DOT__hbm3_loopback_mem[(0x3ffU 
                                                             & tb_cva6_minimal_top__DOT__mem_idx)] = 0U;
        tb_cva6_minimal_top__DOT__mem_idx = ((IData)(1U) 
                                             + tb_cva6_minimal_top__DOT__mem_idx);
    }
    __Vtemp_2[0U] = 0x2e667374U;
    __Vtemp_2[1U] = 0x66696c65U;
    __Vtemp_2[2U] = 0x64756d70U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_2));
    VL_PRINTF_MT("-Info: /home/smita/cva6_min_version/tb/tb_cva6_minimal_top.v:585: $dumpvar ignored, as Verilated without --trace\n");
    tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__i)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[(0xffU 
                                                                          & tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__i)] = 0x13U;
        tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__i 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__i);
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0U] = 0x10001137U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[1U] = 0x210002b7U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[2U] = 0x20000337U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[3U] = 0x4300393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[4U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[5U] = 0x5600393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[6U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[7U] = 0x4100393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[8U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[9U] = 0x3600393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0xaU] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0xbU] = 0x2000393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0xcU] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0xdU] = 0x4200393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0xeU] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0xfU] = 0x6f00393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x10U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x11U] = 0x6f00393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x12U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x13U] = 0x7400393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x14U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x15U] = 0x6900393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x16U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x17U] = 0x6e00393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x18U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x19U] = 0x6700393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x1aU] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x1bU] = 0x2e00393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x1cU] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x1dU] = 0x2e00393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x1eU] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x1fU] = 0x2e00393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x20U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x21U] = 0xa00393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x22U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x23U] = 0x100e13U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x24U] = 0x1c32023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x25U] = 0x4c00393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x26U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x27U] = 0x4500393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x28U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x29U] = 0x4400393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x2aU] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x2bU] = 0x2000393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x2cU] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x2dU] = 0x4f00393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x2eU] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x2fU] = 0x4e00393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x30U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x31U] = 0xa00393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x32U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x33U] = 0xbed537U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x34U] = 0x94050513U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x35U] = 0xfff50513U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x36U] = 0xfe051ee3U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x37U] = 0xe13U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x38U] = 0x1c32023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x39U] = 0x4c00393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x3aU] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x3bU] = 0x4500393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x3cU] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x3dU] = 0x4400393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x3eU] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x3fU] = 0x2000393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x40U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x41U] = 0x4f00393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x42U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x43U] = 0x4600393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x44U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x45U] = 0x4600393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x46U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x47U] = 0xa00393U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x48U] = 0x72a023U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x49U] = 0xbed537U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x4aU] = 0x94050513U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x4bU] = 0xfff50513U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x4cU] = 0xfe051ee3U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[0x4dU] = 0xf71ff06fU;
    tb_cva6_minimal_top__DOT__dut__DOT__u_data_ram__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, tb_cva6_minimal_top__DOT__dut__DOT__u_data_ram__DOT__i)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_data_ram__DOT__ram[(0x3ffU 
                                                                          & tb_cva6_minimal_top__DOT__dut__DOT__u_data_ram__DOT__i)] = 0U;
        tb_cva6_minimal_top__DOT__dut__DOT__u_data_ram__DOT__i 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_data_ram__DOT__i);
    }
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j = 0U;
    while (VL_GTS_III(32, 0x2000U, tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][0U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][1U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][2U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][3U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][4U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k 
                = ((IData)(1U) + vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k);
        }
        tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j);
    }
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j = 0U;
    while (VL_GTS_III(32, 0x2000U, tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[1U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][0U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[1U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][1U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[1U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][2U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[1U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][3U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[1U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][4U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k 
                = ((IData)(1U) + vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k);
        }
        tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j);
    }
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j = 0U;
    while (VL_GTS_III(32, 0x2000U, tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[2U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][0U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[2U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][1U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[2U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][2U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[2U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][3U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[2U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][4U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k 
                = ((IData)(1U) + vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k);
        }
        tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j);
    }
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j = 0U;
    while (VL_GTS_III(32, 0x2000U, tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[3U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][0U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[3U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][1U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[3U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][2U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[3U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][3U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[3U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][4U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k 
                = ((IData)(1U) + vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k);
        }
        tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j);
    }
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j = 0U;
    while (VL_GTS_III(32, 0x2000U, tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[4U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][0U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[4U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][1U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[4U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][2U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[4U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][3U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[4U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][4U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k 
                = ((IData)(1U) + vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k);
        }
        tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j);
    }
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j = 0U;
    while (VL_GTS_III(32, 0x2000U, tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[5U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][0U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[5U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][1U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[5U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][2U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[5U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][3U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[5U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][4U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k 
                = ((IData)(1U) + vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k);
        }
        tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j);
    }
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j = 0U;
    while (VL_GTS_III(32, 0x2000U, tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[6U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][0U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[6U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][1U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[6U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][2U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[6U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][3U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[6U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][4U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k 
                = ((IData)(1U) + vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k);
        }
        tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j);
    }
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j = 0U;
    while (VL_GTS_III(32, 0x2000U, tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[7U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][0U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[7U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][1U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[7U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][2U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[7U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][3U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[7U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][4U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k 
                = ((IData)(1U) + vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k);
        }
        tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j);
    }
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j = 0U;
    while (VL_GTS_III(32, 0x2000U, tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[8U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][0U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[8U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][1U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[8U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][2U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[8U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][3U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[8U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][4U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k 
                = ((IData)(1U) + vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k);
        }
        tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j);
    }
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j = 0U;
    while (VL_GTS_III(32, 0x2000U, tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[9U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][0U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[9U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][1U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[9U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][2U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[9U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][3U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[9U][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][4U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k 
                = ((IData)(1U) + vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k);
        }
        tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j);
    }
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j = 0U;
    while (VL_GTS_III(32, 0x2000U, tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xaU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][0U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xaU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][1U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xaU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][2U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xaU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][3U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xaU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][4U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k 
                = ((IData)(1U) + vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k);
        }
        tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j);
    }
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j = 0U;
    while (VL_GTS_III(32, 0x2000U, tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xbU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][0U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xbU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][1U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xbU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][2U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xbU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][3U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xbU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][4U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k 
                = ((IData)(1U) + vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k);
        }
        tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j);
    }
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j = 0U;
    while (VL_GTS_III(32, 0x2000U, tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xcU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][0U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xcU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][1U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xcU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][2U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xcU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][3U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xcU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][4U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k 
                = ((IData)(1U) + vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k);
        }
        tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j);
    }
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j = 0U;
    while (VL_GTS_III(32, 0x2000U, tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xdU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][0U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xdU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][1U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xdU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][2U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xdU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][3U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xdU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][4U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k 
                = ((IData)(1U) + vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k);
        }
        tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j);
    }
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j = 0U;
    while (VL_GTS_III(32, 0x2000U, tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xeU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][0U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xeU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][1U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xeU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][2U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xeU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][3U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xeU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][4U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k 
                = ((IData)(1U) + vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k);
        }
        tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j);
    }
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j = 0U;
    while (VL_GTS_III(32, 0x2000U, tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xfU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][0U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xfU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][1U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xfU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][2U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xfU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][3U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[0xfU][(0x1fffU 
                                                                                & tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j)][(0x3ffU 
                                                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k)][4U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k 
                = ((IData)(1U) + vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k);
        }
        tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j 
            = ((IData)(1U) + tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__j);
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub[0U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub[1U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub[2U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub[3U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub[4U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub[5U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub[6U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub[7U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub[8U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub[9U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub[0xaU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub[0xbU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub[0xcU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub[0xdU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub[0xeU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub[0xfU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub[0U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub[1U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub[2U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub[3U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub[4U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub[5U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub[6U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub[7U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub[8U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub[9U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub[0xaU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub[0xbU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub[0xcU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub[0xdU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub[0xeU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub[0xfU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub[0U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub[1U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub[2U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub[3U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub[4U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub[5U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub[6U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub[7U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub[8U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub[9U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub[0xaU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub[0xbU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub[0xcU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub[0xdU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub[0xeU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub[0xfU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub[0U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub[1U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub[2U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub[3U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub[4U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub[5U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub[6U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub[7U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub[8U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub[9U] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub[0xaU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub[0xbU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub[0xcU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub[0xdU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub[0xeU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub[0xfU] = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req__VforceEn = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_we__VforceEn = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceEn = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_wdata__VforceEn = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_be__VforceEn = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_rdata__VforceEn = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_valid__VforceEn = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cva6_minimal_top___024root___dump_triggers__stl(Vtb_cva6_minimal_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cva6_minimal_top___024root___eval_triggers__stl(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cva6_minimal_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
