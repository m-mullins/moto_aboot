//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int32_t sdhci_msm_config_dll_isra_4(char * a1, int32_t a2);
int32_t sdhci_msm_init_dll(char * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // 0x8f67d910
int32_t g2 = 1; // 0x8f67d914
int32_t g3 = 3; // 0x8f67d918
int32_t g4 = 2; // 0x8f67d91c
int32_t g5 = 6; // 0x8f67d920
int32_t g6 = 7; // 0x8f67d924
int32_t g7 = 5; // 0x8f67d928
int32_t g8 = 4; // 0x8f67d92c
int32_t g9 = 12; // 0x8f67d930
int32_t g10 = 13; // 0x8f67d934
int32_t g11 = 15; // 0x8f67d938
int32_t g12 = 14; // 0x8f67d93c
int32_t g13 = 10; // 0x8f67d940
int32_t g14 = 11; // 0x8f67d944
int32_t g15 = 9; // 0x8f67d948
int32_t g16 = 8; // 0x8f67d94c
int32_t g17 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f608270 - 0x8f60843b
int32_t sdhci_msm_init_dll(char * a1, int32_t a2, int32_t a3) {
    int32_t v1 = (int32_t)a1; // 0x8f608270_0
    int32_t v2 = (bool)false ? (int32_t)&g17 : 0; // 0x8f608270
    int32_t v3 = g17;
    int32_t * v4 = (int32_t *)(*(int32_t *)a1 + 268); // 0x8f608288_0
    int32_t v5 = *v4 & 2; // 0x8f60828c
    if (v5 != 0) {
        // if_8f608290_0_true
        *v4 = *v4 & -3;
        // branch -> after_if_8f608298_0
    }
    int32_t * v6 = (int32_t *)(*(int32_t *)v1 + 256); // 0x8f6082a0_0
    *v6 = *v6 | 0x40000000;
    int32_t * v7 = (int32_t *)(*(int32_t *)v1 + 256); // 0x8f6082b0_0
    *v7 = *v7 | 0x20000000;
    uint32_t v8 = *(int32_t *)(v1 + 4); // 0x8f6082c0
    int32_t v9 = 0; // 0x8f608354
    if (v8 > 0x6acfc00) {
        // 0x8f6082d4
        if (v8 > 0x7735940) {
            // 0x8f6082e4
            if (v8 > 0x82a7440) {
                // 0x8f6082f4
                if (v8 > 0x8f0d180) {
                    // 0x8f608304
                    if (v8 > 0x9a7ec80) {
                        // 0x8f608314
                        if (v8 > 0xa6e49c0) {
                            // 0x8f608324
                            if (v8 > 0xb2564c0) {
                                // 0x8f608334
                                v9 = v8 > 0xbebc200 ? 0 : 0x7000000;
                                // branch -> 0x8f608344
                            } else {
                                v9 = 0x6000000;
                            }
                        } else {
                            v9 = 0x5000000;
                        }
                    } else {
                        v9 = 0x4000000;
                    }
                } else {
                    v9 = 0x3000000;
                }
            } else {
                v9 = 0x2000000;
            }
        } else {
            v9 = 0x1000000;
        }
    }
    int32_t v10 = 50; // R5
    int32_t * v11 = (int32_t *)(*(int32_t *)v1 + 256); // 0x8f60834c_0
    int32_t v12 = *v11 & -0x7000001; // 0x8f608350
    *v11 = v12 | v9;
    int32_t * v13 = (int32_t *)(*(int32_t *)v1 + 256); // 0x8f608360_0
    *v13 = *v13 & -0x40000001;
    int32_t * v14 = (int32_t *)(*(int32_t *)v1 + 256); // 0x8f608370_0
    *v14 = *v14 & -0x20000001;
    int32_t * v15 = (int32_t *)(*(int32_t *)v1 + 256); // 0x8f608380_0
    *v15 = *v15 | 0x10000;
    int32_t * v16 = (int32_t *)(*(int32_t *)v1 + 256); // 0x8f608390_0
    *v16 = *v16 | 0x40000;
    // branch -> 0x8f60839c
    while (true) {
        int32_t v17 = *(int32_t *)v1; // 0x8f60839c
        int32_t v18 = *(int32_t *)(v17 + 264); // 0x8f6083a0
        if ((v18 & 128) != 0) {
            // 0x8f6083dc
            if (v5 == 0) {
                // if_8f6083e8_0_true
                // branch -> 0x8f6083f4
            } else {
                int32_t * v19 = (int32_t *)(v17 + 268); // 0x8f6083e0_1
                *v19 = *v19 | 2;
                // branch -> 0x8f6083f4
            }
            // 0x8f6083f4
            if (v3 != g17) {
                // 0x8f608404
                __stack_chk_fail();
                // branch -> 0x8f608408
            }
            // 0x8f608408
            return 0;
        }
        // 0x8f6083ac
        udelay(1, v12, v18, v17);
        int32_t v20 = v10; // 0x8f6083b4
        v10 = v20 - 1;
        if (v20 == 1) {
            // break -> 0x8f6083bc
            break;
        }
        // continue -> 0x8f60839c
    }
    int32_t v21 = *(int32_t *)(*(int32_t *)v1 + 264); // 0x8f6083cc
    int32_t v22;
    print_log(-1, (int32_t)"%s: Failed to get DLL lock: 0x%08x\n", (int32_t)"sdhci_msm_init_dll", v21, v1, v3, a3, 0, 0, v2, 0, 0, v22);
    // branch -> 0x8f6083f4
    // 0x8f6083f4
    if (v3 != g17) {
        // 0x8f608404
        __stack_chk_fail();
        // branch -> 0x8f608408
    }
    // 0x8f608408
    return 1;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 06:17:56
