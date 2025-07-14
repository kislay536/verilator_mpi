// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vround.h for the primary calling header

#include "Vround__pch.h"
#include "Vround_sbox.h"

VL_ATTR_COLD void Vround_sbox___ctor_var_reset(Vround_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vround_sbox___ctor_var_reset\n"); );
    Vround__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->data = VL_RAND_RESET_I(8);
    vlSelf->dout = VL_RAND_RESET_I(8);
}
