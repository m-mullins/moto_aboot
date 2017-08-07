//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int32_t panel_power_off(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t panel_power_on(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g6 = 0; // R4
int32_t g1 = -1; // 0x8f6ac0d0
int32_t g2 = -1; // 0x8f6ac0d8
int32_t g3 = 0; // 0x8f7112f4
int32_t g4 = 0; // 0x8f7112fc
int32_t g5 = 0; // 0x8f711374

// ------------------------ Functions -------------------------

// Address range: 0x8f61873c - 0x8f6187b3
int32_t panel_power_on(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g3;
    int32_t v2;
    print_log(2, (int32_t)"%s is called\n", (int32_t)"panel_power_on", v1, a1, v1, g6, 0, v2, 0, 0, 0, 0);
    int32_t result = set_power_supply_list((int32_t)&g4, g2, 0, (int32_t)&g2, a1, v1, g6, 0, v2, 0, 0, 0, 0, 0, 0, 0, 0); // 0x8f61876c
    if (v1 == g3) {
        // 0x8f618784
        return print_log(2, (int32_t)"%s is done \n", (int32_t)"panel_power_on", v1, g6, 0, v2, 0, 0, 0, 0, 0, 0);
    }
    // 0x8f618780
    __stack_chk_fail();
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 07:54:24