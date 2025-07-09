// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAES_MAIN__SYMS_H_
#define VERILATED_VAES_MAIN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vaes_main.h"

// INCLUDE MODULE CLASSES
#include "Vaes_main___024root.h"
#include "Vaes_main_sbox.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vaes_main__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vaes_main* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vaes_main___024root            TOP;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u0;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u1;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u10;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u11;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u12;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u13;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u14;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u15;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u16;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u17;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u18;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u19;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u2;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u20;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u21;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u22;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u23;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u24;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u25;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u26;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u27;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u28;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u29;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u3;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u30;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u31;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u32;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u33;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u34;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u35;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u36;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u37;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u38;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u39;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u4;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u5;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u6;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u7;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u8;
    Vaes_main_sbox                 TOP__aes_main__DOT__a0__DOT__u9;
    Vaes_main_sbox                 TOP__aes_main__DOT__r9__DOT__a1__DOT__q0;
    Vaes_main_sbox                 TOP__aes_main__DOT__r9__DOT__a1__DOT__q1;
    Vaes_main_sbox                 TOP__aes_main__DOT__r9__DOT__a1__DOT__q10;
    Vaes_main_sbox                 TOP__aes_main__DOT__r9__DOT__a1__DOT__q11;
    Vaes_main_sbox                 TOP__aes_main__DOT__r9__DOT__a1__DOT__q12;
    Vaes_main_sbox                 TOP__aes_main__DOT__r9__DOT__a1__DOT__q13;
    Vaes_main_sbox                 TOP__aes_main__DOT__r9__DOT__a1__DOT__q14;
    Vaes_main_sbox                 TOP__aes_main__DOT__r9__DOT__a1__DOT__q15;
    Vaes_main_sbox                 TOP__aes_main__DOT__r9__DOT__a1__DOT__q2;
    Vaes_main_sbox                 TOP__aes_main__DOT__r9__DOT__a1__DOT__q3;
    Vaes_main_sbox                 TOP__aes_main__DOT__r9__DOT__a1__DOT__q4;
    Vaes_main_sbox                 TOP__aes_main__DOT__r9__DOT__a1__DOT__q5;
    Vaes_main_sbox                 TOP__aes_main__DOT__r9__DOT__a1__DOT__q6;
    Vaes_main_sbox                 TOP__aes_main__DOT__r9__DOT__a1__DOT__q7;
    Vaes_main_sbox                 TOP__aes_main__DOT__r9__DOT__a1__DOT__q8;
    Vaes_main_sbox                 TOP__aes_main__DOT__r9__DOT__a1__DOT__q9;

    // SCOPE NAMES
    VerilatedScope __Vscope_aes_main__r0;
    VerilatedScope __Vscope_aes_main__r1;
    VerilatedScope __Vscope_aes_main__r2;
    VerilatedScope __Vscope_aes_main__r3;
    VerilatedScope __Vscope_aes_main__r4;
    VerilatedScope __Vscope_aes_main__r5;
    VerilatedScope __Vscope_aes_main__r6;
    VerilatedScope __Vscope_aes_main__r7;
    VerilatedScope __Vscope_aes_main__r8;

    // CONSTRUCTORS
    Vaes_main__Syms(VerilatedContext* contextp, const char* namep, Vaes_main* modelp);
    ~Vaes_main__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
