// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_cva6_minimal_top__pch.h"

//============================================================
// Constructors

Vtb_cva6_minimal_top::Vtb_cva6_minimal_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_cva6_minimal_top__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_cva6_minimal_top::Vtb_cva6_minimal_top(const char* _vcname__)
    : Vtb_cva6_minimal_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_cva6_minimal_top::~Vtb_cva6_minimal_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_cva6_minimal_top___024root___eval_debug_assertions(Vtb_cva6_minimal_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_cva6_minimal_top___024root___eval_static(Vtb_cva6_minimal_top___024root* vlSelf);
void Vtb_cva6_minimal_top___024root___eval_initial(Vtb_cva6_minimal_top___024root* vlSelf);
void Vtb_cva6_minimal_top___024root___eval_settle(Vtb_cva6_minimal_top___024root* vlSelf);
void Vtb_cva6_minimal_top___024root___eval(Vtb_cva6_minimal_top___024root* vlSelf);

void Vtb_cva6_minimal_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_cva6_minimal_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_cva6_minimal_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_cva6_minimal_top___024root___eval_static(&(vlSymsp->TOP));
        Vtb_cva6_minimal_top___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_cva6_minimal_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_cva6_minimal_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_cva6_minimal_top::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_cva6_minimal_top::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_cva6_minimal_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_cva6_minimal_top___024root___eval_final(Vtb_cva6_minimal_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_cva6_minimal_top::final() {
    Vtb_cva6_minimal_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_cva6_minimal_top::hierName() const { return vlSymsp->name(); }
const char* Vtb_cva6_minimal_top::modelName() const { return "Vtb_cva6_minimal_top"; }
unsigned Vtb_cva6_minimal_top::threads() const { return 1; }
void Vtb_cva6_minimal_top::prepareClone() const { contextp()->prepareClone(); }
void Vtb_cva6_minimal_top::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_cva6_minimal_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_cva6_minimal_top::trace()' called on model that was Verilated without --trace option");
}
