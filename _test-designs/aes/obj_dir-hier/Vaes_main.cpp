// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaes_main__pch.h"

//============================================================
// Constructors

Vaes_main::Vaes_main(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vaes_main__Syms(contextp(), _vcname__, this)}
    , data_in{vlSymsp->TOP.data_in}
    , key{vlSymsp->TOP.key}
    , data_out{vlSymsp->TOP.data_out}
    , __PVT__aes_main__DOT__a0__DOT__u0{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u0}
    , __PVT__aes_main__DOT__a0__DOT__u1{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u1}
    , __PVT__aes_main__DOT__a0__DOT__u2{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u2}
    , __PVT__aes_main__DOT__a0__DOT__u3{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u3}
    , __PVT__aes_main__DOT__a0__DOT__u4{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u4}
    , __PVT__aes_main__DOT__a0__DOT__u5{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u5}
    , __PVT__aes_main__DOT__a0__DOT__u6{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u6}
    , __PVT__aes_main__DOT__a0__DOT__u7{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u7}
    , __PVT__aes_main__DOT__a0__DOT__u8{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u8}
    , __PVT__aes_main__DOT__a0__DOT__u9{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u9}
    , __PVT__aes_main__DOT__a0__DOT__u10{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u10}
    , __PVT__aes_main__DOT__a0__DOT__u11{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u11}
    , __PVT__aes_main__DOT__a0__DOT__u12{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u12}
    , __PVT__aes_main__DOT__a0__DOT__u13{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u13}
    , __PVT__aes_main__DOT__a0__DOT__u14{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u14}
    , __PVT__aes_main__DOT__a0__DOT__u15{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u15}
    , __PVT__aes_main__DOT__a0__DOT__u16{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u16}
    , __PVT__aes_main__DOT__a0__DOT__u17{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u17}
    , __PVT__aes_main__DOT__a0__DOT__u18{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u18}
    , __PVT__aes_main__DOT__a0__DOT__u19{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u19}
    , __PVT__aes_main__DOT__a0__DOT__u20{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u20}
    , __PVT__aes_main__DOT__a0__DOT__u21{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u21}
    , __PVT__aes_main__DOT__a0__DOT__u22{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u22}
    , __PVT__aes_main__DOT__a0__DOT__u23{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u23}
    , __PVT__aes_main__DOT__a0__DOT__u24{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u24}
    , __PVT__aes_main__DOT__a0__DOT__u25{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u25}
    , __PVT__aes_main__DOT__a0__DOT__u26{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u26}
    , __PVT__aes_main__DOT__a0__DOT__u27{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u27}
    , __PVT__aes_main__DOT__a0__DOT__u28{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u28}
    , __PVT__aes_main__DOT__a0__DOT__u29{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u29}
    , __PVT__aes_main__DOT__a0__DOT__u30{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u30}
    , __PVT__aes_main__DOT__a0__DOT__u31{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u31}
    , __PVT__aes_main__DOT__a0__DOT__u32{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u32}
    , __PVT__aes_main__DOT__a0__DOT__u33{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u33}
    , __PVT__aes_main__DOT__a0__DOT__u34{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u34}
    , __PVT__aes_main__DOT__a0__DOT__u35{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u35}
    , __PVT__aes_main__DOT__a0__DOT__u36{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u36}
    , __PVT__aes_main__DOT__a0__DOT__u37{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u37}
    , __PVT__aes_main__DOT__a0__DOT__u38{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u38}
    , __PVT__aes_main__DOT__a0__DOT__u39{vlSymsp->TOP.__PVT__aes_main__DOT__a0__DOT__u39}
    , __PVT__aes_main__DOT__r9__DOT__a1__DOT__q0{vlSymsp->TOP.__PVT__aes_main__DOT__r9__DOT__a1__DOT__q0}
    , __PVT__aes_main__DOT__r9__DOT__a1__DOT__q1{vlSymsp->TOP.__PVT__aes_main__DOT__r9__DOT__a1__DOT__q1}
    , __PVT__aes_main__DOT__r9__DOT__a1__DOT__q2{vlSymsp->TOP.__PVT__aes_main__DOT__r9__DOT__a1__DOT__q2}
    , __PVT__aes_main__DOT__r9__DOT__a1__DOT__q3{vlSymsp->TOP.__PVT__aes_main__DOT__r9__DOT__a1__DOT__q3}
    , __PVT__aes_main__DOT__r9__DOT__a1__DOT__q4{vlSymsp->TOP.__PVT__aes_main__DOT__r9__DOT__a1__DOT__q4}
    , __PVT__aes_main__DOT__r9__DOT__a1__DOT__q5{vlSymsp->TOP.__PVT__aes_main__DOT__r9__DOT__a1__DOT__q5}
    , __PVT__aes_main__DOT__r9__DOT__a1__DOT__q6{vlSymsp->TOP.__PVT__aes_main__DOT__r9__DOT__a1__DOT__q6}
    , __PVT__aes_main__DOT__r9__DOT__a1__DOT__q7{vlSymsp->TOP.__PVT__aes_main__DOT__r9__DOT__a1__DOT__q7}
    , __PVT__aes_main__DOT__r9__DOT__a1__DOT__q8{vlSymsp->TOP.__PVT__aes_main__DOT__r9__DOT__a1__DOT__q8}
    , __PVT__aes_main__DOT__r9__DOT__a1__DOT__q9{vlSymsp->TOP.__PVT__aes_main__DOT__r9__DOT__a1__DOT__q9}
    , __PVT__aes_main__DOT__r9__DOT__a1__DOT__q10{vlSymsp->TOP.__PVT__aes_main__DOT__r9__DOT__a1__DOT__q10}
    , __PVT__aes_main__DOT__r9__DOT__a1__DOT__q11{vlSymsp->TOP.__PVT__aes_main__DOT__r9__DOT__a1__DOT__q11}
    , __PVT__aes_main__DOT__r9__DOT__a1__DOT__q12{vlSymsp->TOP.__PVT__aes_main__DOT__r9__DOT__a1__DOT__q12}
    , __PVT__aes_main__DOT__r9__DOT__a1__DOT__q13{vlSymsp->TOP.__PVT__aes_main__DOT__r9__DOT__a1__DOT__q13}
    , __PVT__aes_main__DOT__r9__DOT__a1__DOT__q14{vlSymsp->TOP.__PVT__aes_main__DOT__r9__DOT__a1__DOT__q14}
    , __PVT__aes_main__DOT__r9__DOT__a1__DOT__q15{vlSymsp->TOP.__PVT__aes_main__DOT__r9__DOT__a1__DOT__q15}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vaes_main::Vaes_main(const char* _vcname__)
    : Vaes_main(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vaes_main::~Vaes_main() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vaes_main___024root___eval_debug_assertions(Vaes_main___024root* vlSelf);
#endif  // VL_DEBUG
void Vaes_main___024root___eval_static(Vaes_main___024root* vlSelf);
void Vaes_main___024root___eval_initial(Vaes_main___024root* vlSelf);
void Vaes_main___024root___eval_settle(Vaes_main___024root* vlSelf);
void Vaes_main___024root___eval(Vaes_main___024root* vlSelf);

void Vaes_main::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaes_main::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaes_main___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vaes_main___024root___eval_static(&(vlSymsp->TOP));
        Vaes_main___024root___eval_initial(&(vlSymsp->TOP));
        Vaes_main___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vaes_main___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vaes_main::eventsPending() { return false; }

uint64_t Vaes_main::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vaes_main::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vaes_main___024root___eval_final(Vaes_main___024root* vlSelf);

VL_ATTR_COLD void Vaes_main::final() {
    Vaes_main___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vaes_main::hierName() const { return vlSymsp->name(); }
const char* Vaes_main::modelName() const { return "Vaes_main"; }
unsigned Vaes_main::threads() const { return 1; }
void Vaes_main::prepareClone() const { contextp()->prepareClone(); }
void Vaes_main::atClone() const {
    contextp()->threadPoolpOnClone();
}
