// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_main.h for the primary calling header

#include "Vaes_main__pch.h"
#include "Vaes_main___024root.h"

void Vaes_main___024root___ico_sequent__TOP__0(Vaes_main___024root* vlSelf);

void Vaes_main___024root___eval_ico(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___eval_ico\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vaes_main___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vaes_main___024root___eval_triggers__ico(Vaes_main___024root* vlSelf);

bool Vaes_main___024root___eval_phase__ico(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___eval_phase__ico\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vaes_main___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vaes_main___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vaes_main___024root___eval_act(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___eval_act\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vaes_main___024root___eval_triggers__act(Vaes_main___024root* vlSelf);

bool Vaes_main___024root___eval_phase__act(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___eval_phase__act\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<56> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vaes_main___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vaes_main___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vaes_main___024root___eval_nba(Vaes_main___024root* vlSelf);

bool Vaes_main___024root___eval_phase__nba(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___eval_phase__nba\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vaes_main___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_main___024root___dump_triggers__ico(Vaes_main___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_main___024root___dump_triggers__nba(Vaes_main___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_main___024root___dump_triggers__act(Vaes_main___024root* vlSelf);
#endif  // VL_DEBUG

void Vaes_main___024root___eval(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___eval\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vaes_main___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("aes_main.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vaes_main___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vaes_main___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("aes_main.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vaes_main___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("aes_main.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vaes_main___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vaes_main___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vaes_main___024root___eval_debug_assertions(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___eval_debug_assertions\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
