// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vround.h for the primary calling header

#ifndef VERILATED_VROUND_SBOX_H_
#define VERILATED_VROUND_SBOX_H_  // guard

#include "verilated.h"


class Vround__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vround_sbox final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(data,7,0);
    VL_OUT8(dout,7,0);

    // INTERNAL VARIABLES
    Vround__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vround_sbox(Vround__Syms* symsp, const char* v__name);
    ~Vround_sbox();
    VL_UNCOPYABLE(Vround_sbox);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
