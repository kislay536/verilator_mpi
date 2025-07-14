// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vround__pch.h"

//============================================================
// Constructors

Vround::Vround(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vround__Syms(contextp(), _vcname__, this)}
    , data_in{vlSymsp->TOP.data_in}
    , key_in{vlSymsp->TOP.key_in}
    , data_out{vlSymsp->TOP.data_out}
    , __PVT__round__DOT__a1__DOT__q0{vlSymsp->TOP.__PVT__round__DOT__a1__DOT__q0}
    , __PVT__round__DOT__a1__DOT__q1{vlSymsp->TOP.__PVT__round__DOT__a1__DOT__q1}
    , __PVT__round__DOT__a1__DOT__q2{vlSymsp->TOP.__PVT__round__DOT__a1__DOT__q2}
    , __PVT__round__DOT__a1__DOT__q3{vlSymsp->TOP.__PVT__round__DOT__a1__DOT__q3}
    , __PVT__round__DOT__a1__DOT__q4{vlSymsp->TOP.__PVT__round__DOT__a1__DOT__q4}
    , __PVT__round__DOT__a1__DOT__q5{vlSymsp->TOP.__PVT__round__DOT__a1__DOT__q5}
    , __PVT__round__DOT__a1__DOT__q6{vlSymsp->TOP.__PVT__round__DOT__a1__DOT__q6}
    , __PVT__round__DOT__a1__DOT__q7{vlSymsp->TOP.__PVT__round__DOT__a1__DOT__q7}
    , __PVT__round__DOT__a1__DOT__q8{vlSymsp->TOP.__PVT__round__DOT__a1__DOT__q8}
    , __PVT__round__DOT__a1__DOT__q9{vlSymsp->TOP.__PVT__round__DOT__a1__DOT__q9}
    , __PVT__round__DOT__a1__DOT__q10{vlSymsp->TOP.__PVT__round__DOT__a1__DOT__q10}
    , __PVT__round__DOT__a1__DOT__q11{vlSymsp->TOP.__PVT__round__DOT__a1__DOT__q11}
    , __PVT__round__DOT__a1__DOT__q12{vlSymsp->TOP.__PVT__round__DOT__a1__DOT__q12}
    , __PVT__round__DOT__a1__DOT__q13{vlSymsp->TOP.__PVT__round__DOT__a1__DOT__q13}
    , __PVT__round__DOT__a1__DOT__q14{vlSymsp->TOP.__PVT__round__DOT__a1__DOT__q14}
    , __PVT__round__DOT__a1__DOT__q15{vlSymsp->TOP.__PVT__round__DOT__a1__DOT__q15}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vround::Vround(const char* _vcname__)
    : Vround(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vround::~Vround() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vround___024root___eval_debug_assertions(Vround___024root* vlSelf);
#endif  // VL_DEBUG
void Vround___024root___eval_static(Vround___024root* vlSelf);
void Vround___024root___eval_initial(Vround___024root* vlSelf);
void Vround___024root___eval_settle(Vround___024root* vlSelf);
void Vround___024root___eval(Vround___024root* vlSelf);

void Vround::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vround::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vround___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vround___024root___eval_static(&(vlSymsp->TOP));
        Vround___024root___eval_initial(&(vlSymsp->TOP));
        Vround___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vround___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vround::eventsPending() { return false; }

uint64_t Vround::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vround::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vround___024root___eval_final(Vround___024root* vlSelf);

VL_ATTR_COLD void Vround::final() {
    Vround___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vround::hierName() const { return vlSymsp->name(); }
const char* Vround::modelName() const { return "Vround"; }
unsigned Vround::threads() const { return 1; }
void Vround::prepareClone() const { contextp()->prepareClone(); }
void Vround::atClone() const {
    contextp()->threadPoolpOnClone();
}
