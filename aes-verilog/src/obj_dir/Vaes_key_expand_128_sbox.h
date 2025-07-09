// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_key_expand_128.h for the primary calling header

#ifndef VERILATED_VAES_KEY_EXPAND_128_SBOX_H_
#define VERILATED_VAES_KEY_EXPAND_128_SBOX_H_  // guard

#include "verilated.h"


class Vaes_key_expand_128__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaes_key_expand_128_sbox final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(data,7,0);
    VL_OUT8(dout,7,0);

    // INTERNAL VARIABLES
    Vaes_key_expand_128__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaes_key_expand_128_sbox(Vaes_key_expand_128__Syms* symsp, const char* v__name);
    ~Vaes_key_expand_128_sbox();
    VL_UNCOPYABLE(Vaes_key_expand_128_sbox);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
