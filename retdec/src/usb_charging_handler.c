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

int32_t add(int32_t * a1, int32_t a2);
int32_t charging_timer_func(int32_t a1, int32_t a2);
int32_t connect_key(void);
int32_t disconnect_key(void);
int32_t get_offset_ui_setting(int32_t a1, int32_t a2);
int32_t invalidate(int32_t a1);
int32_t key_handler(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);
int32_t key_timer_func(int32_t a1, int32_t a2);
int32_t refresh(char * str, int32_t a2);
int32_t screen_manager_entry(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t screen_manager_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t show(char * a1, int32_t a2, int32_t a3);
int32_t start_charging(int32_t a1);
int32_t stop(int32_t a1, int32_t a2);
char * test_AES(void);
int32_t test_HAB(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t test_ProcUID(void);
int32_t turn_on_display(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t usb_charging_handler(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);

// --------------------- Global Variables ---------------------

int32_t g34 = 0; // LR
int32_t g35 = 0; // R0
int32_t g36 = 0; // R1
int32_t g37 = 0; // R11
int32_t g38 = 0; // R2
int32_t g39 = 0; // R3
int32_t g40 = 0; // R4
int32_t g41 = 0; // R5
int32_t g42 = 0; // R6
int32_t g43 = 0; // R7
int32_t g44 = 0; // R8
int32_t g45 = 0; // R9
int32_t g1 = -0x16d2bfed; // 0x8f637e38
int32_t g2 = -0x1a60cd10; // 0x8f637e98
int32_t g3 = -0x1a60ceec; // 0x8f6383f0
int32_t g4 = -0x1500000c; // 0x8f638508
int32_t g5 = -0x16d2bfed; // 0x8f638524
int32_t g6 = -0x1a60ffa0; // 0x8f638958
int32_t g7 = -0x1a60ff98; // 0x8f638b94
int32_t g8 = -0x16d2bfed; // 0x8f638c08
int32_t g9 = -0x709c73f8; // 0x8f6ac374
int32_t g10 = 0; // 0x8f6ac394
int32_t g11 = 0; // 0x8f6b1608
int32_t g12 = 0; // 0x8f6b16e0
int32_t g13 = 0; // 0x8f6e07ac
char * g14; // 0x8f6e07c8
int32_t g15 = 0; // 0x8f6e07cc
int32_t g16 = 0; // 0x8f6e07e8
int32_t g17 = 0; // 0x8f6e07ec
int32_t g18 = 0; // 0x8f6e07f4
int32_t g19 = 0; // 0x8f6e0808
int32_t g20 = 0; // 0x8f6e080c
int32_t g21 = 0; // 0x8f6e0828
int32_t g22 = 0; // 0x8f6e082c
char * g23; // 0x8f6e0849
int32_t g24 = 0; // 0x8f6e084c
int32_t g25 = 0; // 0x8f6e0854
int32_t g26 = 0; // 0x8f6e0858
int32_t g27 = 0; // 0x8f6e085c
int32_t g28 = 0; // 0x8f6e0878
int32_t g29 = 0; // 0x8f6e0894
int32_t g30 = 0; // 0x8f6e08b0
int32_t g31 = 0; // 0x8f6e08b4
int32_t g32 = 0; // 0x8f7112f4
int32_t g33 = 0; // 0x8f7125d0

// ------------------------ Functions -------------------------

// Address range: 0x8f637e98 - 0x8f6381d7
int32_t usb_charging_handler(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    int32_t v1 = a2; // R1
    g38 = a3;
    int32_t v2 = g40; // 0x8f637e9c
    int32_t v3 = g41; // 0x8f637e9c
    int32_t v4 = g42; // 0x8f637e9c
    int32_t v5 = g43; // 0x8f637e9c
    int32_t v6 = g44; // 0x8f637e9c
    int32_t v7 = g45; // 0x8f637e9c
    int32_t v8 = g32;
    g39 = v8;
    int32_t v9 = is_charger_fan54046(a1, a2, a3, v8); // 0x8f637eac
    int32_t v10; // 0x8f6381881
    int32_t v11; // 0x8f637f10
    int32_t v12; // 0x8f637f14
    int32_t v13;
    int32_t v14;
    if (v9 == 0) {
        // 0x8f637ed0
        g43 = 6;
        if (is_charger_bq24296(0, v1, g38, g39, v14, v13, 0, v8) == 0) {
            // if_8f637ee0_0_true
            g40 = 0;
            // branch -> 0x8f637ee4
        } else {
            // if_8f637edc_0_true
            g40 = 2;
            // branch -> 0x8f637ee4
        }
        // 0x8f637ee4
        g44 = 3200;
        g41 = (int32_t)&g14;
        g42 = 1;
        g37 = &g17;
        v10 = v13;
        // branch -> 0x8f637ef8
        while (true) {
            // 0x8f637ef8
            event_wait((int32_t)&g15, v1);
            v1 = (int32_t)"staring charging...\n";
            print_log(1, (int32_t)"staring charging...\n", g38, g39, v14, v10, 0, v8, 0, v2, v3, v4, v5);
            v11 = thread_sleep(100, v1, g38, g39, v14, v10, 0, v8);
            v12 = is_usb_connected(v11, v1, g38, g39);
            int32_t v15; // 0x8f638114
            int32_t v16; // R0
            if (v12 == 0) {
              lab_0x8f637f20:
                // 0x8f637f20
                v1 = (int32_t)"USB disconnected, failed to start charging\n";
                v16 = print_log(0, (int32_t)"USB disconnected, failed to start charging\n", g38, g39, v14, v10, 0, v8, 0, v2, v3, v4, v5);
                // branch -> 0x8f63810c
            } else {
              lab_0x8f637f2c:;
                // 0x8f637f2c
                int32_t v17; // 0x8f637fb0
                if (is_charger_fan54046(v12, v1, g38, g39) == 0) {
                    // 0x8f637f70
                    if (is_charger_bq24296(0, v1, g38, g39, v14, v10, 0, v8) != 0) {
                        int32_t v18 = bq24296_chg_enable(1, v1, g38, g39, v14, v10, 0, v8); // 0x8f637f80
                        int32_t v19; // 0x8f637f90
                        if (is_usb_attached_cdp(v18, v1, g38) == 0) {
                            // 0x8f637f7c
                            v19 = g40;
                            // branch -> after_if_8f637f8c_0
                        } else {
                            // if_8f637f8c_0_true
                            g40 = 4;
                            v19 = 4;
                            // branch -> after_if_8f637f8c_0
                        }
                        // after_if_8f637f8c_0
                        bq24296_ibuslim_set(v19, v1, g38, g39, v14, v10, 0);
                        // branch -> 0x8f637f98
                    }
                } else {
                    int32_t v20 = g42; // 0x8f637f38
                    v1 = v20;
                    int32_t v21 = fan54046_chg_enable(1, v20, g38, g39, v14, v10, 0, v8); // 0x8f637f40
                    int32_t v22; // 0x8f637f50
                    if (is_usb_attached_cdp(v21, v1, g38) == 0) {
                        // 0x8f637f38
                        v22 = g40;
                        // branch -> after_if_8f637f4c_0
                    } else {
                        // if_8f637f4c_0_true
                        g40 = 2;
                        v22 = 2;
                        // branch -> after_if_8f637f4c_0
                    }
                    int32_t v23 = fan54046_get_ibuslim(fan54046_ibuslim_set(v22, v1, g38, g39, v14, v10), v1, g38, g39, v14, v10); // 0x8f637f58
                    if (g43 == 6) {
                        // after_if_8f637f64_0
                        g39 = (int32_t)"H\r";
                        g44 = *(int32_t *)(4 * v23 + (int32_t)"H\r");
                        // branch -> 0x8f637f98
                    } else {
                        // if_8f637f68_0_true
                        g44 = 3200;
                        // branch -> 0x8f637f98
                    }
                    // 0x8f637f98
                    pmic_set_chg_set_mode(1, v1, g38, g39, v14);
                    g38 = &g1;
                    g39 = 0;
                    v17 = timer_set_oneshot((int32_t)&g20, v1 & -0x10000 | 0xea60, (int32_t)&g1, 0, v14, v10, 0);
                    g36 = v17;
                    if (is_fastboot_screen((int32_t)&g20, v17, g38, g39) != 0) {
                      lab_0x8f637fc0:
                        // 0x8f637fc0
                        refresh("fastboot_screen", 128);
                        // branch -> 0x8f637fd4
                    }
                  lab_0x8f637fd4:;
                    int32_t v24 = &g16; // R9
                    // branch -> 0x8f637fd8
                    while (true) {
                      lab_0x8f637fd8:
                        // 0x8f637fd8
                        event_wait((int32_t)&g17, g36);
                        int32_t v25 = print_log(2, (int32_t)"starting monitoring battery voltage...\n", g38, g39, v14, v10, 0, v8, 0, v2, v3, v4, v5); // 0x8f637fe8
                        int32_t v26 = g18; // 0x8f637fec
                        if ((v26 & 0x40000000) == 0) {
                            int32_t v27 = is_usb_connected(v25, (int32_t)"starting monitoring battery voltage...\n", g38, v26); // 0x8f638028
                            if (v27 != 0) {
                                // 0x8f638034
                                if (is_fastboot_busy(v27, (int32_t)"starting monitoring battery voltage...\n", g38, v26, v14, v10, 0) == 0) {
                                    // 0x8f638040
                                    if (is_sufficient_pwr_avail(g16, (int32_t)"starting monitoring battery voltage...\n", g38, v26, v14, v10, 0, v8, 0, v2, v3, v4, v5, v6, v7) != 0) {
                                        // 0x8f638050
                                        v1 = (int32_t)"battery charged, disable charging\n";
                                        int32_t v28 = print_log(1, (int32_t)"battery charged, disable charging\n", g38, v26, v14, v10, 0, v8, 0, v2, v3, v4, v5); // 0x8f638058
                                        char v29 = *(char *)&g14; // 0x8f63805c
                                        int32_t v30 = v29; // 0x8f63805c
                                        g39 = v30;
                                        int32_t v31 = v30; // 0x8f63807414
                                        if (v29 == 0) {
                                            int32_t v32 = timer_cancel((int32_t)&g20, v1, g38, v30, v14, v10, 0, v8); // 0x8f63806c
                                            v31 = g39;
                                            v28 = v32;
                                            // branch -> 0x8f638070
                                        }
                                        // 0x8f638070
                                        v24 = v24 & -0x10000 | 1201;
                                        int32_t v33 = is_fastboot_busy(v28, v1, g38, v31, v14, v10, 0); // 0x8f63807415
                                        v16 = v33;
                                        if (v33 != 0) {
                                            while (true) {
                                                int32_t v34 = v24; // 0x8f638080
                                                v24 = v34 - 1;
                                                if (v34 != 1) {
                                                    int32_t v35 = is_fastboot_busy(thread_sleep(1000, v1, g38, g39, v14, v10, 0, v8), v1, g38, g39, v14, v10, 0); // 0x8f638074
                                                    v16 = v35;
                                                    if (v35 == 0) {
                                                        // break -> 0x8f63810c
                                                        break;
                                                    }
                                                    // continue -> 0x8f638080
                                                    continue;
                                                }
                                            }
                                            // 0x8f63810c
                                            g45 = 0;
                                            *(char *)g41 = 0;
                                            v15 = is_charger_fan54046(v16, v1, g38, g39);
                                            g39 = v15;
                                            int32_t v36; // 0x8f6381882
                                            if (v15 == 0) {
                                              lab_0x8f638130_2:
                                                // 0x8f638130
                                                g39 = 0;
                                                if (is_charger_bq24296(0, v1, g38, 0, v14, 0, 0, v8) != 0) {
                                                    // 0x8f638144
                                                    bq24296_chg_enable(0, v1, g38, 0, v14, 0, 0, v8);
                                                    v36 = 0;
                                                    // branch -> 0x8f63814c
                                                } else {
                                                    v36 = 0;
                                                }
                                            } else {
                                              lab_0x8f638120_2:;
                                                int32_t v37 = g45; // 0x8f638120
                                                v1 = v37;
                                                fan54046_chg_enable(v37, v37, g38, v15, a5, a6, a7, a8);
                                                v36 = v10;
                                                // branch -> 0x8f63814c
                                            }
                                            int32_t v38 = pmic_set_chg_set_mode(0, v1, g38, g39, v14); // 0x8f638150
                                            if (is_fastboot_screen(v38, v1, g38, g39) != 0) {
                                                // 0x8f638160
                                                refresh("fastboot_screen", 128);
                                                // branch -> 0x8f638174
                                            }
                                            // 0x8f638174
                                            event_signal((int32_t)&g13, 1, g38, g39, v14, v36, 0, v8);
                                            print_log(1, (int32_t)"Charging stopped\n", g38, g39, v14, v36, 0, v8, 0, v2, v3, v4, v5);
                                            v10 = v36;
                                            // branch -> 0x8f637ef8
                                            break;
                                        }
                                      lab_0x8f63810c_2:
                                        // 0x8f63810c
                                        g45 = 0;
                                        *(char *)g41 = 0;
                                        v15 = is_charger_fan54046(v16, v1, g38, g39);
                                        g39 = v15;
                                        if (v15 == 0) {
                                            goto lab_0x8f638130_2;
                                        }
                                        goto lab_0x8f638120_2;
                                    }
                                }
                                // 0x8f638094
                                g36 = (int32_t)"continue charging...\n";
                                int32_t v39 = print_log(2, (int32_t)"continue charging...\n", g38, v26, v14, v10, 0, v8, 0, v2, v3, v4, v5); // 0x8f63809c
                                if (is_charger_fan54046(v39, g36, g38, v26) == 0) {
                                    // 0x8f6380cc
                                    if (is_charger_bq24296(0, g36, g38, v26, v14, v10, 0, v8) != 0) {
                                        // 0x8f6380d8
                                        bq24296_chg_enable(1, g36, g38, v26, v14, v10, 0, v8);
                                        // branch -> 0x8f6380e0
                                    }
                                } else {
                                    // 0x8f6380ac
                                    int32_t v40; // 0x8f6380c0
                                    if (is_sufficient_pwr_avail(g44, g36, g38, v26, v14, v10, 0, v8, 0, v2, v3, v4, v5, v6, v7) == 0) {
                                        // 0x8f6380ac
                                        v40 = g42;
                                        // branch -> after_if_8f6380bc_0
                                    } else {
                                        // if_8f6380bc_0_true
                                        g42 = 0;
                                        v40 = 0;
                                        // branch -> after_if_8f6380bc_0
                                    }
                                    // after_if_8f6380bc_0
                                    g36 = v40;
                                    fan54046_chg_enable(1, v40, g38, v26, a5, a6, a7, a8);
                                    // branch -> 0x8f6380e0
                                }
                                char v41 = *(char *)&g14; // 0x8f6380e0
                                g39 = v41;
                                if (v41 != 0) {
                                    // break -> 0x8f6380ec
                                    break;
                                }
                                // continue -> 0x8f637fd8
                                continue;
                            }
                        }
                        // 0x8f637ff8
                        v1 = (int32_t)"usb disconnected, stop charging\n";
                        v16 = print_log(1, (int32_t)"usb disconnected, stop charging\n", g38, v26, v14, v10, 0, v8, 0, v2, v3, v4, v5);
                        g18 &= -0x40000001;
                        char v42 = *(char *)&g14; // 0x8f638010
                        int32_t v43 = v42; // 0x8f638010
                        g39 = v43;
                        if (v42 != 0) {
                            goto lab_0x8f63810c_2;
                        }
                        int32_t v44 = timer_cancel((int32_t)&g20, v1, g38, v43, v14, v10, 0, v8); // 0x8f638020
                        v16 = v44;
                        // branch -> 0x8f63810c
                        goto lab_0x8f63810c_2;
                    }
                    // 0x8f6380ec
                    g38 = &g1;
                    int32_t v45 = timer_set_oneshot((int32_t)&g20, g36 & -0x10000 | 0xea60, (int32_t)&g1, 0, a5, a6, a7); // 0x8f6380fc
                    g36 = v45;
                    g39 = 0;
                    *(char *)g41 = 0;
                    // branch -> 0x8f637fd8
                    goto lab_0x8f637fd8;
                }
                // 0x8f637f98
                pmic_set_chg_set_mode(1, v1, g38, g39, v14);
                g38 = &g1;
                g39 = 0;
                v17 = timer_set_oneshot((int32_t)&g20, v1 & -0x10000 | 0xea60, (int32_t)&g1, 0, v14, v10, 0);
                g36 = v17;
                if (is_fastboot_screen((int32_t)&g20, v17, g38, g39) == 0) {
                    goto lab_0x8f637fd4;
                }
                goto lab_0x8f637fc0;
            }
            // 0x8f63810c
            g45 = 0;
            *(char *)g41 = 0;
            v15 = is_charger_fan54046(v16, v1, g38, g39);
            g39 = v15;
            if (v15 == 0) {
                goto lab_0x8f638130_2;
            }
            goto lab_0x8f638120_2;
        }
    } else {
        int32_t v46 = fan540xx_get_ic_info_pn(v9); // 0x8f637eb8
        int32_t v47 = v46 - 6; // 0x8f637ebc
        g39 = v47;
        g43 = v46;
        g40 = v47 == 0;
        // branch -> 0x8f637ee4
    }
    // 0x8f637ee4
    g44 = 3200;
    g41 = (int32_t)&g14;
    g42 = 1;
    g37 = &g17;
    v10 = v13;
    // branch -> 0x8f637ef8
    while (true) {
        // 0x8f637ef8
        event_wait((int32_t)&g15, v1);
        v1 = (int32_t)"staring charging...\n";
        print_log(1, (int32_t)"staring charging...\n", g38, g39, v14, v10, 0, v8, 0, v2, v3, v4, v5);
        v11 = thread_sleep(100, v1, g38, g39, v14, v10, 0, v8);
        v12 = is_usb_connected(v11, v1, g38, g39);
        if (v12 == 0) {
            goto lab_0x8f637f20;
        }
        goto lab_0x8f637f2c;
    }
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memset(void * s, int c, size_t n);
// int sprintf(char * restrict s, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 19
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:42:36