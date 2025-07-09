// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_main.h for the primary calling header

#include "Vaes_main__pch.h"
#include "Vaes_main___024root.h"

VL_ATTR_COLD void Vaes_main___024root___eval_initial__TOP(Vaes_main___024root* vlSelf);

VL_ATTR_COLD void Vaes_main___024root___eval_initial(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___eval_initial\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaes_main___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vaes_main___024root___eval_final__TOP(Vaes_main___024root* vlSelf);

VL_ATTR_COLD void Vaes_main___024root___eval_final(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___eval_final\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaes_main___024root___eval_final__TOP(vlSelf);
}

void Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_final_TOP(QData/*63:0*/ handle___05FV);

VL_ATTR_COLD void Vaes_main___024root___eval_final__TOP(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___eval_final__TOP\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_final_TOP(vlSelfRef.aes_main__DOT__r0__DOT__handle___05FV);
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_final_TOP(vlSelfRef.aes_main__DOT__r1__DOT__handle___05FV);
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_final_TOP(vlSelfRef.aes_main__DOT__r2__DOT__handle___05FV);
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_final_TOP(vlSelfRef.aes_main__DOT__r3__DOT__handle___05FV);
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_final_TOP(vlSelfRef.aes_main__DOT__r4__DOT__handle___05FV);
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_final_TOP(vlSelfRef.aes_main__DOT__r5__DOT__handle___05FV);
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_final_TOP(vlSelfRef.aes_main__DOT__r6__DOT__handle___05FV);
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_final_TOP(vlSelfRef.aes_main__DOT__r7__DOT__handle___05FV);
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_final_TOP(vlSelfRef.aes_main__DOT__r8__DOT__handle___05FV);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_main___024root___dump_triggers__stl(Vaes_main___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vaes_main___024root___eval_phase__stl(Vaes_main___024root* vlSelf);

VL_ATTR_COLD void Vaes_main___024root___eval_settle(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___eval_settle\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vaes_main___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("aes_main.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vaes_main___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_main___024root___dump_triggers__stl(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___dump_triggers__stl\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vaes_main___024root___stl_sequent__TOP__0(Vaes_main___024root* vlSelf);

VL_ATTR_COLD void Vaes_main___024root___eval_stl(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___eval_stl\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vaes_main___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vaes_main___024root___eval_triggers__stl(Vaes_main___024root* vlSelf);

VL_ATTR_COLD bool Vaes_main___024root___eval_phase__stl(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___eval_phase__stl\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vaes_main___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vaes_main___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_main___024root___dump_triggers__ico(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___dump_triggers__ico\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vaes_main___024root___dump_triggers__act(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___dump_triggers__act\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @( aes_main.a0.u0.data)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @( aes_main.a0.u1.data)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( aes_main.a0.u2.data)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( aes_main.a0.u3.data)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( aes_main.a0.u4.data)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( aes_main.a0.u5.data)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @( aes_main.a0.u6.data)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @( aes_main.a0.u7.data)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @( aes_main.a0.u8.data)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @( aes_main.a0.u9.data)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @( aes_main.a0.u10.data)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @( aes_main.a0.u11.data)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @( aes_main.a0.u12.data)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @( aes_main.a0.u13.data)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @( aes_main.a0.u14.data)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @( aes_main.a0.u15.data)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @( aes_main.a0.u16.data)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @( aes_main.a0.u17.data)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @( aes_main.a0.u18.data)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @( aes_main.a0.u19.data)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @( aes_main.a0.u20.data)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @( aes_main.a0.u21.data)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @( aes_main.a0.u22.data)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @( aes_main.a0.u23.data)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @( aes_main.a0.u24.data)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @( aes_main.a0.u25.data)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @( aes_main.a0.u26.data)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @( aes_main.a0.u27.data)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @( aes_main.a0.u28.data)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @( aes_main.a0.u29.data)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @( aes_main.a0.u30.data)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @( aes_main.a0.u31.data)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @( aes_main.a0.u32.data)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @( aes_main.a0.u33.data)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @( aes_main.a0.u34.data)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 35 is active: @( aes_main.a0.u35.data)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 36 is active: @( aes_main.a0.u36.data)\n");
    }
    if ((0x2000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 37 is active: @( aes_main.a0.u37.data)\n");
    }
    if ((0x4000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 38 is active: @( aes_main.a0.u38.data)\n");
    }
    if ((0x8000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 39 is active: @( aes_main.a0.u39.data)\n");
    }
    if ((0x10000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 40 is active: @( aes_main.r9.a1.q0.data)\n");
    }
    if ((0x20000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 41 is active: @( aes_main.r9.a1.q1.data)\n");
    }
    if ((0x40000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 42 is active: @( aes_main.r9.a1.q2.data)\n");
    }
    if ((0x80000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 43 is active: @( aes_main.r9.a1.q3.data)\n");
    }
    if ((0x100000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 44 is active: @( aes_main.r9.a1.q4.data)\n");
    }
    if ((0x200000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 45 is active: @( aes_main.r9.a1.q5.data)\n");
    }
    if ((0x400000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 46 is active: @( aes_main.r9.a1.q6.data)\n");
    }
    if ((0x800000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 47 is active: @( aes_main.r9.a1.q7.data)\n");
    }
    if ((0x1000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 48 is active: @( aes_main.r9.a1.q8.data)\n");
    }
    if ((0x2000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 49 is active: @( aes_main.r9.a1.q9.data)\n");
    }
    if ((0x4000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 50 is active: @( aes_main.r9.a1.q10.data)\n");
    }
    if ((0x8000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 51 is active: @( aes_main.r9.a1.q11.data)\n");
    }
    if ((0x10000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 52 is active: @( aes_main.r9.a1.q12.data)\n");
    }
    if ((0x20000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 53 is active: @( aes_main.r9.a1.q13.data)\n");
    }
    if ((0x40000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 54 is active: @( aes_main.r9.a1.q14.data)\n");
    }
    if ((0x80000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 55 is active: @( aes_main.r9.a1.q15.data)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_main___024root___dump_triggers__nba(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___dump_triggers__nba\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @( aes_main.a0.u0.data)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @( aes_main.a0.u1.data)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( aes_main.a0.u2.data)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( aes_main.a0.u3.data)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( aes_main.a0.u4.data)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( aes_main.a0.u5.data)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @( aes_main.a0.u6.data)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @( aes_main.a0.u7.data)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @( aes_main.a0.u8.data)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @( aes_main.a0.u9.data)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @( aes_main.a0.u10.data)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @( aes_main.a0.u11.data)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @( aes_main.a0.u12.data)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @( aes_main.a0.u13.data)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @( aes_main.a0.u14.data)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @( aes_main.a0.u15.data)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @( aes_main.a0.u16.data)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @( aes_main.a0.u17.data)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @( aes_main.a0.u18.data)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @( aes_main.a0.u19.data)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @( aes_main.a0.u20.data)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @( aes_main.a0.u21.data)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @( aes_main.a0.u22.data)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @( aes_main.a0.u23.data)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @( aes_main.a0.u24.data)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @( aes_main.a0.u25.data)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @( aes_main.a0.u26.data)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @( aes_main.a0.u27.data)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @( aes_main.a0.u28.data)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @( aes_main.a0.u29.data)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @( aes_main.a0.u30.data)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @( aes_main.a0.u31.data)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @( aes_main.a0.u32.data)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @( aes_main.a0.u33.data)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @( aes_main.a0.u34.data)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 35 is active: @( aes_main.a0.u35.data)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 36 is active: @( aes_main.a0.u36.data)\n");
    }
    if ((0x2000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 37 is active: @( aes_main.a0.u37.data)\n");
    }
    if ((0x4000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 38 is active: @( aes_main.a0.u38.data)\n");
    }
    if ((0x8000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 39 is active: @( aes_main.a0.u39.data)\n");
    }
    if ((0x10000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 40 is active: @( aes_main.r9.a1.q0.data)\n");
    }
    if ((0x20000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 41 is active: @( aes_main.r9.a1.q1.data)\n");
    }
    if ((0x40000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 42 is active: @( aes_main.r9.a1.q2.data)\n");
    }
    if ((0x80000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 43 is active: @( aes_main.r9.a1.q3.data)\n");
    }
    if ((0x100000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 44 is active: @( aes_main.r9.a1.q4.data)\n");
    }
    if ((0x200000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 45 is active: @( aes_main.r9.a1.q5.data)\n");
    }
    if ((0x400000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 46 is active: @( aes_main.r9.a1.q6.data)\n");
    }
    if ((0x800000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 47 is active: @( aes_main.r9.a1.q7.data)\n");
    }
    if ((0x1000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 48 is active: @( aes_main.r9.a1.q8.data)\n");
    }
    if ((0x2000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 49 is active: @( aes_main.r9.a1.q9.data)\n");
    }
    if ((0x4000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 50 is active: @( aes_main.r9.a1.q10.data)\n");
    }
    if ((0x8000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 51 is active: @( aes_main.r9.a1.q11.data)\n");
    }
    if ((0x10000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 52 is active: @( aes_main.r9.a1.q12.data)\n");
    }
    if ((0x20000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 53 is active: @( aes_main.r9.a1.q13.data)\n");
    }
    if ((0x40000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 54 is active: @( aes_main.r9.a1.q14.data)\n");
    }
    if ((0x80000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 55 is active: @( aes_main.r9.a1.q15.data)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaes_main___024root___ctor_var_reset(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___ctor_var_reset\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_RAND_RESET_W(128, vlSelf->data_in);
    VL_RAND_RESET_W(128, vlSelf->key);
    VL_RAND_RESET_W(128, vlSelf->data_out);
    vlSelf->aes_main__DOT__a0__DOT__w6 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w7 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w11 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w12 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w13 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w14 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w15 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w16 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w17 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w18 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w19 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w20 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w21 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w22 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w23 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w24 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w25 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w26 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w27 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w28 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w29 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w30 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w31 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w32 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w33 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w34 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w35 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w36 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w37 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w38 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__w39 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__subword = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__subword3 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__subword4 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__subword5 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__subword6 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__subword7 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__subword8 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__subword9 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT__subword10 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_0 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_2 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_3 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_4 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_5 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_6 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_7 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_8 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_9 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_10 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_11 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_12 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_13 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_14 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_15 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_16 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_17 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_18 = VL_RAND_RESET_I(32);
    vlSelf->aes_main__DOT__r0__DOT__handle___05FV = 0;
    VL_RAND_RESET_W(128, vlSelf->aes_main__DOT__r0__DOT__data_out_combo___05FV);
    vlSelf->aes_main__DOT__r1__DOT__handle___05FV = 0;
    VL_RAND_RESET_W(128, vlSelf->aes_main__DOT__r1__DOT__data_out_combo___05FV);
    vlSelf->aes_main__DOT__r2__DOT__handle___05FV = 0;
    VL_RAND_RESET_W(128, vlSelf->aes_main__DOT__r2__DOT__data_out_combo___05FV);
    vlSelf->aes_main__DOT__r3__DOT__handle___05FV = 0;
    VL_RAND_RESET_W(128, vlSelf->aes_main__DOT__r3__DOT__data_out_combo___05FV);
    vlSelf->aes_main__DOT__r4__DOT__handle___05FV = 0;
    VL_RAND_RESET_W(128, vlSelf->aes_main__DOT__r4__DOT__data_out_combo___05FV);
    vlSelf->aes_main__DOT__r5__DOT__handle___05FV = 0;
    VL_RAND_RESET_W(128, vlSelf->aes_main__DOT__r5__DOT__data_out_combo___05FV);
    vlSelf->aes_main__DOT__r6__DOT__handle___05FV = 0;
    VL_RAND_RESET_W(128, vlSelf->aes_main__DOT__r6__DOT__data_out_combo___05FV);
    vlSelf->aes_main__DOT__r7__DOT__handle___05FV = 0;
    VL_RAND_RESET_W(128, vlSelf->aes_main__DOT__r7__DOT__data_out_combo___05FV);
    vlSelf->aes_main__DOT__r8__DOT__handle___05FV = 0;
    VL_RAND_RESET_W(128, vlSelf->aes_main__DOT__r8__DOT__data_out_combo___05FV);
    vlSelf->__VdfgRegularize_hd87f99a1_0_0 = VL_RAND_RESET_I(32);
    vlSelf->__VdfgRegularize_hd87f99a1_0_1 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_aes_main__DOT__r0__DOT__round_protectlib_combo_update__2__Vfuncout = 0;
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_aes_main__DOT__r0__DOT__round_protectlib_combo_update__2__data_out);
    vlSelf->__Vfunc_aes_main__DOT__r1__DOT__round_protectlib_combo_update__6__Vfuncout = 0;
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_aes_main__DOT__r1__DOT__round_protectlib_combo_update__6__data_out);
    vlSelf->__Vfunc_aes_main__DOT__r2__DOT__round_protectlib_combo_update__10__Vfuncout = 0;
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_aes_main__DOT__r2__DOT__round_protectlib_combo_update__10__data_out);
    vlSelf->__Vfunc_aes_main__DOT__r3__DOT__round_protectlib_combo_update__14__Vfuncout = 0;
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_aes_main__DOT__r3__DOT__round_protectlib_combo_update__14__data_out);
    vlSelf->__Vfunc_aes_main__DOT__r4__DOT__round_protectlib_combo_update__18__Vfuncout = 0;
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_aes_main__DOT__r4__DOT__round_protectlib_combo_update__18__data_out);
    vlSelf->__Vfunc_aes_main__DOT__r5__DOT__round_protectlib_combo_update__22__Vfuncout = 0;
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_aes_main__DOT__r5__DOT__round_protectlib_combo_update__22__data_out);
    vlSelf->__Vfunc_aes_main__DOT__r6__DOT__round_protectlib_combo_update__26__Vfuncout = 0;
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_aes_main__DOT__r6__DOT__round_protectlib_combo_update__26__data_out);
    vlSelf->__Vfunc_aes_main__DOT__r7__DOT__round_protectlib_combo_update__30__Vfuncout = 0;
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_aes_main__DOT__r7__DOT__round_protectlib_combo_update__30__data_out);
    vlSelf->__Vfunc_aes_main__DOT__r8__DOT__round_protectlib_combo_update__34__Vfuncout = 0;
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_aes_main__DOT__r8__DOT__round_protectlib_combo_update__34__data_out);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u0__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u1__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u2__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u3__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u4__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u5__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u6__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u7__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u8__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u9__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u10__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u11__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u12__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u13__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u14__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u15__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u16__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u17__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u18__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u19__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u20__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u21__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u22__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u23__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u24__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u25__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u26__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u27__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u28__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u29__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u30__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u31__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u32__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u33__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u34__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u35__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u36__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u37__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u38__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u39__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q0__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q1__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q2__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q3__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q4__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q5__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q6__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q7__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q8__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q9__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q10__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q11__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q12__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q13__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q14__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q15__data__0 = VL_RAND_RESET_I(8);
    vlSelf->__VactDidInit = 0;
}
