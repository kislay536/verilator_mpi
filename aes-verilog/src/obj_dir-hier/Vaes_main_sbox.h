// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_main.h for the primary calling header

#ifndef VERILATED_VAES_MAIN_SBOX_H_
#define VERILATED_VAES_MAIN_SBOX_H_  // guard

#include "verilated.h"


class Vaes_main__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaes_main_sbox final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(data,7,0);
    VL_OUT8(dout,7,0);

    // INTERNAL VARIABLES
    Vaes_main__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaes_main_sbox(Vaes_main__Syms* symsp, const char* v__name);
    ~Vaes_main_sbox();
    VL_UNCOPYABLE(Vaes_main_sbox);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
