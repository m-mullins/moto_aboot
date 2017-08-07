//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t __utag_gets_constprop_6(char * a1, int32_t a2);
int32_t disable_mdss_duallink(int32_t a1);

// --------------------- Global Variables ---------------------

int32_t g5 = 0; // R2
int32_t g1 = 0x2020003a; // 0x8f686ac4
int32_t g2 = -1; // 0x8f6ac0c0
int32_t g3 = -1; // 0x8f6ac0cc
int32_t g4 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f613980 - 0x8f613b8f
int32_t disable_mdss_duallink(int32_t a1) {
    int32_t v1 = 0; // 0x8f613980
    int32_t v2 = 0; // 0x8f613980
    int32_t v3 = 0; // 0x8f613980
    int32_t v4 = 0; // 0x8f613980
    int32_t v5 = (bool)false ? (int32_t)&g4 : 0; // 0x8f613980
    int32_t v6 = a1; // R4
    int32_t v7 = g4;
    if (board_platform_id(a1, 0) != 178) {
        // 0x8f613b34
        // branch -> 0x8f613b38
        // 0x8f613b38
        if (v7 != g4) {
            // 0x8f613b48
            __stack_chk_fail();
            // branch -> 0x8f613b4c
        }
        // 0x8f613b4c
        return 0;
    }
    // 0x8f6139a4
    int32_t v8;
    int32_t v9 = update_cached_node_offset(v6, 3, g5, v7, v8, 0, 0, v7, 0, v1, v2, v3, v4); // 0x8f6139ac
    int32_t result; // 0x8f613b50_2
    if (v9 != -1) {
        int32_t v10 = &g2; // R3
        int32_t result2 = 2; // R6
        int32_t v11 = &g2; // 0x8f6139d4
        int32_t v12 = g3; // 0x8f6139c8
        // branch -> 0x8f6139c8
        while (true) {
            int32_t v13 = fdt_node_offset_by_compatible(v6, v12, (int32_t)"qcom,mdss-dsi-ctrl", v11, v8, 0, 0, v7, 0, v1, v2, v3, v4); // 0x8f6139d4
            int32_t v14 = v13; // R5
            if (v13 < 0) {
                // if_8f6139dc_0_true
                // branch -> 0x8f613a4c
            } else {
                // 0x8f6139e8
                v10 = 0;
                int32_t v15 = fdt_getprop(v6, v13, (int32_t)"cell-index", 0, v8, 0, 0, v7, 0, v1); // 0x8f6139f8
                int32_t v16; // 0x8f613aac
                int32_t v17;
                if (v15 != 0) {
                    int32_t v18 = *(int32_t *)v15; // 0x8f613a04
                    int32_t v19 = fdt32_to_cpu(v18, v13, (int32_t)"cell-index", v10, v8, 0, 0, v7, 0); // 0x8f613a08
                    int32_t v20 = v19; // R9
                    if (v19 == 1) {
                        int32_t v21 = (int32_t)"status"; // R2
                        v10 = (int32_t)"disabled";
                        int32_t v22 = strlen("disabled") + 1; // 0x8f613a2c
                        int32_t v23 = fdt_setprop(v6, v14, (int32_t)"status", (int32_t)"disabled", v22, 0, 0, v7, 0, v1, v2, v3, v4, v5, 0, 0, v17); // 0x8f613a38
                        int32_t v24; // R0
                        int32_t v25; // bp+212
                        if (v23 > -1) {
                            // 0x8f613a58
                            print_log(v20, (int32_t)"Disable mdss_dsi1\n", v21, v10, v22, 0, 0, v7, 0, v1, v2, v3, v4);
                            // branch -> 0x8f613a64
                            // 0x8f613a64
                            v14 = 0;
                            // branch -> 0x8f613aa0
                            while (true) {
                                // 0x8f613aa0
                                v16 = fdt_node_offset_by_compatible(v6, g3, (int32_t)"qcom,mdss-fb", v10, v17, 0, 0, 0, 0, 0, 0, 0, 0);
                                result2 = v16;
                                if (v16 > -1) {
                                  lab_0x8f613a78:
                                    // 0x8f613a78
                                    v10 = 0;
                                    int32_t v26 = fdt_getprop(v6, v16, (int32_t)"cell-index", 0, v17, 0, 0, 0, 0, 0); // 0x8f613a88
                                    if (v26 != 0) {
                                        int32_t v27 = *(int32_t *)v26; // 0x8f613acc
                                        if (fdt32_to_cpu(v27, v16, (int32_t)"cell-index", v10, v17, 0, 0, 0, 0) == 0) {
                                            // 0x8f613adc
                                            if (fdt_delprop(v6, result2, (int32_t)"qcom,mdss-fb-split", v10, v17, 0, 0, 0, 0, 0, 0, 0, 0) == 0) {
                                                // 0x8f613af4
                                                print_log(1, (int32_t)"Delete prop=qcom,mdss-fb-split, mdss-fb%d", v14, v10, v17, 0, 0, 0, 0, 0, 0, 0, 0);
                                                // branch -> 0x8f613b04
                                            }
                                            int32_t v28 = fdt_delprop(v6, result2, (int32_t)"qcom,mdss-fb-rot-180", v10, v17, 0, 0, 0, 0, 0, 0, 0, 0); // 0x8f613b10
                                            v6 = v28;
                                            if (v28 == 0) {
                                                // 0x8f613b1c
                                                print_log(1, (int32_t)"Delete prop=qcom,mdss-fb-rot-180, mdss-fb%d", v14, v10, v17, 0, 0, 0, 0, 0, 0, 0, 0);
                                                v24 = v6;
                                                v25 = v6;
                                                // branch -> 0x8f613b38
                                            } else {
                                                // 0x8f613b34
                                                v24 = 0;
                                                v25 = 0;
                                                // branch -> 0x8f613b38
                                            }
                                            // 0x8f613b38
                                            if (v7 != g4) {
                                                // 0x8f613b48
                                                __stack_chk_fail();
                                                result = v24;
                                                // branch -> 0x8f613b4c
                                            } else {
                                                result = v25;
                                            }
                                            // 0x8f613b4c
                                            return result;
                                        }
                                    }
                                    int32_t v29 = v14 + 1; // 0x8f613a94
                                    v14 = v29;
                                    if (v29 == 3) {
                                        // break -> 0x8f613b34
                                        break;
                                    }
                                    // continue -> 0x8f613aa0
                                    continue;
                                } else {
                                    // 0x8f613ab8
                                    print_log(-1, (int32_t)"ERROR: Can't find compatible of qcom,mdss-fb\n", (int32_t)"qcom,mdss-fb", v10, v17, 0, 0, 0, 0, 0, 0, 0, 0);
                                    // branch -> 0x8f613b38
                                }
                                // 0x8f613b38
                                if (v7 != g4) {
                                    // 0x8f613b48
                                    __stack_chk_fail();
                                    // branch -> 0x8f613b4c
                                }
                                // 0x8f613b4c
                                return result2;
                            }
                            // 0x8f613b34
                            v24 = 0;
                            v25 = 0;
                            // branch -> 0x8f613b38
                        } else {
                            // 0x8f613a44
                            // branch -> 0x8f613a4c
                            // 0x8f613a4c
                            print_log(-1, (int32_t)"Cannot disable mdss_dsi1\n", v21, v10, v22, 0, 0, v7, 0, v1, v2, v3, v4);
                            v24 = v23;
                            v25 = v23;
                            // branch -> 0x8f613b38
                        }
                        // 0x8f613b38
                        if (v7 != g4) {
                            // 0x8f613b48
                            __stack_chk_fail();
                            result = v24;
                            // branch -> 0x8f613b4c
                        } else {
                            result = v25;
                        }
                        // 0x8f613b4c
                        return result;
                    }
                }
                int32_t v30 = result2; // 0x8f613a6c
                result2 = v30 - 1;
                if (v30 == 1) {
                    // 0x8f613a64
                    v14 = 0;
                    // branch -> 0x8f613aa0
                    while (true) {
                        // 0x8f613aa0
                        v16 = fdt_node_offset_by_compatible(v6, g3, (int32_t)"qcom,mdss-fb", v10, v17, 0, 0, 0, 0, 0, 0, 0, 0);
                        result2 = v16;
                        if (v16 > -1) {
                            goto lab_0x8f613a78;
                        }
                        // 0x8f613ab8
                        print_log(-1, (int32_t)"ERROR: Can't find compatible of qcom,mdss-fb\n", (int32_t)"qcom,mdss-fb", v10, v17, 0, 0, 0, 0, 0, 0, 0, 0);
                        // branch -> 0x8f613b38
                        // 0x8f613b38
                        if (v7 != g4) {
                            // 0x8f613b48
                            __stack_chk_fail();
                            // branch -> 0x8f613b4c
                        }
                        // 0x8f613b4c
                        return result2;
                    }
                } else {
                    // 0x8f613a6c
                    v11 = v10;
                    v12 = v14;
                    // branch -> 0x8f6139c8
                    continue;
                }
            }
            // 0x8f613a4c
            print_log(-1, (int32_t)"ERROR: Can't find compatible of qcom,mdss-dsi-ctrl\n", (int32_t)"qcom,mdss-dsi-ctrl", v10, v8, 0, 0, v7, 0, v1, v2, v3, v4);
            // branch -> 0x8f613b38
        }
    }
    // 0x8f613b38
    if (v7 != g4) {
        // 0x8f613b48
        __stack_chk_fail();
        result = v9;
        // branch -> 0x8f613b4c
    } else {
        result = -1;
    }
    // 0x8f613b4c
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// size_t strlen(const char * s);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// char * strrchr(char * s, int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 07:21:31