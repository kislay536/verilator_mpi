// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_main.h for the primary calling header

#include "Vaes_main__pch.h"
#include "Vaes_main__Syms.h"
#include "Vaes_main___024root.h"

extern "C" void round_protectlib_check_hash(int protectlib_hash___05FV);

VL_INLINE_OPT void Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_check_hash_TOP(IData/*31:0*/ protectlib_hash___05FV) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_check_hash_TOP\n"); );
    // Body
    int protectlib_hash___05FV__Vcvt;
    for (size_t protectlib_hash___05FV__Vidx = 0; protectlib_hash___05FV__Vidx < 1; ++protectlib_hash___05FV__Vidx) protectlib_hash___05FV__Vcvt = protectlib_hash___05FV;
    round_protectlib_check_hash(protectlib_hash___05FV__Vcvt);
}

extern "C" void* round_protectlib_create(const char* scope___05FV);

VL_INLINE_OPT void Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_create_TOP(std::string scope___05FV, QData/*63:0*/ &round_protectlib_create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_create_TOP\n"); );
    // Body
    const char* scope___05FV__Vcvt;
    for (size_t scope___05FV__Vidx = 0; scope___05FV__Vidx < 1; ++scope___05FV__Vidx) scope___05FV__Vcvt = scope___05FV.c_str();
    void* round_protectlib_create__Vfuncrtn__Vcvt;
    round_protectlib_create__Vfuncrtn__Vcvt = round_protectlib_create(scope___05FV__Vcvt);
    round_protectlib_create__Vfuncrtn = VL_CVT_VP_Q(round_protectlib_create__Vfuncrtn__Vcvt);
}

extern "C" long long round_protectlib_combo_update(void* handle___05FV, const svLogicVecVal* data_in, const svLogicVecVal* key_in, svLogicVecVal* data_out);

VL_INLINE_OPT void Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(QData/*63:0*/ handle___05FV, VlWide<4>/*127:0*/ data_in, VlWide<4>/*127:0*/ key_in, VlWide<4>/*127:0*/ &data_out, QData/*63:0*/ &round_protectlib_combo_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP\n"); );
    // Body
    void* handle___05FV__Vcvt;
    for (size_t handle___05FV__Vidx = 0; handle___05FV__Vidx < 1; ++handle___05FV__Vidx) handle___05FV__Vcvt = VL_CVT_Q_VP(handle___05FV);
    svLogicVecVal data_in__Vcvt[4];
    for (size_t data_in__Vidx = 0; data_in__Vidx < 1; ++data_in__Vidx) VL_SET_SVLV_W(128, data_in__Vcvt + 4 * data_in__Vidx, data_in);
    svLogicVecVal key_in__Vcvt[4];
    for (size_t key_in__Vidx = 0; key_in__Vidx < 1; ++key_in__Vidx) VL_SET_SVLV_W(128, key_in__Vcvt + 4 * key_in__Vidx, key_in);
    svLogicVecVal data_out__Vcvt[4];
    long long round_protectlib_combo_update__Vfuncrtn__Vcvt;
    round_protectlib_combo_update__Vfuncrtn__Vcvt = round_protectlib_combo_update(handle___05FV__Vcvt, data_in__Vcvt, key_in__Vcvt, data_out__Vcvt);
    VL_SET_W_SVLV(128,data_out,data_out__Vcvt + 0);
round_protectlib_combo_update__Vfuncrtn = round_protectlib_combo_update__Vfuncrtn__Vcvt;
}

extern "C" void round_protectlib_combo_ignore(void* handle___05FV, const svLogicVecVal* data_in, const svLogicVecVal* key_in);

VL_INLINE_OPT void Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_ignore_TOP(QData/*63:0*/ handle___05FV, VlWide<4>/*127:0*/ data_in, VlWide<4>/*127:0*/ key_in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_ignore_TOP\n"); );
    // Body
    void* handle___05FV__Vcvt;
    for (size_t handle___05FV__Vidx = 0; handle___05FV__Vidx < 1; ++handle___05FV__Vidx) handle___05FV__Vcvt = VL_CVT_Q_VP(handle___05FV);
    svLogicVecVal data_in__Vcvt[4];
    for (size_t data_in__Vidx = 0; data_in__Vidx < 1; ++data_in__Vidx) VL_SET_SVLV_W(128, data_in__Vcvt + 4 * data_in__Vidx, data_in);
    svLogicVecVal key_in__Vcvt[4];
    for (size_t key_in__Vidx = 0; key_in__Vidx < 1; ++key_in__Vidx) VL_SET_SVLV_W(128, key_in__Vcvt + 4 * key_in__Vidx, key_in);
    round_protectlib_combo_ignore(handle___05FV__Vcvt, data_in__Vcvt, key_in__Vcvt);
}

extern "C" void round_protectlib_final(void* handle___05FV);

VL_INLINE_OPT void Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_final_TOP(QData/*63:0*/ handle___05FV) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_final_TOP\n"); );
    // Body
    void* handle___05FV__Vcvt;
    for (size_t handle___05FV__Vidx = 0; handle___05FV__Vidx < 1; ++handle___05FV__Vidx) handle___05FV__Vcvt = VL_CVT_Q_VP(handle___05FV);
    round_protectlib_final(handle___05FV__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_main___024root___dump_triggers__ico(Vaes_main___024root* vlSelf);
#endif  // VL_DEBUG

void Vaes_main___024root___eval_triggers__ico(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___eval_triggers__ico\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaes_main___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vaes_main___024root___ico_sequent__TOP__0(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___ico_sequent__TOP__0\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_19;
    // Body
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u0.data = 
        (0xffU & (vlSelfRef.key[0U] >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u1.data = 
        (0xffU & (vlSelfRef.key[0U] >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u2.data = 
        (0xffU & vlSelfRef.key[0U]);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u3.data = 
        (vlSelfRef.key[0U] >> 0x18U);
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
    __Vtemp_1[0U] = (vlSelfRef.data_in[0U] ^ vlSelfRef.key[0U]);
    __Vtemp_1[1U] = (vlSelfRef.data_in[1U] ^ vlSelfRef.key[1U]);
    __Vtemp_1[2U] = (vlSelfRef.data_in[2U] ^ vlSelfRef.key[2U]);
    __Vtemp_1[3U] = (vlSelfRef.data_in[3U] ^ vlSelfRef.key[3U]);
    __Vtemp_3[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w7;
    __Vtemp_3[1U] = vlSelfRef.aes_main__DOT__a0__DOT__w6;
    __Vtemp_3[2U] = (IData)((((QData)((IData)((0x1000000U 
                                               ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_0))) 
                              << 0x20U) | (QData)((IData)(
                                                          (0x1000000U 
                                                           ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
    __Vtemp_3[3U] = (IData)(((((QData)((IData)((0x1000000U 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_0))) 
                               << 0x20U) | (QData)((IData)(
                                                           (0x1000000U 
                                                            ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))) 
                             >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r0__DOT__handle___05FV, __Vtemp_1, __Vtemp_3, vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__round_protectlib_combo_update__2__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__round_protectlib_combo_update__2__Vfuncout);
    vlSelfRef.aes_main__DOT__r0__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__round_protectlib_combo_update__2__data_out[0U];
    vlSelfRef.aes_main__DOT__r0__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__round_protectlib_combo_update__2__data_out[1U];
    vlSelfRef.aes_main__DOT__r0__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__round_protectlib_combo_update__2__data_out[2U];
    vlSelfRef.aes_main__DOT__r0__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__round_protectlib_combo_update__2__data_out[3U];
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_18 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w6 ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_1);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_2 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1 
           ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_1);
    vlSelfRef.aes_main__DOT__a0__DOT__w16 = (0x8000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w12 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword4));
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
    __Vtemp_5[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w11;
    __Vtemp_5[1U] = (0x2000000U ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_18);
    __Vtemp_5[2U] = (IData)((((QData)((IData)((0x2000000U 
                                               ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1))) 
                              << 0x20U) | (QData)((IData)(
                                                          (0x2000000U 
                                                           ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)))));
    __Vtemp_5[3U] = (IData)(((((QData)((IData)((0x2000000U 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1))) 
                               << 0x20U) | (QData)((IData)(
                                                           (0x2000000U 
                                                            ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)))) 
                             >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r1__DOT__handle___05FV, vlSelfRef.aes_main__DOT__r0__DOT__data_out_combo___05FV, __Vtemp_5, vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__round_protectlib_combo_update__6__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__round_protectlib_combo_update__6__Vfuncout);
    vlSelfRef.aes_main__DOT__r1__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__round_protectlib_combo_update__6__data_out[0U];
    vlSelfRef.aes_main__DOT__r1__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__round_protectlib_combo_update__6__data_out[1U];
    vlSelfRef.aes_main__DOT__r1__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__round_protectlib_combo_update__6__data_out[2U];
    vlSelfRef.aes_main__DOT__r1__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__round_protectlib_combo_update__6__data_out[3U];
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
    __Vtemp_7[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w15;
    __Vtemp_7[1U] = vlSelfRef.aes_main__DOT__a0__DOT__w14;
    __Vtemp_7[2U] = (IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w12)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w13))));
    __Vtemp_7[3U] = (IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w12)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w13))) 
                             >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r2__DOT__handle___05FV, vlSelfRef.aes_main__DOT__r1__DOT__data_out_combo___05FV, __Vtemp_7, vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__round_protectlib_combo_update__10__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__round_protectlib_combo_update__10__Vfuncout);
    vlSelfRef.aes_main__DOT__r2__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__round_protectlib_combo_update__10__data_out[0U];
    vlSelfRef.aes_main__DOT__r2__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__round_protectlib_combo_update__10__data_out[1U];
    vlSelfRef.aes_main__DOT__r2__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__round_protectlib_combo_update__10__data_out[2U];
    vlSelfRef.aes_main__DOT__r2__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__round_protectlib_combo_update__10__data_out[3U];
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_5 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_4 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w14);
    vlSelfRef.aes_main__DOT__a0__DOT__w17 = (0x8000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_4 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword4));
    vlSelfRef.aes_main__DOT__a0__DOT__w28 = (0x40000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w24 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword7));
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
    __Vtemp_9[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w19;
    __Vtemp_9[1U] = vlSelfRef.aes_main__DOT__a0__DOT__w18;
    __Vtemp_9[2U] = (IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w16)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w17))));
    __Vtemp_9[3U] = (IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w16)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w17))) 
                             >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r3__DOT__handle___05FV, vlSelfRef.aes_main__DOT__r2__DOT__data_out_combo___05FV, __Vtemp_9, vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__round_protectlib_combo_update__14__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__round_protectlib_combo_update__14__Vfuncout);
    vlSelfRef.aes_main__DOT__r3__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__round_protectlib_combo_update__14__data_out[0U];
    vlSelfRef.aes_main__DOT__r3__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__round_protectlib_combo_update__14__data_out[1U];
    vlSelfRef.aes_main__DOT__r3__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__round_protectlib_combo_update__14__data_out[2U];
    vlSelfRef.aes_main__DOT__r3__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__round_protectlib_combo_update__14__data_out[3U];
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_7 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_6 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w18);
    vlSelfRef.aes_main__DOT__a0__DOT__w21 = (0x10000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_6 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword5));
    vlSelfRef.aes_main__DOT__a0__DOT__w36 = (0x1b000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w32 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword9));
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
    __Vtemp_11[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w23;
    __Vtemp_11[1U] = vlSelfRef.aes_main__DOT__a0__DOT__w22;
    __Vtemp_11[2U] = (IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w20)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w21))));
    __Vtemp_11[3U] = (IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w20)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w21))) 
                              >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r4__DOT__handle___05FV, vlSelfRef.aes_main__DOT__r3__DOT__data_out_combo___05FV, __Vtemp_11, vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__round_protectlib_combo_update__18__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__round_protectlib_combo_update__18__Vfuncout);
    vlSelfRef.aes_main__DOT__r4__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__round_protectlib_combo_update__18__data_out[0U];
    vlSelfRef.aes_main__DOT__r4__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__round_protectlib_combo_update__18__data_out[1U];
    vlSelfRef.aes_main__DOT__r4__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__round_protectlib_combo_update__18__data_out[2U];
    vlSelfRef.aes_main__DOT__r4__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__round_protectlib_combo_update__18__data_out[3U];
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_9 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_8 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w22);
    vlSelfRef.aes_main__DOT__a0__DOT__w25 = (0x20000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_8 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword6));
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
    __Vtemp_13[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w27;
    __Vtemp_13[1U] = vlSelfRef.aes_main__DOT__a0__DOT__w26;
    __Vtemp_13[2U] = (IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w24)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w25))));
    __Vtemp_13[3U] = (IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w24)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w25))) 
                              >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r5__DOT__handle___05FV, vlSelfRef.aes_main__DOT__r4__DOT__data_out_combo___05FV, __Vtemp_13, vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__round_protectlib_combo_update__22__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__round_protectlib_combo_update__22__Vfuncout);
    vlSelfRef.aes_main__DOT__r5__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__round_protectlib_combo_update__22__data_out[0U];
    vlSelfRef.aes_main__DOT__r5__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__round_protectlib_combo_update__22__data_out[1U];
    vlSelfRef.aes_main__DOT__r5__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__round_protectlib_combo_update__22__data_out[2U];
    vlSelfRef.aes_main__DOT__r5__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__round_protectlib_combo_update__22__data_out[3U];
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_11 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_10 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w26);
    vlSelfRef.aes_main__DOT__a0__DOT__w29 = (0x40000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_10 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword7));
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
    __Vtemp_15[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w31;
    __Vtemp_15[1U] = vlSelfRef.aes_main__DOT__a0__DOT__w30;
    __Vtemp_15[2U] = (IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w28)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w29))));
    __Vtemp_15[3U] = (IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w28)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w29))) 
                              >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r6__DOT__handle___05FV, vlSelfRef.aes_main__DOT__r5__DOT__data_out_combo___05FV, __Vtemp_15, vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__round_protectlib_combo_update__26__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__round_protectlib_combo_update__26__Vfuncout);
    vlSelfRef.aes_main__DOT__r6__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__round_protectlib_combo_update__26__data_out[0U];
    vlSelfRef.aes_main__DOT__r6__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__round_protectlib_combo_update__26__data_out[1U];
    vlSelfRef.aes_main__DOT__r6__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__round_protectlib_combo_update__26__data_out[2U];
    vlSelfRef.aes_main__DOT__r6__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__round_protectlib_combo_update__26__data_out[3U];
    vlSelfRef.aes_main__DOT__a0__DOT__w33 = (0x80000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_12 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword8));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_13 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_12 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w30);
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
    __Vtemp_17[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w35;
    __Vtemp_17[1U] = vlSelfRef.aes_main__DOT__a0__DOT__w34;
    __Vtemp_17[2U] = (IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w32)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w33))));
    __Vtemp_17[3U] = (IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w32)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w33))) 
                              >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r7__DOT__handle___05FV, vlSelfRef.aes_main__DOT__r6__DOT__data_out_combo___05FV, __Vtemp_17, vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__round_protectlib_combo_update__30__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__round_protectlib_combo_update__30__Vfuncout);
    vlSelfRef.aes_main__DOT__r7__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__round_protectlib_combo_update__30__data_out[0U];
    vlSelfRef.aes_main__DOT__r7__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__round_protectlib_combo_update__30__data_out[1U];
    vlSelfRef.aes_main__DOT__r7__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__round_protectlib_combo_update__30__data_out[2U];
    vlSelfRef.aes_main__DOT__r7__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__round_protectlib_combo_update__30__data_out[3U];
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_15 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_14 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w34);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_16 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w36 ^ vlSelfRef.aes_main__DOT__a0__DOT__w37);
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
    __Vtemp_19[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w39;
    __Vtemp_19[1U] = vlSelfRef.aes_main__DOT__a0__DOT__w38;
    __Vtemp_19[2U] = (IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w36)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w37))));
    __Vtemp_19[3U] = (IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w36)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w37))) 
                              >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r8__DOT__handle___05FV, vlSelfRef.aes_main__DOT__r7__DOT__data_out_combo___05FV, __Vtemp_19, vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__round_protectlib_combo_update__34__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__round_protectlib_combo_update__34__Vfuncout);
    vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__round_protectlib_combo_update__34__data_out[0U];
    vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__round_protectlib_combo_update__34__data_out[1U];
    vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__round_protectlib_combo_update__34__data_out[2U];
    vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__round_protectlib_combo_update__34__data_out[3U];
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
        = (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[3U] 
           >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q1.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q2.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q3.data 
        = (0xffU & vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[3U]);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q4.data 
        = (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[2U] 
           >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q5.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q6.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q7.data 
        = (0xffU & vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[2U]);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q8.data 
        = (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[1U] 
           >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q9.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q10.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q11.data 
        = (0xffU & vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[1U]);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q12.data 
        = (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[0U] 
           >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q13.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q14.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q15.data 
        = (0xffU & vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[0U]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_main___024root___dump_triggers__act(Vaes_main___024root* vlSelf);
#endif  // VL_DEBUG

void Vaes_main___024root___eval_triggers__act(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___eval_triggers__act\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u0.data) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u0__data__0)));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u1.data) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u1__data__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u2.data) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u2__data__0)));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u3.data) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u3__data__0)));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u4.data) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u4__data__0)));
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u5.data) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u5__data__0)));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u6.data) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u6__data__0)));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u7.data) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u7__data__0)));
    vlSelfRef.__VactTriggered.setBit(8U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u8.data) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u8__data__0)));
    vlSelfRef.__VactTriggered.setBit(9U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u9.data) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u9__data__0)));
    vlSelfRef.__VactTriggered.setBit(0xaU, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u10.data) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u10__data__0)));
    vlSelfRef.__VactTriggered.setBit(0xbU, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u11.data) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u11__data__0)));
    vlSelfRef.__VactTriggered.setBit(0xcU, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u12.data) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u12__data__0)));
    vlSelfRef.__VactTriggered.setBit(0xdU, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u13.data) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u13__data__0)));
    vlSelfRef.__VactTriggered.setBit(0xeU, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u14.data) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u14__data__0)));
    vlSelfRef.__VactTriggered.setBit(0xfU, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u15.data) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u15__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x10U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u16.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u16__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x11U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u17.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u17__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x12U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u18.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u18__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x13U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u19.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u19__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x14U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u20.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u20__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x15U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u21.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u21__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x16U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u22.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u22__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x17U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u23.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u23__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x18U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u24.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u24__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x19U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u25.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u25__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x1aU, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u26.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u26__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x1bU, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u27.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u27__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x1cU, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u28.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u28__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x1dU, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u29.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u29__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x1eU, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u30.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u30__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x1fU, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u31.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u31__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x20U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u32.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u32__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x21U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u33.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u33__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x22U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u34.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u34__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x23U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u35.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u35__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x24U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u36.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u36__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x25U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u37.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u37__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x26U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u38.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u38__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x27U, ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u39.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__a0__DOT__u39__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x28U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q0.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q0__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x29U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q1.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q1__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x2aU, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q2.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q2__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x2bU, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q3.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q3__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x2cU, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q4.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q4__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x2dU, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q5.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q5__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x2eU, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q6.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q6__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x2fU, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q7.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q7__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x30U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q8.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q8__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x31U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q9.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q9__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x32U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q10.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q10__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x33U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q11.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q11__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x34U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q12.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q12__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x35U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q13.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q13__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x36U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q14.data) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes_main__DOT__r9__DOT__a1__DOT__q14__data__0)));
    vlSelfRef.__VactTriggered.setBit(0x37U, ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q15.data) 
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
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaes_main___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q0__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q1__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q2__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q3__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q4__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q5__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q6__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q7__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q8__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q9__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q10__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q11__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q12__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q13__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q14__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q15__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u36__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u37__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u38__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u39__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u32__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u33__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u34__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u35__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u28__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u29__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u30__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u31__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u24__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u25__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u26__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u27__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u20__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u21__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u22__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u23__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u16__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u17__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u18__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u19__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u12__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u13__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u14__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u15__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u8__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u9__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u10__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u11__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u4__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u5__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u6__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u7__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u0__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u1__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u2__0(Vaes_main_sbox* vlSelf);
void Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u3__0(Vaes_main_sbox* vlSelf);
void Vaes_main___024root___nba_comb__TOP__0(Vaes_main___024root* vlSelf);
void Vaes_main___024root___nba_comb__TOP__1(Vaes_main___024root* vlSelf);
void Vaes_main___024root___nba_comb__TOP__2(Vaes_main___024root* vlSelf);
void Vaes_main___024root___nba_comb__TOP__3(Vaes_main___024root* vlSelf);
void Vaes_main___024root___nba_comb__TOP__4(Vaes_main___024root* vlSelf);
void Vaes_main___024root___nba_comb__TOP__5(Vaes_main___024root* vlSelf);
void Vaes_main___024root___nba_comb__TOP__6(Vaes_main___024root* vlSelf);
void Vaes_main___024root___nba_comb__TOP__7(Vaes_main___024root* vlSelf);
void Vaes_main___024root___nba_comb__TOP__8(Vaes_main___024root* vlSelf);
void Vaes_main___024root___nba_comb__TOP__9(Vaes_main___024root* vlSelf);
void Vaes_main___024root___nba_comb__TOP__10(Vaes_main___024root* vlSelf);
void Vaes_main___024root___nba_comb__TOP__11(Vaes_main___024root* vlSelf);
void Vaes_main___024root___nba_comb__TOP__12(Vaes_main___024root* vlSelf);
void Vaes_main___024root___nba_comb__TOP__13(Vaes_main___024root* vlSelf);
void Vaes_main___024root___nba_comb__TOP__14(Vaes_main___024root* vlSelf);
void Vaes_main___024root___nba_comb__TOP__15(Vaes_main___024root* vlSelf);
void Vaes_main___024root___nba_comb__TOP__16(Vaes_main___024root* vlSelf);
void Vaes_main___024root___nba_comb__TOP__17(Vaes_main___024root* vlSelf);

void Vaes_main___024root___eval_nba(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___eval_nba\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q0__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q0));
    }
    if ((0x20000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q1__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q1));
    }
    if ((0x40000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q2__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q2));
    }
    if ((0x80000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q3__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q3));
    }
    if ((0x100000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q4__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q4));
    }
    if ((0x200000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q5__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q5));
    }
    if ((0x400000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q6__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q6));
    }
    if ((0x800000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q7__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q7));
    }
    if ((0x1000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q8__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q8));
    }
    if ((0x2000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q9__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q9));
    }
    if ((0x4000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q10__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q10));
    }
    if ((0x8000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q11__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q11));
    }
    if ((0x10000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q12__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q12));
    }
    if ((0x20000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q13__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q13));
    }
    if ((0x40000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q14__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q14));
    }
    if ((0x80000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__r9__DOT__a1__DOT__q15__0((&vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q15));
    }
    if ((0x1000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u36__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u36));
    }
    if ((0x2000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u37__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u37));
    }
    if ((0x4000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u38__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u38));
    }
    if ((0x8000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u39__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u39));
    }
    if ((0x100000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u32__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u32));
    }
    if ((0x200000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u33__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u33));
    }
    if ((0x400000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u34__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u34));
    }
    if ((0x800000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u35__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u35));
    }
    if ((0x10000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u28__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u28));
    }
    if ((0x20000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u29__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u29));
    }
    if ((0x40000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u30__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u30));
    }
    if ((0x80000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u31__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u31));
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u24__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u24));
    }
    if ((0x2000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u25__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u25));
    }
    if ((0x4000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u26__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u26));
    }
    if ((0x8000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u27__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u27));
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u20__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u20));
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u21__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u21));
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u22__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u22));
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u23__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u23));
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u16__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u16));
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u17__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u17));
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u18__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u18));
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u19__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u19));
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u12__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u12));
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u13__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u13));
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u14__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u14));
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u15__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u15));
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u8__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u8));
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u9__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u9));
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u10__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u10));
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u11__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u11));
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u4__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u4));
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u5__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u5));
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u6__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u6));
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u7__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u7));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u0__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u0));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u1__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u1));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u2__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u2));
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main_sbox___nba_sequent__TOP__aes_main__DOT__a0__DOT__u3__0((&vlSymsp->TOP__aes_main__DOT__a0__DOT__u3));
    }
    if ((0xf000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0xf00000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0xf0000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0xf000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0xf00000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0xf0000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0xf000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0xf00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0xffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0xfffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0xffffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((0xfffffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__12(vlSelf);
    }
    if ((0xffffffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__13(vlSelf);
    }
    if ((0xfffffffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__14(vlSelf);
    }
    if ((0xffffffffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((0xfffffffffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__16(vlSelf);
    }
    if ((0xffffffffffffffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaes_main___024root___nba_comb__TOP__17(vlSelf);
    }
}

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__0(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__0\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__1(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__1\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__2(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__2\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__3(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__3\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__subword7 = ((
                                                   ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u24.dout) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u25.dout) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u26.dout) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u27.dout)));
}

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__4(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__4\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__subword6 = ((
                                                   ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u20.dout) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u21.dout) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u22.dout) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u23.dout)));
}

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__5(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__5\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__subword5 = ((
                                                   ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u16.dout) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u17.dout) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u18.dout) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u19.dout)));
}

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__6(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__6\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__subword4 = ((
                                                   ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u12.dout) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u13.dout) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u14.dout) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u15.dout)));
}

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__7(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__7\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__subword3 = ((
                                                   ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u8.dout) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u9.dout) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u10.dout) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u11.dout)));
}

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__8(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__8\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__subword = ((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u0.dout) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u1.dout) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u2.dout) 
                                                     << 8U) 
                                                    | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u3.dout)));
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
    vlSelfRef.aes_main__DOT__a0__DOT__w6 = (0x1000000U 
                                            ^ (vlSelfRef.key[1U] 
                                               ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0));
    __Vtemp_1[0U] = (vlSelfRef.data_in[0U] ^ vlSelfRef.key[0U]);
    __Vtemp_1[1U] = (vlSelfRef.data_in[1U] ^ vlSelfRef.key[1U]);
    __Vtemp_1[2U] = (vlSelfRef.data_in[2U] ^ vlSelfRef.key[2U]);
    __Vtemp_1[3U] = (vlSelfRef.data_in[3U] ^ vlSelfRef.key[3U]);
    __Vtemp_3[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w7;
    __Vtemp_3[1U] = vlSelfRef.aes_main__DOT__a0__DOT__w6;
    __Vtemp_3[2U] = (IData)((((QData)((IData)((0x1000000U 
                                               ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_0))) 
                              << 0x20U) | (QData)((IData)(
                                                          (0x1000000U 
                                                           ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))));
    __Vtemp_3[3U] = (IData)(((((QData)((IData)((0x1000000U 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_0))) 
                               << 0x20U) | (QData)((IData)(
                                                           (0x1000000U 
                                                            ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))) 
                             >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r0__DOT__handle___05FV, __Vtemp_1, __Vtemp_3, vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__round_protectlib_combo_update__2__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__round_protectlib_combo_update__2__Vfuncout);
    vlSelfRef.aes_main__DOT__r0__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__round_protectlib_combo_update__2__data_out[0U];
    vlSelfRef.aes_main__DOT__r0__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__round_protectlib_combo_update__2__data_out[1U];
    vlSelfRef.aes_main__DOT__r0__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__round_protectlib_combo_update__2__data_out[2U];
    vlSelfRef.aes_main__DOT__r0__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r0__DOT__round_protectlib_combo_update__2__data_out[3U];
}

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__9(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__9\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1 
        = (0x1000000U ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_0 
                         ^ ((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u4.dout) 
                              << 0x18U) | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u5.dout) 
                                           << 0x10U)) 
                            | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u6.dout) 
                                << 8U) | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u7.dout)))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 = (0x1000000U 
                                                ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_18 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w6 ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_1);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_2 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1 
           ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_1);
    vlSelfRef.aes_main__DOT__a0__DOT__w11 = (0x2000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w7 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_18));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_3 
        = (0x2000000U ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_2 
                         ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_18));
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
    __Vtemp_2[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w11;
    __Vtemp_2[1U] = (0x2000000U ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_18);
    __Vtemp_2[2U] = (IData)((((QData)((IData)((0x2000000U 
                                               ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1))) 
                              << 0x20U) | (QData)((IData)(
                                                          (0x2000000U 
                                                           ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)))));
    __Vtemp_2[3U] = (IData)(((((QData)((IData)((0x2000000U 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1))) 
                               << 0x20U) | (QData)((IData)(
                                                           (0x2000000U 
                                                            ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)))) 
                             >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r1__DOT__handle___05FV, vlSelfRef.aes_main__DOT__r0__DOT__data_out_combo___05FV, __Vtemp_2, vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__round_protectlib_combo_update__6__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__round_protectlib_combo_update__6__Vfuncout);
    vlSelfRef.aes_main__DOT__r1__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__round_protectlib_combo_update__6__data_out[0U];
    vlSelfRef.aes_main__DOT__r1__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__round_protectlib_combo_update__6__data_out[1U];
    vlSelfRef.aes_main__DOT__r1__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__round_protectlib_combo_update__6__data_out[2U];
    vlSelfRef.aes_main__DOT__r1__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r1__DOT__round_protectlib_combo_update__6__data_out[3U];
}

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__10(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__10\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__w12 = (0x6000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword3));
    vlSelfRef.aes_main__DOT__a0__DOT__w13 = (0x4000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_2 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword3));
    vlSelfRef.aes_main__DOT__a0__DOT__w15 = (0x4000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_3 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w11 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword3)));
    vlSelfRef.aes_main__DOT__a0__DOT__w14 = (0x4000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_3 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword3));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_4 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w12 ^ vlSelfRef.aes_main__DOT__a0__DOT__w13);
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
    __Vtemp_2[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w15;
    __Vtemp_2[1U] = vlSelfRef.aes_main__DOT__a0__DOT__w14;
    __Vtemp_2[2U] = (IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w12)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w13))));
    __Vtemp_2[3U] = (IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w12)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w13))) 
                             >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r2__DOT__handle___05FV, vlSelfRef.aes_main__DOT__r1__DOT__data_out_combo___05FV, __Vtemp_2, vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__round_protectlib_combo_update__10__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__round_protectlib_combo_update__10__Vfuncout);
    vlSelfRef.aes_main__DOT__r2__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__round_protectlib_combo_update__10__data_out[0U];
    vlSelfRef.aes_main__DOT__r2__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__round_protectlib_combo_update__10__data_out[1U];
    vlSelfRef.aes_main__DOT__r2__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__round_protectlib_combo_update__10__data_out[2U];
    vlSelfRef.aes_main__DOT__r2__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r2__DOT__round_protectlib_combo_update__10__data_out[3U];
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_5 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_4 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w14);
}

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__11(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__11\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__w16 = (0x8000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w12 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword4));
    vlSelfRef.aes_main__DOT__a0__DOT__w17 = (0x8000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_4 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword4));
    vlSelfRef.aes_main__DOT__a0__DOT__w19 = (0x8000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_5 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w15 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword4)));
    vlSelfRef.aes_main__DOT__a0__DOT__w18 = (0x8000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_5 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword4));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_6 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w16 ^ vlSelfRef.aes_main__DOT__a0__DOT__w17);
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
    __Vtemp_2[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w19;
    __Vtemp_2[1U] = vlSelfRef.aes_main__DOT__a0__DOT__w18;
    __Vtemp_2[2U] = (IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w16)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w17))));
    __Vtemp_2[3U] = (IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w16)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w17))) 
                             >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r3__DOT__handle___05FV, vlSelfRef.aes_main__DOT__r2__DOT__data_out_combo___05FV, __Vtemp_2, vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__round_protectlib_combo_update__14__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__round_protectlib_combo_update__14__Vfuncout);
    vlSelfRef.aes_main__DOT__r3__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__round_protectlib_combo_update__14__data_out[0U];
    vlSelfRef.aes_main__DOT__r3__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__round_protectlib_combo_update__14__data_out[1U];
    vlSelfRef.aes_main__DOT__r3__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__round_protectlib_combo_update__14__data_out[2U];
    vlSelfRef.aes_main__DOT__r3__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r3__DOT__round_protectlib_combo_update__14__data_out[3U];
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_7 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_6 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w18);
}

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__12(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__12\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__w20 = (0x10000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w16 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword5));
    vlSelfRef.aes_main__DOT__a0__DOT__w21 = (0x10000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_6 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword5));
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
    __Vtemp_2[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w23;
    __Vtemp_2[1U] = vlSelfRef.aes_main__DOT__a0__DOT__w22;
    __Vtemp_2[2U] = (IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w20)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w21))));
    __Vtemp_2[3U] = (IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w20)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w21))) 
                             >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r4__DOT__handle___05FV, vlSelfRef.aes_main__DOT__r3__DOT__data_out_combo___05FV, __Vtemp_2, vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__round_protectlib_combo_update__18__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__round_protectlib_combo_update__18__Vfuncout);
    vlSelfRef.aes_main__DOT__r4__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__round_protectlib_combo_update__18__data_out[0U];
    vlSelfRef.aes_main__DOT__r4__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__round_protectlib_combo_update__18__data_out[1U];
    vlSelfRef.aes_main__DOT__r4__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__round_protectlib_combo_update__18__data_out[2U];
    vlSelfRef.aes_main__DOT__r4__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r4__DOT__round_protectlib_combo_update__18__data_out[3U];
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_9 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_8 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w22);
}

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__13(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__13\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__w24 = (0x20000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w20 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword6));
    vlSelfRef.aes_main__DOT__a0__DOT__w25 = (0x20000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_8 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword6));
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
    __Vtemp_2[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w27;
    __Vtemp_2[1U] = vlSelfRef.aes_main__DOT__a0__DOT__w26;
    __Vtemp_2[2U] = (IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w24)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w25))));
    __Vtemp_2[3U] = (IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w24)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w25))) 
                             >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r5__DOT__handle___05FV, vlSelfRef.aes_main__DOT__r4__DOT__data_out_combo___05FV, __Vtemp_2, vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__round_protectlib_combo_update__22__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__round_protectlib_combo_update__22__Vfuncout);
    vlSelfRef.aes_main__DOT__r5__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__round_protectlib_combo_update__22__data_out[0U];
    vlSelfRef.aes_main__DOT__r5__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__round_protectlib_combo_update__22__data_out[1U];
    vlSelfRef.aes_main__DOT__r5__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__round_protectlib_combo_update__22__data_out[2U];
    vlSelfRef.aes_main__DOT__r5__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r5__DOT__round_protectlib_combo_update__22__data_out[3U];
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_11 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_10 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w26);
}

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__14(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__14\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__w28 = (0x40000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w24 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword7));
    vlSelfRef.aes_main__DOT__a0__DOT__w29 = (0x40000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_10 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword7));
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
    __Vtemp_2[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w31;
    __Vtemp_2[1U] = vlSelfRef.aes_main__DOT__a0__DOT__w30;
    __Vtemp_2[2U] = (IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w28)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w29))));
    __Vtemp_2[3U] = (IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w28)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w29))) 
                             >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r6__DOT__handle___05FV, vlSelfRef.aes_main__DOT__r5__DOT__data_out_combo___05FV, __Vtemp_2, vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__round_protectlib_combo_update__26__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__round_protectlib_combo_update__26__Vfuncout);
    vlSelfRef.aes_main__DOT__r6__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__round_protectlib_combo_update__26__data_out[0U];
    vlSelfRef.aes_main__DOT__r6__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__round_protectlib_combo_update__26__data_out[1U];
    vlSelfRef.aes_main__DOT__r6__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__round_protectlib_combo_update__26__data_out[2U];
    vlSelfRef.aes_main__DOT__r6__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r6__DOT__round_protectlib_combo_update__26__data_out[3U];
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_13 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_12 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w30);
}

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__15(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__15\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__w32 = (0x80000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w28 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword8));
    vlSelfRef.aes_main__DOT__a0__DOT__w33 = (0x80000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_12 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword8));
    vlSelfRef.aes_main__DOT__a0__DOT__w35 = (0x80000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_13 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w31 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword8)));
    vlSelfRef.aes_main__DOT__a0__DOT__w34 = (0x80000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_13 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword8));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_14 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w32 ^ vlSelfRef.aes_main__DOT__a0__DOT__w33);
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
    __Vtemp_2[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w35;
    __Vtemp_2[1U] = vlSelfRef.aes_main__DOT__a0__DOT__w34;
    __Vtemp_2[2U] = (IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w32)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w33))));
    __Vtemp_2[3U] = (IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w32)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w33))) 
                             >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r7__DOT__handle___05FV, vlSelfRef.aes_main__DOT__r6__DOT__data_out_combo___05FV, __Vtemp_2, vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__round_protectlib_combo_update__30__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__round_protectlib_combo_update__30__Vfuncout);
    vlSelfRef.aes_main__DOT__r7__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__round_protectlib_combo_update__30__data_out[0U];
    vlSelfRef.aes_main__DOT__r7__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__round_protectlib_combo_update__30__data_out[1U];
    vlSelfRef.aes_main__DOT__r7__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__round_protectlib_combo_update__30__data_out[2U];
    vlSelfRef.aes_main__DOT__r7__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__round_protectlib_combo_update__30__data_out[3U];
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_15 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_14 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w34);
}

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__16(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__16\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__w36 = (0x1b000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w32 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword9));
    vlSelfRef.aes_main__DOT__a0__DOT__w37 = (0x1b000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_14 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword9));
    vlSelfRef.aes_main__DOT__a0__DOT__w38 = (0x1b000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_15 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword9));
    vlSelfRef.aes_main__DOT__a0__DOT__w39 = (0x1b000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_15 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w35 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword9)));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_16 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w36 ^ vlSelfRef.aes_main__DOT__a0__DOT__w37);
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
    __Vtemp_2[0U] = vlSelfRef.aes_main__DOT__a0__DOT__w39;
    __Vtemp_2[1U] = vlSelfRef.aes_main__DOT__a0__DOT__w38;
    __Vtemp_2[2U] = (IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w36)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w37))));
    __Vtemp_2[3U] = (IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w36)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w37))) 
                             >> 0x20U));
    Vaes_main___024root____Vdpiimwrap_aes_main__DOT__r0__DOT__round_protectlib_combo_update_TOP(vlSelfRef.aes_main__DOT__r8__DOT__handle___05FV, vlSelfRef.aes_main__DOT__r7__DOT__data_out_combo___05FV, __Vtemp_2, vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__round_protectlib_combo_update__34__data_out, vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__round_protectlib_combo_update__34__Vfuncout);
    vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[0U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__round_protectlib_combo_update__34__data_out[0U];
    vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[1U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__round_protectlib_combo_update__34__data_out[1U];
    vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[2U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__round_protectlib_combo_update__34__data_out[2U];
    vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[3U] 
        = vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__round_protectlib_combo_update__34__data_out[3U];
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_17 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_16 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w38);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q0.data 
        = (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[3U] 
           >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q1.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q2.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q3.data 
        = (0xffU & vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[3U]);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q4.data 
        = (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[2U] 
           >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q5.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q6.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q7.data 
        = (0xffU & vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[2U]);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q8.data 
        = (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[1U] 
           >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q9.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q10.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q11.data 
        = (0xffU & vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[1U]);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q12.data 
        = (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[0U] 
           >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q13.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q14.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q15.data 
        = (0xffU & vlSelfRef.aes_main__DOT__r8__DOT__data_out_combo___05FV[0U]);
}

VL_INLINE_OPT void Vaes_main___024root___nba_comb__TOP__17(Vaes_main___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_main___024root___nba_comb__TOP__17\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}
