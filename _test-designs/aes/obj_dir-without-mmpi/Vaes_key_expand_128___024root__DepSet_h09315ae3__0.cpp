// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_key_expand_128.h for the primary calling header

#include "Vaes_key_expand_128__pch.h"
#include "Vaes_key_expand_128__Syms.h"
#include "Vaes_key_expand_128___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_key_expand_128___024root___dump_triggers__ico(Vaes_key_expand_128___024root* vlSelf);
#endif  // VL_DEBUG

void Vaes_key_expand_128___024root___eval_triggers__ico(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___eval_triggers__ico\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaes_key_expand_128___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___ico_sequent__TOP__0(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___ico_sequent__TOP__0\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r_data_out;
    VL_ZERO_W(128, aes_main__DOT__r_data_out);
    VlWide<4>/*127:0*/ aes_main__DOT__r0_data_out;
    VL_ZERO_W(128, aes_main__DOT__r0_data_out);
    VlWide<4>/*127:0*/ aes_main__DOT__r1_data_out;
    VL_ZERO_W(128, aes_main__DOT__r1_data_out);
    VlWide<4>/*127:0*/ aes_main__DOT__r2_data_out;
    VL_ZERO_W(128, aes_main__DOT__r2_data_out);
    VlWide<4>/*127:0*/ aes_main__DOT__r3_data_out;
    VL_ZERO_W(128, aes_main__DOT__r3_data_out);
    VlWide<4>/*127:0*/ aes_main__DOT__r4_data_out;
    VL_ZERO_W(128, aes_main__DOT__r4_data_out);
    VlWide<4>/*127:0*/ aes_main__DOT__r5_data_out;
    VL_ZERO_W(128, aes_main__DOT__r5_data_out);
    VlWide<4>/*127:0*/ aes_main__DOT__r6_data_out;
    VL_ZERO_W(128, aes_main__DOT__r6_data_out);
    VlWide<4>/*127:0*/ aes_main__DOT__r7_data_out;
    VL_ZERO_W(128, aes_main__DOT__r7_data_out);
    VlWide<4>/*127:0*/ aes_main__DOT__r8_data_out;
    VL_ZERO_W(128, aes_main__DOT__r8_data_out);
    // Body
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u0.data = 
        (0xffU & (vlSelfRef.key[0U] >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u1.data = 
        (0xffU & (vlSelfRef.key[0U] >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u2.data = 
        (0xffU & vlSelfRef.key[0U]);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u3.data = 
        (vlSelfRef.key[0U] >> 0x18U);
    aes_main__DOT__r_data_out[0U] = (vlSelfRef.data_in[0U] 
                                     ^ vlSelfRef.key[0U]);
    aes_main__DOT__r_data_out[1U] = (vlSelfRef.data_in[1U] 
                                     ^ vlSelfRef.key[1U]);
    aes_main__DOT__r_data_out[2U] = (vlSelfRef.data_in[2U] 
                                     ^ vlSelfRef.key[2U]);
    aes_main__DOT__r_data_out[3U] = (vlSelfRef.data_in[3U] 
                                     ^ vlSelfRef.key[3U]);
    vlSelfRef.aes_main__DOT__a0__DOT__w7 = (0x1000000U 
                                            ^ (vlSelfRef.key[3U] 
                                               ^ (vlSelfRef.key[2U] 
                                                  ^ 
                                                  (vlSelfRef.key[1U] 
                                                   ^ 
                                                   (vlSelfRef.key[0U] 
                                                    ^ vlSelfRef.aes_main__DOT__a0__DOT__subword)))));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_0 
        = (vlSelfRef.key[3U] ^ vlSelfRef.aes_main__DOT__a0__DOT__subword);
    vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r_data_out[3U] >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r_data_out[3U] >> 8U));
    vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r_data_out[2U] >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r_data_out[2U] >> 8U));
    vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r_data_out[1U] >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r_data_out[1U] >> 8U));
    vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r_data_out[0U] >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r_data_out[0U] >> 8U));
    vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r_data_out[0U]);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u4.data = 
        (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w7 
                  >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u5.data = 
        (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w7 
                  >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u6.data = 
        (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w7);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u7.data = 
        (vlSelfRef.aes_main__DOT__a0__DOT__w7 >> 0x18U);
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = (vlSelfRef.key[2U] 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_0);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1 
        = (0x1000000U ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_0 
                         ^ ((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u4.dout) 
                              << 0x18U) | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u5.dout) 
                                           << 0x10U)) 
                            | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u6.dout) 
                                << 8U) | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u7.dout)))));
    vlSelfRef.aes_main__DOT__a0__DOT__w6 = (0x1000000U 
                                            ^ (vlSelfRef.key[1U] 
                                               ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 = (0x1000000U 
                                                ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1));
    vlSelfRef.aes_main__DOT__a0__DOT__w12 = (0x6000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword3));
    aes_main__DOT__r0_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w7 
                                      ^ vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out[0U]);
    aes_main__DOT__r0_data_out[1U] = (vlSelfRef.aes_main__DOT__a0__DOT__w6 
                                      ^ vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out[1U]);
    aes_main__DOT__r0_data_out[2U] = ((IData)((((QData)((IData)(
                                                                (0x1000000U 
                                                                 ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_0))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (0x1000000U 
                                                                  ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))))) 
                                      ^ vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out[2U]);
    aes_main__DOT__r0_data_out[3U] = ((IData)(((((QData)((IData)(
                                                                 (0x1000000U 
                                                                  ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_0))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (0x1000000U 
                                                                   ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out[3U]);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_18 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w6 ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_1);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_2 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1 
           ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_1);
    vlSelfRef.aes_main__DOT__a0__DOT__w16 = (0x8000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w12 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword4));
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r0_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r0_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r0_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r0_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r0_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r0_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r0_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r0_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r0_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r0_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r0_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r0_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r0_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r0_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r0_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r0_data_out[0U]);
    vlSelfRef.aes_main__DOT__a0__DOT__w11 = (0x2000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w7 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_18));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_3 
        = (0x2000000U ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_2 
                         ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_18));
    vlSelfRef.aes_main__DOT__a0__DOT__w13 = (0x4000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_2 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword3));
    vlSelfRef.aes_main__DOT__a0__DOT__w20 = (0x10000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w16 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword5));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u8.data = 
        (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w11 
                  >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u9.data = 
        (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w11 
                  >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u10.data 
        = (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w11);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u11.data 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w11 >> 0x18U);
    aes_main__DOT__r1_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w11 
                                      ^ vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out[0U]);
    aes_main__DOT__r1_data_out[1U] = (0x2000000U ^ 
                                      (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_18 
                                       ^ vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out[1U]));
    aes_main__DOT__r1_data_out[2U] = ((IData)((((QData)((IData)(
                                                                (0x2000000U 
                                                                 ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (0x2000000U 
                                                                  ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))))) 
                                      ^ vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out[2U]);
    aes_main__DOT__r1_data_out[3U] = ((IData)(((((QData)((IData)(
                                                                 (0x2000000U 
                                                                  ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (0x2000000U 
                                                                   ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out[3U]);
    vlSelfRef.aes_main__DOT__a0__DOT__w15 = (0x4000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_3 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w11 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword3)));
    vlSelfRef.aes_main__DOT__a0__DOT__w14 = (0x4000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_3 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword3));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_4 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w12 ^ vlSelfRef.aes_main__DOT__a0__DOT__w13);
    vlSelfRef.aes_main__DOT__a0__DOT__w24 = (0x20000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w20 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword6));
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r1_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r1_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r1_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r1_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r1_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r1_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r1_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r1_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r1_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r1_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r1_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r1_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r1_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r1_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r1_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r1_data_out[0U]);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u12.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w15 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u13.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w15 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u14.data 
        = (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w15);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u15.data 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w15 >> 0x18U);
    aes_main__DOT__r2_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w15 
                                      ^ vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out[0U]);
    aes_main__DOT__r2_data_out[1U] = (vlSelfRef.aes_main__DOT__a0__DOT__w14 
                                      ^ vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out[1U]);
    aes_main__DOT__r2_data_out[2U] = ((IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w12)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w13)))) 
                                      ^ vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out[2U]);
    aes_main__DOT__r2_data_out[3U] = ((IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w12)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w13))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out[3U]);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_5 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_4 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w14);
    vlSelfRef.aes_main__DOT__a0__DOT__w17 = (0x8000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_4 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword4));
    vlSelfRef.aes_main__DOT__a0__DOT__w28 = (0x40000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w24 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword7));
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r2_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r2_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r2_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r2_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r2_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r2_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r2_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r2_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r2_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r2_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r2_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r2_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r2_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r2_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r2_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r2_data_out[0U]);
    vlSelfRef.aes_main__DOT__a0__DOT__w19 = (0x8000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_5 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w15 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword4)));
    vlSelfRef.aes_main__DOT__a0__DOT__w18 = (0x8000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_5 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword4));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_6 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w16 ^ vlSelfRef.aes_main__DOT__a0__DOT__w17);
    vlSelfRef.aes_main__DOT__a0__DOT__w32 = (0x80000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w28 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword8));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u16.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w19 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u17.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w19 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u18.data 
        = (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w19);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u19.data 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w19 >> 0x18U);
    aes_main__DOT__r3_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w19 
                                      ^ vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out[0U]);
    aes_main__DOT__r3_data_out[1U] = (vlSelfRef.aes_main__DOT__a0__DOT__w18 
                                      ^ vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out[1U]);
    aes_main__DOT__r3_data_out[2U] = ((IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w16)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w17)))) 
                                      ^ vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out[2U]);
    aes_main__DOT__r3_data_out[3U] = ((IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w16)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w17))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out[3U]);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_7 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_6 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w18);
    vlSelfRef.aes_main__DOT__a0__DOT__w21 = (0x10000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_6 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword5));
    vlSelfRef.aes_main__DOT__a0__DOT__w36 = (0x1b000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w32 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword9));
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r3_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r3_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r3_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r3_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r3_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r3_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r3_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r3_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r3_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r3_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r3_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r3_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r3_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r3_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r3_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r3_data_out[0U]);
    vlSelfRef.aes_main__DOT__a0__DOT__w23 = (0x10000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_7 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w19 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword5)));
    vlSelfRef.aes_main__DOT__a0__DOT__w22 = (0x10000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_7 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword5));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_8 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w20 ^ vlSelfRef.aes_main__DOT__a0__DOT__w21);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u20.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w23 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u21.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w23 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u22.data 
        = (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w23);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u23.data 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w23 >> 0x18U);
    aes_main__DOT__r4_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w23 
                                      ^ vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out[0U]);
    aes_main__DOT__r4_data_out[1U] = (vlSelfRef.aes_main__DOT__a0__DOT__w22 
                                      ^ vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out[1U]);
    aes_main__DOT__r4_data_out[2U] = ((IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w20)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w21)))) 
                                      ^ vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out[2U]);
    aes_main__DOT__r4_data_out[3U] = ((IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w20)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w21))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out[3U]);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_9 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_8 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w22);
    vlSelfRef.aes_main__DOT__a0__DOT__w25 = (0x20000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_8 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword6));
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r4_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r4_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r4_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r4_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r4_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r4_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r4_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r4_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r4_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r4_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r4_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r4_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r4_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r4_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r4_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r4_data_out[0U]);
    vlSelfRef.aes_main__DOT__a0__DOT__w27 = (0x20000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_9 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w23 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword6)));
    vlSelfRef.aes_main__DOT__a0__DOT__w26 = (0x20000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_9 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword6));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_10 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w24 ^ vlSelfRef.aes_main__DOT__a0__DOT__w25);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u24.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w27 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u25.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w27 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u26.data 
        = (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w27);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u27.data 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w27 >> 0x18U);
    aes_main__DOT__r5_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w27 
                                      ^ vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out[0U]);
    aes_main__DOT__r5_data_out[1U] = (vlSelfRef.aes_main__DOT__a0__DOT__w26 
                                      ^ vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out[1U]);
    aes_main__DOT__r5_data_out[2U] = ((IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w24)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w25)))) 
                                      ^ vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out[2U]);
    aes_main__DOT__r5_data_out[3U] = ((IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w24)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w25))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out[3U]);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_11 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_10 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w26);
    vlSelfRef.aes_main__DOT__a0__DOT__w29 = (0x40000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_10 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword7));
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r5_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r5_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r5_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r5_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r5_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r5_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r5_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r5_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r5_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r5_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r5_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r5_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r5_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r5_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r5_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r5_data_out[0U]);
    vlSelfRef.aes_main__DOT__a0__DOT__w31 = (0x40000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_11 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w27 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword7)));
    vlSelfRef.aes_main__DOT__a0__DOT__w30 = (0x40000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_11 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword7));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_12 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w28 ^ vlSelfRef.aes_main__DOT__a0__DOT__w29);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u28.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w31 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u29.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w31 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u30.data 
        = (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w31);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u31.data 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w31 >> 0x18U);
    aes_main__DOT__r6_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w31 
                                      ^ vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out[0U]);
    aes_main__DOT__r6_data_out[1U] = (vlSelfRef.aes_main__DOT__a0__DOT__w30 
                                      ^ vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out[1U]);
    aes_main__DOT__r6_data_out[2U] = ((IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w28)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w29)))) 
                                      ^ vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out[2U]);
    aes_main__DOT__r6_data_out[3U] = ((IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w28)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w29))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out[3U]);
    vlSelfRef.aes_main__DOT__a0__DOT__w33 = (0x80000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_12 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword8));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_13 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_12 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w30);
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r6_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r6_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r6_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r6_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r6_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r6_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r6_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r6_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r6_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r6_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r6_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r6_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r6_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r6_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r6_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r6_data_out[0U]);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_14 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w32 ^ vlSelfRef.aes_main__DOT__a0__DOT__w33);
    vlSelfRef.aes_main__DOT__a0__DOT__w35 = (0x80000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_13 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w31 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword8)));
    vlSelfRef.aes_main__DOT__a0__DOT__w34 = (0x80000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_13 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword8));
    vlSelfRef.aes_main__DOT__a0__DOT__w37 = (0x1b000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_14 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword9));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u32.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w35 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u33.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w35 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u34.data 
        = (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w35);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u35.data 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w35 >> 0x18U);
    aes_main__DOT__r7_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w35 
                                      ^ vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out[0U]);
    aes_main__DOT__r7_data_out[1U] = (vlSelfRef.aes_main__DOT__a0__DOT__w34 
                                      ^ vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out[1U]);
    aes_main__DOT__r7_data_out[2U] = ((IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w32)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w33)))) 
                                      ^ vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out[2U]);
    aes_main__DOT__r7_data_out[3U] = ((IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w32)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w33))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out[3U]);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_15 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_14 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w34);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_16 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w36 ^ vlSelfRef.aes_main__DOT__a0__DOT__w37);
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r7_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r7_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r7_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r7_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r7_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r7_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r7_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r7_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r7_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r7_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r7_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r7_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r7_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r7_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r7_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r7_data_out[0U]);
    vlSelfRef.aes_main__DOT__a0__DOT__w38 = (0x1b000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_15 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword9));
    vlSelfRef.aes_main__DOT__a0__DOT__w39 = (0x1b000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_15 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w35 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword9)));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_17 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_16 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w38);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u36.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w39 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u37.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w39 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u38.data 
        = (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w39);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u39.data 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w39 >> 0x18U);
    aes_main__DOT__r8_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w39 
                                      ^ vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out[0U]);
    aes_main__DOT__r8_data_out[1U] = (vlSelfRef.aes_main__DOT__a0__DOT__w38 
                                      ^ vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out[1U]);
    aes_main__DOT__r8_data_out[2U] = ((IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w36)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w37)))) 
                                      ^ vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out[2U]);
    aes_main__DOT__r8_data_out[3U] = ((IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w36)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w37))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out[3U]);
    vlSelfRef.data_out[0U] = (0x36000000U ^ ((vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_17 
                                              ^ (vlSelfRef.aes_main__DOT__a0__DOT__w39 
                                                 ^ vlSelfRef.aes_main__DOT__a0__DOT__subword10)) 
                                             ^ ((((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q12.dout) 
                                                  << 0x18U) 
                                                 | ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q1.dout) 
                                                    << 0x10U)) 
                                                | (((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q6.dout) 
                                                    << 8U) 
                                                   | (IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q11.dout)))));
    vlSelfRef.data_out[1U] = (0x36000000U ^ ((vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_17 
                                              ^ vlSelfRef.aes_main__DOT__a0__DOT__subword10) 
                                             ^ ((((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q8.dout) 
                                                  << 0x18U) 
                                                 | ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q13.dout) 
                                                    << 0x10U)) 
                                                | (((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q2.dout) 
                                                    << 8U) 
                                                   | (IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q7.dout)))));
    vlSelfRef.data_out[2U] = ((IData)((((QData)((IData)(
                                                        (0x36000000U 
                                                         ^ 
                                                         (vlSelfRef.aes_main__DOT__a0__DOT__w36 
                                                          ^ vlSelfRef.aes_main__DOT__a0__DOT__subword10)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (0x36000000U 
                                                                     ^ 
                                                                     (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_16 
                                                                      ^ vlSelfRef.aes_main__DOT__a0__DOT__subword10)))))) 
                              ^ (IData)((((QData)((IData)(
                                                          ((((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q0.dout) 
                                                             << 0x18U) 
                                                            | ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q5.dout) 
                                                               << 0x10U)) 
                                                           | (((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q10.dout) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q15.dout))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q4.dout) 
                                                              << 0x18U) 
                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q9.dout) 
                                                                << 0x10U)) 
                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q14.dout) 
                                                                << 8U) 
                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q3.dout))))))));
    vlSelfRef.data_out[3U] = ((IData)(((((QData)((IData)(
                                                         (0x36000000U 
                                                          ^ 
                                                          (vlSelfRef.aes_main__DOT__a0__DOT__w36 
                                                           ^ vlSelfRef.aes_main__DOT__a0__DOT__subword10)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0x36000000U 
                                                           ^ 
                                                           (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_16 
                                                            ^ vlSelfRef.aes_main__DOT__a0__DOT__subword10))))) 
                                       >> 0x20U)) ^ (IData)(
                                                            ((((QData)((IData)(
                                                                               ((((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q0.dout) 
                                                                                << 0x18U) 
                                                                                | ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q15.dout))))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                ((((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q4.dout) 
                                                                                << 0x18U) 
                                                                                | ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q3.dout)))))) 
                                                             >> 0x20U)));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r8_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r8_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r8_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r8_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r8_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r8_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r8_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r8_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r8_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r8_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r8_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r8_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r8_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r8_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r8_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r8_data_out[0U]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_key_expand_128___024root___dump_triggers__act(Vaes_key_expand_128___024root* vlSelf);
#endif  // VL_DEBUG

void Vaes_key_expand_128___024root___eval_triggers__act(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___eval_triggers__act\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setWord(0U, (((QData)((IData)(
                                                            ((((((((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q7.data) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q7__data__0)) 
                                                                  << 0x1fU) 
                                                                 | (((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q6.data) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q6__data__0)) 
                                                                    << 0x1eU)) 
                                                                | ((((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q5.data) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q5__data__0)) 
                                                                    << 0x1dU) 
                                                                   | (((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q4.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q4__data__0)) 
                                                                      << 0x1cU))) 
                                                               | (((((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q3.data) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q3__data__0)) 
                                                                    << 0x1bU) 
                                                                   | (((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q2.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q2__data__0)) 
                                                                      << 0x1aU)) 
                                                                  | ((((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q1.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q1__data__0)) 
                                                                      << 0x19U) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q0.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q0__data__0)) 
                                                                        << 0x18U)))) 
                                                              | ((((((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q15.data) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q15__data__0)) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q14.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q14__data__0)) 
                                                                      << 0x16U)) 
                                                                  | ((((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q13.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q13__data__0)) 
                                                                      << 0x15U) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q12.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q12__data__0)) 
                                                                        << 0x14U))) 
                                                                 | (((((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q11.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q11__data__0)) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q10.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q10__data__0)) 
                                                                        << 0x12U)) 
                                                                    | ((((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q9.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q9__data__0)) 
                                                                        << 0x11U) 
                                                                       | (((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q8.data) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q8__data__0)) 
                                                                          << 0x10U))))) 
                                                             | (((((((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q7.data) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q7__data__0)) 
                                                                    << 0xfU) 
                                                                   | (((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q6.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q6__data__0)) 
                                                                      << 0xeU)) 
                                                                  | ((((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q5.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q5__data__0)) 
                                                                      << 0xdU) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q4.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q4__data__0)) 
                                                                        << 0xcU))) 
                                                                 | (((((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q3.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q3__data__0)) 
                                                                      << 0xbU) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q2.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q2__data__0)) 
                                                                        << 0xaU)) 
                                                                    | ((((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q1.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q1__data__0)) 
                                                                        << 9U) 
                                                                       | (((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q0.data) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q0__data__0)) 
                                                                          << 8U)))) 
                                                                | ((((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u39.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u39__data__0)) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u38.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u38__data__0)) 
                                                                        << 6U)) 
                                                                    | ((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u37.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u37__data__0)) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u36.data) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u36__data__0)) 
                                                                          << 4U))) 
                                                                   | (((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u35.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u35__data__0)) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u34.data) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u34__data__0)) 
                                                                          << 2U)) 
                                                                      | ((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u33.data) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u33__data__0)) 
                                                                          << 1U) 
                                                                         | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u32.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u32__data__0))))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u31.data) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u31__data__0)) 
                                                                   << 0x1fU) 
                                                                  | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u30.data) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u30__data__0)) 
                                                                     << 0x1eU)) 
                                                                 | ((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u29.data) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u29__data__0)) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u28.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u28__data__0)) 
                                                                       << 0x1cU))) 
                                                                | (((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u27.data) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u27__data__0)) 
                                                                     << 0x1bU) 
                                                                    | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u26.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u26__data__0)) 
                                                                       << 0x1aU)) 
                                                                   | ((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u25.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u25__data__0)) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u24.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u24__data__0)) 
                                                                         << 0x18U)))) 
                                                               | ((((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u23.data) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u23__data__0)) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u22.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u22__data__0)) 
                                                                       << 0x16U)) 
                                                                   | ((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u21.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u21__data__0)) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u20.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u20__data__0)) 
                                                                         << 0x14U))) 
                                                                  | (((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u19.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u19__data__0)) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u18.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u18__data__0)) 
                                                                         << 0x12U)) 
                                                                     | ((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u17.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u17__data__0)) 
                                                                         << 0x11U) 
                                                                        | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u16.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u16__data__0)) 
                                                                           << 0x10U))))) 
                                                              | (((((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u15.data) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u15__data__0)) 
                                                                     << 0xfU) 
                                                                    | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u14.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u14__data__0)) 
                                                                       << 0xeU)) 
                                                                   | ((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u13.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u13__data__0)) 
                                                                       << 0xdU) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u12.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u12__data__0)) 
                                                                         << 0xcU))) 
                                                                  | (((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u11.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u11__data__0)) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u10.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u10__data__0)) 
                                                                         << 0xaU)) 
                                                                     | ((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u9.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u9__data__0)) 
                                                                         << 9U) 
                                                                        | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u8.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u8__data__0)) 
                                                                           << 8U)))) 
                                                                 | ((((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u7.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u7__data__0)) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u6.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u6__data__0)) 
                                                                         << 6U)) 
                                                                     | ((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u5.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u5__data__0)) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u4.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u4__data__0)) 
                                                                           << 4U))) 
                                                                    | (((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u3.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u3__data__0)) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u2.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u2__data__0)) 
                                                                           << 2U)) 
                                                                       | ((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u1.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u1__data__0)) 
                                                                           << 1U) 
                                                                          | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u0.data) 
                                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u0__data__0)))))))))));
    vlSelfRef.__VactTriggered.setWord(1U, (((QData)((IData)(
                                                            ((((((((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q7.data) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q7__data__0)) 
                                                                  << 0x1fU) 
                                                                 | (((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q6.data) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q6__data__0)) 
                                                                    << 0x1eU)) 
                                                                | ((((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q5.data) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q5__data__0)) 
                                                                    << 0x1dU) 
                                                                   | (((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q4.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q4__data__0)) 
                                                                      << 0x1cU))) 
                                                               | (((((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q3.data) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q3__data__0)) 
                                                                    << 0x1bU) 
                                                                   | (((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q2.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q2__data__0)) 
                                                                      << 0x1aU)) 
                                                                  | ((((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q1.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q1__data__0)) 
                                                                      << 0x19U) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q0.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q0__data__0)) 
                                                                        << 0x18U)))) 
                                                              | ((((((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q15.data) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q15__data__0)) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q14.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q14__data__0)) 
                                                                      << 0x16U)) 
                                                                  | ((((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q13.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q13__data__0)) 
                                                                      << 0x15U) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q12.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q12__data__0)) 
                                                                        << 0x14U))) 
                                                                 | (((((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q11.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q11__data__0)) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q10.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q10__data__0)) 
                                                                        << 0x12U)) 
                                                                    | ((((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q9.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q9__data__0)) 
                                                                        << 0x11U) 
                                                                       | (((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q8.data) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q8__data__0)) 
                                                                          << 0x10U))))) 
                                                             | (((((((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q7.data) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q7__data__0)) 
                                                                    << 0xfU) 
                                                                   | (((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q6.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q6__data__0)) 
                                                                      << 0xeU)) 
                                                                  | ((((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q5.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q5__data__0)) 
                                                                      << 0xdU) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q4.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q4__data__0)) 
                                                                        << 0xcU))) 
                                                                 | (((((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q3.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q3__data__0)) 
                                                                      << 0xbU) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q2.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q2__data__0)) 
                                                                        << 0xaU)) 
                                                                    | ((((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q1.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q1__data__0)) 
                                                                        << 9U) 
                                                                       | (((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q0.data) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q0__data__0)) 
                                                                          << 8U)))) 
                                                                | ((((((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q15.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q15__data__0)) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q14.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q14__data__0)) 
                                                                        << 6U)) 
                                                                    | ((((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q13.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q13__data__0)) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q12.data) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q12__data__0)) 
                                                                          << 4U))) 
                                                                   | (((((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q11.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q11__data__0)) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q10.data) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q10__data__0)) 
                                                                          << 2U)) 
                                                                      | ((((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q9.data) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q9__data__0)) 
                                                                          << 1U) 
                                                                         | ((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q8.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q8__data__0))))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((((((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q7.data) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q7__data__0)) 
                                                                   << 0x1fU) 
                                                                  | (((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q6.data) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q6__data__0)) 
                                                                     << 0x1eU)) 
                                                                 | ((((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q5.data) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q5__data__0)) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q4.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q4__data__0)) 
                                                                       << 0x1cU))) 
                                                                | (((((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q3.data) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q3__data__0)) 
                                                                     << 0x1bU) 
                                                                    | (((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q2.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q2__data__0)) 
                                                                       << 0x1aU)) 
                                                                   | ((((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q1.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q1__data__0)) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q0.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q0__data__0)) 
                                                                         << 0x18U)))) 
                                                               | ((((((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q15.data) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q15__data__0)) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q14.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q14__data__0)) 
                                                                       << 0x16U)) 
                                                                   | ((((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q13.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q13__data__0)) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q12.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q12__data__0)) 
                                                                         << 0x14U))) 
                                                                  | (((((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q11.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q11__data__0)) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q10.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q10__data__0)) 
                                                                         << 0x12U)) 
                                                                     | ((((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q9.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q9__data__0)) 
                                                                         << 0x11U) 
                                                                        | (((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q8.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q8__data__0)) 
                                                                           << 0x10U))))) 
                                                              | (((((((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q7.data) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q7__data__0)) 
                                                                     << 0xfU) 
                                                                    | (((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q6.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q6__data__0)) 
                                                                       << 0xeU)) 
                                                                   | ((((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q5.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q5__data__0)) 
                                                                       << 0xdU) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q4.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q4__data__0)) 
                                                                         << 0xcU))) 
                                                                  | (((((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q3.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q3__data__0)) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q2.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q2__data__0)) 
                                                                         << 0xaU)) 
                                                                     | ((((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q1.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q1__data__0)) 
                                                                         << 9U) 
                                                                        | (((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q0.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q0__data__0)) 
                                                                           << 8U)))) 
                                                                 | ((((((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q15.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q15__data__0)) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q14.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q14__data__0)) 
                                                                         << 6U)) 
                                                                     | ((((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q13.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q13__data__0)) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q12.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q12__data__0)) 
                                                                           << 4U))) 
                                                                    | (((((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q11.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q11__data__0)) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q10.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q10__data__0)) 
                                                                           << 2U)) 
                                                                       | ((((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q9.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q9__data__0)) 
                                                                           << 1U) 
                                                                          | ((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q8.data) 
                                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q8__data__0)))))))))));
    vlSelfRef.__VactTriggered.setWord(2U, (((QData)((IData)(
                                                            ((((((((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q7.data) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q7__data__0)) 
                                                                  << 0x1fU) 
                                                                 | (((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q6.data) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q6__data__0)) 
                                                                    << 0x1eU)) 
                                                                | ((((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q5.data) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q5__data__0)) 
                                                                    << 0x1dU) 
                                                                   | (((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q4.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q4__data__0)) 
                                                                      << 0x1cU))) 
                                                               | (((((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q3.data) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q3__data__0)) 
                                                                    << 0x1bU) 
                                                                   | (((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q2.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q2__data__0)) 
                                                                      << 0x1aU)) 
                                                                  | ((((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q1.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q1__data__0)) 
                                                                      << 0x19U) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q0.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q0__data__0)) 
                                                                        << 0x18U)))) 
                                                              | ((((((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q15.data) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q15__data__0)) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q14.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q14__data__0)) 
                                                                      << 0x16U)) 
                                                                  | ((((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q13.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q13__data__0)) 
                                                                      << 0x15U) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q12.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q12__data__0)) 
                                                                        << 0x14U))) 
                                                                 | (((((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q11.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q11__data__0)) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q10.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q10__data__0)) 
                                                                        << 0x12U)) 
                                                                    | ((((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q9.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q9__data__0)) 
                                                                        << 0x11U) 
                                                                       | (((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q8.data) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q8__data__0)) 
                                                                          << 0x10U))))) 
                                                             | (((((((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q7.data) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q7__data__0)) 
                                                                    << 0xfU) 
                                                                   | (((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q6.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q6__data__0)) 
                                                                      << 0xeU)) 
                                                                  | ((((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q5.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q5__data__0)) 
                                                                      << 0xdU) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q4.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q4__data__0)) 
                                                                        << 0xcU))) 
                                                                 | (((((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q3.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q3__data__0)) 
                                                                      << 0xbU) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q2.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q2__data__0)) 
                                                                        << 0xaU)) 
                                                                    | ((((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q1.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q1__data__0)) 
                                                                        << 9U) 
                                                                       | (((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q0.data) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q0__data__0)) 
                                                                          << 8U)))) 
                                                                | ((((((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q15.data) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q15__data__0)) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q14.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q14__data__0)) 
                                                                        << 6U)) 
                                                                    | ((((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q13.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q13__data__0)) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q12.data) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q12__data__0)) 
                                                                          << 4U))) 
                                                                   | (((((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q11.data) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q11__data__0)) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q10.data) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q10__data__0)) 
                                                                          << 2U)) 
                                                                      | ((((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q9.data) 
                                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q9__data__0)) 
                                                                          << 1U) 
                                                                         | ((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q8.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q8__data__0))))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((((((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q7.data) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q7__data__0)) 
                                                                   << 0x1fU) 
                                                                  | (((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q6.data) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q6__data__0)) 
                                                                     << 0x1eU)) 
                                                                 | ((((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q5.data) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q5__data__0)) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q4.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q4__data__0)) 
                                                                       << 0x1cU))) 
                                                                | (((((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q3.data) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q3__data__0)) 
                                                                     << 0x1bU) 
                                                                    | (((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q2.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q2__data__0)) 
                                                                       << 0x1aU)) 
                                                                   | ((((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q1.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q1__data__0)) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q0.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q0__data__0)) 
                                                                         << 0x18U)))) 
                                                               | ((((((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q15.data) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q15__data__0)) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q14.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q14__data__0)) 
                                                                       << 0x16U)) 
                                                                   | ((((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q13.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q13__data__0)) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q12.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q12__data__0)) 
                                                                         << 0x14U))) 
                                                                  | (((((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q11.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q11__data__0)) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q10.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q10__data__0)) 
                                                                         << 0x12U)) 
                                                                     | ((((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q9.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q9__data__0)) 
                                                                         << 0x11U) 
                                                                        | (((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q8.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q8__data__0)) 
                                                                           << 0x10U))))) 
                                                              | (((((((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q7.data) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q7__data__0)) 
                                                                     << 0xfU) 
                                                                    | (((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q6.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q6__data__0)) 
                                                                       << 0xeU)) 
                                                                   | ((((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q5.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q5__data__0)) 
                                                                       << 0xdU) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q4.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q4__data__0)) 
                                                                         << 0xcU))) 
                                                                  | (((((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q3.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q3__data__0)) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q2.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q2__data__0)) 
                                                                         << 0xaU)) 
                                                                     | ((((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q1.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q1__data__0)) 
                                                                         << 9U) 
                                                                        | (((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q0.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q0__data__0)) 
                                                                           << 8U)))) 
                                                                 | ((((((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q15.data) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q15__data__0)) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q14.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q14__data__0)) 
                                                                         << 6U)) 
                                                                     | ((((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q13.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q13__data__0)) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q12.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q12__data__0)) 
                                                                           << 4U))) 
                                                                    | (((((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q11.data) 
                                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q11__data__0)) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q10.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q10__data__0)) 
                                                                           << 2U)) 
                                                                       | ((((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q9.data) 
                                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q9__data__0)) 
                                                                           << 1U) 
                                                                          | ((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q8.data) 
                                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q8__data__0)))))))))));
    vlSelfRef.__VactTriggered.setBit(0xc0U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q8.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q8__data__0)));
    vlSelfRef.__VactTriggered.setBit(0xc1U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q9.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q9__data__0)));
    vlSelfRef.__VactTriggered.setBit(0xc2U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q10.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q10__data__0)));
    vlSelfRef.__VactTriggered.setBit(0xc3U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q11.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q11__data__0)));
    vlSelfRef.__VactTriggered.setBit(0xc4U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q12.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q12__data__0)));
    vlSelfRef.__VactTriggered.setBit(0xc5U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q13.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q13__data__0)));
    vlSelfRef.__VactTriggered.setBit(0xc6U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q14.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q14__data__0)));
    vlSelfRef.__VactTriggered.setBit(0xc7U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q15.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q15__data__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u0__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u0.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u1__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u1.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u2__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u2.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u3__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u3.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u4__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u4.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u5__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u5.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u6__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u6.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u7__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u7.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u8__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u8.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u9__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u9.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u10__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u10.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u11__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u11.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u12__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u12.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u13__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u13.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u14__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u14.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u15__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u15.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u16__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u16.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u17__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u17.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u18__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u18.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u19__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u19.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u20__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u20.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u21__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u21.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u22__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u22.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u23__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u23.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u24__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u24.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u25__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u25.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u26__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u26.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u27__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u27.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u28__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u28.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u29__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u29.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u30__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u30.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u31__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u31.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u32__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u32.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u33__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u33.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u34__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u34.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u35__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u35.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u36__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u36.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u37__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u37.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u38__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u38.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u39__data__0 
        = vlSymsp->TOP__aes_main__DOT__a0__DOT__u39.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q0__data__0 
        = vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q0.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q1__data__0 
        = vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q1.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q2__data__0 
        = vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q2.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q3__data__0 
        = vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q3.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q4__data__0 
        = vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q4.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q5__data__0 
        = vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q5.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q6__data__0 
        = vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q6.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q7__data__0 
        = vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q7.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q8__data__0 
        = vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q8.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q9__data__0 
        = vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q9.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q10__data__0 
        = vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q10.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q11__data__0 
        = vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q11.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q12__data__0 
        = vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q12.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q13__data__0 
        = vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q13.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q14__data__0 
        = vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q14.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r0__DOT__a1__DOT__q15__data__0 
        = vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q15.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q0__data__0 
        = vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q0.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q1__data__0 
        = vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q1.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q2__data__0 
        = vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q2.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q3__data__0 
        = vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q3.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q4__data__0 
        = vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q4.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q5__data__0 
        = vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q5.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q6__data__0 
        = vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q6.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q7__data__0 
        = vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q7.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q8__data__0 
        = vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q8.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q9__data__0 
        = vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q9.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q10__data__0 
        = vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q10.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q11__data__0 
        = vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q11.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q12__data__0 
        = vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q12.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q13__data__0 
        = vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q13.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q14__data__0 
        = vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q14.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r1__DOT__a1__DOT__q15__data__0 
        = vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q15.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q0__data__0 
        = vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q0.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q1__data__0 
        = vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q1.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q2__data__0 
        = vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q2.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q3__data__0 
        = vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q3.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q4__data__0 
        = vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q4.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q5__data__0 
        = vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q5.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q6__data__0 
        = vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q6.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q7__data__0 
        = vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q7.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q8__data__0 
        = vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q8.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q9__data__0 
        = vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q9.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q10__data__0 
        = vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q10.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q11__data__0 
        = vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q11.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q12__data__0 
        = vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q12.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q13__data__0 
        = vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q13.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q14__data__0 
        = vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q14.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r2__DOT__a1__DOT__q15__data__0 
        = vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q15.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q0__data__0 
        = vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q0.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q1__data__0 
        = vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q1.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q2__data__0 
        = vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q2.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q3__data__0 
        = vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q3.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q4__data__0 
        = vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q4.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q5__data__0 
        = vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q5.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q6__data__0 
        = vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q6.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q7__data__0 
        = vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q7.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q8__data__0 
        = vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q8.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q9__data__0 
        = vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q9.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q10__data__0 
        = vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q10.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q11__data__0 
        = vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q11.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q12__data__0 
        = vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q12.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q13__data__0 
        = vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q13.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q14__data__0 
        = vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q14.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r3__DOT__a1__DOT__q15__data__0 
        = vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q15.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q0__data__0 
        = vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q0.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q1__data__0 
        = vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q1.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q2__data__0 
        = vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q2.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q3__data__0 
        = vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q3.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q4__data__0 
        = vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q4.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q5__data__0 
        = vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q5.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q6__data__0 
        = vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q6.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q7__data__0 
        = vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q7.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q8__data__0 
        = vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q8.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q9__data__0 
        = vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q9.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q10__data__0 
        = vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q10.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q11__data__0 
        = vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q11.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q12__data__0 
        = vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q12.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q13__data__0 
        = vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q13.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q14__data__0 
        = vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q14.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r4__DOT__a1__DOT__q15__data__0 
        = vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q15.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q0__data__0 
        = vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q0.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q1__data__0 
        = vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q1.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q2__data__0 
        = vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q2.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q3__data__0 
        = vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q3.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q4__data__0 
        = vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q4.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q5__data__0 
        = vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q5.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q6__data__0 
        = vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q6.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q7__data__0 
        = vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q7.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q8__data__0 
        = vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q8.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q9__data__0 
        = vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q9.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q10__data__0 
        = vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q10.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q11__data__0 
        = vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q11.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q12__data__0 
        = vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q12.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q13__data__0 
        = vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q13.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q14__data__0 
        = vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q14.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r5__DOT__a1__DOT__q15__data__0 
        = vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q15.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q0__data__0 
        = vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q0.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q1__data__0 
        = vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q1.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q2__data__0 
        = vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q2.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q3__data__0 
        = vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q3.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q4__data__0 
        = vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q4.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q5__data__0 
        = vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q5.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q6__data__0 
        = vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q6.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q7__data__0 
        = vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q7.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q8__data__0 
        = vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q8.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q9__data__0 
        = vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q9.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q10__data__0 
        = vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q10.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q11__data__0 
        = vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q11.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q12__data__0 
        = vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q12.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q13__data__0 
        = vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q13.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q14__data__0 
        = vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q14.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r6__DOT__a1__DOT__q15__data__0 
        = vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q15.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q0__data__0 
        = vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q0.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q1__data__0 
        = vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q1.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q2__data__0 
        = vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q2.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q3__data__0 
        = vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q3.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q4__data__0 
        = vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q4.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q5__data__0 
        = vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q5.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q6__data__0 
        = vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q6.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q7__data__0 
        = vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q7.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q8__data__0 
        = vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q8.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q9__data__0 
        = vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q9.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q10__data__0 
        = vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q10.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q11__data__0 
        = vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q11.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q12__data__0 
        = vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q12.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q13__data__0 
        = vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q13.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q14__data__0 
        = vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q14.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r7__DOT__a1__DOT__q15__data__0 
        = vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q15.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q0__data__0 
        = vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q0.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q1__data__0 
        = vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q1.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q2__data__0 
        = vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q2.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q3__data__0 
        = vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q3.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q4__data__0 
        = vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q4.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q5__data__0 
        = vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q5.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q6__data__0 
        = vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q6.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q7__data__0 
        = vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q7.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q8__data__0 
        = vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q8.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q9__data__0 
        = vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q9.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q10__data__0 
        = vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q10.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q11__data__0 
        = vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q11.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q12__data__0 
        = vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q12.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q13__data__0 
        = vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q13.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q14__data__0 
        = vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q14.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r8__DOT__a1__DOT__q15__data__0 
        = vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q15.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q0__data__0 
        = vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q0.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q1__data__0 
        = vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q1.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q2__data__0 
        = vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q2.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q3__data__0 
        = vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q3.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q4__data__0 
        = vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q4.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q5__data__0 
        = vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q5.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q6__data__0 
        = vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q6.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q7__data__0 
        = vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q7.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q8__data__0 
        = vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q8.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q9__data__0 
        = vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q9.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q10__data__0 
        = vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q10.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q11__data__0 
        = vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q11.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q12__data__0 
        = vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q12.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q13__data__0 
        = vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q13.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q14__data__0 
        = vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q14.data;
    vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q15__data__0 
        = vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q15.data;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
        vlSelfRef.__VactTriggered.setBit(4U, 1U);
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
        vlSelfRef.__VactTriggered.setBit(6U, 1U);
        vlSelfRef.__VactTriggered.setBit(7U, 1U);
        vlSelfRef.__VactTriggered.setBit(8U, 1U);
        vlSelfRef.__VactTriggered.setBit(9U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xaU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xbU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xcU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xdU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xeU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xfU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x10U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x11U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x12U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x13U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x14U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x15U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x16U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x17U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x18U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x19U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1aU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1bU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1cU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1dU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1eU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1fU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x20U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x21U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x22U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x23U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x24U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x25U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x26U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x27U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x28U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x29U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x2aU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x2bU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x2cU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x2dU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x2eU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x2fU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x30U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x31U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x32U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x33U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x34U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x35U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x36U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x37U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x38U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x39U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x3aU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x3bU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x3cU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x3dU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x3eU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x3fU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x40U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x41U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x42U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x43U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x44U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x45U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x46U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x47U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x48U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x49U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x4aU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x4bU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x4cU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x4dU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x4eU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x4fU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x50U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x51U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x52U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x53U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x54U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x55U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x56U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x57U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x58U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x59U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x5aU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x5bU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x5cU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x5dU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x5eU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x5fU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x60U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x61U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x62U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x63U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x64U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x65U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x66U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x67U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x68U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x69U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x6aU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x6bU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x6cU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x6dU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x6eU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x6fU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x70U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x71U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x72U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x73U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x74U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x75U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x76U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x77U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x78U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x79U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x7aU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x7bU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x7cU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x7dU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x7eU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x7fU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x80U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x81U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x82U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x83U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x84U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x85U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x86U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x87U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x88U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x89U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x8aU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x8bU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x8cU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x8dU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x8eU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x8fU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x90U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x91U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x92U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x93U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x94U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x95U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x96U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x97U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x98U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x99U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x9aU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x9bU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x9cU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x9dU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x9eU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x9fU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xa0U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xa1U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xa2U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xa3U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xa4U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xa5U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xa6U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xa7U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xa8U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xa9U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xaaU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xabU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xacU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xadU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xaeU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xafU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xb0U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xb1U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xb2U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xb3U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xb4U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xb5U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xb6U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xb7U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xb8U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xb9U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xbaU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xbbU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xbcU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xbdU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xbeU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xbfU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xc0U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xc1U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xc2U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xc3U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xc4U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xc5U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xc6U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xc7U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaes_key_expand_128___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q0__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q1__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q2__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q3__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q4__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q5__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q6__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q7__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q8__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q9__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q10__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q11__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q12__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q13__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q14__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q15__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u36__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u37__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u38__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u39__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u32__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u33__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u34__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u35__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u28__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u29__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u30__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u31__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q0__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q1__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q2__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q3__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q4__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q5__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q6__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q7__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q8__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q9__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q10__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q11__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q12__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q13__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q14__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q15__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q0__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q1__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q2__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q3__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q4__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q5__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q6__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q7__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q8__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q9__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q10__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q11__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q12__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q13__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q14__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q15__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q0__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q1__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q2__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q3__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q4__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q5__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q6__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q7__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q8__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q9__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q10__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q11__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q12__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q13__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q14__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q15__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q0__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q1__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q2__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q3__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q4__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q5__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q6__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q7__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q8__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q9__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q10__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q11__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q12__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q13__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q14__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q15__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q0__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q1__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q2__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q3__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q4__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q5__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q6__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q7__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q8__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q9__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q10__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q11__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q12__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q13__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q14__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q15__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q0__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q1__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q2__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q3__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q4__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q5__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q6__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q7__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q8__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q9__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q10__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q11__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q12__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q13__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q14__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q15__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q0__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q1__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q2__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q3__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q4__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q5__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q6__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q7__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q8__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q9__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q10__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q11__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q12__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q13__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q14__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q15__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q0__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q1__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q2__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q3__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q4__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q5__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q6__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q7__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q8__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q9__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q10__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q11__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q12__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q13__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q14__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q15__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q0__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q1__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q2__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q3__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q4__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q5__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q6__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q7__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q8__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q9__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q10__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q11__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q12__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q13__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q14__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q15__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u24__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u25__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u26__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u27__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u20__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u21__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u22__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u23__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u16__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u17__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u18__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u19__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u12__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u13__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u14__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u15__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u8__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u9__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u10__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u11__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u4__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u5__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u6__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u7__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u0__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u1__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u2__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u3__0(Vaes_key_expand_128_sbox* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__0(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__1(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__2(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__3(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__4(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__5(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__6(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__7(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__8(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__9(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__10(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__11(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__12(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__13(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__14(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__15(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__16(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__17(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__18(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__19(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__20(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__21(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__22(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__23(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__24(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__25(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__26(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__27(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__28(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__29(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__30(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__31(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__32(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__33(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__34(Vaes_key_expand_128___024root* vlSelf);
void Vaes_key_expand_128___024root___nba_comb__TOP__35(Vaes_key_expand_128___024root* vlSelf);

void Vaes_key_expand_128___024root___eval_nba(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___eval_nba\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x100000000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q0__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q0));
    }
    if ((0x200000000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q1__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q1));
    }
    if ((0x400000000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q2__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q2));
    }
    if ((0x800000000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q3__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q3));
    }
    if ((0x1000000000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q4__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q4));
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q5__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q5));
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q6__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q6));
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q7__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q7));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(3U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q8__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q8));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(3U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q9__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q9));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(3U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q10__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q10));
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(3U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q11__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q11));
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(3U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q12__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q12));
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(3U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q13__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q13));
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(3U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q14__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q14));
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(3U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q15__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q15));
    }
    if ((0x1000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u36__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u36));
    }
    if ((0x2000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u37__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u37));
    }
    if ((0x4000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u38__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u38));
    }
    if ((0x8000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u39__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u39));
    }
    if ((0x100000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u32__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u32));
    }
    if ((0x200000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u33__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u33));
    }
    if ((0x400000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u34__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u34));
    }
    if ((0x800000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u35__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u35));
    }
    if ((0x10000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u28__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u28));
    }
    if ((0x20000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u29__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u29));
    }
    if ((0x40000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u30__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u30));
    }
    if ((0x80000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u31__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u31));
    }
    if ((0x10000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q0__0((&vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q0));
    }
    if ((0x20000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q1__0((&vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q1));
    }
    if ((0x40000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q2__0((&vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q2));
    }
    if ((0x80000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q3__0((&vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q3));
    }
    if ((0x100000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q4__0((&vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q4));
    }
    if ((0x200000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q5__0((&vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q5));
    }
    if ((0x400000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q6__0((&vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q6));
    }
    if ((0x800000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q7__0((&vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q7));
    }
    if ((0x1000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q8__0((&vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q8));
    }
    if ((0x2000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q9__0((&vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q9));
    }
    if ((0x4000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q10__0((&vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q10));
    }
    if ((0x8000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q11__0((&vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q11));
    }
    if ((0x10000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q12__0((&vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q12));
    }
    if ((0x20000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q13__0((&vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q13));
    }
    if ((0x40000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q14__0((&vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q14));
    }
    if ((0x80000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r0__DOT__a1__DOT__q15__0((&vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q15));
    }
    if ((0x100000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q0__0((&vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q0));
    }
    if ((0x200000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q1__0((&vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q1));
    }
    if ((0x400000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q2__0((&vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q2));
    }
    if ((0x800000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q3__0((&vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q3));
    }
    if ((0x1000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q4__0((&vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q4));
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q5__0((&vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q5));
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q6__0((&vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q6));
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q7__0((&vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q7));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q8__0((&vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q8));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q9__0((&vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q9));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q10__0((&vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q10));
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q11__0((&vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q11));
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q12__0((&vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q12));
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q13__0((&vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q13));
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q14__0((&vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q14));
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r1__DOT__a1__DOT__q15__0((&vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q15));
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q0__0((&vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q0));
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q1__0((&vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q1));
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q2__0((&vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q2));
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q3__0((&vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q3));
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q4__0((&vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q4));
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q5__0((&vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q5));
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q6__0((&vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q6));
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q7__0((&vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q7));
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q8__0((&vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q8));
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q9__0((&vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q9));
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q10__0((&vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q10));
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q11__0((&vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q11));
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q12__0((&vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q12));
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q13__0((&vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q13));
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q14__0((&vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q14));
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r2__DOT__a1__DOT__q15__0((&vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q15));
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q0__0((&vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q0));
    }
    if ((0x2000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q1__0((&vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q1));
    }
    if ((0x4000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q2__0((&vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q2));
    }
    if ((0x8000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q3__0((&vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q3));
    }
    if ((0x10000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q4__0((&vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q4));
    }
    if ((0x20000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q5__0((&vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q5));
    }
    if ((0x40000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q6__0((&vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q6));
    }
    if ((0x80000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q7__0((&vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q7));
    }
    if ((0x100000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q8__0((&vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q8));
    }
    if ((0x200000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q9__0((&vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q9));
    }
    if ((0x400000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q10__0((&vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q10));
    }
    if ((0x800000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q11__0((&vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q11));
    }
    if ((0x1000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q12__0((&vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q12));
    }
    if ((0x2000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q13__0((&vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q13));
    }
    if ((0x4000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q14__0((&vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q14));
    }
    if ((0x8000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r3__DOT__a1__DOT__q15__0((&vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q15));
    }
    if ((0x10000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q0__0((&vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q0));
    }
    if ((0x20000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q1__0((&vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q1));
    }
    if ((0x40000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q2__0((&vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q2));
    }
    if ((0x80000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q3__0((&vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q3));
    }
    if ((0x100000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q4__0((&vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q4));
    }
    if ((0x200000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q5__0((&vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q5));
    }
    if ((0x400000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q6__0((&vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q6));
    }
    if ((0x800000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q7__0((&vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q7));
    }
    if ((0x1000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q8__0((&vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q8));
    }
    if ((0x2000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q9__0((&vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q9));
    }
    if ((0x4000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q10__0((&vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q10));
    }
    if ((0x8000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q11__0((&vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q11));
    }
    if ((0x10000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q12__0((&vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q12));
    }
    if ((0x20000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q13__0((&vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q13));
    }
    if ((0x40000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q14__0((&vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q14));
    }
    if ((0x80000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r4__DOT__a1__DOT__q15__0((&vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q15));
    }
    if ((0x100000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q0__0((&vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q0));
    }
    if ((0x200000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q1__0((&vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q1));
    }
    if ((0x400000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q2__0((&vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q2));
    }
    if ((0x800000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q3__0((&vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q3));
    }
    if ((0x1000000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q4__0((&vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q4));
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q5__0((&vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q5));
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q6__0((&vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q6));
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q7__0((&vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q7));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q8__0((&vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q8));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q9__0((&vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q9));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q10__0((&vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q10));
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q11__0((&vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q11));
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q12__0((&vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q12));
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q13__0((&vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q13));
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q14__0((&vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q14));
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r5__DOT__a1__DOT__q15__0((&vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q15));
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q0__0((&vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q0));
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q1__0((&vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q1));
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q2__0((&vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q2));
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q3__0((&vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q3));
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q4__0((&vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q4));
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q5__0((&vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q5));
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q6__0((&vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q6));
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q7__0((&vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q7));
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q8__0((&vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q8));
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q9__0((&vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q9));
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q10__0((&vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q10));
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q11__0((&vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q11));
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q12__0((&vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q12));
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q13__0((&vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q13));
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q14__0((&vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q14));
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r6__DOT__a1__DOT__q15__0((&vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q15));
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q0__0((&vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q0));
    }
    if ((0x2000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q1__0((&vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q1));
    }
    if ((0x4000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q2__0((&vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q2));
    }
    if ((0x8000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q3__0((&vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q3));
    }
    if ((0x10000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q4__0((&vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q4));
    }
    if ((0x20000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q5__0((&vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q5));
    }
    if ((0x40000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q6__0((&vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q6));
    }
    if ((0x80000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q7__0((&vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q7));
    }
    if ((0x100000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q8__0((&vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q8));
    }
    if ((0x200000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q9__0((&vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q9));
    }
    if ((0x400000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q10__0((&vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q10));
    }
    if ((0x800000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q11__0((&vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q11));
    }
    if ((0x1000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q12__0((&vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q12));
    }
    if ((0x2000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q13__0((&vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q13));
    }
    if ((0x4000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q14__0((&vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q14));
    }
    if ((0x8000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r7__DOT__a1__DOT__q15__0((&vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q15));
    }
    if ((0x10000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q0__0((&vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q0));
    }
    if ((0x20000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q1__0((&vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q1));
    }
    if ((0x40000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q2__0((&vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q2));
    }
    if ((0x80000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q3__0((&vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q3));
    }
    if ((0x100000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q4__0((&vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q4));
    }
    if ((0x200000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q5__0((&vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q5));
    }
    if ((0x400000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q6__0((&vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q6));
    }
    if ((0x800000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q7__0((&vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q7));
    }
    if ((0x1000000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q8__0((&vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q8));
    }
    if ((0x2000000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q9__0((&vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q9));
    }
    if ((0x4000000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q10__0((&vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q10));
    }
    if ((0x8000000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q11__0((&vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q11));
    }
    if ((0x10000000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q12__0((&vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q12));
    }
    if ((0x20000000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q13__0((&vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q13));
    }
    if ((0x40000000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q14__0((&vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q14));
    }
    if ((0x80000000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__r8__DOT__a1__DOT__q15__0((&vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q15));
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u24__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u24));
    }
    if ((0x2000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u25__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u25));
    }
    if ((0x4000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u26__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u26));
    }
    if ((0x8000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u27__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u27));
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u20__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u20));
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u21__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u21));
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u22__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u22));
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u23__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u23));
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u16__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u16));
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u17__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u17));
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u18__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u18));
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u19__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u19));
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u12__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u12));
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u13__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u13));
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u14__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u14));
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u15__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u15));
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u8__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u8));
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u9__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u9));
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u10__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u10));
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u11__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u11));
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u4__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u4));
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u5__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u5));
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u6__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u6));
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u7__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u7));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u0__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u0));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u1__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u1));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u2__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u2));
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u3__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u3));
    }
    if ((0xf000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0xf00000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0xf0000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0xffff0000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__3(vlSelf);
    }
    if (((0xffULL & vlSelfRef.__VnbaTriggered.word(1U)) 
         | (0xff00000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U)))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0xffff00ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0xffff000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0xffff0000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__7(vlSelf);
    }
    if (((0xff00000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U)) 
         | (0xffULL & vlSelfRef.__VnbaTriggered.word(2U)))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0xffff00ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0xffff000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0xffff0000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((0xf000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__12(vlSelf);
    }
    if ((0xf00000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__13(vlSelf);
    }
    if ((0xf0000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__14(vlSelf);
    }
    if ((0xf000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((0xf00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__16(vlSelf);
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__17(vlSelf);
    }
    if ((0xffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__18(vlSelf);
    }
    if ((0xffff000000000fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__19(vlSelf);
    }
    if ((0xfffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__20(vlSelf);
    }
    if (((0xffULL & vlSelfRef.__VnbaTriggered.word(1U)) 
         | (0xff000000000000ffULL & vlSelfRef.__VnbaTriggered.word(0U)))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__21(vlSelf);
    }
    if ((0xffffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__22(vlSelf);
    }
    if (((0xffff00ULL & vlSelfRef.__VnbaTriggered.word(1U)) 
         | (0xfffULL & vlSelfRef.__VnbaTriggered.word(0U)))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__23(vlSelf);
    }
    if ((0xfffffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__24(vlSelf);
    }
    if (((0xffff000000ULL & vlSelfRef.__VnbaTriggered.word(1U)) 
         | (0xffffULL & vlSelfRef.__VnbaTriggered.word(0U)))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__25(vlSelf);
    }
    if ((0xffffffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__26(vlSelf);
    }
    if (((0xffff0000000000ULL & vlSelfRef.__VnbaTriggered.word(1U)) 
         | (0xfffffULL & vlSelfRef.__VnbaTriggered.word(0U)))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__27(vlSelf);
    }
    if ((0xfffffffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__28(vlSelf);
    }
    if ((((0xff00000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U)) 
          | (0xffULL & vlSelfRef.__VnbaTriggered.word(2U))) 
         | (0xffffffULL & vlSelfRef.__VnbaTriggered.word(0U)))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__29(vlSelf);
    }
    if ((0xffffffffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__30(vlSelf);
    }
    if (((0xffff00ULL & vlSelfRef.__VnbaTriggered.word(2U)) 
         | (0xfffffffULL & vlSelfRef.__VnbaTriggered.word(0U)))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__31(vlSelf);
    }
    if ((0xfffffffffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__32(vlSelf);
    }
    if (((0xffff000000ULL & vlSelfRef.__VnbaTriggered.word(2U)) 
         | (0xffffffffULL & vlSelfRef.__VnbaTriggered.word(0U)))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__33(vlSelf);
    }
    if (((0xffff0000000000ULL & vlSelfRef.__VnbaTriggered.word(2U)) 
         | (0xfffffffffULL & vlSelfRef.__VnbaTriggered.word(0U)))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__34(vlSelf);
    }
    if ((((0xffULL & vlSelfRef.__VnbaTriggered.word(3U)) 
          | (0xff00000000000000ULL & vlSelfRef.__VnbaTriggered.word(2U))) 
         | (0xffffffffffULL & vlSelfRef.__VnbaTriggered.word(0U)))) {
        Vaes_key_expand_128___024root___nba_comb__TOP__35(vlSelf);
    }
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__0(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__0\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__subword10 = (
                                                   (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u36.dout) 
                                                     << 0x18U) 
                                                    | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u37.dout) 
                                                       << 0x10U)) 
                                                   | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u38.dout) 
                                                       << 8U) 
                                                      | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u39.dout)));
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__1(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__1\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__subword9 = ((
                                                   ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u32.dout) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u33.dout) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u34.dout) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u35.dout)));
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__2(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__2\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__subword8 = ((
                                                   ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u28.dout) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u29.dout) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u30.dout) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u31.dout)));
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__3(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__3\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r0__DOT__shift_data_out;
    VL_ZERO_W(128, aes_main__DOT__r0__DOT__shift_data_out);
    // Body
    aes_main__DOT__r0__DOT__shift_data_out[0U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q8.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q7.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q12.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q11.dout)))))));
    aes_main__DOT__r0__DOT__shift_data_out[1U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q8.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q7.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q12.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q11.dout)))))) 
                                                          >> 0x20U));
    aes_main__DOT__r0__DOT__shift_data_out[2U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q0.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q15.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q4.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q3.dout)))))));
    aes_main__DOT__r0__DOT__shift_data_out[3U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q0.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q15.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q4.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r0__DOT__a1__DOT__q3.dout)))))) 
                                                          >> 0x20U));
    VL_ASSIGNSEL_WI(128,8,0x78U, vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__0__i 
                                        = (aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__0__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__0__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__0__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__0__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__0__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__1__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__1__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__1__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__1__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__1__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__1__Vfuncout))) 
                                ^ ((aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r0__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x70U, vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__2__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__2__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__2__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__2__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__2__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__2__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__3__i 
                                    = (0xffU & (aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__3__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__3__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__3__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__3__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__3__Vfuncout))) 
                               ^ ((aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r0__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x68U, vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                     << 0x10U) | (aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__4__i 
                                    = (0xffU & (aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__4__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__4__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__4__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__4__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__4__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__5__i 
                                = (0xffU & aes_main__DOT__r0__DOT__shift_data_out[3U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__5__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__5__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__5__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__5__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__5__Vfuncout))) 
                              ^ aes_main__DOT__r0__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x60U, vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__6__i 
                                        = (aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__6__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__6__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__6__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__6__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__6__Vfuncout)) 
                                 ^ ((aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                     << 8U) | (aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r0__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__7__i 
                            = (0xffU & aes_main__DOT__r0__DOT__shift_data_out[3U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__7__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__7__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__7__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__7__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__7__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x58U, vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__8__i 
                                        = (aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__8__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__8__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__8__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__8__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__8__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__9__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__9__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__9__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__9__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__9__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__9__Vfuncout))) 
                                ^ ((aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r0__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x50U, vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__10__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__10__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__10__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__10__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__10__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__10__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__11__i 
                                    = (0xffU & (aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__11__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__11__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__11__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__11__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__11__Vfuncout))) 
                               ^ ((aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r0__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x48U, vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                     << 0x10U) | (aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__12__i 
                                    = (0xffU & (aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__12__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__12__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__12__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__12__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__12__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__13__i 
                                = (0xffU & aes_main__DOT__r0__DOT__shift_data_out[2U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__13__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__13__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__13__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__13__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__13__Vfuncout))) 
                              ^ aes_main__DOT__r0__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x40U, vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__14__i 
                                        = (aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__14__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__14__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__14__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__14__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__14__Vfuncout)) 
                                 ^ ((aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                     << 8U) | (aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r0__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__15__i 
                            = (0xffU & aes_main__DOT__r0__DOT__shift_data_out[2U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__15__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__15__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__15__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__15__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__15__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x38U, vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__16__i 
                                        = (aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__16__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__16__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__16__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__16__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__16__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__17__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__17__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__17__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__17__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__17__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__17__Vfuncout))) 
                                ^ ((aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r0__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x30U, vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__18__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__18__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__18__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__18__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__18__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__18__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__19__i 
                                    = (0xffU & (aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__19__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__19__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__19__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__19__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__19__Vfuncout))) 
                               ^ ((aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r0__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x28U, vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                     << 0x10U) | (aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__20__i 
                                    = (0xffU & (aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__20__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__20__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__20__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__20__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__20__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__21__i 
                                = (0xffU & aes_main__DOT__r0__DOT__shift_data_out[1U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__21__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__21__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__21__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__21__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__21__Vfuncout))) 
                              ^ aes_main__DOT__r0__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x20U, vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__22__i 
                                        = (aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__22__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__22__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__22__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__22__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__22__Vfuncout)) 
                                 ^ ((aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                     << 8U) | (aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r0__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__23__i 
                            = (0xffU & aes_main__DOT__r0__DOT__shift_data_out[1U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__23__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__23__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__23__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__23__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__23__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x18U, vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__24__i 
                                        = (aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__24__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__24__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__24__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__24__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__24__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__25__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__25__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__25__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__25__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__25__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__25__Vfuncout))) 
                                ^ ((aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r0__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0x10U, vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__26__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__26__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__26__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__26__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__26__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__26__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__27__i 
                                    = (0xffU & (aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__27__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__27__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__27__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__27__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__27__Vfuncout))) 
                               ^ ((aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r0__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,8U, vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                     << 0x10U) | (aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__28__i 
                                    = (0xffU & (aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__28__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__28__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__28__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__28__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__28__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__29__i 
                                = (0xffU & aes_main__DOT__r0__DOT__shift_data_out[0U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__29__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__29__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__29__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__29__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__29__Vfuncout))) 
                              ^ aes_main__DOT__r0__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0U, vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__30__i 
                                        = (aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__30__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__30__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__30__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__30__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__30__Vfuncout)) 
                                 ^ ((aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                     << 8U) | (aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r0__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__31__i 
                            = (0xffU & aes_main__DOT__r0__DOT__shift_data_out[0U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__31__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__31__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__31__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__31__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__m0__DOT__xtime__31__Vfuncout)))));
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__4(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__4\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r1__DOT__shift_data_out;
    VL_ZERO_W(128, aes_main__DOT__r1__DOT__shift_data_out);
    // Body
    aes_main__DOT__r1__DOT__shift_data_out[0U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q8.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q7.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q12.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q11.dout)))))));
    aes_main__DOT__r1__DOT__shift_data_out[1U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q8.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q7.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q12.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q11.dout)))))) 
                                                          >> 0x20U));
    aes_main__DOT__r1__DOT__shift_data_out[2U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q0.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q15.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q4.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q3.dout)))))));
    aes_main__DOT__r1__DOT__shift_data_out[3U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q0.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q15.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q4.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q3.dout)))))) 
                                                          >> 0x20U));
    VL_ASSIGNSEL_WI(128,8,0x78U, vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__32__i 
                                        = (aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__32__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__32__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__32__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__32__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__32__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__33__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__33__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__33__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__33__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__33__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__33__Vfuncout))) 
                                ^ ((aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r1__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x70U, vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__34__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__34__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__34__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__34__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__34__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__34__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__35__i 
                                    = (0xffU & (aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__35__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__35__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__35__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__35__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__35__Vfuncout))) 
                               ^ ((aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r1__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x68U, vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                     << 0x10U) | (aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__36__i 
                                    = (0xffU & (aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__36__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__36__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__36__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__36__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__36__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__37__i 
                                = (0xffU & aes_main__DOT__r1__DOT__shift_data_out[3U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__37__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__37__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__37__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__37__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__37__Vfuncout))) 
                              ^ aes_main__DOT__r1__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x60U, vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__38__i 
                                        = (aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__38__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__38__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__38__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__38__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__38__Vfuncout)) 
                                 ^ ((aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                     << 8U) | (aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r1__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__39__i 
                            = (0xffU & aes_main__DOT__r1__DOT__shift_data_out[3U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__39__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__39__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__39__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__39__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__39__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x58U, vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__40__i 
                                        = (aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__40__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__40__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__40__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__40__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__40__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__41__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__41__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__41__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__41__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__41__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__41__Vfuncout))) 
                                ^ ((aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r1__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x50U, vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__42__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__42__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__42__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__42__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__42__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__42__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__43__i 
                                    = (0xffU & (aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__43__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__43__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__43__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__43__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__43__Vfuncout))) 
                               ^ ((aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r1__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x48U, vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                     << 0x10U) | (aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__44__i 
                                    = (0xffU & (aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__44__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__44__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__44__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__44__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__44__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__45__i 
                                = (0xffU & aes_main__DOT__r1__DOT__shift_data_out[2U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__45__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__45__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__45__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__45__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__45__Vfuncout))) 
                              ^ aes_main__DOT__r1__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x40U, vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__46__i 
                                        = (aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__46__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__46__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__46__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__46__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__46__Vfuncout)) 
                                 ^ ((aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                     << 8U) | (aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r1__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__47__i 
                            = (0xffU & aes_main__DOT__r1__DOT__shift_data_out[2U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__47__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__47__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__47__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__47__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__47__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x38U, vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__48__i 
                                        = (aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__48__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__48__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__48__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__48__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__48__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__49__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__49__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__49__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__49__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__49__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__49__Vfuncout))) 
                                ^ ((aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r1__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x30U, vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__50__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__50__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__50__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__50__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__50__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__50__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__51__i 
                                    = (0xffU & (aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__51__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__51__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__51__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__51__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__51__Vfuncout))) 
                               ^ ((aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r1__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x28U, vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                     << 0x10U) | (aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__52__i 
                                    = (0xffU & (aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__52__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__52__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__52__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__52__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__52__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__53__i 
                                = (0xffU & aes_main__DOT__r1__DOT__shift_data_out[1U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__53__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__53__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__53__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__53__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__53__Vfuncout))) 
                              ^ aes_main__DOT__r1__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x20U, vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__54__i 
                                        = (aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__54__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__54__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__54__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__54__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__54__Vfuncout)) 
                                 ^ ((aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                     << 8U) | (aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r1__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__55__i 
                            = (0xffU & aes_main__DOT__r1__DOT__shift_data_out[1U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__55__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__55__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__55__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__55__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__55__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x18U, vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__56__i 
                                        = (aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__56__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__56__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__56__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__56__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__56__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__57__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__57__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__57__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__57__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__57__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__57__Vfuncout))) 
                                ^ ((aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r1__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0x10U, vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__58__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__58__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__58__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__58__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__58__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__58__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__59__i 
                                    = (0xffU & (aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__59__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__59__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__59__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__59__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__59__Vfuncout))) 
                               ^ ((aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r1__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,8U, vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                     << 0x10U) | (aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__60__i 
                                    = (0xffU & (aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__60__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__60__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__60__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__60__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__60__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__61__i 
                                = (0xffU & aes_main__DOT__r1__DOT__shift_data_out[0U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__61__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__61__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__61__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__61__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__61__Vfuncout))) 
                              ^ aes_main__DOT__r1__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0U, vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__62__i 
                                        = (aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__62__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__62__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__62__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__62__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__62__Vfuncout)) 
                                 ^ ((aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                     << 8U) | (aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r1__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__63__i 
                            = (0xffU & aes_main__DOT__r1__DOT__shift_data_out[0U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__63__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__63__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__63__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__63__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__m0__DOT__xtime__63__Vfuncout)))));
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__5(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__5\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r2__DOT__shift_data_out;
    VL_ZERO_W(128, aes_main__DOT__r2__DOT__shift_data_out);
    // Body
    aes_main__DOT__r2__DOT__shift_data_out[0U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q8.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q7.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q12.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q11.dout)))))));
    aes_main__DOT__r2__DOT__shift_data_out[1U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q8.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q7.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q12.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q11.dout)))))) 
                                                          >> 0x20U));
    aes_main__DOT__r2__DOT__shift_data_out[2U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q0.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q15.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q4.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q3.dout)))))));
    aes_main__DOT__r2__DOT__shift_data_out[3U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q0.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q15.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q4.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q3.dout)))))) 
                                                          >> 0x20U));
    VL_ASSIGNSEL_WI(128,8,0x78U, vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__64__i 
                                        = (aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__64__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__64__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__64__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__64__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__64__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__65__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__65__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__65__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__65__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__65__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__65__Vfuncout))) 
                                ^ ((aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r2__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x70U, vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__66__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__66__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__66__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__66__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__66__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__66__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__67__i 
                                    = (0xffU & (aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__67__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__67__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__67__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__67__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__67__Vfuncout))) 
                               ^ ((aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r2__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x68U, vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                     << 0x10U) | (aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__68__i 
                                    = (0xffU & (aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__68__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__68__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__68__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__68__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__68__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__69__i 
                                = (0xffU & aes_main__DOT__r2__DOT__shift_data_out[3U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__69__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__69__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__69__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__69__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__69__Vfuncout))) 
                              ^ aes_main__DOT__r2__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x60U, vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__70__i 
                                        = (aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__70__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__70__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__70__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__70__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__70__Vfuncout)) 
                                 ^ ((aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                     << 8U) | (aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r2__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__71__i 
                            = (0xffU & aes_main__DOT__r2__DOT__shift_data_out[3U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__71__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__71__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__71__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__71__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__71__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x58U, vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__72__i 
                                        = (aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__72__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__72__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__72__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__72__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__72__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__73__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__73__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__73__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__73__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__73__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__73__Vfuncout))) 
                                ^ ((aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r2__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x50U, vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__74__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__74__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__74__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__74__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__74__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__74__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__75__i 
                                    = (0xffU & (aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__75__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__75__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__75__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__75__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__75__Vfuncout))) 
                               ^ ((aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r2__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x48U, vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                     << 0x10U) | (aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__76__i 
                                    = (0xffU & (aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__76__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__76__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__76__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__76__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__76__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__77__i 
                                = (0xffU & aes_main__DOT__r2__DOT__shift_data_out[2U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__77__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__77__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__77__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__77__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__77__Vfuncout))) 
                              ^ aes_main__DOT__r2__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x40U, vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__78__i 
                                        = (aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__78__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__78__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__78__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__78__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__78__Vfuncout)) 
                                 ^ ((aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                     << 8U) | (aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r2__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__79__i 
                            = (0xffU & aes_main__DOT__r2__DOT__shift_data_out[2U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__79__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__79__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__79__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__79__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__79__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x38U, vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__80__i 
                                        = (aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__80__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__80__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__80__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__80__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__80__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__81__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__81__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__81__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__81__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__81__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__81__Vfuncout))) 
                                ^ ((aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r2__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x30U, vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__82__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__82__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__82__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__82__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__82__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__82__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__83__i 
                                    = (0xffU & (aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__83__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__83__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__83__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__83__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__83__Vfuncout))) 
                               ^ ((aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r2__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x28U, vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                     << 0x10U) | (aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__84__i 
                                    = (0xffU & (aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__84__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__84__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__84__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__84__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__84__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__85__i 
                                = (0xffU & aes_main__DOT__r2__DOT__shift_data_out[1U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__85__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__85__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__85__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__85__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__85__Vfuncout))) 
                              ^ aes_main__DOT__r2__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x20U, vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__86__i 
                                        = (aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__86__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__86__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__86__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__86__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__86__Vfuncout)) 
                                 ^ ((aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                     << 8U) | (aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r2__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__87__i 
                            = (0xffU & aes_main__DOT__r2__DOT__shift_data_out[1U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__87__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__87__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__87__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__87__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__87__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x18U, vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__88__i 
                                        = (aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__88__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__88__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__88__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__88__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__88__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__89__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__89__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__89__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__89__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__89__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__89__Vfuncout))) 
                                ^ ((aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r2__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0x10U, vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__90__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__90__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__90__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__90__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__90__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__90__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__91__i 
                                    = (0xffU & (aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__91__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__91__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__91__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__91__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__91__Vfuncout))) 
                               ^ ((aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r2__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,8U, vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                     << 0x10U) | (aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__92__i 
                                    = (0xffU & (aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__92__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__92__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__92__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__92__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__92__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__93__i 
                                = (0xffU & aes_main__DOT__r2__DOT__shift_data_out[0U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__93__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__93__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__93__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__93__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__93__Vfuncout))) 
                              ^ aes_main__DOT__r2__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0U, vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__94__i 
                                        = (aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__94__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__94__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__94__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__94__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__94__Vfuncout)) 
                                 ^ ((aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                     << 8U) | (aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r2__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__95__i 
                            = (0xffU & aes_main__DOT__r2__DOT__shift_data_out[0U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__95__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__95__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__95__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__95__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__m0__DOT__xtime__95__Vfuncout)))));
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__6(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__6\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r3__DOT__shift_data_out;
    VL_ZERO_W(128, aes_main__DOT__r3__DOT__shift_data_out);
    // Body
    aes_main__DOT__r3__DOT__shift_data_out[0U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q8.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q7.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q12.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q11.dout)))))));
    aes_main__DOT__r3__DOT__shift_data_out[1U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q8.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q7.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q12.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q11.dout)))))) 
                                                          >> 0x20U));
    aes_main__DOT__r3__DOT__shift_data_out[2U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q0.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q15.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q4.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q3.dout)))))));
    aes_main__DOT__r3__DOT__shift_data_out[3U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q0.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q15.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q4.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q3.dout)))))) 
                                                          >> 0x20U));
    VL_ASSIGNSEL_WI(128,8,0x78U, vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__96__i 
                                        = (aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__96__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__96__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__96__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__96__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__96__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__97__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__97__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__97__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__97__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__97__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__97__Vfuncout))) 
                                ^ ((aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r3__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x70U, vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__98__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__98__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__98__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__98__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__98__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__98__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__99__i 
                                    = (0xffU & (aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__99__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__99__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__99__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__99__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__99__Vfuncout))) 
                               ^ ((aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r3__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x68U, vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                     << 0x10U) | (aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__100__i 
                                    = (0xffU & (aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__100__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__100__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__100__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__100__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__100__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__101__i 
                                = (0xffU & aes_main__DOT__r3__DOT__shift_data_out[3U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__101__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__101__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__101__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__101__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__101__Vfuncout))) 
                              ^ aes_main__DOT__r3__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x60U, vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__102__i 
                                        = (aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__102__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__102__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__102__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__102__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__102__Vfuncout)) 
                                 ^ ((aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                     << 8U) | (aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r3__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__103__i 
                            = (0xffU & aes_main__DOT__r3__DOT__shift_data_out[3U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__103__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__103__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__103__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__103__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__103__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x58U, vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__104__i 
                                        = (aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__104__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__104__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__104__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__104__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__104__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__105__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__105__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__105__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__105__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__105__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__105__Vfuncout))) 
                                ^ ((aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r3__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x50U, vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__106__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__106__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__106__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__106__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__106__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__106__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__107__i 
                                    = (0xffU & (aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__107__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__107__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__107__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__107__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__107__Vfuncout))) 
                               ^ ((aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r3__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x48U, vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                     << 0x10U) | (aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__108__i 
                                    = (0xffU & (aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__108__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__108__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__108__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__108__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__108__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__109__i 
                                = (0xffU & aes_main__DOT__r3__DOT__shift_data_out[2U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__109__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__109__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__109__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__109__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__109__Vfuncout))) 
                              ^ aes_main__DOT__r3__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x40U, vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__110__i 
                                        = (aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__110__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__110__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__110__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__110__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__110__Vfuncout)) 
                                 ^ ((aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                     << 8U) | (aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r3__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__111__i 
                            = (0xffU & aes_main__DOT__r3__DOT__shift_data_out[2U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__111__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__111__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__111__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__111__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__111__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x38U, vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__112__i 
                                        = (aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__112__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__112__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__112__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__112__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__112__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__113__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__113__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__113__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__113__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__113__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__113__Vfuncout))) 
                                ^ ((aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r3__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x30U, vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__114__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__114__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__114__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__114__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__114__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__114__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__115__i 
                                    = (0xffU & (aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__115__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__115__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__115__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__115__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__115__Vfuncout))) 
                               ^ ((aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r3__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x28U, vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                     << 0x10U) | (aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__116__i 
                                    = (0xffU & (aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__116__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__116__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__116__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__116__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__116__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__117__i 
                                = (0xffU & aes_main__DOT__r3__DOT__shift_data_out[1U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__117__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__117__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__117__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__117__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__117__Vfuncout))) 
                              ^ aes_main__DOT__r3__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x20U, vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__118__i 
                                        = (aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__118__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__118__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__118__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__118__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__118__Vfuncout)) 
                                 ^ ((aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                     << 8U) | (aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r3__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__119__i 
                            = (0xffU & aes_main__DOT__r3__DOT__shift_data_out[1U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__119__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__119__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__119__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__119__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__119__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x18U, vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__120__i 
                                        = (aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__120__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__120__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__120__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__120__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__120__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__121__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__121__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__121__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__121__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__121__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__121__Vfuncout))) 
                                ^ ((aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r3__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0x10U, vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__122__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__122__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__122__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__122__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__122__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__122__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__123__i 
                                    = (0xffU & (aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__123__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__123__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__123__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__123__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__123__Vfuncout))) 
                               ^ ((aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r3__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,8U, vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                     << 0x10U) | (aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__124__i 
                                    = (0xffU & (aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__124__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__124__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__124__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__124__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__124__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__125__i 
                                = (0xffU & aes_main__DOT__r3__DOT__shift_data_out[0U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__125__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__125__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__125__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__125__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__125__Vfuncout))) 
                              ^ aes_main__DOT__r3__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0U, vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__126__i 
                                        = (aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__126__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__126__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__126__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__126__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__126__Vfuncout)) 
                                 ^ ((aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                     << 8U) | (aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r3__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__127__i 
                            = (0xffU & aes_main__DOT__r3__DOT__shift_data_out[0U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__127__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__127__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__127__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__127__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__m0__DOT__xtime__127__Vfuncout)))));
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__7(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__7\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r4__DOT__shift_data_out;
    VL_ZERO_W(128, aes_main__DOT__r4__DOT__shift_data_out);
    // Body
    aes_main__DOT__r4__DOT__shift_data_out[0U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q8.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q7.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q12.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q11.dout)))))));
    aes_main__DOT__r4__DOT__shift_data_out[1U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q8.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q7.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q12.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q11.dout)))))) 
                                                          >> 0x20U));
    aes_main__DOT__r4__DOT__shift_data_out[2U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q0.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q15.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q4.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q3.dout)))))));
    aes_main__DOT__r4__DOT__shift_data_out[3U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q0.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q15.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q4.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q3.dout)))))) 
                                                          >> 0x20U));
    VL_ASSIGNSEL_WI(128,8,0x78U, vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__128__i 
                                        = (aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__128__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__128__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__128__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__128__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__128__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__129__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__129__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__129__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__129__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__129__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__129__Vfuncout))) 
                                ^ ((aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r4__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x70U, vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__130__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__130__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__130__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__130__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__130__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__130__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__131__i 
                                    = (0xffU & (aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__131__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__131__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__131__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__131__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__131__Vfuncout))) 
                               ^ ((aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r4__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x68U, vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                     << 0x10U) | (aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__132__i 
                                    = (0xffU & (aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__132__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__132__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__132__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__132__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__132__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__133__i 
                                = (0xffU & aes_main__DOT__r4__DOT__shift_data_out[3U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__133__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__133__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__133__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__133__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__133__Vfuncout))) 
                              ^ aes_main__DOT__r4__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x60U, vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__134__i 
                                        = (aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__134__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__134__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__134__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__134__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__134__Vfuncout)) 
                                 ^ ((aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                     << 8U) | (aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r4__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__135__i 
                            = (0xffU & aes_main__DOT__r4__DOT__shift_data_out[3U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__135__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__135__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__135__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__135__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__135__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x58U, vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__136__i 
                                        = (aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__136__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__136__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__136__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__136__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__136__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__137__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__137__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__137__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__137__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__137__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__137__Vfuncout))) 
                                ^ ((aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r4__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x50U, vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__138__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__138__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__138__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__138__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__138__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__138__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__139__i 
                                    = (0xffU & (aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__139__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__139__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__139__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__139__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__139__Vfuncout))) 
                               ^ ((aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r4__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x48U, vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                     << 0x10U) | (aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__140__i 
                                    = (0xffU & (aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__140__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__140__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__140__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__140__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__140__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__141__i 
                                = (0xffU & aes_main__DOT__r4__DOT__shift_data_out[2U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__141__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__141__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__141__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__141__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__141__Vfuncout))) 
                              ^ aes_main__DOT__r4__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x40U, vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__142__i 
                                        = (aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__142__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__142__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__142__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__142__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__142__Vfuncout)) 
                                 ^ ((aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                     << 8U) | (aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r4__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__143__i 
                            = (0xffU & aes_main__DOT__r4__DOT__shift_data_out[2U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__143__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__143__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__143__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__143__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__143__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x38U, vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__144__i 
                                        = (aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__144__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__144__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__144__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__144__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__144__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__145__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__145__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__145__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__145__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__145__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__145__Vfuncout))) 
                                ^ ((aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r4__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x30U, vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__146__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__146__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__146__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__146__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__146__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__146__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__147__i 
                                    = (0xffU & (aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__147__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__147__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__147__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__147__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__147__Vfuncout))) 
                               ^ ((aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r4__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x28U, vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                     << 0x10U) | (aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__148__i 
                                    = (0xffU & (aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__148__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__148__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__148__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__148__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__148__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__149__i 
                                = (0xffU & aes_main__DOT__r4__DOT__shift_data_out[1U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__149__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__149__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__149__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__149__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__149__Vfuncout))) 
                              ^ aes_main__DOT__r4__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x20U, vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__150__i 
                                        = (aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__150__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__150__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__150__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__150__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__150__Vfuncout)) 
                                 ^ ((aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                     << 8U) | (aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r4__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__151__i 
                            = (0xffU & aes_main__DOT__r4__DOT__shift_data_out[1U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__151__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__151__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__151__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__151__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__151__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x18U, vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__152__i 
                                        = (aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__152__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__152__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__152__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__152__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__152__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__153__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__153__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__153__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__153__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__153__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__153__Vfuncout))) 
                                ^ ((aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r4__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0x10U, vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__154__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__154__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__154__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__154__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__154__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__154__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__155__i 
                                    = (0xffU & (aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__155__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__155__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__155__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__155__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__155__Vfuncout))) 
                               ^ ((aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r4__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,8U, vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                     << 0x10U) | (aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__156__i 
                                    = (0xffU & (aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__156__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__156__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__156__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__156__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__156__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__157__i 
                                = (0xffU & aes_main__DOT__r4__DOT__shift_data_out[0U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__157__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__157__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__157__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__157__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__157__Vfuncout))) 
                              ^ aes_main__DOT__r4__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0U, vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__158__i 
                                        = (aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__158__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__158__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__158__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__158__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__158__Vfuncout)) 
                                 ^ ((aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                     << 8U) | (aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r4__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__159__i 
                            = (0xffU & aes_main__DOT__r4__DOT__shift_data_out[0U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__159__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__159__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__159__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__159__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__m0__DOT__xtime__159__Vfuncout)))));
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__8(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__8\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r5__DOT__shift_data_out;
    VL_ZERO_W(128, aes_main__DOT__r5__DOT__shift_data_out);
    // Body
    aes_main__DOT__r5__DOT__shift_data_out[0U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q8.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q7.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q12.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q11.dout)))))));
    aes_main__DOT__r5__DOT__shift_data_out[1U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q8.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q7.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q12.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q11.dout)))))) 
                                                          >> 0x20U));
    aes_main__DOT__r5__DOT__shift_data_out[2U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q0.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q15.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q4.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q3.dout)))))));
    aes_main__DOT__r5__DOT__shift_data_out[3U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q0.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q15.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q4.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q3.dout)))))) 
                                                          >> 0x20U));
    VL_ASSIGNSEL_WI(128,8,0x78U, vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__160__i 
                                        = (aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__160__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__160__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__160__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__160__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__160__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__161__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__161__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__161__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__161__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__161__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__161__Vfuncout))) 
                                ^ ((aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r5__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x70U, vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__162__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__162__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__162__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__162__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__162__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__162__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__163__i 
                                    = (0xffU & (aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__163__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__163__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__163__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__163__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__163__Vfuncout))) 
                               ^ ((aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r5__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x68U, vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                     << 0x10U) | (aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__164__i 
                                    = (0xffU & (aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__164__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__164__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__164__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__164__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__164__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__165__i 
                                = (0xffU & aes_main__DOT__r5__DOT__shift_data_out[3U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__165__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__165__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__165__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__165__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__165__Vfuncout))) 
                              ^ aes_main__DOT__r5__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x60U, vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__166__i 
                                        = (aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__166__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__166__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__166__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__166__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__166__Vfuncout)) 
                                 ^ ((aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                     << 8U) | (aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r5__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__167__i 
                            = (0xffU & aes_main__DOT__r5__DOT__shift_data_out[3U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__167__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__167__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__167__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__167__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__167__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x58U, vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__168__i 
                                        = (aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__168__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__168__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__168__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__168__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__168__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__169__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__169__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__169__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__169__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__169__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__169__Vfuncout))) 
                                ^ ((aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r5__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x50U, vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__170__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__170__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__170__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__170__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__170__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__170__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__171__i 
                                    = (0xffU & (aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__171__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__171__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__171__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__171__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__171__Vfuncout))) 
                               ^ ((aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r5__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x48U, vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                     << 0x10U) | (aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__172__i 
                                    = (0xffU & (aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__172__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__172__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__172__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__172__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__172__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__173__i 
                                = (0xffU & aes_main__DOT__r5__DOT__shift_data_out[2U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__173__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__173__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__173__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__173__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__173__Vfuncout))) 
                              ^ aes_main__DOT__r5__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x40U, vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__174__i 
                                        = (aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__174__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__174__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__174__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__174__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__174__Vfuncout)) 
                                 ^ ((aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                     << 8U) | (aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r5__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__175__i 
                            = (0xffU & aes_main__DOT__r5__DOT__shift_data_out[2U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__175__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__175__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__175__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__175__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__175__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x38U, vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__176__i 
                                        = (aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__176__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__176__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__176__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__176__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__176__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__177__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__177__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__177__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__177__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__177__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__177__Vfuncout))) 
                                ^ ((aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r5__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x30U, vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__178__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__178__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__178__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__178__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__178__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__178__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__179__i 
                                    = (0xffU & (aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__179__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__179__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__179__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__179__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__179__Vfuncout))) 
                               ^ ((aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r5__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x28U, vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                     << 0x10U) | (aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__180__i 
                                    = (0xffU & (aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__180__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__180__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__180__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__180__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__180__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__181__i 
                                = (0xffU & aes_main__DOT__r5__DOT__shift_data_out[1U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__181__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__181__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__181__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__181__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__181__Vfuncout))) 
                              ^ aes_main__DOT__r5__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x20U, vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__182__i 
                                        = (aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__182__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__182__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__182__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__182__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__182__Vfuncout)) 
                                 ^ ((aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                     << 8U) | (aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r5__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__183__i 
                            = (0xffU & aes_main__DOT__r5__DOT__shift_data_out[1U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__183__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__183__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__183__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__183__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__183__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x18U, vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__184__i 
                                        = (aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__184__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__184__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__184__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__184__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__184__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__185__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__185__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__185__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__185__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__185__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__185__Vfuncout))) 
                                ^ ((aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r5__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0x10U, vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__186__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__186__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__186__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__186__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__186__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__186__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__187__i 
                                    = (0xffU & (aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__187__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__187__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__187__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__187__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__187__Vfuncout))) 
                               ^ ((aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r5__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,8U, vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                     << 0x10U) | (aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__188__i 
                                    = (0xffU & (aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__188__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__188__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__188__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__188__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__188__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__189__i 
                                = (0xffU & aes_main__DOT__r5__DOT__shift_data_out[0U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__189__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__189__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__189__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__189__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__189__Vfuncout))) 
                              ^ aes_main__DOT__r5__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0U, vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__190__i 
                                        = (aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__190__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__190__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__190__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__190__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__190__Vfuncout)) 
                                 ^ ((aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                     << 8U) | (aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r5__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__191__i 
                            = (0xffU & aes_main__DOT__r5__DOT__shift_data_out[0U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__191__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__191__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__191__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__191__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__m0__DOT__xtime__191__Vfuncout)))));
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__9(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__9\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r6__DOT__shift_data_out;
    VL_ZERO_W(128, aes_main__DOT__r6__DOT__shift_data_out);
    // Body
    aes_main__DOT__r6__DOT__shift_data_out[0U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q8.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q7.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q12.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q11.dout)))))));
    aes_main__DOT__r6__DOT__shift_data_out[1U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q8.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q7.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q12.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q11.dout)))))) 
                                                          >> 0x20U));
    aes_main__DOT__r6__DOT__shift_data_out[2U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q0.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q15.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q4.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q3.dout)))))));
    aes_main__DOT__r6__DOT__shift_data_out[3U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q0.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q15.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q4.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q3.dout)))))) 
                                                          >> 0x20U));
    VL_ASSIGNSEL_WI(128,8,0x78U, vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__192__i 
                                        = (aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__192__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__192__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__192__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__192__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__192__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__193__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__193__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__193__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__193__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__193__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__193__Vfuncout))) 
                                ^ ((aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r6__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x70U, vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__194__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__194__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__194__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__194__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__194__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__194__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__195__i 
                                    = (0xffU & (aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__195__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__195__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__195__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__195__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__195__Vfuncout))) 
                               ^ ((aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r6__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x68U, vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                     << 0x10U) | (aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__196__i 
                                    = (0xffU & (aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__196__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__196__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__196__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__196__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__196__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__197__i 
                                = (0xffU & aes_main__DOT__r6__DOT__shift_data_out[3U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__197__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__197__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__197__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__197__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__197__Vfuncout))) 
                              ^ aes_main__DOT__r6__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x60U, vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__198__i 
                                        = (aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__198__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__198__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__198__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__198__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__198__Vfuncout)) 
                                 ^ ((aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                     << 8U) | (aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r6__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__199__i 
                            = (0xffU & aes_main__DOT__r6__DOT__shift_data_out[3U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__199__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__199__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__199__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__199__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__199__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x58U, vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__200__i 
                                        = (aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__200__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__200__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__200__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__200__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__200__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__201__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__201__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__201__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__201__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__201__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__201__Vfuncout))) 
                                ^ ((aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r6__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x50U, vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__202__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__202__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__202__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__202__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__202__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__202__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__203__i 
                                    = (0xffU & (aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__203__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__203__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__203__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__203__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__203__Vfuncout))) 
                               ^ ((aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r6__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x48U, vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                     << 0x10U) | (aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__204__i 
                                    = (0xffU & (aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__204__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__204__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__204__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__204__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__204__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__205__i 
                                = (0xffU & aes_main__DOT__r6__DOT__shift_data_out[2U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__205__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__205__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__205__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__205__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__205__Vfuncout))) 
                              ^ aes_main__DOT__r6__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x40U, vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__206__i 
                                        = (aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__206__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__206__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__206__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__206__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__206__Vfuncout)) 
                                 ^ ((aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                     << 8U) | (aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r6__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__207__i 
                            = (0xffU & aes_main__DOT__r6__DOT__shift_data_out[2U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__207__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__207__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__207__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__207__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__207__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x38U, vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__208__i 
                                        = (aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__208__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__208__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__208__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__208__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__208__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__209__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__209__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__209__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__209__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__209__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__209__Vfuncout))) 
                                ^ ((aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r6__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x30U, vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__210__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__210__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__210__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__210__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__210__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__210__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__211__i 
                                    = (0xffU & (aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__211__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__211__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__211__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__211__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__211__Vfuncout))) 
                               ^ ((aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r6__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x28U, vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                     << 0x10U) | (aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__212__i 
                                    = (0xffU & (aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__212__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__212__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__212__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__212__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__212__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__213__i 
                                = (0xffU & aes_main__DOT__r6__DOT__shift_data_out[1U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__213__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__213__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__213__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__213__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__213__Vfuncout))) 
                              ^ aes_main__DOT__r6__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x20U, vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__214__i 
                                        = (aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__214__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__214__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__214__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__214__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__214__Vfuncout)) 
                                 ^ ((aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                     << 8U) | (aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r6__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__215__i 
                            = (0xffU & aes_main__DOT__r6__DOT__shift_data_out[1U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__215__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__215__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__215__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__215__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__215__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x18U, vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__216__i 
                                        = (aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__216__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__216__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__216__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__216__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__216__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__217__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__217__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__217__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__217__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__217__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__217__Vfuncout))) 
                                ^ ((aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r6__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0x10U, vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__218__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__218__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__218__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__218__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__218__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__218__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__219__i 
                                    = (0xffU & (aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__219__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__219__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__219__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__219__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__219__Vfuncout))) 
                               ^ ((aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r6__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,8U, vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                     << 0x10U) | (aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__220__i 
                                    = (0xffU & (aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__220__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__220__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__220__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__220__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__220__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__221__i 
                                = (0xffU & aes_main__DOT__r6__DOT__shift_data_out[0U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__221__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__221__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__221__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__221__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__221__Vfuncout))) 
                              ^ aes_main__DOT__r6__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0U, vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__222__i 
                                        = (aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__222__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__222__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__222__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__222__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__222__Vfuncout)) 
                                 ^ ((aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                     << 8U) | (aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r6__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__223__i 
                            = (0xffU & aes_main__DOT__r6__DOT__shift_data_out[0U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__223__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__223__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__223__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__223__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__m0__DOT__xtime__223__Vfuncout)))));
}
