// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_cva6_minimal_top__pch.h"
#include "Vtb_cva6_minimal_top.h"
#include "Vtb_cva6_minimal_top___024root.h"
#include "Vtb_cva6_minimal_top___024unit.h"

// FUNCTIONS
Vtb_cva6_minimal_top__Syms::~Vtb_cva6_minimal_top__Syms()
{
}

Vtb_cva6_minimal_top__Syms::Vtb_cva6_minimal_top__Syms(VerilatedContext* contextp, const char* namep, Vtb_cva6_minimal_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_cva6_minimal_top.configure(this, name(), "tb_cva6_minimal_top", "tb_cva6_minimal_top", -9, VerilatedScope::SCOPE_OTHER);
}
