//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t add_dump_region(int32_t a1, char * a2);
int32_t add_pre_crash_regions(int32_t a1);
int32_t disable_shutdown_timer(int32_t a1);
int32_t enable_shutdown_timer(int32_t a1);
int32_t kernel_log_find(char * str, char * a2, int32_t a3);
int32_t send_usb_status_command(char a1, int32_t a2, int32_t a3, int32_t a4);
int32_t sh_erase(int32_t a1);
int32_t sh_flash(int32_t a1);
int32_t sh_recover(int32_t a1);
int32_t shutdown_timer_func(int32_t a1, int32_t a2);
int32_t sod_init(void);
int32_t sod_ramdump_clear(int32_t a1, int32_t a2);
int32_t start_usb_detection(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
char * test_AES(void);
char * test_rand(void);
int32_t type_atoi_15(char * str, int32_t a2, int32_t a3);
int32_t update_usb_status(int32_t a1, int32_t a2, int32_t a3);
int32_t usb_detection_init(void);
int32_t usb_status_handler(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t userdata_resize(int32_t a1, int32_t a2, int32_t a3);
int32_t userdata_stat(int32_t * a1, int32_t * a2, int32_t * a3);

// --------------------- Global Variables ---------------------

int32_t g24 = 0; // LR
int32_t g25 = 0; // R0
int32_t g26 = 0; // R1
int32_t g27 = 0; // R10
int32_t g28 = 0; // R2
int32_t g29 = 0; // R3
int32_t g30 = 0; // R4
int32_t g31 = 0; // R5
int32_t g32 = 0; // R6
int32_t g33 = 0; // R7
int32_t g34 = 0; // R8
int32_t g35 = 0; // R9
int32_t g1 = -0x16d2bfed; // 0x8f634630
int32_t g2 = -0x1a60ce68; // 0x8f634848
int32_t g3 = -0x16d2bf09; // 0x8f634ac0
int32_t (*g4)(int32_t) = (int32_t (*)(int32_t))-0x16d2bfed; // 0x8f638714
int32_t g5 = 0x2020003a; // 0x8f686ac4
int32_t g6 = 0x65440030; // 0x8f69c66f
int32_t g7 = -0x70a00000; // 0x8f6ac224
int32_t g8 = -0x709c73f8; // 0x8f6ac374
int32_t g9 = 0; // 0x8f6e06fc
char * g10; // 0x8f6e0718
char * g11; // 0x8f6e071c
char * g12; // 0x8f6e0720
int32_t g13 = 0; // 0x8f6e0724
int32_t g14 = 0; // 0x8f6e0740
int32_t g15 = 0; // 0x8f6e0744
int32_t g16 = 0; // 0x8f6e0748
int32_t g17 = 0; // 0x8f6e0764
int32_t g18 = 0; // 0x8f6e078c
int32_t g19 = 0; // 0x8f6e0790
char * g20; // 0x8f6e0794
char * g21; // 0x8f6e0798
int32_t g22 = 0; // 0x8f7112f4
int32_t g23 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f635198 - 0x8f635313
int32_t sh_flash(int32_t a1) {
    // 0x8f635198
    int32_t v1;
    int32_t v2 = v1; // bp-72
    int32_t v3 = g30; // 0x8f635198
    int32_t v4 = g31; // 0x8f635198
    int32_t v5 = g32; // 0x8f635198
    int32_t v6 = g33; // 0x8f635198
    g30 = a1;
    int32_t v7 = g22;
    int32_t v8; // 0x8f63523c
    int32_t v9; // 0x8f63527c
    int32_t v10; // 0x8f635254
    int32_t v11; // 0x8f6352d01
    int32_t v12; // 0x8f63521c_0
    int32_t v13; // 0x8f635230_4
    int32_t v14; // 0x8f635270_4
    int32_t v15; // 0x8f6352b8_0
    int32_t v16; // 0x8f6351ec
    char * found_char_pos; // 0x8f635230
    int32_t v17; // 0x8f63523c
    char * found_char_pos2; // 0x8f635270
    int32_t v18; // R3
    int32_t result; // R7
    int32_t v19;
    int32_t v20;
    int32_t str;
    int32_t v21;
    int32_t v22;
    int32_t v23; // 0x8f63529c
    int32_t v24; // 0x8f6352a4
    int32_t result2; // 0x8f6352d8
    int32_t v25; // 0x8f6351dc
    int32_t v26; // 0x8f6351e0
    int32_t v27; // 0x8f6352a4
    int32_t v28; // 0x8f6351dc
    int32_t v29; // 0x8f6352a4
    int32_t v30; // 0x8f635284
    if (a1 == 0) {
        // 0x8f6351c0
        _panic(g24, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"app/mbm/sod.c", 174, (int32_t)"sh && sh->preamble.offset>0", 0, v1);
        v10 = v2;
        a1 = g30;
        // branch -> 0x8f6351dc
        // 0x8f6351dc
        v25 = *(int32_t *)(a1 + 8);
        v28 = *(int32_t *)(a1 + 12);
        v26 = (int32_t)"app/mbm/sod.c" & -0x10000 | 3496;
        v16 = generic_mmc_write_logical(v25, v28, v26, 0, a1, 0, v10, v21, 0, str, 0, 0, 0, 0, 0, 0, 0, v7, v20, v3, v4, v5, v6, g24, v19, 0, 0, 0);
        result = v16;
        if (v16 == 0) {
            // 0x8f63520c
            __utag_unprotect(0, (int32_t)"sod.offset", v26, 0, a1, 0, v10, v21, 0, str);
            v12 = &str;
            strncpy((char *)&str, "sod.offset", 31);
            found_char_pos = strrchr((char *)&str, 58);
            v13 = (int32_t)found_char_pos;
            v8 = v13;
            if (found_char_pos != NULL) {
                // if_8f635238_0_true
                v8 = v13 + 1;
                // branch -> after_if_8f635238_0
            }
            // after_if_8f635238_0
            v17 = type_atoi_15((char *)v8, 58, 31);
            v23 = v17;
            if (v17 == 0) {
                // 0x8f635248
                strlcat(v12, (int32_t)&g5, 31, 0, a1, 0, v10, v21, 0, str, 0, 0);
                strlcat(v12, (int32_t)"ullong", 31, 0, a1, 0, v2, v21, 0, str, 0, 0);
                found_char_pos2 = strrchr((char *)&str, 58);
                v14 = (int32_t)found_char_pos2;
                v9 = v14;
                if (found_char_pos2 != NULL) {
                    // if_8f635278_0_true
                    v9 = v14 + 1;
                    // branch -> after_if_8f635278_0
                }
                // after_if_8f635278_0
                v23 = type_atoi_15((char *)v9, 58, 31);
                // branch -> 0x8f635280
            }
            // 0x8f635280
            v30 = (v23 + 255) % 256;
            v18 = v30;
            if (v30 > 253) {
                // 0x8f63529c
                if (v23 == 255) {
                    v11 = v21;
                    // 0x8f6352c0
                    g26 = (int32_t)"sod.offset";
                    __utag_protect(0, (int32_t)"sod.offset", g28, v30, a1, 0, v2, v11, 0, str);
                    __utags_flush(0, (int32_t)"sod.offset", g28, v18, a1, 0, v2, v11);
                    // branch -> 0x8f6352d4
                    // 0x8f6352d4
                    g28 = v7;
                    v22 = g22;
                    g29 = v22;
                    if (v7 != v22) {
                        // 0x8f6352e8
                        __stack_chk_fail();
                        // branch -> 0x8f6352ec
                    }
                    // 0x8f6352ec
                    g30 = v3;
                    g31 = v4;
                    g32 = v5;
                    g33 = v6;
                    return result;
                }
            } else {
                // 0x8f635290
                if (v23 != 7) {
                    v11 = v21;
                    // 0x8f6352c0
                    g26 = (int32_t)"sod.offset";
                    __utag_protect(0, (int32_t)"sod.offset", g28, v30, a1, 0, v2, v11, 0, str);
                    __utags_flush(0, (int32_t)"sod.offset", g28, v18, a1, 0, v2, v11);
                    // branch -> 0x8f6352d4
                    // 0x8f6352d4
                    g28 = v7;
                    v22 = g22;
                    g29 = v22;
                    if (v7 != v22) {
                        // 0x8f6352e8
                        __stack_chk_fail();
                        // branch -> 0x8f6352ec
                    }
                    // 0x8f6352ec
                    g30 = v3;
                    g31 = v4;
                    g32 = v5;
                    g33 = v6;
                    return result;
                }
            }
            // 0x8f6352a4
            v24 = g30;
            v27 = *(int32_t *)(v24 + 8);
            v29 = *(int32_t *)(v24 + 12);
            v18 = 8;
            v15 = &v2;
            g28 = v15;
            v2 = v27;
            __utag_write(0, v12, v15, 8, a1, 0, v27, v29, 0, str, 0, 0, 0, 0, 0, 0, 0);
            v11 = v29;
            // branch -> 0x8f6352c0
            // 0x8f6352c0
            g26 = (int32_t)"sod.offset";
            __utag_protect(0, (int32_t)"sod.offset", g28, v18, a1, 0, v2, v11, 0, str);
            __utags_flush(0, (int32_t)"sod.offset", g28, v18, a1, 0, v2, v11);
            result2 = result;
            // branch -> 0x8f6352d4
        } else {
            // 0x8f6351f8
            g26 = (int32_t)"Failed to flash SOD header\n";
            print_log(-1, (int32_t)"Failed to flash SOD header\n", v26, 0, a1, 0, v10, v21, 0, str, 0, 0, 0);
            result2 = -20;
            // branch -> 0x8f6352d4
        }
        // 0x8f6352d4
        g28 = v7;
        v22 = g22;
        g29 = v22;
        if (v7 != v22) {
            // 0x8f6352e8
            __stack_chk_fail();
            // branch -> 0x8f6352ec
        }
        // 0x8f6352ec
        g30 = v3;
        g31 = v4;
        g32 = v5;
        g33 = v6;
        return result2;
    }
    int32_t v31 = *(int32_t *)(a1 + 8); // 0x8f6351b4
    if (v31 != *(int32_t *)(a1 + 12)) {
        v10 = v1;
        // 0x8f6351dc
        v25 = *(int32_t *)(a1 + 8);
        v28 = *(int32_t *)(a1 + 12);
        v26 = v31 & -0x10000 | 3496;
        v16 = generic_mmc_write_logical(v25, v28, v26, 0, a1, 0, v10, v21, 0, str, 0, 0, 0, 0, 0, 0, 0, v7, v20, v3, v4, v5, v6, g24, v19, 0, 0, 0);
        result = v16;
        if (v16 == 0) {
            // 0x8f63520c
            __utag_unprotect(0, (int32_t)"sod.offset", v26, 0, a1, 0, v10, v21, 0, str);
            v12 = &str;
            strncpy((char *)&str, "sod.offset", 31);
            found_char_pos = strrchr((char *)&str, 58);
            v13 = (int32_t)found_char_pos;
            v8 = v13;
            if (found_char_pos != NULL) {
                // if_8f635238_0_true
                v8 = v13 + 1;
                // branch -> after_if_8f635238_0
            }
            // after_if_8f635238_0
            v17 = type_atoi_15((char *)v8, 58, 31);
            v23 = v17;
            if (v17 == 0) {
                // 0x8f635248
                strlcat(v12, (int32_t)&g5, 31, 0, a1, 0, v10, v21, 0, str, 0, 0);
                strlcat(v12, (int32_t)"ullong", 31, 0, a1, 0, v2, v21, 0, str, 0, 0);
                found_char_pos2 = strrchr((char *)&str, 58);
                v14 = (int32_t)found_char_pos2;
                v9 = v14;
                if (found_char_pos2 != NULL) {
                    // if_8f635278_0_true
                    v9 = v14 + 1;
                    // branch -> after_if_8f635278_0
                }
                // after_if_8f635278_0
                v23 = type_atoi_15((char *)v9, 58, 31);
                // branch -> 0x8f635280
            }
            // 0x8f635280
            v30 = (v23 + 255) % 256;
            v18 = v30;
            if (v30 > 253) {
                // 0x8f63529c
                if (v23 == 255) {
                    v11 = v21;
                    // 0x8f6352c0
                    g26 = (int32_t)"sod.offset";
                    __utag_protect(0, (int32_t)"sod.offset", g28, v30, a1, 0, v2, v11, 0, str);
                    __utags_flush(0, (int32_t)"sod.offset", g28, v18, a1, 0, v2, v11);
                    // branch -> 0x8f6352d4
                    // 0x8f6352d4
                    g28 = v7;
                    v22 = g22;
                    g29 = v22;
                    if (v7 != v22) {
                        // 0x8f6352e8
                        __stack_chk_fail();
                        // branch -> 0x8f6352ec
                    }
                    // 0x8f6352ec
                    g30 = v3;
                    g31 = v4;
                    g32 = v5;
                    g33 = v6;
                    return result;
                }
            } else {
                // 0x8f635290
                if (v23 != 7) {
                    v11 = v21;
                    // 0x8f6352c0
                    g26 = (int32_t)"sod.offset";
                    __utag_protect(0, (int32_t)"sod.offset", g28, v30, a1, 0, v2, v11, 0, str);
                    __utags_flush(0, (int32_t)"sod.offset", g28, v18, a1, 0, v2, v11);
                    // branch -> 0x8f6352d4
                    // 0x8f6352d4
                    g28 = v7;
                    v22 = g22;
                    g29 = v22;
                    if (v7 != v22) {
                        // 0x8f6352e8
                        __stack_chk_fail();
                        // branch -> 0x8f6352ec
                    }
                    // 0x8f6352ec
                    g30 = v3;
                    g31 = v4;
                    g32 = v5;
                    g33 = v6;
                    return result;
                }
            }
            // 0x8f6352a4
            v24 = g30;
            v27 = *(int32_t *)(v24 + 8);
            v29 = *(int32_t *)(v24 + 12);
            v18 = 8;
            v15 = &v2;
            g28 = v15;
            v2 = v27;
            __utag_write(0, v12, v15, 8, a1, 0, v27, v29, 0, str, 0, 0, 0, 0, 0, 0, 0);
            v11 = v29;
            // branch -> 0x8f6352c0
            // 0x8f6352c0
            g26 = (int32_t)"sod.offset";
            __utag_protect(0, (int32_t)"sod.offset", g28, v18, a1, 0, v2, v11, 0, str);
            __utags_flush(0, (int32_t)"sod.offset", g28, v18, a1, 0, v2, v11);
            result2 = result;
            // branch -> 0x8f6352d4
        } else {
            // 0x8f6351f8
            g26 = (int32_t)"Failed to flash SOD header\n";
            print_log(-1, (int32_t)"Failed to flash SOD header\n", v26, 0, a1, 0, v10, v21, 0, str, 0, 0, 0);
            result2 = -20;
            // branch -> 0x8f6352d4
        }
        // 0x8f6352d4
        g28 = v7;
        v22 = g22;
        g29 = v22;
        if (v7 != v22) {
            // 0x8f6352e8
            __stack_chk_fail();
            // branch -> 0x8f6352ec
        }
        // 0x8f6352ec
        g30 = v3;
        g31 = v4;
        g32 = v5;
        g33 = v6;
        return result2;
    }
    // 0x8f6351c0
    _panic(g24, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"app/mbm/sod.c", 174, (int32_t)"sh && sh->preamble.offset>0", 0, v1);
    v10 = v2;
    a1 = g30;
    // branch -> 0x8f6351dc
    // 0x8f6351dc
    v25 = *(int32_t *)(a1 + 8);
    v28 = *(int32_t *)(a1 + 12);
    v26 = (int32_t)"app/mbm/sod.c" & -0x10000 | 3496;
    v16 = generic_mmc_write_logical(v25, v28, v26, 0, a1, 0, v10, v21, 0, str, 0, 0, 0, 0, 0, 0, 0, v7, v20, v3, v4, v5, v6, g24, v19, 0, 0, 0);
    result = v16;
    if (v16 == 0) {
        // 0x8f63520c
        __utag_unprotect(0, (int32_t)"sod.offset", v26, 0, a1, 0, v10, v21, 0, str);
        v12 = &str;
        strncpy((char *)&str, "sod.offset", 31);
        found_char_pos = strrchr((char *)&str, 58);
        v13 = (int32_t)found_char_pos;
        v8 = v13;
        if (found_char_pos != NULL) {
            // if_8f635238_0_true
            v8 = v13 + 1;
            // branch -> after_if_8f635238_0
        }
        // after_if_8f635238_0
        v17 = type_atoi_15((char *)v8, 58, 31);
        v23 = v17;
        if (v17 == 0) {
            // 0x8f635248
            strlcat(v12, (int32_t)&g5, 31, 0, a1, 0, v10, v21, 0, str, 0, 0);
            strlcat(v12, (int32_t)"ullong", 31, 0, a1, 0, v2, v21, 0, str, 0, 0);
            found_char_pos2 = strrchr((char *)&str, 58);
            v14 = (int32_t)found_char_pos2;
            v9 = v14;
            if (found_char_pos2 != NULL) {
                // if_8f635278_0_true
                v9 = v14 + 1;
                // branch -> after_if_8f635278_0
            }
            // after_if_8f635278_0
            v23 = type_atoi_15((char *)v9, 58, 31);
            // branch -> 0x8f635280
        }
        // 0x8f635280
        v30 = (v23 + 255) % 256;
        v18 = v30;
        if (v30 > 253) {
            // 0x8f63529c
            if (v23 == 255) {
                v11 = v21;
                // 0x8f6352c0
                g26 = (int32_t)"sod.offset";
                __utag_protect(0, (int32_t)"sod.offset", g28, v30, a1, 0, v2, v11, 0, str);
                __utags_flush(0, (int32_t)"sod.offset", g28, v18, a1, 0, v2, v11);
                // branch -> 0x8f6352d4
                // 0x8f6352d4
                g28 = v7;
                v22 = g22;
                g29 = v22;
                if (v7 != v22) {
                    // 0x8f6352e8
                    __stack_chk_fail();
                    // branch -> 0x8f6352ec
                }
                // 0x8f6352ec
                g30 = v3;
                g31 = v4;
                g32 = v5;
                g33 = v6;
                return result;
            }
        } else {
            // 0x8f635290
            if (v23 != 7) {
                v11 = v21;
                // 0x8f6352c0
                g26 = (int32_t)"sod.offset";
                __utag_protect(0, (int32_t)"sod.offset", g28, v30, a1, 0, v2, v11, 0, str);
                __utags_flush(0, (int32_t)"sod.offset", g28, v18, a1, 0, v2, v11);
                // branch -> 0x8f6352d4
                // 0x8f6352d4
                g28 = v7;
                v22 = g22;
                g29 = v22;
                if (v7 != v22) {
                    // 0x8f6352e8
                    __stack_chk_fail();
                    // branch -> 0x8f6352ec
                }
                // 0x8f6352ec
                g30 = v3;
                g31 = v4;
                g32 = v5;
                g33 = v6;
                return result;
            }
        }
        // 0x8f6352a4
        v24 = g30;
        v27 = *(int32_t *)(v24 + 8);
        v29 = *(int32_t *)(v24 + 12);
        v18 = 8;
        v15 = &v2;
        g28 = v15;
        v2 = v27;
        __utag_write(0, v12, v15, 8, a1, 0, v27, v29, 0, str, 0, 0, 0, 0, 0, 0, 0);
        v11 = v29;
        // branch -> 0x8f6352c0
        // 0x8f6352c0
        g26 = (int32_t)"sod.offset";
        __utag_protect(0, (int32_t)"sod.offset", g28, v18, a1, 0, v2, v11, 0, str);
        __utags_flush(0, (int32_t)"sod.offset", g28, v18, a1, 0, v2, v11);
        result2 = result;
        // branch -> 0x8f6352d4
    } else {
        // 0x8f6351f8
        g26 = (int32_t)"Failed to flash SOD header\n";
        print_log(-1, (int32_t)"Failed to flash SOD header\n", v26, 0, a1, 0, v10, v21, 0, str, 0, 0, 0);
        result2 = -20;
        // branch -> 0x8f6352d4
    }
    // 0x8f6352d4
    g28 = v7;
    v22 = g22;
    g29 = v22;
    if (v7 != v22) {
        // 0x8f6352e8
        __stack_chk_fail();
        // branch -> 0x8f6352ec
    }
    // 0x8f6352ec
    g30 = v3;
    g31 = v4;
    g32 = v5;
    g33 = v6;
    return result2;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int sprintf(char * restrict s, const char * restrict format, ...);
// char * strchr(char * s, int c);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// char * strrchr(char * s, int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 21
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:42:56