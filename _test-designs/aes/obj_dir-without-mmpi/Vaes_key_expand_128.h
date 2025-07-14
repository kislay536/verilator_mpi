// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VAES_KEY_EXPAND_128_H_
#define VERILATED_VAES_KEY_EXPAND_128_H_  // guard

#include "verilated.h"

class Vaes_key_expand_128__Syms;
class Vaes_key_expand_128___024root;
class Vaes_key_expand_128_sbox;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vaes_key_expand_128 VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vaes_key_expand_128__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_INW(&data_in,127,0,4);
    VL_INW(&key,127,0,4);
    VL_OUTW(&data_out,127,0,4);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u0;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u1;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u2;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u3;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u4;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u5;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u6;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u7;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u8;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u9;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u10;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u11;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u12;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u13;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u14;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u15;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u16;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u17;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u18;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u19;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u20;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u21;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u22;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u23;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u24;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u25;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u26;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u27;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u28;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u29;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u30;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u31;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u32;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u33;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u34;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u35;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u36;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u37;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u38;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__a0__DOT__u39;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r0__DOT__a1__DOT__q0;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r0__DOT__a1__DOT__q1;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r0__DOT__a1__DOT__q2;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r0__DOT__a1__DOT__q3;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r0__DOT__a1__DOT__q4;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r0__DOT__a1__DOT__q5;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r0__DOT__a1__DOT__q6;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r0__DOT__a1__DOT__q7;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r0__DOT__a1__DOT__q8;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r0__DOT__a1__DOT__q9;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r0__DOT__a1__DOT__q10;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r0__DOT__a1__DOT__q11;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r0__DOT__a1__DOT__q12;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r0__DOT__a1__DOT__q13;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r0__DOT__a1__DOT__q14;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r0__DOT__a1__DOT__q15;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r1__DOT__a1__DOT__q0;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r1__DOT__a1__DOT__q1;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r1__DOT__a1__DOT__q2;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r1__DOT__a1__DOT__q3;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r1__DOT__a1__DOT__q4;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r1__DOT__a1__DOT__q5;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r1__DOT__a1__DOT__q6;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r1__DOT__a1__DOT__q7;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r1__DOT__a1__DOT__q8;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r1__DOT__a1__DOT__q9;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r1__DOT__a1__DOT__q10;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r1__DOT__a1__DOT__q11;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r1__DOT__a1__DOT__q12;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r1__DOT__a1__DOT__q13;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r1__DOT__a1__DOT__q14;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r1__DOT__a1__DOT__q15;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r2__DOT__a1__DOT__q0;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r2__DOT__a1__DOT__q1;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r2__DOT__a1__DOT__q2;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r2__DOT__a1__DOT__q3;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r2__DOT__a1__DOT__q4;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r2__DOT__a1__DOT__q5;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r2__DOT__a1__DOT__q6;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r2__DOT__a1__DOT__q7;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r2__DOT__a1__DOT__q8;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r2__DOT__a1__DOT__q9;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r2__DOT__a1__DOT__q10;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r2__DOT__a1__DOT__q11;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r2__DOT__a1__DOT__q12;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r2__DOT__a1__DOT__q13;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r2__DOT__a1__DOT__q14;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r2__DOT__a1__DOT__q15;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r3__DOT__a1__DOT__q0;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r3__DOT__a1__DOT__q1;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r3__DOT__a1__DOT__q2;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r3__DOT__a1__DOT__q3;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r3__DOT__a1__DOT__q4;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r3__DOT__a1__DOT__q5;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r3__DOT__a1__DOT__q6;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r3__DOT__a1__DOT__q7;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r3__DOT__a1__DOT__q8;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r3__DOT__a1__DOT__q9;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r3__DOT__a1__DOT__q10;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r3__DOT__a1__DOT__q11;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r3__DOT__a1__DOT__q12;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r3__DOT__a1__DOT__q13;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r3__DOT__a1__DOT__q14;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r3__DOT__a1__DOT__q15;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r4__DOT__a1__DOT__q0;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r4__DOT__a1__DOT__q1;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r4__DOT__a1__DOT__q2;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r4__DOT__a1__DOT__q3;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r4__DOT__a1__DOT__q4;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r4__DOT__a1__DOT__q5;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r4__DOT__a1__DOT__q6;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r4__DOT__a1__DOT__q7;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r4__DOT__a1__DOT__q8;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r4__DOT__a1__DOT__q9;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r4__DOT__a1__DOT__q10;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r4__DOT__a1__DOT__q11;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r4__DOT__a1__DOT__q12;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r4__DOT__a1__DOT__q13;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r4__DOT__a1__DOT__q14;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r4__DOT__a1__DOT__q15;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r5__DOT__a1__DOT__q0;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r5__DOT__a1__DOT__q1;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r5__DOT__a1__DOT__q2;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r5__DOT__a1__DOT__q3;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r5__DOT__a1__DOT__q4;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r5__DOT__a1__DOT__q5;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r5__DOT__a1__DOT__q6;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r5__DOT__a1__DOT__q7;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r5__DOT__a1__DOT__q8;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r5__DOT__a1__DOT__q9;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r5__DOT__a1__DOT__q10;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r5__DOT__a1__DOT__q11;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r5__DOT__a1__DOT__q12;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r5__DOT__a1__DOT__q13;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r5__DOT__a1__DOT__q14;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r5__DOT__a1__DOT__q15;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r6__DOT__a1__DOT__q0;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r6__DOT__a1__DOT__q1;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r6__DOT__a1__DOT__q2;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r6__DOT__a1__DOT__q3;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r6__DOT__a1__DOT__q4;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r6__DOT__a1__DOT__q5;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r6__DOT__a1__DOT__q6;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r6__DOT__a1__DOT__q7;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r6__DOT__a1__DOT__q8;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r6__DOT__a1__DOT__q9;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r6__DOT__a1__DOT__q10;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r6__DOT__a1__DOT__q11;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r6__DOT__a1__DOT__q12;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r6__DOT__a1__DOT__q13;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r6__DOT__a1__DOT__q14;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r6__DOT__a1__DOT__q15;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r7__DOT__a1__DOT__q0;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r7__DOT__a1__DOT__q1;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r7__DOT__a1__DOT__q2;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r7__DOT__a1__DOT__q3;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r7__DOT__a1__DOT__q4;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r7__DOT__a1__DOT__q5;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r7__DOT__a1__DOT__q6;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r7__DOT__a1__DOT__q7;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r7__DOT__a1__DOT__q8;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r7__DOT__a1__DOT__q9;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r7__DOT__a1__DOT__q10;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r7__DOT__a1__DOT__q11;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r7__DOT__a1__DOT__q12;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r7__DOT__a1__DOT__q13;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r7__DOT__a1__DOT__q14;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r7__DOT__a1__DOT__q15;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r8__DOT__a1__DOT__q0;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r8__DOT__a1__DOT__q1;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r8__DOT__a1__DOT__q2;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r8__DOT__a1__DOT__q3;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r8__DOT__a1__DOT__q4;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r8__DOT__a1__DOT__q5;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r8__DOT__a1__DOT__q6;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r8__DOT__a1__DOT__q7;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r8__DOT__a1__DOT__q8;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r8__DOT__a1__DOT__q9;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r8__DOT__a1__DOT__q10;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r8__DOT__a1__DOT__q11;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r8__DOT__a1__DOT__q12;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r8__DOT__a1__DOT__q13;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r8__DOT__a1__DOT__q14;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r8__DOT__a1__DOT__q15;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r9__DOT__a1__DOT__q0;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r9__DOT__a1__DOT__q1;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r9__DOT__a1__DOT__q2;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r9__DOT__a1__DOT__q3;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r9__DOT__a1__DOT__q4;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r9__DOT__a1__DOT__q5;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r9__DOT__a1__DOT__q6;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r9__DOT__a1__DOT__q7;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r9__DOT__a1__DOT__q8;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r9__DOT__a1__DOT__q9;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r9__DOT__a1__DOT__q10;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r9__DOT__a1__DOT__q11;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r9__DOT__a1__DOT__q12;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r9__DOT__a1__DOT__q13;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r9__DOT__a1__DOT__q14;
    Vaes_key_expand_128_sbox* const __PVT__aes_main__DOT__r9__DOT__a1__DOT__q15;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vaes_key_expand_128___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vaes_key_expand_128(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vaes_key_expand_128(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vaes_key_expand_128();
  private:
    VL_UNCOPYABLE(Vaes_key_expand_128);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
