//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <regex.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------------ Structures ------------------------

struct re_pattern_buffer {
    char * e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    char * e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    int32_t e10;
    int32_t e11;
    int32_t e12;
    int32_t e13;
};

// ------------------- Function Prototypes --------------------

int32_t charging_timer_func(int32_t a1, int32_t a2);
int32_t clock_lib2_rcg_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t clock_lib2_rcg_set_rate(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t dbval_db_validate_gen_hdr(char * a1, char a2, char * a3);
int32_t dbval_debug_print2(int32_t a1, int32_t a2);
int32_t dbval_read_flash_uid(char * a1, int32_t * a2);
int32_t dbval_read_processor_uid(char * a1, int32_t * a2);
int32_t display_draw_logo(char * str, uint32_t a2, uint32_t a3, int32_t a4);
int32_t display_set_bg_color(int32_t a1, int32_t a2);
int32_t fastboot_handler(int32_t a1, int32_t a2);
void function_8f64b354(void);
void function_8f64b39c(char * a1, int32_t a2, int32_t a3);
void function_8f65db8c(void);
int32_t get_bs_info_addr(void);
int32_t get_last_powerup_reason(char * a1, int32_t a2, int32_t a3);
int32_t handle_fboot_command_reboot(int32_t a1, int32_t a2);
int32_t is_skip_sparse_preflash_validation(int32_t a1, int32_t a2);
int32_t is_skip_validation(int32_t a1);
int32_t is_warm_reset(int32_t a1);
int32_t platform_use_identity_mmu_mappings(int32_t a1);
int32_t qtimer_disable(int32_t result);
int32_t qtimer_set_physical_timer(int32_t a1, int32_t a2, int32_t a3);
int32_t request_warm_reset(char a1, int32_t a2, int32_t a3);
int32_t sdhci_send_command(char * a1, int16_t * a2);
int32_t sdhci_set_bus_width(int32_t * a1, int32_t a2);
int32_t smb1359_get_power_source(void);
int32_t smb1359_power_source_detected(int32_t a1);
char * smem_get_ram_ptable_entry(char * a1, int32_t a2, int32_t a3);
int32_t smem_get_ram_ptable_len(int32_t a1, int32_t a2, int32_t a3);
int32_t sstep(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

// --------------------- Global Variables ---------------------

int32_t g46 = 0; // LR
int32_t g47 = 0; // R0
int32_t g48 = 0; // R1
int32_t g49 = 0; // R10
int32_t g50 = 0; // R11
int32_t g51 = 0; // R2
int32_t g52 = 0; // R3
int32_t g53 = 0; // R4
int32_t g54 = 0; // R5
int32_t g55 = 0; // R6
int32_t g56 = 0; // R7
int32_t g57 = 0; // R8
int32_t g58 = 0; // R9
bool g1 = false; // flagc
int32_t g2 = -0x1a60cf90; // 0x8f60c6d8
int32_t g3 = -0x16d2bf10; // 0x8f621a7c
int32_t g4 = -0x16d2b801; // 0x8f621dcc
int32_t g5 = -0x16d2bf09; // 0x8f622f94
int32_t g6 = -0x16d2bc10; // 0x8f623c30
int32_t g7 = -0x16d2bf8d; // 0x8f623db0
int32_t g8 = -0x16d2b010; // 0x8f62d370
int32_t g9 = -0x16d2bfed; // 0x8f638714
int32_t g10 = -0x16d2bc09; // 0x8f638ab0
int32_t g12 = 0x65440030; // 0x8f69c66f
int32_t g13 = 0x746e6300; // 0x8f6a4e20
int32_t g14 = 1; // 0x8f6ac0f0
int32_t g15 = -0x709c73f8; // 0x8f6ac374
int32_t g16 = 2; // 0x8f6afe0c
int32_t g17 = 0; // 0x8f6b50a8
char g18 = 0; // 0x8f6b50b8
char g19 = 0; // 0x8f6b50b9
char g20 = 0; // 0x8f6b50ba
char g21 = 0; // 0x8f6b50bb
int32_t g22 = 0; // 0x8f6b8ac0
int32_t g23 = 0; // 0x8f6b8ac4
int32_t g24 = 0; // 0x8f6b8ac8
int32_t g25 = 0; // 0x8f6b8acc
char * g26; // 0x8f6c02dd
int32_t g27 = 0; // 0x8f6c0390
int32_t g28 = 0; // 0x8f6c0398
int32_t g29 = 0; // 0x8f6c03d0
int32_t g30 = 0; // 0x8f6e07a8
char * g31; // 0x8f6e07c8
int32_t g32 = 0; // 0x8f6e07ec
int32_t g33 = 0; // 0x8f6e0bd4
int32_t g34 = 0; // 0x8f6e0c34
int32_t g35 = 0; // 0x8f6e0c38
int32_t g36 = 0; // 0x8f6e0c3c
char * g37; // 0x8f6e0c40
int32_t g38 = 0; // 0x8f7112f4
int32_t g39 = 0; // 0x8f7114f4
int32_t g40 = 0; // 0x8f7114f8
int32_t g41 = 0; // 0x8f7114fc
int32_t g42 = 0; // 0x8f711508
int32_t g43 = 0; // 0x8f71150c
int32_t g44 = 0; // 0x8f711510
int32_t g45 = 0; // 0x8f711534
char * g11[13] = {
    "download",
    (char *)&g3,
    "flash",
    (char *)&g5,
    "multiflash",
    (char *)&g6,
    "getvar",
    (char *)&g8,
    "erase",
    (char *)&g7,
    "boot",
    (char *)&g4,
    "reboot"
}; // 0x8f68422c

// ------------------------ Functions -------------------------

// Address range: 0x8f65e14c - 0x8f65e4e3
int32_t sstep(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = g38;
    int32_t v2;
    if (a1 == 0) {
        // 0x8f65e180
        _panic(g46, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/regex/engine.c", (int32_t)"g != ((void *)0)" & -0x10000 | 967, (int32_t)"g != ((void *)0)", 0, v2);
        // branch -> 0x8f65e19c
    }
    uint32_t v3 = a2 % 256; // 0x8f65e1a4
    int32_t v4 = v3 == 0 ? 1 : v3 < 32 ? 1 << v3 : 0; // 0x8f65e1a4
    int32_t result;
    if (a2 == a3) {
        // 0x8f65e4a4
        if (v1 != g38) {
            // 0x8f65e4bc
            __stack_chk_fail();
            // branch -> 0x8f65e4c0
        }
        // 0x8f65e4c0
        return result;
    }
    // branch -> 0x8f65e1bc
    while (true) {
        int32_t v5 = *(int32_t *)(a1 + 4); // 0x8f65e1bc
        uint32_t v6 = *(int32_t *)(v5 + 4 * a2); // 0x8f65e1c0
        uint32_t v7 = v6 & -0x8000000; // 0x8f65e1c4
        int32_t v8; // 0x8f65e498
        if (v7 == 0x50000000) {
            int32_t v9 = result; // 0x8f65e360
            uint32_t v10 = v6 % 0x8000000; // 0x8f65e364
            uint32_t v11 = v6 % 256; // 0x8f65e368
            uint32_t v12 = v11 > 32 ? 32 : v11; // 0x8f65e368
            int32_t v13 = 2 * (v9 & v4) | v9; // 0x8f65e36c
            int32_t v14 = (v13 & v4) >> v12 | v13; // 0x8f65e378
            result = v14;
            if (v4 >> v12 == 0 && v14 != 0) {
                int32_t v15 = a2 - v10 - 1; // 0x8f65e38c
                a2 = v15;
                uint32_t v16 = v15 % 256; // 0x8f65e390
                v4 = v16 == 0 ? 1 : v16 < 32 ? 1 << v16 : 0;
                // branch -> 0x8f65e498
            }
        } else {
            // 0x8f65e1d0
            int32_t v17; // 0x8f65e4807
            if (v7 > 0x50000000) {
                // 0x8f65e234
                int32_t v18; // 0x8f65e480
                int32_t v19; // R10
                int32_t v20; // 0x8f65e39c
                int32_t v21; // 0x8f65e3a0
                if (v7 == 0x78000000) {
                    int32_t v22 = result; // 0x8f65e398
                    v20 = v6 % 0x8000000;
                    v19 = v20;
                    v21 = 2 * (v22 & v4) | v22;
                    result = v21;
                    int32_t v23 = *(int32_t *)(4 * (v20 + a2) + v5) & -0x8000000; // 0x8f65e3ac
                    if (v23 != -0x78000000) {
                        // 0x8f65e3b8
                        v18 = v23 | 1036;
                        // branch -> 0x8f65e480
                      lab_0x8f65e480:
                        // 0x8f65e480
                        _panic(g46, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/regex/engine.c", v18, (int32_t)"((g->strip[pc+((int)((s)&((uint32_t)0x07ffffffUL)))])&((uint32_t)0xf8000000UL)) == (((uint32_t)(17))<<((unsigned)27))", 0, v2);
                        v20 = v19;
                        v21 = result;
                        // branch -> 0x8f65e484
                    }
                  lab_0x8f65e484:;
                    int32_t v24 = v4 & v21; // 0x8f65e484
                    uint32_t v25 = v20 % 256; // 0x8f65e488
                    int32_t v26 = v25 == 0 ? v24 : v25 < 32 ? v24 << v25 : 0; // 0x8f65e488
                    result = v26 | v21;
                    // branch -> 0x8f65e498
                } else {
                    // 0x8f65e23c
                    int32_t v27; // 0x8f65e490
                    int32_t v28; // 0x8f65e494
                    if (v7 > 0x78000000) {
                        // 0x8f65e27c
                        if (v7 != -0x70000000) {
                            // 0x8f65e284
                            if (v7 > 0x90000000) {
                                int32_t v29 = -0x67fffefb;
                                if (v7 != -0x68000000) {
                                    // 0x8f65e2a4
                                    if (v7 != -0x60000000) {
                                        v17 = v2;
                                      lab_0x8f65e498_6:
                                        // 0x8f65e498
                                        v8 = a2 + 1;
                                        if (v8 == a3) {
                                            // break -> 0x8f65e4a4
                                            break;
                                        }
                                        v4 *= 2;
                                        a2 = v8;
                                        v2 = v17;
                                        // continue -> 0x8f65e1bc
                                        continue;
                                    } else {
                                        v29 = -0x5ffffefa;
                                    }
                                }
                                // 0x8f65e314
                                if (a5 != v29) {
                                    v17 = v2;
                                    goto lab_0x8f65e498_6;
                                }
                              lab_0x8f65e358_5:
                                // 0x8f65e358
                                v28 = result;
                                // branch -> 0x8f65e494
                              lab_0x8f65e494_3:
                                // 0x8f65e494
                                result = 2 * (a4 & v4) | v28;
                                v17 = v2;
                                // branch -> 0x8f65e498
                                goto lab_0x8f65e498_6;
                            } else {
                                // 0x8f65e288
                                if (v7 == -0x80000000) {
                                    int32_t v30 = result & v4; // 0x8f65e3d4
                                    if (v30 == 0) {
                                        v17 = v2;
                                        goto lab_0x8f65e498_6;
                                    }
                                    int32_t v31 = 1;
                                    int32_t v32 = a2; // 0x8f65e3e8
                                    int32_t v33 = a1; // 0x8f65e3e4
                                    int32_t v34 = v2; // 0x8f65e4809
                                    while (true) {
                                        // 0x8f65e3e4
                                        v19 = v31;
                                        int32_t v35 = *(int32_t *)(v33 + 4); // 0x8f65e3e4
                                        uint32_t v36 = *(int32_t *)(v35 + 4 * (v32 + v31)); // 0x8f65e3ec
                                        int32_t v37 = v36 & -0x8000000; // 0x8f65e3f0
                                        if (v37 == -0x70000000) {
                                            uint32_t v38 = v31 % 256; // 0x8f65e438
                                            int32_t v39 = v38 == 0 ? v30 : v38 < 32 ? v30 << v38 : 0; // 0x8f65e438
                                            result |= v39;
                                            v17 = v34;
                                            // branch -> 0x8f65e498
                                            goto lab_0x8f65e498_6;
                                        } else {
                                            int32_t v40 = v32;
                                            int32_t v41 = v33;
                                            int32_t v42 = v31; // 0x8f65e42c
                                            int32_t v43 = v34; // 0x8f65e4808
                                            if (v37 != -0x78000000) {
                                                // 0x8f65e404
                                                _panic(g46, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/regex/engine.c", (int32_t)"((s)&((uint32_t)0xf8000000UL)) == (((uint32_t)(17))<<((unsigned)27))" & -0x10000 | 1044, (int32_t)"((s)&((uint32_t)0xf8000000UL)) == (((uint32_t)(17))<<((unsigned)27))", 0, v36);
                                                v40 = a2;
                                                v41 = a1;
                                                v42 = v19;
                                                v43 = v36;
                                                // branch -> 0x8f65e428
                                            }
                                            // 0x8f65e428
                                            v31 = v42 + v36 % 0x8000000;
                                            v32 = v40;
                                            v33 = v41;
                                            v34 = v43;
                                            // branch -> 0x8f65e3e4
                                            continue;
                                        }
                                    }
                                } else {
                                    // 0x8f65e290
                                    if (v7 != -0x78000000) {
                                        v17 = v2;
                                        goto lab_0x8f65e498_6;
                                    }
                                    int32_t v44 = result; // 0x8f65e440
                                    int32_t v45 = v6 % 0x8000000; // 0x8f65e444
                                    v19 = v45;
                                    int32_t v46 = 2 * (v44 & v4) | v44; // 0x8f65e448
                                    result = v46;
                                    int32_t v47 = *(int32_t *)(4 * (v45 + a2) + v5) & -0x8000000; // 0x8f65e454
                                    if (v47 == -0x70000000) {
                                        v17 = v2;
                                        goto lab_0x8f65e498_6;
                                    }
                                    // 0x8f65e460
                                    if (v47 == -0x78000000) {
                                        v20 = v45;
                                        v21 = v46;
                                        goto lab_0x8f65e484;
                                    }
                                    // 0x8f65e468
                                    v18 = v47 | 1051;
                                    // branch -> 0x8f65e480
                                    goto lab_0x8f65e480;
                                }
                            }
                          lab_0x8f65e498_9:
                            // 0x8f65e498
                            v8 = a2 + 1;
                            if (v8 == a3) {
                                // break -> 0x8f65e4a4
                                break;
                            }
                            v4 *= 2;
                            a2 = v8;
                            // continue -> 0x8f65e1bc
                            continue;
                        }
                    } else {
                        // 0x8f65e240
                        if (v7 != 0x60000000) {
                            // 0x8f65e248
                            if (v7 > 0x60000000) {
                                // 0x8f65e268
                                if (v7 != 0x68000000) {
                                    // 0x8f65e274
                                    if (v7 != 0x70000000) {
                                        goto lab_0x8f65e498_9;
                                    }
                                    // 0x8f65e490
                                    v27 = result;
                                    v28 = v27;
                                    a4 = v27;
                                    // branch -> 0x8f65e494
                                    goto lab_0x8f65e494_3;
                                }
                                // 0x8f65e490
                                v27 = result;
                                v28 = v27;
                                a4 = v27;
                                // branch -> 0x8f65e494
                                goto lab_0x8f65e494_3;
                            } else {
                                // 0x8f65e24c
                                if (v7 != 0x58000000) {
                                    goto lab_0x8f65e498_9;
                                }
                                int32_t v48 = result; // 0x8f65e250
                                int32_t v49 = 2 * (v48 & v4) | v48; // 0x8f65e258
                                int32_t v50 = v49 & v4; // 0x8f65e25c
                                uint32_t v51 = v6 % 256; // 0x8f65e26015
                                int32_t v52 = v51 == 0 ? v50 : v51 < 32 ? v50 << v51 : 0; // 0x8f65e260
                                result = v52 | v49;
                                // branch -> 0x8f65e498
                                goto lab_0x8f65e498_9;
                            }
                        }
                    }
                  lab_0x8f65e490_3:
                    // 0x8f65e490
                    v27 = result;
                    v28 = v27;
                    a4 = v27;
                    // branch -> 0x8f65e494
                    goto lab_0x8f65e494_3;
                }
              lab_0x8f65e498_14:
                // 0x8f65e498
                v8 = a2 + 1;
                if (v8 == a3) {
                    // break -> 0x8f65e4a4
                    break;
                }
                v4 *= 2;
                a2 = v8;
                // continue -> 0x8f65e1bc
                continue;
            } else {
                // 0x8f65e1d4
                if (v7 == 0x28000000) {
                    // 0x8f65e320
                    if (a5 > 255) {
                        goto lab_0x8f65e498_14;
                    }
                    goto lab_0x8f65e358_5;
                } else {
                    // 0x8f65e1dc
                    if (v7 > 0x28000000) {
                        // 0x8f65e20c
                        if (v7 == 0x38000000) {
                            goto lab_0x8f65e490_3;
                        }
                        // 0x8f65e214
                        if (v7 > 0x38000000) {
                            // 0x8f65e224
                            if (v7 == 0x40000000) {
                                goto lab_0x8f65e490_3;
                            }
                            // 0x8f65e22c
                            if (v7 == 0x48000000) {
                                goto lab_0x8f65e490_3;
                            }
                            goto lab_0x8f65e498_14;
                        } else {
                            // 0x8f65e218
                            if (v7 != 0x30000000) {
                                goto lab_0x8f65e498_14;
                            }
                            // 0x8f65e32c
                            if (a5 > 255) {
                                goto lab_0x8f65e498_14;
                            }
                            int32_t v53 = *(int32_t *)(a1 + 16) + 16 * (v6 % 0x8000000); // 0x8f65e340
                            char v54 = *(char *)(*(int32_t *)v53 + a5 % 256); // 0x8f65e34c
                            if (v54 == *(char *)(v53 + 4)) {
                                goto lab_0x8f65e498_14;
                            }
                            goto lab_0x8f65e358_5;
                        }
                      lab_0x8f65e498_18:
                        // 0x8f65e498
                        v8 = a2 + 1;
                        if (v8 == a3) {
                            // break -> 0x8f65e4a4
                            break;
                        }
                        v4 *= 2;
                        a2 = v8;
                        // continue -> 0x8f65e1bc
                        continue;
                    } else {
                        // 0x8f65e1e0
                        if (v7 == 0x10000000) {
                            // 0x8f65e318
                            if (a5 == v6 % 256) {
                                goto lab_0x8f65e358_5;
                            }
                            goto lab_0x8f65e498_18;
                        } else {
                            // 0x8f65e1e8
                            if (v7 > 0x10000000) {
                                // 0x8f65e1f8
                                if (v7 == 0x18000000) {
                                    // 0x8f65e2f0
                                    if ((a5 & -3) == 0x18000101) {
                                        goto lab_0x8f65e358_5;
                                    }
                                    goto lab_0x8f65e498_18;
                                } else {
                                    // 0x8f65e200
                                    if (v7 != 0x20000000) {
                                        goto lab_0x8f65e498_18;
                                    }
                                    // 0x8f65e300
                                    if (a5 > 259) {
                                        goto lab_0x8f65e498_18;
                                    }
                                    goto lab_0x8f65e358_5;
                                }
                              lab_0x8f65e498_21:
                                // 0x8f65e498
                                v8 = a2 + 1;
                                if (v8 == a3) {
                                    // break -> 0x8f65e4a4
                                    break;
                                }
                                v4 *= 2;
                                a2 = v8;
                                // continue -> 0x8f65e1bc
                                continue;
                            } else {
                                // 0x8f65e1ec
                                if (v7 != 0x8000000) {
                                    goto lab_0x8f65e498_21;
                                }
                                // 0x8f65e2b4
                                if (a2 == a3 - 1) {
                                    goto lab_0x8f65e498_21;
                                }
                                // 0x8f65e2c4
                                _panic(g46, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/regex/engine.c", (int32_t)"pc == stop-1" & -0x10000 | 973, (int32_t)"pc == stop-1", 0, v2);
                                // branch -> 0x8f65e498
                                goto lab_0x8f65e498_21;
                            }
                        }
                    }
                  lab_0x8f65e498_22:;
                    int32_t v55 = a2; // 0x8f65e498
                    v8 = v55 + 1;
                    a2 = v8;
                    int32_t v56 = v4; // 0x8f65e49c
                    int32_t v57 = 2 * v56; // 0x8f65e49c
                    v4 = v57;
                    if (v8 == a3) {
                        // break -> 0x8f65e4a4
                        break;
                    }
                    v4 = v57;
                    a2 = v8;
                    v2 = v17;
                    // continue -> 0x8f65e1bc
                    continue;
                }
            }
        }
        // 0x8f65e498
        v8 = a2 + 1;
        if (v8 == a3) {
            // break -> 0x8f65e4a4
            break;
        }
        v4 *= 2;
        a2 = v8;
        // continue -> 0x8f65e1bc
    }
    // 0x8f65e4a4
    if (v1 != g38) {
        // 0x8f65e4bc
        __stack_chk_fail();
        // branch -> 0x8f65e4c0
    }
    // 0x8f65e4c0
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// void * realloc(void * ptr, size_t size);
// void regfree(regex_t * preg);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:53:53
