// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_CVA6_MINIMAL_TOP__SYMS_H_
#define VERILATED_VTB_CVA6_MINIMAL_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_cva6_minimal_top.h"

// INCLUDE MODULE CLASSES
#include "Vtb_cva6_minimal_top___024root.h"
#include "Vtb_cva6_minimal_top___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_cva6_minimal_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_cva6_minimal_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_cva6_minimal_top___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_cva6_minimal_top;

    // CONSTRUCTORS
    Vtb_cva6_minimal_top__Syms(VerilatedContext* contextp, const char* namep, Vtb_cva6_minimal_top* modelp);
    ~Vtb_cva6_minimal_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
