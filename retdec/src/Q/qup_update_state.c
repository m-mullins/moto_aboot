//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int32_t qup_i2c_poll_state_isra_4(int32_t * a1, int32_t a2);
int32_t qup_update_state(int32_t a1, int32_t a2, int32_t a3);

// ------------------------ Functions -------------------------

// Address range: 0x8f61246c - 0x8f6124df
int32_t qup_update_state(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = a1 + 4; // 0x8f612470
    if (qup_i2c_poll_state_isra_4((int32_t *)v1, 0) != 0) {
        // 0x8f61249c
        // branch -> 0x8f6124c0
        // 0x8f6124d4
        return -5;
    }
    *(int32_t *)(*(int32_t *)(a1 + 4) + 4) = a2;
    int32_t result;
    if (qup_i2c_poll_state_isra_4((int32_t *)v1, a2) != 0) {
        // 0x8f61249c
        result = -5;
        // branch -> 0x8f6124c0
    } else {
        result = 0;
    }
    // 0x8f6124d4
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 07:05:12