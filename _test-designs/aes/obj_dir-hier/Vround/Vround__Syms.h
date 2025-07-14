// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VROUND__SYMS_H_
#define VERILATED_VROUND__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vround.h"

// INCLUDE MODULE CLASSES
#include "Vround___024root.h"
#include "Vround_sbox.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vround__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vround* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vround___024root               TOP;
    Vround_sbox                    TOP__round__DOT__a1__DOT__q0;
    Vround_sbox                    TOP__round__DOT__a1__DOT__q1;
    Vround_sbox                    TOP__round__DOT__a1__DOT__q10;
    Vround_sbox                    TOP__round__DOT__a1__DOT__q11;
    Vround_sbox                    TOP__round__DOT__a1__DOT__q12;
    Vround_sbox                    TOP__round__DOT__a1__DOT__q13;
    Vround_sbox                    TOP__round__DOT__a1__DOT__q14;
    Vround_sbox                    TOP__round__DOT__a1__DOT__q15;
    Vround_sbox                    TOP__round__DOT__a1__DOT__q2;
    Vround_sbox                    TOP__round__DOT__a1__DOT__q3;
    Vround_sbox                    TOP__round__DOT__a1__DOT__q4;
    Vround_sbox                    TOP__round__DOT__a1__DOT__q5;
    Vround_sbox                    TOP__round__DOT__a1__DOT__q6;
    Vround_sbox                    TOP__round__DOT__a1__DOT__q7;
    Vround_sbox                    TOP__round__DOT__a1__DOT__q8;
    Vround_sbox                    TOP__round__DOT__a1__DOT__q9;

    // CONSTRUCTORS
    Vround__Syms(VerilatedContext* contextp, const char* namep, Vround* modelp);
    ~Vround__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
