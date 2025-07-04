// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vround.h for the primary calling header

#include "Vround__pch.h"
#include "Vround___024root.h"

VL_ATTR_COLD void Vround___024root___eval_static(Vround___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vround__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vround___024root___eval_final(Vround___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vround__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vround___024root___dump_triggers__stl(Vround___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vround___024root___eval_phase__stl(Vround___024root* vlSelf);

VL_ATTR_COLD void Vround___024root___eval_settle(Vround___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vround__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vround___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("round.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vround___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vround___024root___dump_triggers__stl(Vround___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vround__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vround___024root___stl_sequent__TOP__0(Vround___024root* vlSelf);

VL_ATTR_COLD void Vround___024root___eval_stl(Vround___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vround__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vround___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vround___024root___eval_triggers__stl(Vround___024root* vlSelf);

VL_ATTR_COLD bool Vround___024root___eval_phase__stl(Vround___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vround__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vround___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vround___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vround___024root___dump_triggers__ico(Vround___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vround__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vround___024root___dump_triggers__act(Vround___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vround__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] round.a1.q0.data)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] round.a1.q1.data)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] round.a1.q2.data)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] round.a1.q3.data)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] round.a1.q4.data)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] round.a1.q5.data)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] round.a1.q6.data)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([changed] round.a1.q7.data)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([changed] round.a1.q8.data)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([changed] round.a1.q9.data)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([changed] round.a1.q10.data)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([changed] round.a1.q11.data)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([changed] round.a1.q12.data)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([changed] round.a1.q13.data)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([changed] round.a1.q14.data)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([changed] round.a1.q15.data)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vround___024root___dump_triggers__nba(Vround___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vround__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] round.a1.q0.data)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] round.a1.q1.data)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] round.a1.q2.data)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] round.a1.q3.data)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] round.a1.q4.data)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] round.a1.q5.data)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] round.a1.q6.data)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([changed] round.a1.q7.data)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([changed] round.a1.q8.data)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([changed] round.a1.q9.data)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([changed] round.a1.q10.data)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([changed] round.a1.q11.data)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([changed] round.a1.q12.data)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([changed] round.a1.q13.data)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([changed] round.a1.q14.data)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([changed] round.a1.q15.data)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vround___024root___ctor_var_reset(Vround___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vround__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_RAND_RESET_W(128, vlSelf->data_in);
    VL_RAND_RESET_W(128, vlSelf->key_in);
    VL_RAND_RESET_W(128, vlSelf->data_out);
    VL_RAND_RESET_W(128, vlSelf->round__DOT__mix_data_out);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__0__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__0__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__1__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__1__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__2__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__2__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__3__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__3__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__4__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__4__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__5__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__5__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__6__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__6__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__7__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__7__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__8__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__8__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__9__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__9__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__10__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__10__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__11__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__11__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__12__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__12__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__13__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__13__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__14__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__14__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__15__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__15__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__16__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__16__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__17__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__17__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__18__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__18__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__19__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__19__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__20__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__20__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__21__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__21__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__22__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__22__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__23__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__23__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__24__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__24__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__25__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__25__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__26__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__26__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__27__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__27__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__28__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__28__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__29__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__29__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__30__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__30__i = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__31__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_round__DOT__m0__DOT__xtime__31__i = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q0__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q1__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q2__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q3__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q4__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q5__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q6__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q7__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q8__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q9__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q10__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q11__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q12__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q13__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q14__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q15__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__VactDidInit = 0;
}
