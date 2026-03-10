// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cva6_minimal_top.h for the primary calling header

#include "Vtb_cva6_minimal_top__pch.h"
#include "Vtb_cva6_minimal_top___024root.h"

extern const VlWide<8>/*255:0*/ Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtb_cva6_minimal_top__ConstPool__TABLE_h72bbb8ef_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_cva6_minimal_top__ConstPool__TABLE_hee27ea5a_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_cva6_minimal_top__ConstPool__TABLE_hc2ee773c_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_cva6_minimal_top__ConstPool__TABLE_hdde79949_0;

VL_INLINE_OPT void Vtb_cva6_minimal_top___024root___nba_sequent__TOP__2(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___nba_sequent__TOP__2\n"); );
    // Init
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
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0;
    __Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0 = 0;
    SData/*12:0*/ __Vdlyvdim1__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0;
    __Vdlyvdim1__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0 = 0;
    SData/*9:0*/ __Vdlyvdim2__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0;
    __Vdlyvdim2__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0 = 0;
    VlWide<5>/*136:0*/ __Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0;
    VL_ZERO_W(137, __Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0);
    // Body
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__outstanding_reads 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__outstanding_reads;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue_rd_ptr 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue_rd_ptr;
    if (vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue__v0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue__v0] 
            = vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue__v0;
    }
    if (vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue__v1) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[0U] = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[1U] = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[2U] = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[3U] = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[4U] = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[5U] = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[6U] = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[7U] = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[8U] = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[9U] = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[0xaU] = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[0xbU] = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[0xcU] = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[0xdU] = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[0xeU] = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue[0xfU] = 0ULL;
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue_count 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue_count;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_source 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_source;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__current_bank 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__current_bank;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_valid 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage1_valid;
    if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn) {
        if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__write_enable) {
            if (((((((((0U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr)) 
                       | (0xa00U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) 
                      | (0xa04U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) 
                     | (0xa08U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) 
                    | (0xa0cU == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) 
                   | (0xa10U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) 
                  | (0xa14U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) 
                 | (0xa18U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr)))) {
                if ((0U != (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) {
                    if ((0xa00U != (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) {
                        if ((0xa04U != (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) {
                            if ((0xa08U != (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) {
                                if ((0xa0cU != (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) {
                                    if ((0xa10U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) {
                                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_trfc 
                                            = (0xffffU 
                                               & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_pwdata);
                                    }
                                    if ((0xa10U != (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) {
                                        if ((0xa14U 
                                             == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) {
                                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_wl 
                                                = (0xffU 
                                                   & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_pwdata);
                                        }
                                        if ((0xa14U 
                                             != (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr))) {
                                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_rl 
                                                = (0xffU 
                                                   & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_pwdata);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_trfc = 0x230U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_wl = 6U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__reg_timing_rl = 0x10U;
    }
    if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn) {
        if (((0x10U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_latency_counter)) 
             & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_oe)))) {
            if (((0x2000U > vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_row_reg) 
                 & (0x400U > vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_col_reg))) {
                VL_WRITEF("[%0t] PHY_MEM: RETRIEVED READ DATA FROM MEMORY - Bank=%0# Row=0x%x Col=0x%x Data=0x%x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,4,(IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_bank_reg),
                          18,vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_row_reg,
                          18,vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_col_reg,
                          137,vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array
                          [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_bank_reg]
                          [(0x1fffU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_row_reg)]
                          [(0x3ffU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_col_reg)].data());
                Verilated::runFlushCallbacks();
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_captured[0U] 
                    = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array
                    [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_bank_reg]
                    [(0x1fffU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_row_reg)]
                    [(0x3ffU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_col_reg)][0U];
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_captured[1U] 
                    = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array
                    [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_bank_reg]
                    [(0x1fffU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_row_reg)]
                    [(0x3ffU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_col_reg)][1U];
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_captured[2U] 
                    = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array
                    [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_bank_reg]
                    [(0x1fffU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_row_reg)]
                    [(0x3ffU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_col_reg)][2U];
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_captured[3U] 
                    = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array
                    [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_bank_reg]
                    [(0x1fffU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_row_reg)]
                    [(0x3ffU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_col_reg)][3U];
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__ecc_captured 
                    = (0x1ffU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array
                       [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_bank_reg]
                       [(0x1fffU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_row_reg)]
                       [(0x3ffU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_col_reg)][4U]);
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__data_capture_valid = 1U;
            } else {
                VL_WRITEF("[%0t] PHY_MEM: READ from invalid address - returning zeros\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
                Verilated::runFlushCallbacks();
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_captured[0U] = 0U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_captured[1U] = 0U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_captured[2U] = 0U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_captured[3U] = 0U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__ecc_captured = 0U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__data_capture_valid = 1U;
            }
        } else {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__data_capture_valid = 0U;
        }
    } else {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_captured[0U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_captured[1U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_captured[2U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_captured[3U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__ecc_captured = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__data_capture_valid = 0U;
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__rd_queue_empty 
        = (0U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue_count));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__rd_queue_full 
        = (0x10U <= (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__rd_queue_count));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_latency_counter 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_latency_counter;
    if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn) {
        if (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending) 
             & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rready))) {
            vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__clear_trans_req = 1U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__clear_trans_id 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid;
        } else if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__clear_trans_req = 0U;
        } else {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__clear_trans_req = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = 0U;
            if (((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                  [0U][0U] >> 2U) & (((3U == (3U & 
                                              vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                              [0U][0U])) 
                                      | (2U == (3U 
                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                [0U][0U]))) 
                                     | (1U == (3U & 
                                               vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                               [0U][0U]))))) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = 1U;
                vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid 
                    = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                               [0U][7U] >> 2U));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = 0ULL;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp 
                    = (3U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                       [0U][0U]);
            }
            if ((((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                   [1U][0U] >> 2U) & (((3U == (3U & 
                                               vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                               [1U][0U])) 
                                       | (2U == (3U 
                                                 & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                 [1U][0U]))) 
                                      | (1U == (3U 
                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                [1U][0U])))) 
                 & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found)))) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = 1U;
                vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid 
                    = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                               [1U][7U] >> 2U));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = 0ULL;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp 
                    = (3U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                       [1U][0U]);
            }
            if ((((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                   [2U][0U] >> 2U) & (((3U == (3U & 
                                               vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                               [2U][0U])) 
                                       | (2U == (3U 
                                                 & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                 [2U][0U]))) 
                                      | (1U == (3U 
                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                [2U][0U])))) 
                 & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found)))) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = 1U;
                vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid 
                    = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                               [2U][7U] >> 2U));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = 0ULL;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp 
                    = (3U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                       [2U][0U]);
            }
            if ((((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                   [3U][0U] >> 2U) & (((3U == (3U & 
                                               vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                               [3U][0U])) 
                                       | (2U == (3U 
                                                 & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                 [3U][0U]))) 
                                      | (1U == (3U 
                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                [3U][0U])))) 
                 & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found)))) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = 1U;
                vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid 
                    = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                               [3U][7U] >> 2U));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = 0ULL;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp 
                    = (3U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                       [3U][0U]);
            }
            if ((((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                   [4U][0U] >> 2U) & (((3U == (3U & 
                                               vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                               [4U][0U])) 
                                       | (2U == (3U 
                                                 & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                 [4U][0U]))) 
                                      | (1U == (3U 
                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                [4U][0U])))) 
                 & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found)))) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = 1U;
                vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid 
                    = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                               [4U][7U] >> 2U));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = 0ULL;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp 
                    = (3U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                       [4U][0U]);
            }
            if ((((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                   [5U][0U] >> 2U) & (((3U == (3U & 
                                               vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                               [5U][0U])) 
                                       | (2U == (3U 
                                                 & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                 [5U][0U]))) 
                                      | (1U == (3U 
                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                [5U][0U])))) 
                 & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found)))) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = 1U;
                vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid 
                    = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                               [5U][7U] >> 2U));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = 0ULL;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp 
                    = (3U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                       [5U][0U]);
            }
            if ((((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                   [6U][0U] >> 2U) & (((3U == (3U & 
                                               vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                               [6U][0U])) 
                                       | (2U == (3U 
                                                 & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                 [6U][0U]))) 
                                      | (1U == (3U 
                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                [6U][0U])))) 
                 & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found)))) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = 1U;
                vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid 
                    = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                               [6U][7U] >> 2U));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = 0ULL;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp 
                    = (3U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                       [6U][0U]);
            }
            if ((((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                   [7U][0U] >> 2U) & (((3U == (3U & 
                                               vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                               [7U][0U])) 
                                       | (2U == (3U 
                                                 & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                 [7U][0U]))) 
                                      | (1U == (3U 
                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                [7U][0U])))) 
                 & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found)))) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = 1U;
                vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid 
                    = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                               [7U][7U] >> 2U));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = 0ULL;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp 
                    = (3U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                       [7U][0U]);
            }
            if ((((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                   [8U][0U] >> 2U) & (((3U == (3U & 
                                               vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                               [8U][0U])) 
                                       | (2U == (3U 
                                                 & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                 [8U][0U]))) 
                                      | (1U == (3U 
                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                [8U][0U])))) 
                 & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found)))) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = 1U;
                vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid 
                    = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                               [8U][7U] >> 2U));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = 0ULL;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp 
                    = (3U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                       [8U][0U]);
            }
            if ((((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                   [9U][0U] >> 2U) & (((3U == (3U & 
                                               vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                               [9U][0U])) 
                                       | (2U == (3U 
                                                 & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                 [9U][0U]))) 
                                      | (1U == (3U 
                                                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                [9U][0U])))) 
                 & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found)))) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = 1U;
                vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid 
                    = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                               [9U][7U] >> 2U));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = 0ULL;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp 
                    = (3U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                       [9U][0U]);
            }
            if ((((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                   [0xaU][0U] >> 2U) & (((3U == (3U 
                                                 & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                 [0xaU][0U])) 
                                         | (2U == (3U 
                                                   & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                   [0xaU][0U]))) 
                                        | (1U == (3U 
                                                  & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                  [0xaU][0U])))) 
                 & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found)))) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = 1U;
                vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid 
                    = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                               [0xaU][7U] >> 2U));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = 0ULL;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp 
                    = (3U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                       [0xaU][0U]);
            }
            if ((((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                   [0xbU][0U] >> 2U) & (((3U == (3U 
                                                 & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                 [0xbU][0U])) 
                                         | (2U == (3U 
                                                   & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                   [0xbU][0U]))) 
                                        | (1U == (3U 
                                                  & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                  [0xbU][0U])))) 
                 & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found)))) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = 1U;
                vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid 
                    = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                               [0xbU][7U] >> 2U));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = 0ULL;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp 
                    = (3U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                       [0xbU][0U]);
            }
            if ((((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                   [0xcU][0U] >> 2U) & (((3U == (3U 
                                                 & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                 [0xcU][0U])) 
                                         | (2U == (3U 
                                                   & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                   [0xcU][0U]))) 
                                        | (1U == (3U 
                                                  & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                  [0xcU][0U])))) 
                 & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found)))) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = 1U;
                vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid 
                    = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                               [0xcU][7U] >> 2U));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = 0ULL;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp 
                    = (3U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                       [0xcU][0U]);
            }
            if ((((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                   [0xdU][0U] >> 2U) & (((3U == (3U 
                                                 & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                 [0xdU][0U])) 
                                         | (2U == (3U 
                                                   & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                   [0xdU][0U]))) 
                                        | (1U == (3U 
                                                  & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                  [0xdU][0U])))) 
                 & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found)))) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = 1U;
                vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid 
                    = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                               [0xdU][7U] >> 2U));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = 0ULL;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp 
                    = (3U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                       [0xdU][0U]);
            }
            if ((((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                   [0xeU][0U] >> 2U) & (((3U == (3U 
                                                 & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                 [0xeU][0U])) 
                                         | (2U == (3U 
                                                   & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                   [0xeU][0U]))) 
                                        | (1U == (3U 
                                                  & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                  [0xeU][0U])))) 
                 & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found)))) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = 1U;
                vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid 
                    = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                               [0xeU][7U] >> 2U));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = 0ULL;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp 
                    = (3U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                       [0xeU][0U]);
            }
            if ((((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                   [0xfU][0U] >> 2U) & (((3U == (3U 
                                                 & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                 [0xfU][0U])) 
                                         | (2U == (3U 
                                                   & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                   [0xfU][0U]))) 
                                        | (1U == (3U 
                                                  & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                  [0xfU][0U])))) 
                 & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found)))) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found = 1U;
                vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid 
                    = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                               [0xfU][7U] >> 2U));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = 0ULL;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp 
                    = (3U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                       [0xfU][0U]);
            }
            if ((1U & ((~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__special_response_found)) 
                       & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf
                       [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_buf_rd_ptr][0U]))) {
                vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 1U;
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid 
                    = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf
                               [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_buf_rd_ptr][0U] 
                               >> 2U));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata 
                    = (((QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf
                                        [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_buf_rd_ptr][2U])) 
                        << 0x3aU) | (((QData)((IData)(
                                                      vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf
                                                      [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_buf_rd_ptr][1U])) 
                                      << 0x1aU) | ((QData)((IData)(
                                                                   vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf
                                                                   [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_buf_rd_ptr][0U])) 
                                                   >> 6U)));
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__unnamedblk11__DOT__i = 0U;
                {
                    while (VL_GTS_III(32, 0x10U, vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__unnamedblk11__DOT__i)) {
                        if (((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                              [(0xfU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__unnamedblk11__DOT__i)][0U] 
                              >> 2U) & ((0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                                 [(0xfU 
                                                   & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__unnamedblk11__DOT__i)][7U] 
                                                 >> 2U)) 
                                        == (0xfU & 
                                            (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf
                                             [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_buf_rd_ptr][0U] 
                                             >> 2U))))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp 
                                = (3U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                                   [(0xfU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__unnamedblk11__DOT__i)][0U]);
                            goto __Vlabel5;
                        }
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__unnamedblk11__DOT__i 
                            = ((IData)(1U) + vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__unnamedblk9__DOT__unnamedblk11__DOT__i);
                    }
                    __Vlabel5: ;
                }
            }
        }
    } else {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rvalid = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rid = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rdata = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rresp = 0U;
        vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__clear_trans_req = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__clear_trans_id = 0U;
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rdata_pending;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_buf_rd_ptr 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_buf_rd_ptr;
    if (vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v0][(vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v0 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v0))) 
               & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf
               [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v0][
               (vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v0 
                >> 5U)]);
    }
    if (vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v1) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v1][(vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v1 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v1))) 
               & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf
               [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v1][
               (vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v1 
                >> 5U)]);
    }
    if (vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v2) {
        VL_ASSIGNSEL_WQ(70,64,vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v2, 
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf
                        [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v2], vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v2);
    }
    if (vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v3) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v3][(vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v3 
                                                                                >> 5U)] 
            = (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf
               [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v3][
               (vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v3 
                >> 5U)] | ((IData)(1U) << (0x1fU & vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v3)));
    }
    if (vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf__v4) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[0U][0U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[0U][1U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[0U][2U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[1U][0U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[1U][1U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[1U][2U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[2U][0U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[2U][1U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[2U][2U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[3U][0U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[3U][1U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[3U][2U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[4U][0U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[4U][1U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[4U][2U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[5U][0U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[5U][1U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[5U][2U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[6U][0U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[6U][1U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[6U][2U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[7U][0U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[7U][1U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_data_buf[7U][2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v0) {
        VL_ASSIGNSEL_WI(230,4,vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v0, 
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                        [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v0], vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v0);
        VL_ASSIGNSEL_WI(230,32,vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v1, 
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                        [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v1], vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v1);
        VL_ASSIGNSEL_WI(230,8,vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v2, 
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                        [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v2], vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v2);
        VL_ASSIGNSEL_WI(230,3,vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v3, 
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                        [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v3], vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v3);
        VL_ASSIGNSEL_WI(230,2,vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v4, 
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                        [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v4], vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v4);
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v5][(vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v5 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x1fU & vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v5))) 
                & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v5][
                (vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v5 
                 >> 5U)]) | ((IData)(vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v5) 
                             << (0x1fU & vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v5)));
        VL_ASSIGNSEL_WI(230,4,vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v6, 
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                        [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v6], vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v6);
        VL_ASSIGNSEL_WI(230,3,vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v7, 
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                        [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v7], vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v7);
        VL_ASSIGNSEL_WI(230,4,vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v8, 
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                        [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v8], vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v8);
        VL_ASSIGNSEL_WI(230,4,vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v9, 
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                        [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v9], vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v9);
        VL_ASSIGNSEL_WI(230,32,vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v10, 
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                        [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v10], vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v10);
    }
    if (vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v11) {
        VL_ASSIGNSEL_WI(230,2,vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v11, 
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                        [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v11], vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v11);
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v12][(vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v12 
                                                                                >> 5U)] 
            = (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
               [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v12][
               (vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v12 
                >> 5U)] | ((IData)(1U) << (0x1fU & vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v12)));
        VL_ASSIGNSEL_WI(230,2,vlSelf->__Vdlyvlsb__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v13, 
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans
                        [vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v13], vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v13);
    }
    if (vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans__v14) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0U][0U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[0U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0U][1U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[1U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0U][2U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[2U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0U][3U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[3U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0U][4U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[4U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0U][5U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[5U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0U][6U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[6U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0U][7U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[7U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[1U][0U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[0U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[1U][1U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[1U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[1U][2U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[2U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[1U][3U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[3U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[1U][4U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[4U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[1U][5U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[5U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[1U][6U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[6U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[1U][7U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[7U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[2U][0U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[0U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[2U][1U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[1U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[2U][2U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[2U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[2U][3U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[3U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[2U][4U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[4U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[2U][5U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[5U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[2U][6U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[6U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[2U][7U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[7U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[3U][0U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[0U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[3U][1U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[1U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[3U][2U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[2U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[3U][3U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[3U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[3U][4U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[4U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[3U][5U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[5U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[3U][6U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[6U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[3U][7U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[7U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[4U][0U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[0U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[4U][1U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[1U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[4U][2U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[2U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[4U][3U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[3U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[4U][4U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[4U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[4U][5U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[5U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[4U][6U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[6U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[4U][7U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[7U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[5U][0U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[0U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[5U][1U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[1U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[5U][2U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[2U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[5U][3U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[3U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[5U][4U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[4U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[5U][5U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[5U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[5U][6U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[6U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[5U][7U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[7U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[6U][0U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[0U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[6U][1U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[1U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[6U][2U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[2U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[6U][3U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[3U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[6U][4U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[4U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[6U][5U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[5U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[6U][6U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[6U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[6U][7U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[7U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[7U][0U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[0U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[7U][1U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[1U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[7U][2U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[2U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[7U][3U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[3U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[7U][4U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[4U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[7U][5U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[5U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[7U][6U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[6U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[7U][7U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[7U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[8U][0U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[0U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[8U][1U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[1U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[8U][2U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[2U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[8U][3U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[3U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[8U][4U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[4U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[8U][5U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[5U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[8U][6U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[6U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[8U][7U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[7U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[9U][0U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[0U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[9U][1U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[1U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[9U][2U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[2U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[9U][3U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[3U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[9U][4U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[4U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[9U][5U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[5U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[9U][6U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[6U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[9U][7U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[7U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xaU][0U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[0U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xaU][1U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[1U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xaU][2U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[2U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xaU][3U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[3U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xaU][4U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[4U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xaU][5U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[5U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xaU][6U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[6U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xaU][7U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[7U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xbU][0U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[0U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xbU][1U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[1U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xbU][2U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[2U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xbU][3U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[3U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xbU][4U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[4U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xbU][5U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[5U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xbU][6U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[6U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xbU][7U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[7U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xcU][0U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[0U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xcU][1U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[1U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xcU][2U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[2U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xcU][3U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[3U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xcU][4U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[4U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xcU][5U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[5U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xcU][6U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[6U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xcU][7U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[7U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xdU][0U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[0U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xdU][1U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[1U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xdU][2U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[2U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xdU][3U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[3U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xdU][4U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[4U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xdU][5U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[5U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xdU][6U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[6U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xdU][7U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[7U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xeU][0U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[0U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xeU][1U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[1U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xeU][2U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[2U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xeU][3U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[3U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xeU][4U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[4U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xeU][5U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[5U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xeU][6U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[6U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xeU][7U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[7U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xfU][0U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[0U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xfU][1U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[1U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xfU][2U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[2U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xfU][3U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[3U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xfU][4U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[4U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xfU][5U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[5U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xfU][6U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[6U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__rd_trans[0xfU][7U] 
            = Vtb_cva6_minimal_top__ConstPool__CONST_h1e479923_0[7U];
    }
    if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn) {
        if (((2U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__aw_state)) 
             & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__bresp_pending)))) {
            vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__bresp_pending = 1U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_bvalid = 1U;
        } else if (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__bresp_pending) 
                    & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_bready))) {
            vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__bresp_pending = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_bvalid = 0U;
        } else if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__bresp_pending) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_bvalid = 1U;
        }
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__bresp_pending 
            = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__bresp_pending;
        if ((((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid) 
              & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_to_refresh)) 
             & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmgr_refctrl_refresh_cmd_valid)))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmgr_refctrl_refresh_cmd_valid = 1U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmgr_refctrl_refresh_per_bank 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank
                [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx];
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmgr_refctrl_refresh_all_banks 
                = (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_all_banks) 
                         >> (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx)));
        } else if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__refctrl_cmdmgr_ref_done) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmgr_refctrl_refresh_cmd_valid = 0U;
        }
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_all_banks 
            = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks;
        if (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__refctrl_cmdpr_ref_cmd_valid_reg) 
             & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdpr_to_refctrl_ref_cmd_ready))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__refresh_pending = 1U;
        } else if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__refctrl_cmdmgr_ref_done) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__refresh_pending = 0U;
        }
        if (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_valid) 
             & (8U > (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_level)))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__outstanding_valid = 1U;
        } else if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_cmdpr_cmd_done) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__outstanding_valid = 0U;
        }
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_valid 
            = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_valid;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_level 
            = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_level;
        if (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__cmd_is_read) 
             & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_cs_n)))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_col_reg 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_address;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_bank_reg 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_bank;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_row_reg 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row
                [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_bank];
        }
    } else {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_bvalid = 0U;
        vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__bresp_pending = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__bresp_pending 
            = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__bresp_pending;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmgr_refctrl_refresh_cmd_valid = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmgr_refctrl_refresh_per_bank = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmgr_refctrl_refresh_all_banks = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_all_banks 
            = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__queue_all_banks;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__refresh_pending = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__outstanding_valid = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_valid 
            = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__stage0_valid;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_level 
            = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_level;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_col_reg = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_bank_reg = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__rd_row_reg = 0U;
    }
    if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn) {
        if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_valid_reg) {
            if (VL_UNLIKELY(((0x2000U > vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_row_reg) 
                             & (0x400U > vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_col_reg)))) {
                VL_WRITEF("[%0t] PHY_MEM: STORED WRITE DATA TO MEMORY - Bank=%0# Row=0x%x Col=0x%x Data=0x%x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,4,(IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_bank_reg),
                          18,vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_row_reg,
                          18,vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_col_reg,
                          137,vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_reg.data());
                Verilated::runFlushCallbacks();
                __Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0[0U] 
                    = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_reg[0U];
                __Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0[1U] 
                    = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_reg[1U];
                __Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0[2U] 
                    = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_reg[2U];
                __Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0[3U] 
                    = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_reg[3U];
                __Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0[4U] 
                    = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_reg[4U];
                vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0 = 1U;
                __Vdlyvdim2__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0 
                    = (0x3ffU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_col_reg);
                __Vdlyvdim1__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0 
                    = (0x1fffU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_row_reg);
                __Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0 
                    = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_bank_reg;
            }
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_oe = 1U;
        } else {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_oe = 0U;
        }
    } else {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__dq_oe = 0U;
    }
    if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__aw_state 
            = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__aw_state_next;
        if ((4U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__state))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__refctrl_cmdpr_ref_cmd_valid_reg = 0U;
        } else if ((2U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__state))) {
                if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__refctrl_cmdmgr_ref_done) {
                    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__refctrl_cmdpr_ref_cmd_valid_reg = 0U;
                }
            } else {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__refctrl_cmdpr_ref_cmd_valid_reg = 1U;
            }
        } else if ((1U & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__state)))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__refctrl_cmdpr_ref_cmd_valid_reg = 0U;
        }
        if (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_valid) 
             & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold_valid))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_col_reg 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_col;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_bank_reg 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_bank;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_row_reg 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_row;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_reg[0U] 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold[0U];
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_reg[1U] 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold[1U];
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_reg[2U] 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold[2U];
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_reg[3U] 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold[3U];
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_reg[4U] 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold[4U];
        }
        if (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__cmd_is_write) 
             & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_cs_n)))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_col 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_address;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_bank 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_bank;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_row 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row
                [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_bank];
        }
        if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_wrdata_en) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold[0U] 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_wrdata[0U];
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold[1U] 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_wrdata[1U];
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold[2U] 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_wrdata[2U];
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold[3U] = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold[4U] = 0U;
        }
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_cs_n = 1U;
        if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_sched_issue) {
            if ((1U & (~ (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                          >> 0x18U)))) {
                if ((0x800000U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U])) {
                    if ((0x400000U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U])) {
                        if ((1U & (~ (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                      >> 0x15U)))) {
                            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_address = 0U;
                        }
                    } else {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_address = 0U;
                    }
                } else if ((0x400000U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U])) {
                    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_address 
                        = ((0x200000U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U])
                            ? ((0x400U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0U] 
                                          >> 7U)) | 
                               (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0U] 
                                          >> 0x12U)))
                            : ((0x400U & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0U] 
                                          >> 7U)) | 
                               (0x3ffU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0U] 
                                          >> 0x12U))));
                } else if ((0x200000U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U])) {
                    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_address 
                        = (0x7fffU & ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                       << 4U) | (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0U] 
                                                 >> 0x1cU)));
                }
            }
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_bank 
                = (0xfU & (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                           >> 0xdU));
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_cs_n = 0U;
            if ((0x1000000U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U])) {
                vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_cs_n = 1U;
            } else if ((0x800000U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U])) {
                if ((0x400000U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U])) {
                    if ((0x200000U & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U])) {
                        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_cs_n = 1U;
                    }
                }
            } else if ((1U & (~ (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                                 >> 0x16U)))) {
                if ((1U & (~ (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
                              >> 0x15U)))) {
                    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_cs_n = 1U;
                }
            }
        }
        if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdpr_to_dfi_wrdata_valid) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_wrdata[0U] 
                = (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data);
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_wrdata[1U] 
                = (IData)((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                           >> 0x20U));
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_wrdata[2U] 
                = (0xffU & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__ecc_check_bits_wr));
        }
        if ((((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid) 
              & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_to_refresh))) 
             & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_valid)))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_valid = 1U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT____Vcellout__u_command_manager__cmdmngr_to_cmdprocessor_cmd_type 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_type
                [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx];
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_bank 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank
                [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx];
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_row 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_row
                [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx];
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_col 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_col
                [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx];
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data 
                = ((1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data) 
                          >> (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx)))
                    ? vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_write_data
                   [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx]
                    : 0ULL);
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_burst_len 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_burst_len
                [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx];
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_channel 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_channel
                [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx];
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_bank_group 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_bank_group
                [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx];
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_id 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_cmd_id
                [vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx];
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data_mask = 0xffU;
            vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_write_data_valid 
                = (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_needs_write_data) 
                         >> (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx)));
        } else if (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_write_data_valid) 
                    & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT____VdfgTmp_hdca86341__0))) {
            vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_write_data_valid = 0U;
        } else if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdprocessor_to_cmdmngr_command_processed) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_valid = 0U;
        }
    } else {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_axi_slave__DOT__aw_state = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__refctrl_cmdpr_ref_cmd_valid_reg = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_col_reg = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_bank_reg = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_row_reg = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_reg[0U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_reg[1U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_reg[2U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_reg[3U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_reg[4U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_col = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_bank = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_row = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold[0U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold[1U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold[2U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold[3U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold[4U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_address = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_bank = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_cs_n = 1U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_wrdata[0U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_wrdata[1U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_wrdata[2U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_valid = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT____Vcellout__u_command_manager__cmdmngr_to_cmdprocessor_cmd_type = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_bank = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_row = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_col = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_burst_len = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_channel = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_bank_group = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_id = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_data_mask = 0U;
        vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_write_data_valid = 0U;
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdpr_to_refctrl_ref_cmd_ready 
        = (1U & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__refresh_pending)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_empty 
        = (0U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_level));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_full 
        = (8U <= (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue_level));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_cmdpr_cmd_done 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn) 
           && (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_sched_issue_r));
    if (vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0][__Vdlyvdim1__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0][__Vdlyvdim2__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0][0U] 
            = __Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0[0U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0][__Vdlyvdim1__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0][__Vdlyvdim2__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0][1U] 
            = __Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0[1U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0][__Vdlyvdim1__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0][__Vdlyvdim2__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0][2U] 
            = __Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0[2U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0][__Vdlyvdim1__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0][__Vdlyvdim2__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0][3U] 
            = __Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0[3U];
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array[__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0][__Vdlyvdim1__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0][__Vdlyvdim2__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0][4U] 
            = __Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__memory_array__v0[4U];
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__state 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_refresh_controller__DOT__state;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_valid_reg 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn) 
           && ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_valid) 
               & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold_valid)));
    tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT____VdfgTmp_h68aabff1__0 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_cmdpr_cmd_done) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__outstanding_valid));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_sched_issue_r 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn) 
           && (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_sched_issue));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_valid 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_cmd_valid;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold_valid 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__wr_data_hold_valid;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__refctrl_cmdmgr_ref_done 
        = ((IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT____VdfgTmp_h68aabff1__0) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__outstanding_source));
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
    if (vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row__v0) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[vlSelf->__Vdlyvdim0__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row__v0] 
            = vlSelf->__Vdlyvval__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row__v0;
    }
    if (vlSelf->__Vdlyvset__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row__v1) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[0U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[1U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[2U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[3U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[4U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[5U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[6U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[7U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[8U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[9U] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[0xaU] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[0xbU] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[0xcU] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[0xdU] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[0xeU] = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_phy__DOT__active_row[0xfU] = 0U;
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__dfi_to_phy_wrdata_en 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn) 
           && (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdpr_to_dfi_wrdata_valid));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0U] 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U] 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[1U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[2U] 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[2U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[3U] 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[3U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[4U] 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[4U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[5U] 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[5U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[6U] 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[6U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[7U] 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[7U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[8U] 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[8U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[9U] 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[9U];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0xaU] 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0xaU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0xbU] 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0xbU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0xcU] 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0xcU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0xdU] 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0xdU];
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0xeU] 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_hbm3_dfi_interface__DOT__cmd_queue[0xeU];
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
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdprocessor_to_cmdmngr_command_processed 
        = ((~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__outstanding_source)) 
           & (IData)(tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT____VdfgTmp_h68aabff1__0));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_write_data_valid 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_write_data_valid;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT____VdfgTmp_hdca86341__0 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__outstanding_is_write) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT__outstanding_valid));
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
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdpr_to_dfi_wrdata_valid 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_processor__DOT____VdfgTmp_hdca86341__0) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_write_data_valid));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_to_refresh 
        = (1U & ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__decoded_routes_to_refresh) 
                 >> (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__selected_entry_idx)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__cmd_dispatched 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_valid) 
           & ((~ ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_to_refresh) 
                  | (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmngr_to_cmdprocessor_cmd_valid))) 
              | ((~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__cmdmgr_refctrl_refresh_cmd_valid)) 
                 & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_command_manager__DOT__dispatch_to_refresh))));
}

VL_INLINE_OPT void Vtb_cva6_minimal_top___024root___nba_comb__TOP__0(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_be__VforceRd 
        = (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_be__VforceEn) 
            & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_be__VforceVal)) 
           | ((~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_be__VforceEn)) 
              & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_be)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_valid__VforceRd 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_valid__VforceEn)
            ? (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_valid__VforceVal)
            : (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_valid));
}

VL_INLINE_OPT void Vtb_cva6_minimal_top___024root___nba_sequent__TOP__3(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___nba_sequent__TOP__3\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn)))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arburst = 1U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arlock = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arcache = 3U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arprot = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arqos = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arregion = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_aruser = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awburst = 1U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awlock = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awcache = 3U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awprot = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awqos = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awregion = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awuser = 0U;
    }
    if ((8U & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__reset_sync))) {
        vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__apb_state = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_psel = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_penable = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_pwrite = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_pwdata = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_rdata_reg = 0U;
    } else if ((0U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_state))) {
        if (((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req__VforceRd) 
             & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__hbm3_cfg_select))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_psel = 1U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_pwrite 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_we__VforceRd;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_paddr 
                = (0xfffU & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceRd);
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_pwdata 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_wdata__VforceRd;
            vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__apb_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_state))) {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_penable = 1U;
        vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__apb_state = 2U;
    } else if ((2U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_state))) {
        if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_pready) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_psel = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_penable = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_rdata_reg 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_prdata;
            vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__apb_state = 0U;
        }
    } else {
        vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__apb_state = 0U;
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_rready 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn) 
           && (5U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__state)));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_bready 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn) 
           && (3U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__state)));
    if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn) {
        if ((((0U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__state)) 
              & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT____Vcellinp__u_mem_to_axi_bridge__mem_req)) 
             & (~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_we__VforceRd)))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arlen = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arsize = 2U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arid 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__transaction_id;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arvalid = 1U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_araddr 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceRd;
        } else if (((4U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__state)) 
                    & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arready))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arvalid = 0U;
        }
        if (((1U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__state)) 
             & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awready))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_wuser = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_wdata 
                = (QData)((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_wdata__VforceRd));
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_wvalid = 1U;
        } else if (((2U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__state)) 
                    & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_wready))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_wvalid = 0U;
        }
        if ((((0U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__state)) 
              & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT____Vcellinp__u_mem_to_axi_bridge__mem_req)) 
             & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_we__VforceRd))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awlen = 0U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awsize = 2U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awid 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__transaction_id;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awvalid = 1U;
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awaddr 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceRd;
        } else if (((1U == (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__state)) 
                    & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awready))) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awvalid = 0U;
        }
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__state 
            = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__next_state;
    } else {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arlen = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arsize = 2U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arid = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arvalid = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_araddr = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_wuser = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_wdata = 0ULL;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awlen = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awsize = 2U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_wvalid = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awid = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awvalid = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awaddr = 0U;
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__state = 0U;
    }
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__transaction_id 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__u_mem_to_axi_bridge__DOT__transaction_id;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_state 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__apb_state;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__reset_sync 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__reset_sync;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT____VdfgTmp_ha99f8a08__0 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_penable) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_psel));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__write_enable 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT____VdfgTmp_ha99f8a08__0) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_pwrite));
}

VL_INLINE_OPT void Vtb_cva6_minimal_top___024root___nba_sequent__TOP__4(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_arready 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__axi_arready;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_wready 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__axi_wready;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__axi_awready 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__axi_awready;
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_pready 
        = vlSelf->__Vdly__tb_cva6_minimal_top__DOT__dut__DOT__apb_pready;
    if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn) {
        if (vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_enable) {
            vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_prdata 
                = vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_data;
        }
    } else {
        vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_prdata = 0U;
    }
}

VL_INLINE_OPT void Vtb_cva6_minimal_top___024root___nba_comb__TOP__1(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_wdata__VforceRd 
        = ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_wdata__VforceEn 
            & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_wdata__VforceVal) 
           | ((~ vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_wdata__VforceEn) 
              & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_wdata));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_we__VforceRd 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_we__VforceEn)
            ? (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_we__VforceVal)
            : (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_we));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req__VforceRd 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req__VforceEn)
            ? (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req__VforceVal)
            : (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceRd 
        = ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceEn 
            & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceVal) 
           | ((~ vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr__VforceEn) 
              & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_addr));
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
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT____Vcellinp__u_data_ram__req 
        = ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_req__VforceRd) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__ram_select));
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
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_rdata__VforceRd 
        = ((vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_rdata__VforceEn 
            & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_rdata__VforceVal) 
           | ((~ vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_rdata__VforceEn) 
              & vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__data_rdata));
}

extern const VlUnpacked<CData/*1:0*/, 256> Vtb_cva6_minimal_top__ConstPool__TABLE_hc8c9f621_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_cva6_minimal_top__ConstPool__TABLE_h2f8782e1_0;

VL_INLINE_OPT void Vtb_cva6_minimal_top___024root___nba_comb__TOP__2(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___nba_comb__TOP__2\n"); );
    // Init
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
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
}

VL_INLINE_OPT void Vtb_cva6_minimal_top___024root___nba_sequent__TOP__5(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT__read_enable 
        = ((~ (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__apb_pwrite)) 
           & (IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__u_hbm3_controller__DOT__u_apb_slave__DOT____VdfgTmp_ha99f8a08__0));
    vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__aresetn 
        = (1U & (~ ((IData)(vlSelf->tb_cva6_minimal_top__DOT__dut__DOT__reset_sync) 
                    >> 3U)));
}

extern const VlUnpacked<CData/*2:0*/, 1024> Vtb_cva6_minimal_top__ConstPool__TABLE_h3b8bd612_0;

VL_INLINE_OPT void Vtb_cva6_minimal_top___024root___nba_comb__TOP__3(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___nba_comb__TOP__3\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
}

VL_INLINE_OPT void Vtb_cva6_minimal_top___024root___nba_comb__TOP__4(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___nba_comb__TOP__4\n"); );
    // Body
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
}

void Vtb_cva6_minimal_top___024root___nba_sequent__TOP__0(Vtb_cva6_minimal_top___024root* vlSelf);
void Vtb_cva6_minimal_top___024root___nba_sequent__TOP__1(Vtb_cva6_minimal_top___024root* vlSelf);
void Vtb_cva6_minimal_top___024root___act_comb__TOP__1(Vtb_cva6_minimal_top___024root* vlSelf);

void Vtb_cva6_minimal_top___024root___eval_nba(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cva6_minimal_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cva6_minimal_top___024root___nba_sequent__TOP__1(vlSelf);
        Vtb_cva6_minimal_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cva6_minimal_top___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cva6_minimal_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cva6_minimal_top___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cva6_minimal_top___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cva6_minimal_top___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cva6_minimal_top___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cva6_minimal_top___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cva6_minimal_top___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cva6_minimal_top___024root___act_comb__TOP__1(vlSelf);
    }
}

void Vtb_cva6_minimal_top___024root___timing_resume(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h7794db06__0.resume("@(posedge tb_cva6_minimal_top.sys_clock)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_cva6_minimal_top___024root___timing_commit(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h7794db06__0.commit("@(posedge tb_cva6_minimal_top.sys_clock)");
    }
}

void Vtb_cva6_minimal_top___024root___eval_triggers__act(Vtb_cva6_minimal_top___024root* vlSelf);
void Vtb_cva6_minimal_top___024root___eval_act(Vtb_cva6_minimal_top___024root* vlSelf);

bool Vtb_cva6_minimal_top___024root___eval_phase__act(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cva6_minimal_top___024root___eval_triggers__act(vlSelf);
    Vtb_cva6_minimal_top___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_cva6_minimal_top___024root___timing_resume(vlSelf);
        Vtb_cva6_minimal_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cva6_minimal_top___024root___eval_phase__nba(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_cva6_minimal_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cva6_minimal_top___024root___dump_triggers__nba(Vtb_cva6_minimal_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cva6_minimal_top___024root___dump_triggers__act(Vtb_cva6_minimal_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_cva6_minimal_top___024root___eval(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_cva6_minimal_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/smita/cva6_min_version/tb/tb_cva6_minimal_top.v", 15, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_cva6_minimal_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/smita/cva6_min_version/tb/tb_cva6_minimal_top.v", 15, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_cva6_minimal_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_cva6_minimal_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_cva6_minimal_top___024root___eval_debug_assertions(Vtb_cva6_minimal_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cva6_minimal_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cva6_minimal_top___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
