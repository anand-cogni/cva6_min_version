// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cva6_minimal_top.h for the primary calling header

#include "Vtb_cva6_minimal_top__pch.h"
#include "Vtb_cva6_minimal_top___024root.h"

VL_ATTR_COLD void Vtb_cva6_minimal_top___024root___eval_static(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_cva6_minimal_top___024root___eval_final(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cva6_minimal_top___024root___dump_triggers__stl(Vtb_cva6_minimal_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cva6_minimal_top___024root___eval_phase__stl(Vtb_cva6_minimal_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_cva6_minimal_top___024root___eval_settle(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_cva6_minimal_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/smita/cva6_min_version/tb/tb_cva6_minimal_top.v", 15, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_cva6_minimal_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cva6_minimal_top___024root___dump_triggers__stl(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*1:0*/, 256> Vtb_cva6_minimal_top__ConstPool__TABLE_hc8c9f621_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_cva6_minimal_top__ConstPool__TABLE_h2f8782e1_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_cva6_minimal_top__ConstPool__TABLE_hee27ea5a_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_cva6_minimal_top__ConstPool__TABLE_hc2ee773c_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_cva6_minimal_top__ConstPool__TABLE_hdde79949_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtb_cva6_minimal_top__ConstPool__TABLE_h72bbb8ef_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vtb_cva6_minimal_top__ConstPool__TABLE_h3b8bd612_0;

VL_ATTR_COLD void Vtb_cva6_minimal_top___024root___stl_sequent__TOP__0(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_entry_valid;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_entry_valid = 0;
    SData/*15:0*/ tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop = 0;
    SData/*15:0*/ tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge = 0;
    SData/*15:0*/ tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw = 0;
    SData/*15:0*/ tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr = 0;
    SData/*15:0*/ tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr = 0;
    SData/*15:0*/ tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr = 0;
    CData/*2:0*/ tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos = 0;
    CData/*7:0*/ tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type = 0;
    CData/*0:0*/ tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT____VdfgTmp_h68aabff1__0;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT____VdfgTmp_h68aabff1__0 = 0;
    CData/*0:0*/ tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__error_invalid_cmd;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__error_invalid_cmd = 0;
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 1U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 2U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 3U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 4U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 5U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 6U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 7U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 8U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 9U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0xaU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0xbU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0xcU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0xdU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0xeU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0xfU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x10U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x11U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x12U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x13U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x14U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x15U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x16U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x17U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x18U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x19U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x1aU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x1bU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x1cU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x1dU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x1eU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x1fU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x20U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x21U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x22U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x23U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x24U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x25U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x26U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x27U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x28U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x29U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x2aU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x2bU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x2cU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x2dU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x2eU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x2fU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x30U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x31U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x32U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x33U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x34U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x35U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x36U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x37U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x38U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x39U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x3aU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x3bU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x3cU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x3dU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x3eU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr 
        = ((0x1feU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr) 
                    ^ (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                               >> 0x3fU)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__imm_i 
        = (((- (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata 
                        >> 0x1fU))) << 0xcU) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata 
                                                >> 0x14U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__imm_s 
        = (((- (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata 
                        >> 0x1fU))) << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata 
                                                      >> 7U))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__imm_b 
        = (((- (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata 
                        >> 0x1fU))) << 0xdU) | ((0x1000U 
                                                 & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata 
                                                            >> 7U))))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__imm_j 
        = (((- (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata 
                        >> 0x1fU))) << 0x15U) | ((0x100000U 
                                                  & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata) 
                                                    | ((0x800U 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata 
                                                             >> 0x14U))))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__is_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__is_sw 
        = (IData)((0x2023U == (0x707fU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__is_bne 
        = (IData)((0x1063U == (0x707fU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__queue_full 
        = (0x10U <= (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__valid_count));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__rd_queue_empty 
        = (0U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue_count));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__rd_queue_full 
        = (0x10U <= (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue_count));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdpr_to_refctrl_ref_cmd_ready 
        = (1U & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__refresh_pending)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_empty 
        = (0U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_level));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_full 
        = (8U <= (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_level));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__fifo_empty 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__fifo_rd_ptr) 
           == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__fifo_wr_ptr));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmd_wr_ready 
        = (1U & (~ ((0x10U <= (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__valid_count)) 
                    | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__assembly_error))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_wdata__VforceRd 
        = ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_wdata__VforceEn 
            & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_wdata__VforceVal) 
           | ((~ vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_wdata__VforceEn) 
              & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_wdata));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_be__VforceRd 
        = (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_be__VforceEn) 
            & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_be__VforceVal)) 
           | ((~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_be__VforceEn)) 
              & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_be)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_valid__VforceRd 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_valid__VforceEn)
            ? (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_valid__VforceVal)
            : (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_valid));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel[0U] 
        = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                   [0U][0U] >> 0x14U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel[1U] 
        = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                   [1U][0U] >> 0x14U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel[2U] 
        = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                   [2U][0U] >> 0x14U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel[3U] 
        = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                   [3U][0U] >> 0x14U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel[4U] 
        = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                   [4U][0U] >> 0x14U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel[5U] 
        = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                   [5U][0U] >> 0x14U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel[6U] 
        = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                   [6U][0U] >> 0x14U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel[7U] 
        = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                   [7U][0U] >> 0x14U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel[8U] 
        = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                   [8U][0U] >> 0x14U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel[9U] 
        = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                   [9U][0U] >> 0x14U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel[0xaU] 
        = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                   [0xaU][0U] >> 0x14U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel[0xbU] 
        = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                   [0xbU][0U] >> 0x14U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel[0xcU] 
        = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                   [0xcU][0U] >> 0x14U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel[0xdU] 
        = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                   [0xdU][0U] >> 0x14U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel[0xeU] 
        = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                   [0xeU][0U] >> 0x14U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel[0xfU] 
        = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                   [0xfU][0U] >> 0x14U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id[0U] 
        = (0xffU & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [0U][1U] << 6U) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                        [0U][0U] >> 0x1aU)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id[1U] 
        = (0xffU & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [1U][1U] << 6U) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                        [1U][0U] >> 0x1aU)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id[2U] 
        = (0xffU & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [2U][1U] << 6U) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                        [2U][0U] >> 0x1aU)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id[3U] 
        = (0xffU & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [3U][1U] << 6U) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                        [3U][0U] >> 0x1aU)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id[4U] 
        = (0xffU & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [4U][1U] << 6U) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                        [4U][0U] >> 0x1aU)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id[5U] 
        = (0xffU & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [5U][1U] << 6U) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                        [5U][0U] >> 0x1aU)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id[6U] 
        = (0xffU & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [6U][1U] << 6U) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                        [6U][0U] >> 0x1aU)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id[7U] 
        = (0xffU & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [7U][1U] << 6U) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                        [7U][0U] >> 0x1aU)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id[8U] 
        = (0xffU & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [8U][1U] << 6U) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                        [8U][0U] >> 0x1aU)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id[9U] 
        = (0xffU & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [9U][1U] << 6U) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                        [9U][0U] >> 0x1aU)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id[0xaU] 
        = (0xffU & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [0xaU][1U] << 6U) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                          [0xaU][0U] 
                                          >> 0x1aU)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id[0xbU] 
        = (0xffU & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [0xbU][1U] << 6U) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                          [0xbU][0U] 
                                          >> 0x1aU)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id[0xcU] 
        = (0xffU & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [0xcU][1U] << 6U) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                          [0xcU][0U] 
                                          >> 0x1aU)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id[0xdU] 
        = (0xffU & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [0xdU][1U] << 6U) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                          [0xdU][0U] 
                                          >> 0x1aU)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id[0xeU] 
        = (0xffU & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [0xeU][1U] << 6U) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                          [0xeU][0U] 
                                          >> 0x1aU)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id[0xfU] 
        = (0xffU & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [0xfU][1U] << 6U) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                          [0xfU][0U] 
                                          >> 0x1aU)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr[0U] 
        = (7U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [0U][0U] >> 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr[1U] 
        = (7U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [1U][0U] >> 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr[2U] 
        = (7U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [2U][0U] >> 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr[3U] 
        = (7U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [3U][0U] >> 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr[4U] 
        = (7U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [4U][0U] >> 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr[5U] 
        = (7U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [5U][0U] >> 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr[6U] 
        = (7U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [6U][0U] >> 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr[7U] 
        = (7U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [7U][0U] >> 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr[8U] 
        = (7U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [8U][0U] >> 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr[9U] 
        = (7U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [9U][0U] >> 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr[0xaU] 
        = (7U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [0xaU][0U] >> 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr[0xbU] 
        = (7U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [0xbU][0U] >> 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr[0xcU] 
        = (7U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [0xcU][0U] >> 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr[0xdU] 
        = (7U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [0xdU][0U] >> 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr[0xeU] 
        = (7U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [0xeU][0U] >> 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr[0xfU] 
        = (7U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [0xfU][0U] >> 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks 
        = ((0xfffcU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks)) 
           | ((2U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [1U][0U] >> 0xaU)) | (1U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                                 [0U][0U] 
                                                 >> 0xbU))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks 
        = ((0xfff3U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks)) 
           | ((8U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [3U][0U] >> 8U)) | (4U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                               [2U][0U] 
                                               >> 9U))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks 
        = ((0xffcfU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks)) 
           | ((0x20U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                        [5U][0U] >> 6U)) | (0x10U & 
                                            (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                             [4U][0U] 
                                             >> 7U))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks 
        = ((0xff3fU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks)) 
           | ((0x80U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                        [7U][0U] >> 4U)) | (0x40U & 
                                            (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                             [6U][0U] 
                                             >> 5U))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks 
        = ((0xfcffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks)) 
           | ((0x200U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                         [9U][0U] >> 2U)) | (0x100U 
                                             & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                                [8U][0U] 
                                                >> 3U))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks 
        = ((0xf3ffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks)) 
           | ((0x800U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
               [0xbU][0U]) | (0x400U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                        [0xaU][0U] 
                                        >> 1U))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks 
        = ((0xcfffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks)) 
           | ((0x2000U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                          [0xdU][0U] << 2U)) | (0x1000U 
                                                & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                                   [0xcU][0U] 
                                                   << 1U))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks 
        = ((0x3fffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks)) 
           | ((0x8000U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                          [0xfU][0U] << 4U)) | (0x4000U 
                                                & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                                   [0xeU][0U] 
                                                   << 3U))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len[0U] 
        = (0xffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                    [0U][0U] >> 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len[1U] 
        = (0xffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                    [1U][0U] >> 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len[2U] 
        = (0xffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                    [2U][0U] >> 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len[3U] 
        = (0xffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                    [3U][0U] >> 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len[4U] 
        = (0xffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                    [4U][0U] >> 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len[5U] 
        = (0xffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                    [5U][0U] >> 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len[6U] 
        = (0xffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                    [6U][0U] >> 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len[7U] 
        = (0xffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                    [7U][0U] >> 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len[8U] 
        = (0xffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                    [8U][0U] >> 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len[9U] 
        = (0xffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                    [9U][0U] >> 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len[0xaU] 
        = (0xffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                    [0xaU][0U] >> 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len[0xbU] 
        = (0xffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                    [0xbU][0U] >> 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len[0xcU] 
        = (0xffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                    [0xcU][0U] >> 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len[0xdU] 
        = (0xffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                    [0xdU][0U] >> 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len[0xeU] 
        = (0xffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                    [0xeU][0U] >> 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len[0xfU] 
        = (0xffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                    [0xfU][0U] >> 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group[0U] 
        = (3U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [0U][0U] >> 0x18U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group[1U] 
        = (3U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [1U][0U] >> 0x18U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group[2U] 
        = (3U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [2U][0U] >> 0x18U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group[3U] 
        = (3U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [3U][0U] >> 0x18U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group[4U] 
        = (3U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [4U][0U] >> 0x18U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group[5U] 
        = (3U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [5U][0U] >> 0x18U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group[6U] 
        = (3U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [6U][0U] >> 0x18U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group[7U] 
        = (3U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [7U][0U] >> 0x18U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group[8U] 
        = (3U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [8U][0U] >> 0x18U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group[9U] 
        = (3U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [9U][0U] >> 0x18U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group[0xaU] 
        = (3U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [0xaU][0U] >> 0x18U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group[0xbU] 
        = (3U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [0xbU][0U] >> 0x18U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group[0xcU] 
        = (3U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [0xcU][0U] >> 0x18U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group[0xdU] 
        = (3U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [0xdU][0U] >> 0x18U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group[0xeU] 
        = (3U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [0xeU][0U] >> 0x18U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group[0xfU] 
        = (3U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                 [0xfU][0U] >> 0x18U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr[0U] 
        = (0xffffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                      [0U][1U] >> 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr[1U] 
        = (0xffffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                      [1U][1U] >> 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr[2U] 
        = (0xffffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                      [2U][1U] >> 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr[3U] 
        = (0xffffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                      [3U][1U] >> 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr[4U] 
        = (0xffffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                      [4U][1U] >> 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr[5U] 
        = (0xffffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                      [5U][1U] >> 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr[6U] 
        = (0xffffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                      [6U][1U] >> 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr[7U] 
        = (0xffffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                      [7U][1U] >> 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr[8U] 
        = (0xffffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                      [8U][1U] >> 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr[9U] 
        = (0xffffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                      [9U][1U] >> 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr[0xaU] 
        = (0xffffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                      [0xaU][1U] >> 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr[0xbU] 
        = (0xffffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                      [0xbU][1U] >> 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr[0xcU] 
        = (0xffffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                      [0xcU][1U] >> 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr[0xdU] 
        = (0xffffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                      [0xdU][1U] >> 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr[0xeU] 
        = (0xffffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                      [0xeU][1U] >> 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr[0xfU] 
        = (0xffffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                      [0xfU][1U] >> 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr[0U] 
        = (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [0U][1U] >> 0x12U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr[1U] 
        = (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [1U][1U] >> 0x12U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr[2U] 
        = (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [2U][1U] >> 0x12U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr[3U] 
        = (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [3U][1U] >> 0x12U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr[4U] 
        = (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [4U][1U] >> 0x12U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr[5U] 
        = (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [5U][1U] >> 0x12U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr[6U] 
        = (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [6U][1U] >> 0x12U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr[7U] 
        = (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [7U][1U] >> 0x12U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr[8U] 
        = (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [8U][1U] >> 0x12U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr[9U] 
        = (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [9U][1U] >> 0x12U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr[0xaU] 
        = (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [0xaU][1U] >> 0x12U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr[0xbU] 
        = (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [0xbU][1U] >> 0x12U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr[0xcU] 
        = (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [0xcU][1U] >> 0x12U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr[0xdU] 
        = (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [0xdU][1U] >> 0x12U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr[0xeU] 
        = (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [0xeU][1U] >> 0x12U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr[0xfU] 
        = (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                     [0xfU][1U] >> 0x12U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data[0U] 
        = (((QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                            [0U][3U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                                                   [0U][2U])));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data[1U] 
        = (((QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                            [1U][3U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                                                   [1U][2U])));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data[2U] 
        = (((QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                            [2U][3U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                                                   [2U][2U])));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data[3U] 
        = (((QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                            [3U][3U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                                                   [3U][2U])));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data[4U] 
        = (((QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                            [4U][3U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                                                   [4U][2U])));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data[5U] 
        = (((QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                            [5U][3U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                                                   [5U][2U])));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data[6U] 
        = (((QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                            [6U][3U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                                                   [6U][2U])));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data[7U] 
        = (((QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                            [7U][3U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                                                   [7U][2U])));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data[8U] 
        = (((QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                            [8U][3U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                                                   [8U][2U])));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data[9U] 
        = (((QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                            [9U][3U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                                                                   [9U][2U])));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data[0xaU] 
        = (((QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                            [0xaU][3U])) << 0x20U) 
           | (QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                             [0xaU][2U])));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data[0xbU] 
        = (((QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                            [0xbU][3U])) << 0x20U) 
           | (QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                             [0xbU][2U])));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data[0xcU] 
        = (((QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                            [0xcU][3U])) << 0x20U) 
           | (QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                             [0xcU][2U])));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data[0xdU] 
        = (((QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                            [0xdU][3U])) << 0x20U) 
           | (QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                             [0xdU][2U])));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data[0xeU] 
        = (((QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                            [0xeU][3U])) << 0x20U) 
           | (QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                             [0xeU][2U])));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data[0xfU] 
        = (((QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                            [0xfU][3U])) << 0x20U) 
           | (QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue
                             [0xfU][2U])));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT____VdfgTmp_hdca86341__0 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__outstanding_is_write) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__outstanding_valid));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn 
        = (1U & (~ ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__reset_sync) 
                    >> 3U)));
    __Vtableidx4 = (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp) 
                     << 6U) | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid) 
                                << 5U) | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__rd_queue_rd_en) 
                                           << 4U) | 
                                          (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arready) 
                                            << 3U) 
                                           | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arvalid) 
                                               << 2U) 
                                              | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__ar_state))))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__ar_state_next 
        = Vtb_cva6_minimal_top__ConstPool__TABLE_hc8c9f621_0
        [__Vtableidx4];
    __Vtableidx3 = (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_bready) 
                     << 7U) | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_bvalid) 
                                << 6U) | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_wready) 
                                           << 5U) | 
                                          (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_wvalid) 
                                            << 4U) 
                                           | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awready) 
                                               << 3U) 
                                              | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awvalid) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__aw_state)))))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__aw_state_next 
        = Vtb_cva6_minimal_top__ConstPool__TABLE_h2f8782e1_0
        [__Vtableidx3];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_sched_issue = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__error_invalid_cmd = 0U;
    if ((0U != (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_level))) {
        if ((6U < (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                           >> 0x15U)))) {
            tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__error_invalid_cmd = 1U;
        }
        if ((0x1000000U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U])) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 1U;
        } else if ((0x800000U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U])) {
            if ((0x400000U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U])) {
                if ((0x200000U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U])) {
                    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 1U;
                } else {
                    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 1U;
                    if ((5U == (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                        >> 0x15U)))) {
                        if ((0U != ((0x2ffU >= (0x3ffU 
                                                & ((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U)))))
                                     ? (7U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U)))))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x30U) 
                                                        * 
                                                        (0xfU 
                                                         & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                            >> 0x11U))))))) 
                                              | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                 (0x1fU 
                                                  & (((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U)))))))
                                     : 0U))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                        }
                        if ((0U != ((0x2ffU >= (0x3ffU 
                                                & ((IData)(3U) 
                                                   + 
                                                   ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U))))))
                                     ? (7U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         ((IData)(0x30U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0x11U)))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        ((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U)))))))) 
                                              | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                 (0x1fU 
                                                  & (((IData)(3U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     + 
                                                     ((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))))))))
                                     : 0U))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                        }
                        if ((0U != ((0x2ffU >= (0x3ffU 
                                                & ((IData)(6U) 
                                                   + 
                                                   ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U))))))
                                     ? (7U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(6U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(6U) 
                                                         + 
                                                         ((IData)(0x30U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0x11U)))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        ((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U)))))))) 
                                              | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                 (0x1fU 
                                                  & (((IData)(6U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     ((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))))))))
                                     : 0U))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                        }
                        if ((0U != ((0x2ffU >= (0x3ffU 
                                                & ((IData)(9U) 
                                                   + 
                                                   ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U))))))
                                     ? (7U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(9U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(9U) 
                                                         + 
                                                         ((IData)(0x30U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0x11U)))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        ((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U)))))))) 
                                              | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                 (0x1fU 
                                                  & (((IData)(9U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(9U) 
                                                     + 
                                                     ((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))))))))
                                     : 0U))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                        }
                        if ((0U != ((0x2ffU >= (0x3ffU 
                                                & ((IData)(0xcU) 
                                                   + 
                                                   ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U))))))
                                     ? (7U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(0xcU) 
                                                         + 
                                                         ((IData)(0x30U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0x11U)))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xcU) 
                                                        + 
                                                        ((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U)))))))) 
                                              | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                 (0x1fU 
                                                  & (((IData)(0xcU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     ((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))))))))
                                     : 0U))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                        }
                        if ((0U != ((0x2ffU >= (0x3ffU 
                                                & ((IData)(0xfU) 
                                                   + 
                                                   ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U))))))
                                     ? (7U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xfU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(0xfU) 
                                                         + 
                                                         ((IData)(0x30U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0x11U)))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xfU) 
                                                        + 
                                                        ((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U)))))))) 
                                              | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                 (0x1fU 
                                                  & (((IData)(0xfU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xfU) 
                                                     + 
                                                     ((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))))))))
                                     : 0U))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                        }
                        if ((0U != ((0x2ffU >= (0x3ffU 
                                                & ((IData)(0x12U) 
                                                   + 
                                                   ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U))))))
                                     ? (7U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x12U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(0x12U) 
                                                         + 
                                                         ((IData)(0x30U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0x11U)))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x12U) 
                                                        + 
                                                        ((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U)))))))) 
                                              | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                 (0x1fU 
                                                  & (((IData)(0x12U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x12U) 
                                                     + 
                                                     ((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))))))))
                                     : 0U))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                        }
                        if ((0U != ((0x2ffU >= (0x3ffU 
                                                & ((IData)(0x15U) 
                                                   + 
                                                   ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U))))))
                                     ? (7U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x15U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(0x15U) 
                                                         + 
                                                         ((IData)(0x30U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0x11U)))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x15U) 
                                                        + 
                                                        ((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U)))))))) 
                                              | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                 (0x1fU 
                                                  & (((IData)(0x15U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x15U) 
                                                     + 
                                                     ((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))))))))
                                     : 0U))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                        }
                        if ((0U != ((0x2ffU >= (0x3ffU 
                                                & ((IData)(0x18U) 
                                                   + 
                                                   ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U))))))
                                     ? (7U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x18U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(0x18U) 
                                                         + 
                                                         ((IData)(0x30U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0x11U)))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x18U) 
                                                        + 
                                                        ((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U)))))))) 
                                              | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                 (0x1fU 
                                                  & (((IData)(0x18U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x18U) 
                                                     + 
                                                     ((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))))))))
                                     : 0U))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                        }
                        if ((0U != ((0x2ffU >= (0x3ffU 
                                                & ((IData)(0x1bU) 
                                                   + 
                                                   ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U))))))
                                     ? (7U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x1bU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(0x1bU) 
                                                         + 
                                                         ((IData)(0x30U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0x11U)))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x1bU) 
                                                        + 
                                                        ((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U)))))))) 
                                              | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                 (0x1fU 
                                                  & (((IData)(0x1bU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x1bU) 
                                                     + 
                                                     ((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))))))))
                                     : 0U))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                        }
                        if ((0U != ((0x2ffU >= (0x3ffU 
                                                & ((IData)(0x1eU) 
                                                   + 
                                                   ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U))))))
                                     ? (7U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x1eU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(0x1eU) 
                                                         + 
                                                         ((IData)(0x30U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0x11U)))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x1eU) 
                                                        + 
                                                        ((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U)))))))) 
                                              | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                 (0x1fU 
                                                  & (((IData)(0x1eU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x1eU) 
                                                     + 
                                                     ((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))))))))
                                     : 0U))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                        }
                        if ((0U != ((0x2ffU >= (0x3ffU 
                                                & ((IData)(0x21U) 
                                                   + 
                                                   ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U))))))
                                     ? (7U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x21U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(0x21U) 
                                                         + 
                                                         ((IData)(0x30U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0x11U)))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x21U) 
                                                        + 
                                                        ((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U)))))))) 
                                              | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                 (0x1fU 
                                                  & (((IData)(0x21U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x21U) 
                                                     + 
                                                     ((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))))))))
                                     : 0U))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                        }
                        if ((0U != ((0x2ffU >= (0x3ffU 
                                                & ((IData)(0x24U) 
                                                   + 
                                                   ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U))))))
                                     ? (7U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x24U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(0x24U) 
                                                         + 
                                                         ((IData)(0x30U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0x11U)))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x24U) 
                                                        + 
                                                        ((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U)))))))) 
                                              | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                 (0x1fU 
                                                  & (((IData)(0x24U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x24U) 
                                                     + 
                                                     ((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))))))))
                                     : 0U))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                        }
                        if ((0U != ((0x2ffU >= (0x3ffU 
                                                & ((IData)(0x27U) 
                                                   + 
                                                   ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U))))))
                                     ? (7U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x27U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(0x27U) 
                                                         + 
                                                         ((IData)(0x30U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0x11U)))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x27U) 
                                                        + 
                                                        ((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U)))))))) 
                                              | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                 (0x1fU 
                                                  & (((IData)(0x27U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     + 
                                                     ((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))))))))
                                     : 0U))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                        }
                        if ((0U != ((0x2ffU >= (0x3ffU 
                                                & ((IData)(0x2aU) 
                                                   + 
                                                   ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U))))))
                                     ? (7U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x2aU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(0x2aU) 
                                                         + 
                                                         ((IData)(0x30U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0x11U)))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x2aU) 
                                                        + 
                                                        ((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U)))))))) 
                                              | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                 (0x1fU 
                                                  & (((IData)(0x2aU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x2aU) 
                                                     + 
                                                     ((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))))))))
                                     : 0U))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                        }
                        if ((0U != ((0x2ffU >= (0x3ffU 
                                                & ((IData)(0x2dU) 
                                                   + 
                                                   ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U))))))
                                     ? (7U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x2dU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))
                                                ? 0U
                                                : (
                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(0x2dU) 
                                                         + 
                                                         ((IData)(0x30U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0x11U)))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x2dU) 
                                                        + 
                                                        ((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U)))))))) 
                                              | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                 (0x1fU 
                                                  & (((IData)(0x2dU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x2dU) 
                                                     + 
                                                     ((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))))))))
                                     : 0U))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                        }
                    } else {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready 
                            = (0U == ((0x2ffU >= (0x3ffU 
                                                  & (((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))) 
                                                     + 
                                                     (0x3fU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0xdU)))))))
                                       ? (7U & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))) 
                                                      + 
                                                      (0x3fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0xdU)))))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                  (((IData)(2U) 
                                                    + 
                                                    (0x3ffU 
                                                     & (((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U))) 
                                                        + 
                                                        (0x3fU 
                                                         & ((IData)(3U) 
                                                            * 
                                                            (0xfU 
                                                             & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                >> 0xdU))))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((IData)(0x30U) 
                                                        * 
                                                        (0xfU 
                                                         & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                            >> 0x11U))) 
                                                       + 
                                                       (0x3fU 
                                                        & ((IData)(3U) 
                                                           * 
                                                           (0xfU 
                                                            & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                               >> 0xdU))))))))) 
                                                | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (0x1fU 
                                                    & ((((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U))) 
                                                        + 
                                                        (0x3fU 
                                                         & ((IData)(3U) 
                                                            * 
                                                            (0xfU 
                                                             & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                >> 0xdU))))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (((IData)(0x30U) 
                                                        * 
                                                        (0xfU 
                                                         & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                            >> 0x11U))) 
                                                       + 
                                                       (0x3fU 
                                                        & ((IData)(3U) 
                                                           * 
                                                           (0xfU 
                                                            & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                               >> 0xdU)))))))))
                                       : 0U));
                    }
                }
            } else if ((0x200000U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U])) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 1U;
                if ((5U == (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                    >> 0x15U)))) {
                    if ((0U != ((0x2ffU >= (0x3ffU 
                                            & ((IData)(0x30U) 
                                               * (0xfU 
                                                  & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                     >> 0x11U)))))
                                 ? (7U & (((0U == (0x1fU 
                                                   & ((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U)))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (((IData)(2U) 
                                              + (0x3ffU 
                                                 & ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                             (0x1fU 
                                              & (((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U)))))))
                                 : 0U))) {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                    }
                    if ((0U != ((0x2ffU >= (0x3ffU 
                                            & ((IData)(3U) 
                                               + ((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))))))
                                 ? (7U & (((0U == (0x1fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (((IData)(2U) 
                                              + (0x3ffU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U)))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                             (0x1fU 
                                              & (((IData)(3U) 
                                                  + 
                                                  ((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U)))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))))
                                 : 0U))) {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                    }
                    if ((0U != ((0x2ffU >= (0x3ffU 
                                            & ((IData)(6U) 
                                               + ((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))))))
                                 ? (7U & (((0U == (0x1fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (((IData)(2U) 
                                              + (0x3ffU 
                                                 & ((IData)(6U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U)))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                             (0x1fU 
                                              & (((IData)(6U) 
                                                  + 
                                                  ((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U)))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(6U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))))
                                 : 0U))) {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                    }
                    if ((0U != ((0x2ffU >= (0x3ffU 
                                            & ((IData)(9U) 
                                               + ((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))))))
                                 ? (7U & (((0U == (0x1fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (((IData)(2U) 
                                              + (0x3ffU 
                                                 & ((IData)(9U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U)))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                             (0x1fU 
                                              & (((IData)(9U) 
                                                  + 
                                                  ((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U)))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(9U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))))
                                 : 0U))) {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                    }
                    if ((0U != ((0x2ffU >= (0x3ffU 
                                            & ((IData)(0xcU) 
                                               + ((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))))))
                                 ? (7U & (((0U == (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (((IData)(2U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xcU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U)))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                             (0x1fU 
                                              & (((IData)(0xcU) 
                                                  + 
                                                  ((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U)))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))))
                                 : 0U))) {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                    }
                    if ((0U != ((0x2ffU >= (0x3ffU 
                                            & ((IData)(0xfU) 
                                               + ((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))))))
                                 ? (7U & (((0U == (0x1fU 
                                                   & ((IData)(0xfU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (((IData)(2U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xfU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U)))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xfU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                             (0x1fU 
                                              & (((IData)(0xfU) 
                                                  + 
                                                  ((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U)))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xfU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))))
                                 : 0U))) {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                    }
                    if ((0U != ((0x2ffU >= (0x3ffU 
                                            & ((IData)(0x12U) 
                                               + ((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))))))
                                 ? (7U & (((0U == (0x1fU 
                                                   & ((IData)(0x12U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (((IData)(2U) 
                                              + (0x3ffU 
                                                 & ((IData)(0x12U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U)))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x12U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                             (0x1fU 
                                              & (((IData)(0x12U) 
                                                  + 
                                                  ((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U)))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x12U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))))
                                 : 0U))) {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                    }
                    if ((0U != ((0x2ffU >= (0x3ffU 
                                            & ((IData)(0x15U) 
                                               + ((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))))))
                                 ? (7U & (((0U == (0x1fU 
                                                   & ((IData)(0x15U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (((IData)(2U) 
                                              + (0x3ffU 
                                                 & ((IData)(0x15U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U)))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x15U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                             (0x1fU 
                                              & (((IData)(0x15U) 
                                                  + 
                                                  ((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U)))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x15U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))))
                                 : 0U))) {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                    }
                    if ((0U != ((0x2ffU >= (0x3ffU 
                                            & ((IData)(0x18U) 
                                               + ((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))))))
                                 ? (7U & (((0U == (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (((IData)(2U) 
                                              + (0x3ffU 
                                                 & ((IData)(0x18U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U)))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                             (0x1fU 
                                              & (((IData)(0x18U) 
                                                  + 
                                                  ((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U)))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x18U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))))
                                 : 0U))) {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                    }
                    if ((0U != ((0x2ffU >= (0x3ffU 
                                            & ((IData)(0x1bU) 
                                               + ((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))))))
                                 ? (7U & (((0U == (0x1fU 
                                                   & ((IData)(0x1bU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (((IData)(2U) 
                                              + (0x3ffU 
                                                 & ((IData)(0x1bU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U)))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1bU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                             (0x1fU 
                                              & (((IData)(0x1bU) 
                                                  + 
                                                  ((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U)))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1bU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))))
                                 : 0U))) {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                    }
                    if ((0U != ((0x2ffU >= (0x3ffU 
                                            & ((IData)(0x1eU) 
                                               + ((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))))))
                                 ? (7U & (((0U == (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (((IData)(2U) 
                                              + (0x3ffU 
                                                 & ((IData)(0x1eU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U)))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                             (0x1fU 
                                              & (((IData)(0x1eU) 
                                                  + 
                                                  ((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U)))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1eU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))))
                                 : 0U))) {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                    }
                    if ((0U != ((0x2ffU >= (0x3ffU 
                                            & ((IData)(0x21U) 
                                               + ((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))))))
                                 ? (7U & (((0U == (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (((IData)(2U) 
                                              + (0x3ffU 
                                                 & ((IData)(0x21U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U)))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                             (0x1fU 
                                              & (((IData)(0x21U) 
                                                  + 
                                                  ((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U)))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x21U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))))
                                 : 0U))) {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                    }
                    if ((0U != ((0x2ffU >= (0x3ffU 
                                            & ((IData)(0x24U) 
                                               + ((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))))))
                                 ? (7U & (((0U == (0x1fU 
                                                   & ((IData)(0x24U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (((IData)(2U) 
                                              + (0x3ffU 
                                                 & ((IData)(0x24U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U)))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x24U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                             (0x1fU 
                                              & (((IData)(0x24U) 
                                                  + 
                                                  ((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U)))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x24U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))))
                                 : 0U))) {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                    }
                    if ((0U != ((0x2ffU >= (0x3ffU 
                                            & ((IData)(0x27U) 
                                               + ((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))))))
                                 ? (7U & (((0U == (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (((IData)(2U) 
                                              + (0x3ffU 
                                                 & ((IData)(0x27U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U)))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                             (0x1fU 
                                              & (((IData)(0x27U) 
                                                  + 
                                                  ((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U)))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x27U) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))))
                                 : 0U))) {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                    }
                    if ((0U != ((0x2ffU >= (0x3ffU 
                                            & ((IData)(0x2aU) 
                                               + ((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))))))
                                 ? (7U & (((0U == (0x1fU 
                                                   & ((IData)(0x2aU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (((IData)(2U) 
                                              + (0x3ffU 
                                                 & ((IData)(0x2aU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U)))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x2aU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                             (0x1fU 
                                              & (((IData)(0x2aU) 
                                                  + 
                                                  ((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U)))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x2aU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))))
                                 : 0U))) {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                    }
                    if ((0U != ((0x2ffU >= (0x3ffU 
                                            & ((IData)(0x2dU) 
                                               + ((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))))))
                                 ? (7U & (((0U == (0x1fU 
                                                   & ((IData)(0x2dU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (((IData)(2U) 
                                              + (0x3ffU 
                                                 & ((IData)(0x2dU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U)))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x2dU) 
                                                      + 
                                                      ((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U)))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                             (0x1fU 
                                              & (((IData)(0x2dU) 
                                                  + 
                                                  ((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U)))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x2dU) 
                                                    + 
                                                    ((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))))))))
                                 : 0U))) {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = 0U;
                    }
                } else {
                    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready 
                        = (0U == ((0x2ffU >= (0x3ffU 
                                              & (((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0xdU)))))))
                                   ? (7U & (((0U == 
                                              (0x1fU 
                                               & (((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U))) 
                                                  + 
                                                  (0x3fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0xdU)))))))
                                              ? 0U : 
                                             (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                              (((IData)(2U) 
                                                + (0x3ffU 
                                                   & (((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))) 
                                                      + 
                                                      (0x3fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0xdU))))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))) 
                                                      + 
                                                      (0x3fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0xdU))))))))) 
                                            | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                               (0x1fU 
                                                & ((((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))) 
                                                    + 
                                                    (0x3fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (0xfU 
                                                         & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                            >> 0xdU))))) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & (((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))) 
                                                      + 
                                                      (0x3fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0xdU)))))))))
                                   : 0U));
                }
            } else {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready 
                    = ((2U == ((0x2ffU >= (0x3ffU & 
                                           (((IData)(0x30U) 
                                             * (0xfU 
                                                & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                   >> 0x11U))) 
                                            + (0x3fU 
                                               & ((IData)(3U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0xdU)))))))
                                ? (7U & (((0U == (0x1fU 
                                                  & (((IData)(0x30U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0x11U))) 
                                                     + 
                                                     (0x3fU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0xdU)))))))
                                           ? 0U : (
                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x3ffU 
                                                      & (((IData)(0x30U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0x11U))) 
                                                         + 
                                                         (0x3fU 
                                                          & ((IData)(3U) 
                                                             * 
                                                             (0xfU 
                                                              & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                 >> 0xdU))))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U))) 
                                                        + 
                                                        (0x3fU 
                                                         & ((IData)(3U) 
                                                            * 
                                                            (0xfU 
                                                             & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                >> 0xdU))))))))) 
                                         | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (0x1fU 
                                             & ((((IData)(0x30U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0xdU))))) 
                                                >> 5U))] 
                                            >> (0x1fU 
                                                & (((IData)(0x30U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                        >> 0x11U))) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0xdU)))))))))
                                : 0U)) & (0U == (0xffU 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (VL_SHIFTL_III(11,32,32, 
                                                                        (0xfU 
                                                                         & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                            >> 0x11U)), 7U) 
                                                          + 
                                                          (0x7fU 
                                                           & VL_SHIFTL_III(7,32,32, 
                                                                           (0xfU 
                                                                            & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                               >> 0xdU)), 3U)))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_counter_tRAS[
                                                      (((IData)(7U) 
                                                        + 
                                                        (0x7ffU 
                                                         & (VL_SHIFTL_III(11,32,32, 
                                                                          (0xfU 
                                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                              >> 0x11U)), 7U) 
                                                            + 
                                                            (0x7fU 
                                                             & VL_SHIFTL_III(7,32,32, 
                                                                             (0xfU 
                                                                              & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                                >> 0xdU)), 3U))))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & (VL_SHIFTL_III(11,32,32, 
                                                                         (0xfU 
                                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                             >> 0x11U)), 7U) 
                                                           + 
                                                           (0x7fU 
                                                            & VL_SHIFTL_III(7,32,32, 
                                                                            (0xfU 
                                                                             & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                                >> 0xdU)), 3U))))))) 
                                                    | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_counter_tRAS[
                                                       (0x3fU 
                                                        & ((VL_SHIFTL_III(11,32,32, 
                                                                          (0xfU 
                                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                              >> 0x11U)), 7U) 
                                                            + 
                                                            (0x7fU 
                                                             & VL_SHIFTL_III(7,32,32, 
                                                                             (0xfU 
                                                                              & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                                >> 0xdU)), 3U))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & (VL_SHIFTL_III(11,32,32, 
                                                                         (0xfU 
                                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                             >> 0x11U)), 7U) 
                                                           + 
                                                           (0x7fU 
                                                            & VL_SHIFTL_III(7,32,32, 
                                                                            (0xfU 
                                                                             & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                                >> 0xdU)), 3U)))))))));
            }
        } else {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready 
                = ((0x400000U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U])
                    ? (((2U == ((0x2ffU >= (0x3ffU 
                                            & (((IData)(0x30U) 
                                                * (0xfU 
                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                      >> 0x11U))) 
                                               + (0x3fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0xdU)))))))
                                 ? (7U & (((0U == (0x1fU 
                                                   & (((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))) 
                                                      + 
                                                      (0x3fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0xdU)))))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                            (((IData)(2U) 
                                              + (0x3ffU 
                                                 & (((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))) 
                                                    + 
                                                    (0x3fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (0xfU 
                                                         & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                            >> 0xdU))))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & (((IData)(0x30U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                           >> 0x11U))) 
                                                      + 
                                                      (0x3fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0xdU))))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                             (0x1fU 
                                              & ((((IData)(0x30U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                       >> 0x11U))) 
                                                  + 
                                                  (0x3fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                          >> 0xdU))))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & (((IData)(0x30U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))) 
                                                    + 
                                                    (0x3fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (0xfU 
                                                         & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                            >> 0xdU)))))))))
                                 : 0U)) & (((0xeffU 
                                             >= (0xfffU 
                                                 & (((IData)(0xf0U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                         >> 0x11U))) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0xfU) 
                                                        * 
                                                        (0xfU 
                                                         & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                            >> 0xdU)))))))
                                             ? (0x7fffU 
                                                & (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (((IData)(0xf0U) 
                                                          * 
                                                          (0xfU 
                                                           & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                              >> 0x11U))) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0xfU) 
                                                             * 
                                                             (0xfU 
                                                              & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                 >> 0xdU)))))))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_open_row[
                                                     (((IData)(0xeU) 
                                                       + 
                                                       (0xfffU 
                                                        & (((IData)(0xf0U) 
                                                            * 
                                                            (0xfU 
                                                             & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                >> 0x11U))) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0xfU) 
                                                               * 
                                                               (0xfU 
                                                                & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                   >> 0xdU))))))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & (((IData)(0xf0U) 
                                                           * 
                                                           (0xfU 
                                                            & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                               >> 0x11U))) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0xfU) 
                                                              * 
                                                              (0xfU 
                                                               & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                  >> 0xdU))))))))) 
                                                   | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_open_row[
                                                      (0x7fU 
                                                       & ((((IData)(0xf0U) 
                                                            * 
                                                            (0xfU 
                                                             & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                >> 0x11U))) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0xfU) 
                                                               * 
                                                               (0xfU 
                                                                & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                   >> 0xdU))))) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & (((IData)(0xf0U) 
                                                           * 
                                                           (0xfU 
                                                            & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                               >> 0x11U))) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0xfU) 
                                                              * 
                                                              (0xfU 
                                                               & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                  >> 0xdU)))))))))
                                             : 0U) 
                                           == (0x7fffU 
                                               & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                   << 4U) 
                                                  | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0U] 
                                                     >> 0x1cU))))) 
                       & (0U == (0xffU & (((0U == (0x1fU 
                                                   & (VL_SHIFTL_III(11,32,32, 
                                                                    (0xfU 
                                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                        >> 0x11U)), 7U) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (0xfU 
                                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                           >> 0xdU)), 3U)))))
                                            ? 0U : 
                                           (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_counter_tRCD[
                                            (((IData)(7U) 
                                              + (0x7ffU 
                                                 & (VL_SHIFTL_III(11,32,32, 
                                                                  (0xfU 
                                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                      >> 0x11U)), 7U) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     (0xfU 
                                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                         >> 0xdU)), 3U))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & (VL_SHIFTL_III(11,32,32, 
                                                                    (0xfU 
                                                                     & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                        >> 0x11U)), 7U) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (0xfU 
                                                                        & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                           >> 0xdU)), 3U))))))) 
                                          | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_counter_tRCD[
                                             (0x3fU 
                                              & ((VL_SHIFTL_III(11,32,32, 
                                                                (0xfU 
                                                                 & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                    >> 0x11U)), 7U) 
                                                  + 
                                                  (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0xfU 
                                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                       >> 0xdU)), 3U))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & (VL_SHIFTL_III(11,32,32, 
                                                                  (0xfU 
                                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                      >> 0x11U)), 7U) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     (0xfU 
                                                                      & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                         >> 0xdU)), 3U)))))))))
                    : ((1U & (~ (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                 >> 0x15U))) || ((0U 
                                                  == 
                                                  ((0x2ffU 
                                                    >= 
                                                    (0x3ffU 
                                                     & (((IData)(0x30U) 
                                                         * 
                                                         (0xfU 
                                                          & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                             >> 0x11U))) 
                                                        + 
                                                        (0x3fU 
                                                         & ((IData)(3U) 
                                                            * 
                                                            (0xfU 
                                                             & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                >> 0xdU)))))))
                                                    ? 
                                                   (7U 
                                                    & (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & (((IData)(0x30U) 
                                                              * 
                                                              (0xfU 
                                                               & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                  >> 0x11U))) 
                                                             + 
                                                             (0x3fU 
                                                              & ((IData)(3U) 
                                                                 * 
                                                                 (0xfU 
                                                                  & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                     >> 0xdU)))))))
                                                         ? 0U
                                                         : 
                                                        (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                         (((IData)(2U) 
                                                           + 
                                                           (0x3ffU 
                                                            & (((IData)(0x30U) 
                                                                * 
                                                                (0xfU 
                                                                 & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                    >> 0x11U))) 
                                                               + 
                                                               (0x3fU 
                                                                & ((IData)(3U) 
                                                                   * 
                                                                   (0xfU 
                                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                       >> 0xdU))))))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & (((IData)(0x30U) 
                                                               * 
                                                               (0xfU 
                                                                & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                   >> 0x11U))) 
                                                              + 
                                                              (0x3fU 
                                                               & ((IData)(3U) 
                                                                  * 
                                                                  (0xfU 
                                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                      >> 0xdU))))))))) 
                                                       | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state[
                                                          (0x1fU 
                                                           & ((((IData)(0x30U) 
                                                                * 
                                                                (0xfU 
                                                                 & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                    >> 0x11U))) 
                                                               + 
                                                               (0x3fU 
                                                                & ((IData)(3U) 
                                                                   * 
                                                                   (0xfU 
                                                                    & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                       >> 0xdU))))) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & (((IData)(0x30U) 
                                                               * 
                                                               (0xfU 
                                                                & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                   >> 0x11U))) 
                                                              + 
                                                              (0x3fU 
                                                               & ((IData)(3U) 
                                                                  * 
                                                                  (0xfU 
                                                                   & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                      >> 0xdU)))))))))
                                                    : 0U)) 
                                                 & (0U 
                                                    == 
                                                    (0xffU 
                                                     & (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & (VL_SHIFTL_III(11,32,32, 
                                                                            (0xfU 
                                                                             & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                                >> 0x11U)), 7U) 
                                                              + 
                                                              (0x7fU 
                                                               & VL_SHIFTL_III(7,32,32, 
                                                                               (0xfU 
                                                                                & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                                >> 0xdU)), 3U)))))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_counter_tRC[
                                                          (((IData)(7U) 
                                                            + 
                                                            (0x7ffU 
                                                             & (VL_SHIFTL_III(11,32,32, 
                                                                              (0xfU 
                                                                               & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                                >> 0x11U)), 7U) 
                                                                + 
                                                                (0x7fU 
                                                                 & VL_SHIFTL_III(7,32,32, 
                                                                                (0xfU 
                                                                                & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                                >> 0xdU)), 3U))))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & (VL_SHIFTL_III(11,32,32, 
                                                                             (0xfU 
                                                                              & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                                >> 0x11U)), 7U) 
                                                               + 
                                                               (0x7fU 
                                                                & VL_SHIFTL_III(7,32,32, 
                                                                                (0xfU 
                                                                                & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                                >> 0xdU)), 3U))))))) 
                                                        | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_counter_tRC[
                                                           (0x3fU 
                                                            & ((VL_SHIFTL_III(11,32,32, 
                                                                              (0xfU 
                                                                               & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                                >> 0x11U)), 7U) 
                                                                + 
                                                                (0x7fU 
                                                                 & VL_SHIFTL_III(7,32,32, 
                                                                                (0xfU 
                                                                                & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                                >> 0xdU)), 3U))) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & (VL_SHIFTL_III(11,32,32, 
                                                                             (0xfU 
                                                                              & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                                >> 0x11U)), 7U) 
                                                               + 
                                                               (0x7fU 
                                                                & VL_SHIFTL_III(7,32,32, 
                                                                                (0xfU 
                                                                                & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                                                                >> 0xdU)), 3U)))))))))));
        }
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_sched_issue 
            = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready) 
               & (~ (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__error_invalid_cmd)));
    }
    __Vtableidx6 = (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_we_n) 
                     << 4U) | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_cas_n) 
                                << 3U) | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_ras_n) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_act_n) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_cs_n)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__cmd_is_read 
        = Vtb_cva6_minimal_top__ConstPool__TABLE_hee27ea5a_0
        [__Vtableidx6];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__cmd_is_write 
        = Vtb_cva6_minimal_top__ConstPool__TABLE_hc2ee773c_0
        [__Vtableidx6];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__cmd_is_activate 
        = Vtb_cva6_minimal_top__ConstPool__TABLE_hdde79949_0
        [__Vtableidx6];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_we__VforceRd 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_we__VforceEn)
            ? (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_we__VforceVal)
            : (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_we));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__fifo_full 
        = (((1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__fifo_wr_ptr) 
                   >> 4U)) != (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__fifo_rd_ptr) 
                                     >> 4U))) & ((0xfU 
                                                  & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__fifo_wr_ptr)) 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__fifo_rd_ptr))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT____VdfgTmp_h68aabff1__0 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_cmdpr_cmd_done) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__outstanding_valid));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_entry_valid 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_valid) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_scanning_active));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req__VforceRd 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req__VforceEn)
            ? (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req__VforceVal)
            : (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_current_bit_idx
        [0U];
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type[0U] 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop 
        = ((0xfffeU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop)) 
           | (0U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate 
        = ((0xfffeU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate)) 
           | (1U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read 
        = ((0xfffeU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
           | (2U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write 
        = ((0xfffeU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)) 
           | (3U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge 
        = ((0xfffeU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge)) 
           | (4U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh 
        = ((0xfffeU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh)) 
           | (5U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw 
        = ((0xfffeU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw)) 
           | (6U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr 
        = ((0xfffeU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr)) 
           | (7U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre 
        = (0xfffeU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx 
        = (0xfffeU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr 
        = ((0xfffeU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr)) 
           | (1U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate) 
                     | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
                    | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr 
        = ((0xfffeU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr)) 
           | (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read) 
                    | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data 
        = ((0xfffeU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data)) 
           | (1U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh 
        = ((0xfffeU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh)) 
           | (1U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh) 
                     | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre)) 
                    | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_current_bit_idx
        [1U];
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type[1U] 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop 
        = ((0xfffdU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop)) 
           | ((0U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 1U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate 
        = ((0xfffdU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate)) 
           | ((1U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 1U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read 
        = ((0xfffdU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
           | ((2U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 1U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write 
        = ((0xfffdU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)) 
           | ((3U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 1U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge 
        = ((0xfffdU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge)) 
           | ((4U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 1U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh 
        = ((0xfffdU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh)) 
           | ((5U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 1U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw 
        = ((0xfffdU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw)) 
           | ((6U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 1U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr 
        = ((0xfffdU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr)) 
           | ((7U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 1U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre 
        = (0xfffdU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx 
        = (0xfffdU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr 
        = ((0xfffdU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr)) 
           | (2U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate) 
                     | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
                    | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr 
        = ((0xfffdU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr)) 
           | (2U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read) 
                    | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data 
        = ((0xfffdU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data)) 
           | (2U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh 
        = ((0xfffdU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh)) 
           | (2U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh) 
                     | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre)) 
                    | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_current_bit_idx
        [2U];
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type[2U] 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop 
        = ((0xfffbU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop)) 
           | ((0U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate 
        = ((0xfffbU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate)) 
           | ((1U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read 
        = ((0xfffbU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
           | ((2U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write 
        = ((0xfffbU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)) 
           | ((3U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 2U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge 
        = ((0xfffbU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge)) 
           | ((4U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh 
        = ((0xfffbU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh)) 
           | ((5U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 2U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw 
        = ((0xfffbU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw)) 
           | ((6U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 2U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr 
        = ((0xfffbU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr)) 
           | ((7U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 2U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre 
        = (0xfffbU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx 
        = (0xfffbU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr 
        = ((0xfffbU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr)) 
           | (4U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate) 
                     | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
                    | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr 
        = ((0xfffbU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr)) 
           | (4U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read) 
                    | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data 
        = ((0xfffbU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data)) 
           | (4U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh 
        = ((0xfffbU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh)) 
           | (4U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh) 
                     | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre)) 
                    | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_current_bit_idx
        [3U];
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type[3U] 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop 
        = ((0xfff7U & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop)) 
           | ((0U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 3U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate 
        = ((0xfff7U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate)) 
           | ((1U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 3U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read 
        = ((0xfff7U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
           | ((2U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 3U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write 
        = ((0xfff7U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)) 
           | ((3U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 3U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge 
        = ((0xfff7U & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge)) 
           | ((4U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 3U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh 
        = ((0xfff7U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh)) 
           | ((5U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 3U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw 
        = ((0xfff7U & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw)) 
           | ((6U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 3U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr 
        = ((0xfff7U & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr)) 
           | ((7U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 3U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre 
        = (0xfff7U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx 
        = (0xfff7U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr 
        = ((0xfff7U & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr)) 
           | (8U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate) 
                     | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
                    | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr 
        = ((0xfff7U & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr)) 
           | (8U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read) 
                    | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data 
        = ((0xfff7U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data)) 
           | (8U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh 
        = ((0xfff7U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh)) 
           | (8U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh) 
                     | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre)) 
                    | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_current_bit_idx
        [4U];
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type[4U] 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop 
        = ((0xffefU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop)) 
           | ((0U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 4U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate 
        = ((0xffefU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate)) 
           | ((1U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 4U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read 
        = ((0xffefU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
           | ((2U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 4U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write 
        = ((0xffefU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)) 
           | ((3U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 4U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge 
        = ((0xffefU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge)) 
           | ((4U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 4U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh 
        = ((0xffefU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh)) 
           | ((5U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 4U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw 
        = ((0xffefU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw)) 
           | ((6U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 4U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr 
        = ((0xffefU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr)) 
           | ((7U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 4U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre 
        = (0xffefU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx 
        = (0xffefU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr 
        = ((0xffefU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr)) 
           | (0x10U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
                       | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr 
        = ((0xffefU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr)) 
           | (0x10U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read) 
                       | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data 
        = ((0xffefU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data)) 
           | (0x10U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh 
        = ((0xffefU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh)) 
           | (0x10U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre)) 
                       | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_current_bit_idx
        [5U];
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type[5U] 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop 
        = ((0xffdfU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop)) 
           | ((0U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 5U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate 
        = ((0xffdfU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate)) 
           | ((1U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 5U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read 
        = ((0xffdfU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
           | ((2U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 5U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write 
        = ((0xffdfU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)) 
           | ((3U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 5U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge 
        = ((0xffdfU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge)) 
           | ((4U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 5U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh 
        = ((0xffdfU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh)) 
           | ((5U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 5U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw 
        = ((0xffdfU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw)) 
           | ((6U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 5U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr 
        = ((0xffdfU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr)) 
           | ((7U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 5U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre 
        = (0xffdfU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx 
        = (0xffdfU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr 
        = ((0xffdfU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr)) 
           | (0x20U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
                       | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr 
        = ((0xffdfU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr)) 
           | (0x20U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read) 
                       | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data 
        = ((0xffdfU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data)) 
           | (0x20U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh 
        = ((0xffdfU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh)) 
           | (0x20U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre)) 
                       | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_current_bit_idx
        [6U];
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type[6U] 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop 
        = ((0xffbfU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop)) 
           | ((0U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 6U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate 
        = ((0xffbfU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate)) 
           | ((1U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 6U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read 
        = ((0xffbfU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
           | ((2U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 6U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write 
        = ((0xffbfU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)) 
           | ((3U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 6U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge 
        = ((0xffbfU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge)) 
           | ((4U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 6U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh 
        = ((0xffbfU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh)) 
           | ((5U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 6U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw 
        = ((0xffbfU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw)) 
           | ((6U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 6U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr 
        = ((0xffbfU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr)) 
           | ((7U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 6U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre 
        = (0xffbfU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx 
        = (0xffbfU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr 
        = ((0xffbfU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr)) 
           | (0x40U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
                       | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr 
        = ((0xffbfU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr)) 
           | (0x40U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read) 
                       | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data 
        = ((0xffbfU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data)) 
           | (0x40U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh 
        = ((0xffbfU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh)) 
           | (0x40U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre)) 
                       | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_current_bit_idx
        [7U];
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type[7U] 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop 
        = ((0xff7fU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop)) 
           | ((0U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 7U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate 
        = ((0xff7fU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate)) 
           | ((1U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 7U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read 
        = ((0xff7fU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
           | ((2U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 7U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write 
        = ((0xff7fU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)) 
           | ((3U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 7U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge 
        = ((0xff7fU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge)) 
           | ((4U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 7U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh 
        = ((0xff7fU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh)) 
           | ((5U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 7U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw 
        = ((0xff7fU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw)) 
           | ((6U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 7U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr 
        = ((0xff7fU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr)) 
           | ((7U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 7U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre 
        = (0xff7fU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx 
        = (0xff7fU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr 
        = ((0xff7fU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr)) 
           | (0x80U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
                       | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr 
        = ((0xff7fU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr)) 
           | (0x80U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read) 
                       | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data 
        = ((0xff7fU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data)) 
           | (0x80U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh 
        = ((0xff7fU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh)) 
           | (0x80U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre)) 
                       | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_current_bit_idx
        [8U];
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type[8U] 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop 
        = ((0xfeffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop)) 
           | ((0U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate 
        = ((0xfeffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate)) 
           | ((1U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read 
        = ((0xfeffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
           | ((2U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write 
        = ((0xfeffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)) 
           | ((3U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 8U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge 
        = ((0xfeffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge)) 
           | ((4U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh 
        = ((0xfeffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh)) 
           | ((5U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 8U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw 
        = ((0xfeffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw)) 
           | ((6U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 8U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr 
        = ((0xfeffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr)) 
           | ((7U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 8U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre 
        = (0xfeffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx 
        = (0xfeffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr 
        = ((0xfeffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr)) 
           | (0x100U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr 
        = ((0xfeffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr)) 
           | (0x100U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data 
        = ((0xfeffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data)) 
           | (0x100U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh 
        = ((0xfeffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh)) 
           | (0x100U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre)) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_current_bit_idx
        [9U];
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type[9U] 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop 
        = ((0xfdffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop)) 
           | ((0U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 9U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate 
        = ((0xfdffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate)) 
           | ((1U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 9U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read 
        = ((0xfdffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
           | ((2U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 9U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write 
        = ((0xfdffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)) 
           | ((3U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 9U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge 
        = ((0xfdffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge)) 
           | ((4U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 9U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh 
        = ((0xfdffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh)) 
           | ((5U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 9U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw 
        = ((0xfdffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw)) 
           | ((6U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 9U));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr 
        = ((0xfdffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr)) 
           | ((7U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 9U));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre 
        = (0xfdffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx 
        = (0xfdffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr 
        = ((0xfdffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr)) 
           | (0x200U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr 
        = ((0xfdffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr)) 
           | (0x200U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data 
        = ((0xfdffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data)) 
           | (0x200U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh 
        = ((0xfdffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh)) 
           | (0x200U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre)) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_current_bit_idx
        [0xaU];
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type[0xaU] 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop 
        = ((0xfbffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop)) 
           | ((0U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xaU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate 
        = ((0xfbffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate)) 
           | ((1U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xaU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read 
        = ((0xfbffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
           | ((2U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xaU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write 
        = ((0xfbffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)) 
           | ((3U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xaU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge 
        = ((0xfbffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge)) 
           | ((4U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xaU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh 
        = ((0xfbffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh)) 
           | ((5U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xaU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw 
        = ((0xfbffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw)) 
           | ((6U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xaU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr 
        = ((0xfbffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr)) 
           | ((7U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xaU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre 
        = (0xfbffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx 
        = (0xfbffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr 
        = ((0xfbffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr)) 
           | (0x400U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr 
        = ((0xfbffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr)) 
           | (0x400U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data 
        = ((0xfbffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data)) 
           | (0x400U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh 
        = ((0xfbffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh)) 
           | (0x400U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre)) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_current_bit_idx
        [0xbU];
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type[0xbU] 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop 
        = ((0xf7ffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop)) 
           | ((0U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xbU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate 
        = ((0xf7ffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate)) 
           | ((1U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xbU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read 
        = ((0xf7ffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
           | ((2U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xbU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write 
        = ((0xf7ffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)) 
           | ((3U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xbU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge 
        = ((0xf7ffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge)) 
           | ((4U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xbU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh 
        = ((0xf7ffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh)) 
           | ((5U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xbU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw 
        = ((0xf7ffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw)) 
           | ((6U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xbU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr 
        = ((0xf7ffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr)) 
           | ((7U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xbU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre 
        = (0xf7ffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx 
        = (0xf7ffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr 
        = ((0xf7ffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr)) 
           | (0x800U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr 
        = ((0xf7ffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr)) 
           | (0x800U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data 
        = ((0xf7ffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data)) 
           | (0x800U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh 
        = ((0xf7ffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh)) 
           | (0x800U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre)) 
                        | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_current_bit_idx
        [0xcU];
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type[0xcU] 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop 
        = ((0xefffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop)) 
           | ((0U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate 
        = ((0xefffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate)) 
           | ((1U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read 
        = ((0xefffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
           | ((2U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write 
        = ((0xefffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)) 
           | ((3U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xcU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge 
        = ((0xefffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge)) 
           | ((4U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh 
        = ((0xefffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh)) 
           | ((5U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xcU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw 
        = ((0xefffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw)) 
           | ((6U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xcU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr 
        = ((0xefffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr)) 
           | ((7U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xcU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre 
        = (0xefffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx 
        = (0xefffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr 
        = ((0xefffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr)) 
           | (0x1000U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate) 
                          | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr 
        = ((0xefffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr)) 
           | (0x1000U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data 
        = ((0xefffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data)) 
           | (0x1000U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh 
        = ((0xefffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh)) 
           | (0x1000U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh) 
                          | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre)) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_current_bit_idx
        [0xdU];
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type[0xdU] 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop 
        = ((0xdfffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop)) 
           | ((0U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xdU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate 
        = ((0xdfffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate)) 
           | ((1U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xdU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read 
        = ((0xdfffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
           | ((2U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xdU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write 
        = ((0xdfffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)) 
           | ((3U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xdU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge 
        = ((0xdfffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge)) 
           | ((4U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xdU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh 
        = ((0xdfffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh)) 
           | ((5U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xdU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw 
        = ((0xdfffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw)) 
           | ((6U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xdU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr 
        = ((0xdfffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr)) 
           | ((7U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xdU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre 
        = (0xdfffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx 
        = (0xdfffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr 
        = ((0xdfffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr)) 
           | (0x2000U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate) 
                          | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr 
        = ((0xdfffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr)) 
           | (0x2000U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data 
        = ((0xdfffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data)) 
           | (0x2000U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh 
        = ((0xdfffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh)) 
           | (0x2000U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh) 
                          | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre)) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_current_bit_idx
        [0xeU];
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type[0xeU] 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop 
        = ((0xbfffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop)) 
           | ((0U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xeU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate 
        = ((0xbfffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate)) 
           | ((1U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xeU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read 
        = ((0xbfffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
           | ((2U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xeU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write 
        = ((0xbfffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)) 
           | ((3U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xeU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge 
        = ((0xbfffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge)) 
           | ((4U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xeU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh 
        = ((0xbfffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh)) 
           | ((5U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xeU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw 
        = ((0xbfffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw)) 
           | ((6U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xeU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr 
        = ((0xbfffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr)) 
           | ((7U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xeU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre 
        = (0xbfffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx 
        = (0xbfffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr 
        = ((0xbfffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr)) 
           | (0x4000U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate) 
                          | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr 
        = ((0xbfffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr)) 
           | (0x4000U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data 
        = ((0xbfffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data)) 
           | (0x4000U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh 
        = ((0xbfffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh)) 
           | (0x4000U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh) 
                          | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre)) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_current_bit_idx
        [0xfU];
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type[0xfU] 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__binary_cmd_type;
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop 
        = ((0x7fffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_nop)) 
           | ((0U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xfU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate 
        = ((0x7fffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate)) 
           | ((1U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xfU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read 
        = ((0x7fffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
           | ((2U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xfU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write 
        = ((0x7fffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)) 
           | ((3U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xfU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge 
        = ((0x7fffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_precharge)) 
           | ((4U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xfU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh 
        = ((0x7fffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh)) 
           | ((5U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xfU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw 
        = ((0x7fffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrw)) 
           | ((6U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xfU));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr 
        = ((0x7fffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_mrr)) 
           | ((7U == (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__gen_decoder__DOT__unnamedblk9__DOT__unnamedblk10__DOT__current_bit_pos)) 
              << 0xfU));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre 
        = (0x7fffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx 
        = (0x7fffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr 
        = ((0x7fffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_row_addr)) 
           | (0x8000U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate) 
                          | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read)) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr 
        = ((0x7fffU & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_col_addr)) 
           | (0x8000U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data 
        = ((0x7fffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data)) 
           | (0x8000U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh 
        = ((0x7fffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh)) 
           | (0x8000U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh) 
                          | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre)) 
                         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT____VdfgTmp_ha99f8a08__0 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_penable) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_psel));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceRd 
        = ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceEn 
            & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceVal) 
           | ((~ vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceEn) 
              & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel[0U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel
        [0U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel[1U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel
        [1U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel[2U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel
        [2U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel[3U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel
        [3U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel[4U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel
        [4U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel[5U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel
        [5U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel[6U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel
        [6U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel[7U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel
        [7U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel[8U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel
        [8U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel[9U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel
        [9U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel[0xaU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel
        [0xaU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel[0xbU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel
        [0xbU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel[0xcU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel
        [0xcU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel[0xdU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel
        [0xdU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel[0xeU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel
        [0xeU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel[0xfU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel
        [0xfU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id[0U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id
        [0U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id[1U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id
        [1U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id[2U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id
        [2U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id[3U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id
        [3U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id[4U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id
        [4U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id[5U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id
        [5U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id[6U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id
        [6U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id[7U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id
        [7U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id[8U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id
        [8U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id[9U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id
        [9U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id[0xaU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id
        [0xaU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id[0xbU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id
        [0xbU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id[0xcU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id
        [0xcU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id[0xdU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id
        [0xdU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id[0xeU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id
        [0xeU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id[0xfU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id
        [0xfU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank[0U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr
        [0U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank[1U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr
        [1U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank[2U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr
        [2U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank[3U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr
        [3U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank[4U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr
        [4U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank[5U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr
        [5U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank[6U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr
        [6U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank[7U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr
        [7U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank[8U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr
        [8U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank[9U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr
        [9U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank[0xaU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr
        [0xaU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank[0xbU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr
        [0xbU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank[0xcU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr
        [0xcU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank[0xdU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr
        [0xdU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank[0xeU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr
        [0xeU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank[0xfU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr
        [0xfU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_all_banks 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len[0U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len
        [0U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len[1U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len
        [1U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len[2U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len
        [2U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len[3U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len
        [3U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len[4U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len
        [4U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len[5U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len
        [5U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len[6U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len
        [6U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len[7U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len
        [7U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len[8U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len
        [8U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len[9U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len
        [9U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len[0xaU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len
        [0xaU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len[0xbU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len
        [0xbU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len[0xcU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len
        [0xcU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len[0xdU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len
        [0xdU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len[0xeU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len
        [0xeU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len[0xfU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len
        [0xfU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group[0U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group
        [0U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group[1U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group
        [1U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group[2U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group
        [2U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group[3U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group
        [3U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group[4U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group
        [4U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group[5U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group
        [5U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group[6U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group
        [6U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group[7U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group
        [7U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group[8U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group
        [8U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group[9U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group
        [9U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group[0xaU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group
        [0xaU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group[0xbU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group
        [0xbU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group[0xcU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group
        [0xcU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group[0xdU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group
        [0xdU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group[0xeU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group
        [0xeU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group[0xfU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group
        [0xfU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row[0U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr
        [0U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row[1U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr
        [1U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row[2U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr
        [2U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row[3U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr
        [3U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row[4U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr
        [4U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row[5U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr
        [5U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row[6U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr
        [6U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row[7U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr
        [7U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row[8U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr
        [8U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row[9U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr
        [9U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row[0xaU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr
        [0xaU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row[0xbU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr
        [0xbU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row[0xcU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr
        [0xcU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row[0xdU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr
        [0xdU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row[0xeU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr
        [0xeU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row[0xfU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr
        [0xfU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col[0U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr
        [0U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col[1U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr
        [1U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col[2U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr
        [2U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col[3U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr
        [3U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col[4U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr
        [4U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col[5U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr
        [5U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col[6U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr
        [6U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col[7U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr
        [7U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col[8U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr
        [8U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col[9U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr
        [9U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col[0xaU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr
        [0xaU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col[0xbU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr
        [0xbU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col[0xcU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr
        [0xcU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col[0xdU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr
        [0xdU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col[0xeU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr
        [0xeU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col[0xfU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr
        [0xfU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data[0U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data
        [0U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data[1U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data
        [1U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data[2U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data
        [2U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data[3U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data
        [3U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data[4U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data
        [4U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data[5U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data
        [5U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data[6U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data
        [6U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data[7U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data
        [7U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data[8U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data
        [8U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data[9U] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data
        [9U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data[0xaU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data
        [0xaU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data[0xbU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data
        [0xbU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data[0xcU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data
        [0xcU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data[0xdU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data
        [0xdU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data[0xeU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data
        [0xeU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data[0xfU] 
        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data
        [0xfU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdpr_to_dfi_wrdata_valid 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT____VdfgTmp_hdca86341__0) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_write_data_valid));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdprocessor_to_cmdmngr_command_processed 
        = ((~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__outstanding_source)) 
           & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT____VdfgTmp_h68aabff1__0));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__refctrl_cmdmgr_ref_done 
        = ((IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT____VdfgTmp_h68aabff1__0) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__outstanding_source));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid 
        = tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_entry_valid;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__write_enable 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT____VdfgTmp_ha99f8a08__0) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_pwrite));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_enable 
        = ((~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_pwrite)) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT____VdfgTmp_ha99f8a08__0));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_cfg_select 
        = ((0x40000000U <= vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceRd) 
           & (0x40001000U > vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceRd));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__uart_select 
        = ((0x21000000U <= vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceRd) 
           & (0x21000008U > vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceRd));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__ram_select 
        = ((0x10000000U <= vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceRd) 
           & (0x10001000U > vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceRd));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_select 
        = ((0x30000000U <= vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceRd) 
           & (0x40000000U > vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceRd));
    __Vtableidx5 = (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__auto_refresh_req) 
                     << 6U) | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmgr_refctrl_refresh_cmd_valid) 
                                << 5U) | ((0x10U & 
                                           ((~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__refresh_pending)) 
                                            << 4U)) 
                                          | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__refctrl_cmdmgr_ref_done) 
                                              << 3U) 
                                             | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__state)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__next_state 
        = Vtb_cva6_minimal_top__ConstPool__TABLE_h72bbb8ef_0
        [__Vtableidx5];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = 0U;
    if ((1U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = 1U;
    }
    if ((1U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid) 
                >> 1U) & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid))))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = 1U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = 1U;
    }
    if ((1U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid) 
                >> 2U) & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid))))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = 2U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = 1U;
    }
    if ((1U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid) 
                >> 3U) & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid))))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = 3U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = 1U;
    }
    if ((1U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid) 
                >> 4U) & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid))))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = 4U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = 1U;
    }
    if ((1U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid) 
                >> 5U) & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid))))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = 5U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = 1U;
    }
    if ((1U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid) 
                >> 6U) & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid))))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = 6U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = 1U;
    }
    if ((1U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid) 
                >> 7U) & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid))))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = 7U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = 1U;
    }
    if ((1U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid) 
                >> 8U) & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid))))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = 8U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = 1U;
    }
    if ((1U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid) 
                >> 9U) & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid))))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = 9U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = 1U;
    }
    if ((1U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid) 
                >> 0xaU) & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid))))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = 0xaU;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = 1U;
    }
    if ((1U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid) 
                >> 0xbU) & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid))))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = 0xbU;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = 1U;
    }
    if ((1U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid) 
                >> 0xcU) & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid))))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = 0xcU;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = 1U;
    }
    if ((1U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid) 
                >> 0xdU) & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid))))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = 0xdU;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = 1U;
    }
    if ((1U & (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid) 
                >> 0xeU) & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid))))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = 0xeU;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = 1U;
    }
    if ((IData)((((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid) 
                  >> 0xfU) & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid))))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = 0xfU;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = 1U;
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_data = 0U;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__access_error = 0U;
    if (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_enable) 
         | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__write_enable))) {
        if (((((((((0U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr)) 
                   | (4U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) 
                  | (8U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) 
                 | (0xcU == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) 
                | (0x10U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) 
               | (0xa00U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) 
              | (0xa04U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) 
             | (0xa08U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr)))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_data 
                = ((0U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))
                    ? (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_reorder_en) 
                        << 3U) | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_refresh_en) 
                                   << 2U) | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_ctrl_en)))
                    : ((4U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))
                        ? (0x106U | ((((~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_assembly_valid)) 
                                       & (0U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__valid_count))) 
                                      << 5U) | (((0x10U 
                                                  <= (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__valid_count)) 
                                                 << 4U) 
                                                | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdpr_to_refctrl_cmd_proc_busy))))
                        : ((8U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))
                            ? 0x1000000U : ((0xcU == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))
                                             ? 0x101020U
                                             : ((0x10U 
                                                 == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))
                                                 ? 0xfdU
                                                 : 
                                                ((0xa00U 
                                                  == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))
                                                  ? (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_trcd)
                                                  : 
                                                 ((0xa04U 
                                                   == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))
                                                   ? (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_trp)
                                                   : (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_tras))))))));
        } else if ((0xa0cU == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_data 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_trc;
        } else if ((0xa10U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_data 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_trfc;
        } else if ((0xa14U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_data 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_wl;
        } else if ((0xa18U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_data 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_rl;
        } else if (((0x500U <= (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr)) 
                    & (0x900U > (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr)))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_offset 
                = (0xfffU & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr) 
                             - (IData)(0x500U)));
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_num 
                = VL_SHIFTR_III(32,32,32, (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_offset), 6U);
            if (VL_GTS_III(32, 0x10U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_num)) {
                if ((0U == (0x3fU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_offset)))) {
                    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_data 
                        = ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_ch_pseudo_ch_en
                            [(0xfU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_num)] 
                            << 2U) | ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_ch_train_en
                                       [(0xfU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_num)] 
                                       << 1U) | vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_ch_en
                                      [(0xfU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_num)]));
                } else if ((4U == (0x3fU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_offset)))) {
                    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_data 
                        = ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub
                            [(0xfU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_num)] 
                            << 4U) | ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub
                                       [(0xfU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_num)] 
                                       << 2U) | (2U 
                                                 & ((0xffffU 
                                                     >> 
                                                     (0xfU 
                                                      & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_num)) 
                                                    << 1U))));
                } else if ((8U == (0x3fU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_offset)))) {
                    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_data 
                        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub
                        [(0xfU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_num)];
                } else if ((0xcU == (0x3fU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_offset)))) {
                    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_data 
                        = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub
                        [(0xfU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_num)];
                } else {
                    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_data = 0U;
                    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__access_error = 1U;
                }
            } else {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__access_error = 1U;
            }
        } else {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__access_error = 1U;
        }
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT____Vcellinp__u_data_ram__req 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req__VforceRd) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__ram_select));
    vlSelf->tb_cva6_minimal_top__DOT__led = ((((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_select) 
                                               & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req__VforceRd)) 
                                              << 3U) 
                                             | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn) 
                                                 << 2U) 
                                                | (3U 
                                                   & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__led_reg)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT____Vcellinp__u_mem_to_axi_bridge__mem_req 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req__VforceRd) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_select));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_rdata 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__ram_select)
            ? vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__ram_rdata
            : ((0x20000000U == vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceRd)
                ? vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__led_reg
                : ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__uart_select)
                    ? ((0U == (7U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceRd))
                        ? 0U : ((1U == (7U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceRd))
                                 ? (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__fifo_full) 
                                     << 1U) | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__tx_active))
                                 : 0U)) : ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_select)
                                            ? vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_rdata
                                            : ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_cfg_select)
                                                ? vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_rdata_reg
                                                : 0U)))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_to_refresh 
        = (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh) 
                 >> (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx)));
    __Vtableidx1 = (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_we__VforceRd) 
                     << 9U) | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT____Vcellinp__u_mem_to_axi_bridge__mem_req) 
                                << 8U) | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awready) 
                                           << 7U) | 
                                          (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_wready) 
                                            << 6U) 
                                           | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_bvalid) 
                                               << 5U) 
                                              | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arready) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__state))))))));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__next_state 
        = Vtb_cva6_minimal_top__ConstPool__TABLE_h3b8bd612_0
        [__Vtableidx1];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_rdata__VforceRd 
        = ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_rdata__VforceEn 
            & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_rdata__VforceVal) 
           | ((~ vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_rdata__VforceEn) 
              & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_rdata));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_dispatched 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid) 
           & ((~ ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_to_refresh) 
                  | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_valid))) 
              | ((~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmgr_refctrl_refresh_cmd_valid)) 
                 & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_to_refresh))));
}

VL_ATTR_COLD void Vtb_cva6_minimal_top___024root___eval_stl(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_cva6_minimal_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_cva6_minimal_top___024root___eval_triggers__stl(Vtb_cva6_minimal_top___024root* vlSelf);

VL_ATTR_COLD bool Vtb_cva6_minimal_top___024root___eval_phase__stl(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cva6_minimal_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_cva6_minimal_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cva6_minimal_top___024root___dump_triggers__act(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_cva6_minimal_top.sys_clock)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_cva6_minimal_top.dut.aresetn or posedge tb_cva6_minimal_top.sys_clock)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cva6_minimal_top___024root___dump_triggers__nba(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_cva6_minimal_top.sys_clock)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_cva6_minimal_top.dut.aresetn or posedge tb_cva6_minimal_top.sys_clock)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cva6_minimal_top___024root___ctor_var_reset(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_cva6_minimal_top__DOT__sys_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__sys_reset_n = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__led = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__cycle_count = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__led_toggle_count = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__led_prev = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__instr_count = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__hbm3_loopback_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_cva6_minimal_top__DOT__uart_rx_byte = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__uart_bit_index = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__uart_bit_counter = VL_RAND_RESET_I(16);
    vlSelf->tb_cva6_minimal_top__DOT__uart_rx_state = VL_RAND_RESET_I(2);
    vlSelf->tb_cva6_minimal_top__DOT__prev_state = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__fetched_instr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__prev_regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_cva6_minimal_top__DOT____Vlvbound_hc83af77f__1 = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__reset_sync = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req__VforceRd = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req__VforceEn = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req__VforceVal = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_we = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_we__VforceRd = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_we__VforceEn = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_we__VforceVal = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_be = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_be__VforceRd = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_be__VforceEn = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_be__VforceVal = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceRd = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceEn = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceVal = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_wdata__VforceRd = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_wdata__VforceEn = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_wdata__VforceVal = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_rdata__VforceRd = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_rdata__VforceEn = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_rdata__VforceVal = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__rom_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__ram_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__ram_select = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__uart_select = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_select = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_cfg_select = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__led_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_valid__VforceRd = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_valid__VforceEn = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_valid__VforceVal = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT____Vcellinp__u_data_ram__req = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awid = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awaddr = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awlen = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awsize = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awburst = VL_RAND_RESET_I(2);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awlock = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awcache = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awprot = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awqos = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awregion = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awuser = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awready = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_wdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_wuser = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_wready = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_bready = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arid = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arsize = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arburst = VL_RAND_RESET_I(2);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arlock = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arcache = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arprot = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arqos = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arregion = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_aruser = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arready = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rready = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr = VL_RAND_RESET_I(12);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_psel = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_penable = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_pwrite = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_pwdata = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_prdata = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_pready = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_state = VL_RAND_RESET_I(2);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT____Vcellinp__u_mem_to_axi_bridge__mem_req = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_boot_rom__DOT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_data_ram__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__fifo_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__fifo_wr_ptr = VL_RAND_RESET_I(5);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__fifo_rd_ptr = VL_RAND_RESET_I(5);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__fifo_full = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__tx_state = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__clk_count = VL_RAND_RESET_I(16);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__bit_index = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__tx_data = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__tx_active = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_uart_debug__DOT__tx_line = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__transaction_id = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmd_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmd_wr_data = VL_RAND_RESET_Q(64);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmd_wr_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__queue_full = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__rd_queue_rd_en = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__rd_queue_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__rd_queue_full = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__qtype = VL_RAND_RESET_I(2);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_bank = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_row = VL_RAND_RESET_I(16);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_col = VL_RAND_RESET_I(10);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data = VL_RAND_RESET_Q(64);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_burst_len = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_channel = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_bank_group = VL_RAND_RESET_I(2);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_id = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdprocessor_to_cmdmngr_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdprocessor_to_cmdmngr_command_processed = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_write_data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdprocessor_to_cmdmngr_read_data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdprocessor_to_cmdmngr_read_data = VL_RAND_RESET_Q(64);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmgr_refctrl_refresh_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmgr_refctrl_refresh_per_bank = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmgr_refctrl_refresh_all_banks = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__refctrl_cmdmgr_ref_done = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdpr_to_refctrl_cmd_proc_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdpr_to_refctrl_ref_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdpr_to_dfi_wrdata_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_cmdpr_rddata = VL_RAND_RESET_Q(64);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_cmdpr_rddata_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_cmdpr_cmd_done = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_address = VL_RAND_RESET_I(18);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_bank = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_cs_n = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_ras_n = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_cas_n = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_we_n = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_act_n = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_wrdata);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_wrdata_en = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_wrdata_mask = VL_RAND_RESET_I(9);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__phy_to_dfi_rddata_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__phy_to_dfi_rddata_dnv = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_state_stub[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_active_banks_stub[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_read_count_stub[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__ch_write_count_stub[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT____Vcellout__u_command_manager__cmdmngr_to_cmdprocessor_cmd_type = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(137, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT____Vcellout__u_hbm3_phy__phy_to_dfi_rddata);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_ctrl_en = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_refresh_en = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_reorder_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_ch_en[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_ch_train_en[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_ch_pseudo_ch_en[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_trcd = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_trp = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_tras = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_trc = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_trfc = VL_RAND_RESET_I(16);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_wl = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_rl = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__apb_state = VL_RAND_RESET_I(2);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_enable = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__access_error = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk2__DOT__ch_offset = VL_RAND_RESET_I(12);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk2__DOT__ch_num = 0;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_offset = VL_RAND_RESET_I(12);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__unnamedblk3__DOT__ch_num = 0;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT____VdfgTmp_ha99f8a08__0 = 0;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__aw_state = VL_RAND_RESET_I(2);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__aw_state_next = VL_RAND_RESET_I(2);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__aw_state_prev = VL_RAND_RESET_I(2);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__ar_state = VL_RAND_RESET_I(2);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__ar_state_next = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(230, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__wr_trans);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__bresp_pending = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__wr_addr_error = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(230, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[__Vi0]);
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__outstanding_reads = VL_RAND_RESET_I(5);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__clear_trans_req = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__clear_trans_id = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(70, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[__Vi0]);
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_buf_wr_ptr = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_buf_rd_ptr = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk1__DOT__addr_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk4__DOT__addr_valid_r = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk4__DOT__alloc_idx = 0;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__waiting_for_command = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__waiting_for_data = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__command_packet = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_assembled);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_assembly_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__assembly_error = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__stored_qtype = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_queue[__Vi0]);
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_valid = VL_RAND_RESET_I(16);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__wr_ptr = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_ptr = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__valid_count = VL_RAND_RESET_I(5);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatched_entry_idx = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__entry_dispatched = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatched_to_refresh = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_current_bit_idx[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_scanning_active = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_remaining_bits[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_addr[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_burst_len[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_row_addr[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_col_addr[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_write_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_age_counter[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_channel[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_bank_group[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_cmd_id[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_valid = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_activate = VL_RAND_RESET_I(16);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_read = VL_RAND_RESET_I(16);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_write = VL_RAND_RESET_I(16);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_refresh = VL_RAND_RESET_I(16);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_sre = VL_RAND_RESET_I(16);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_is_srx = VL_RAND_RESET_I(16);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data = VL_RAND_RESET_I(16);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_all_banks = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue_wr_ptr = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue_rd_ptr = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue_count = VL_RAND_RESET_I(5);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_to_refresh = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_dispatched = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__unnamedblk2__DOT__cmd_written = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__unnamedblk2__DOT__cmd_completed = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__unnamedblk2__DOT__bit_cmd_processed = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__unnamedblk2__DOT__temp_remaining = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__unnamedblk2__DOT__current_idx = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__unnamedblk2__DOT__unnamedblk3__DOT__incoming_cmd_type = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__unnamedblk2__DOT__unnamedblk3__DOT__first_bit_idx = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__unnamedblk2__DOT__unnamedblk3__DOT__found_first_bit = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__unnamedblk2__DOT__unnamedblk5__DOT__next_bit_idx = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__unnamedblk2__DOT__unnamedblk5__DOT__remaining = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__unnamedblk2__DOT__unnamedblk5__DOT__found_next_bit = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__unnamedblk18__DOT__data_written = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__unnamedblk18__DOT__data_read = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__refctrl_cmdpr_ref_cmd_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__refctrl_cmdpr_ref_bank_reg = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__refctrl_cmdpr_ref_all_banks_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__trefi_counter = VL_RAND_RESET_I(20);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__auto_refresh_req = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__current_bank = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_source = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_source = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__outstanding_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__outstanding_source = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__outstanding_is_write = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__refresh_pending = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_cmd_type = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_cmd_type = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_cmd_channel = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_cmd_channel = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_cmd_bank_group = VL_RAND_RESET_I(2);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_cmd_bank_group = VL_RAND_RESET_I(2);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_cmd_bank = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_cmd_bank = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_cmd_row = VL_RAND_RESET_I(15);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_cmd_row = VL_RAND_RESET_I(15);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_cmd_col = VL_RAND_RESET_I(10);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_cmd_col = VL_RAND_RESET_I(10);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_cmd_burst_len = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_cmd_burst_len = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_cmd_id = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_cmd_id = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_tRCD = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_tRCD = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_tRP = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_tRP = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_tRAS = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_tRAS = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_tRC = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_tRC = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_tRFC = VL_RAND_RESET_I(16);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_tRFC = VL_RAND_RESET_I(16);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT____VdfgTmp_hdca86341__0 = 0;
    VL_RAND_RESET_W(768, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_state);
    VL_RAND_RESET_W(3840, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__bank_open_row);
    VL_RAND_RESET_W(2048, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_counter_tRCD);
    VL_RAND_RESET_W(2048, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_counter_tRAS);
    VL_RAND_RESET_W(2048, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_counter_tRP);
    VL_RAND_RESET_W(2048, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_counter_tRC);
    VL_RAND_RESET_W(4096, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_counter_tRFC);
    VL_RAND_RESET_W(456, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_level = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_full = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_sched_issue = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_sched_issue_r = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__timing_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr = VL_RAND_RESET_I(9);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__unnamedblk3__DOT__ch = 0;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__unnamedblk1__DOT__ch = 0;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__unnamedblk7__DOT__enqueue_cmd = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__unnamedblk7__DOT__dequeue_cmd = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_hf6719eb6__0 = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_hf6719eb6__1 = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_hf6719eb6__2 = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_hf6719eb6__3 = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_hf0b8bd5e__0 = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_hcc1cbcd7__0 = VL_RAND_RESET_I(15);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_hf0b8bd5e__1 = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_hf0b8bd5e__2 = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_hf0b8bd5e__3 = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_h15960473__0 = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_hf0b8bd5e__4 = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_h4d2a5416__0 = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_hf96993eb__0 = VL_RAND_RESET_I(15);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_h4b4fb577__0 = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_h55f848dd__0 = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_h3fd3f072__0 = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_h40a184d2__0 = VL_RAND_RESET_I(2);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_h48934799__0 = VL_RAND_RESET_I(15);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_h65087b3b__0 = VL_RAND_RESET_I(10);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_h502089cb__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_h3ffc598f__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_h5a068f74__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_h8d77490c__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT____Vlvbound_h409d9cb8__0 = VL_RAND_RESET_Q(57);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8192; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 1024; ++__Vi2) {
                VL_RAND_RESET_W(137, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[__Vi0][__Vi1][__Vi2]);
            }
        }
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__cmd_is_read = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__cmd_is_write = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__cmd_is_activate = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_bank = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_row = VL_RAND_RESET_I(18);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_col = VL_RAND_RESET_I(18);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(137, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(137, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_reg);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_bank_reg = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_row_reg = VL_RAND_RESET_I(18);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_col_reg = VL_RAND_RESET_I(18);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_latency_counter = VL_RAND_RESET_I(5);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_bank_reg = VL_RAND_RESET_I(4);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_row_reg = VL_RAND_RESET_I(18);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_col_reg = VL_RAND_RESET_I(18);
    VL_RAND_RESET_W(128, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_captured);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__ecc_captured = VL_RAND_RESET_I(9);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__data_capture_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__pc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__imm_i = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__imm_s = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__imm_b = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__imm_j = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__is_addi = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__is_sw = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__is_bne = VL_RAND_RESET_I(1);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_riscv_core__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__reset_sync = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__apb_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__transaction_id = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__apb_pready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__axi_awready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__axi_wready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__bresp_pending = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__axi_arready = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v0 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v0 = 0;
    vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v0 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v0 = 0;
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v1 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v1 = 0;
    vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v2 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v2 = 0;
    vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v3 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v3 = 0;
    vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v3 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v4 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v4 = 0;
    vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v4 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v5 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v5 = 0;
    vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v6 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v6 = 0;
    vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v6 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v7 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v7 = 0;
    vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v7 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v8 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v8 = 0;
    vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v8 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v9 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v9 = 0;
    vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v9 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v10 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v10 = 0;
    vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v11 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v11 = 0;
    vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v11 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v11 = 0;
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v12 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v12 = 0;
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v13 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v13 = 0;
    vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v13 = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__outstanding_reads = VL_RAND_RESET_I(5);
    vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v14 = 0;
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v0 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v0 = 0;
    vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v0 = 0;
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_buf_rd_ptr = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v1 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v1 = 0;
    vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v1 = 0;
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v2 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v2 = 0;
    vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v2 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v2 = 0;
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v3 = 0;
    vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v3 = 0;
    vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v3 = 0;
    vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v4 = 0;
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_write_data_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue__v0 = 0;
    vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue__v0 = 0;
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue_rd_ptr = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue_count = VL_RAND_RESET_I(5);
    vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue__v1 = 0;
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__current_bank = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_source = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(456, vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue);
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_level = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row__v0 = 0;
    vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row__v0 = VL_RAND_RESET_I(18);
    vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row__v0 = 0;
    vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row__v1 = 0;
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0 = 0;
    vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_latency_counter = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__tb_cva6_minimal_top__DOT__sys_clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_cva6_minimal_top__DOT__dut__DOT__aresetn__0 = VL_RAND_RESET_I(1);
}
