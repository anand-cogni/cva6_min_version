// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cva6_minimal_top.h for the primary calling header

#include "Vtb_cva6_minimal_top__pch.h"
#include "Vtb_cva6_minimal_top__Syms.h"
#include "Vtb_cva6_minimal_top___024root.h"

void Vtb_cva6_minimal_top___024root___ctor_var_reset(Vtb_cva6_minimal_top___024root* vlSelf);

Vtb_cva6_minimal_top___024root::Vtb_cva6_minimal_top___024root(Vtb_cva6_minimal_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_cva6_minimal_top___024root___ctor_var_reset(this);
}

void Vtb_cva6_minimal_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_cva6_minimal_top___024root::~Vtb_cva6_minimal_top___024root() {
}
