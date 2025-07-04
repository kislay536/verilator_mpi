// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VAES_MAIN__DPI_H_
#define VERILATED_VAES_MAIN__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at obj_dir/Vround/round.sv:17:34
    extern void round_protectlib_check_hash(int protectlib_hash___05FV);
    // DPI import at obj_dir/Vround/round.sv:35:34
    extern void round_protectlib_combo_ignore(void* handle___05FV, const svLogicVecVal* data_in, const svLogicVecVal* key_in);
    // DPI import at obj_dir/Vround/round.sv:25:37
    extern long long round_protectlib_combo_update(void* handle___05FV, const svLogicVecVal* data_in, const svLogicVecVal* key_in, svLogicVecVal* data_out);
    // DPI import at obj_dir/Vround/round.sv:22:37
    extern void* round_protectlib_create(const char* scope___05FV);
    // DPI import at obj_dir/Vround/round.sv:42:34
    extern void round_protectlib_final(void* handle___05FV);

#ifdef __cplusplus
}
#endif

#endif  // guard
