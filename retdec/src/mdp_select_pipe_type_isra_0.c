//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

void function_8f60e190(int32_t a1);
int32_t mdp_select_pipe_type_isra_0(int32_t a1, int32_t * a2);
int32_t mdss_mdp_set_flush_isra_1(int32_t a1, int32_t * a2);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // R2

// ------------------------ Functions -------------------------

// Address range: 0x8f60e130 - 0x8f60e18f
int32_t mdp_select_pipe_type_isra_0(int32_t a1, int32_t * a2) {
    // 0x8f60e130
    int32_t result; // R0
    int32_t v1; // 0x8f60e17c
    switch (a1) {
        default: {
            // 0x8f60e170
            result = 0x1a05000;
            *a2 = 0x1a05000;
            v1 = 0x1a07000;
            // branch -> 0x8f60e17c
            break;
        }
        case 1: {
            // 0x8f60e160
            result = 0x1a15000;
            *a2 = 0x1a15000;
            v1 = 0x1a17000;
            // branch -> 0x8f60e17c
            break;
        }
        case 2: {
            // 0x8f60e150
            result = 0x1a25000;
            *a2 = 0x1a25000;
            v1 = 0x1a27000;
            // branch -> 0x8f60e17c
            break;
        }
    }
    // 0x8f60e17c
    *(int32_t *)g1 = v1;
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 3
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 06:47:29