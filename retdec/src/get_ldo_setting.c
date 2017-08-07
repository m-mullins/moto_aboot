//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ------------------- Function Prototypes --------------------

int32_t clear_reboot_bl_flag(int32_t a1, int32_t a2, int32_t a3);
int32_t dbval_pal_cid_get_secondary_serial_number(int32_t a1, int32_t a2);
int32_t dbval_pal_get_primary_serial_number(int32_t a1, int32_t a2);
int32_t display_set_orientation(char a1, int32_t a2);
int32_t display_turn_off(int32_t a1, int32_t a2);
int32_t dpc_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t dpc_queue(int32_t a1, int32_t a2, int32_t a3);
int32_t fdt_get_property(int32_t a1, int32_t a2, char * str, int32_t a4);
int32_t fdt_getprop_namelen(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t get_ldo_setting(int32_t a1, int32_t * a2);
int32_t get_lvs_setting(int32_t a1, int32_t * a2, int32_t a3);
int32_t get_validated_piv_size(int32_t a1, int32_t a2, int32_t a3);
int32_t gpio_107_irq_handler(int32_t a1, int32_t a2);
int32_t gpio_tlmm_config(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t is_piv_magic(char * str, int32_t a2);
int32_t is_piv_tail(int32_t a1, int32_t a2);
int32_t is_reboot_bl_flag_set(int32_t a1, int32_t a2);
int32_t mcs_memcmp(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_memcpy(int32_t a1, int32_t a2, int32_t a3);
int32_t mdss_dsi_panel_pre_initialize(int32_t a1, int32_t a2, int32_t a3);
int32_t mdss_dsi_video_mode_config(int32_t a1, int32_t a2, int32_t a3, int32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8, uint32_t a9, uint32_t a10, int32_t a11, int32_t a12, int32_t a13, uint32_t a14, int32_t a15);
int32_t mipi_dsi_set_brightness(char a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t mipi_mot_panel_apply_dt_cfg(int32_t a1, int32_t a2, int32_t a3);
int32_t piv_init(char * a1, int32_t a2, char * a3);
int32_t smb1359_config_apsd(int32_t a1, int32_t a2);
int32_t smb1359_drop_usbin_rate(void);
int32_t smem_copy_ram_ptable(char * a1);
int32_t smem_read_alloc_entry_offset(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t sod_check_crash(void);
int32_t sod_prune(void);

// --------------------- Global Variables ---------------------

int32_t g39 = 0; // R0
int32_t g40 = 0; // R1
int32_t g41 = 0; // R2
int32_t g42 = 0; // R4
int32_t g43 = 0; // R5
int32_t g44 = 0; // R6
int32_t g45 = 0; // R7
int32_t g46 = 0; // R8
int32_t g1 = -0x16d2bfed; // 0x8f6035c4
int32_t g2 = -0x1a60cf5c; // 0x8f61a964
int32_t g3 = 0x6e61000a; // 0x8f6826e7
int32_t g4 = 0x65440030; // 0x8f69c66f
char * g5 = "\x4d\x4f\x54\x4f\x13\x57\x9b"; // 0x8f6a42ac
int32_t g6; // 0x8f6ac0e8
int32_t g7 = 1; // 0x8f6ac0f0
int32_t g8 = -0x7fea01; // 0x8f6acae9
int32_t g9 = 8; // 0x8f6acb08
int32_t g10 = 4; // 0x8f6acb54
int32_t g11 = 0xcffff0f; // 0x8f6acba9
int32_t g12 = 0xcffff; // 0x8f6acbaa
int32_t g13 = 2; // 0x8f6afe0c
int32_t g14 = 2; // 0x8f6afe14
int32_t g15 = 0; // 0x8f6b5040
int32_t g16 = 0; // 0x8f6b504c
int32_t g17 = 0; // 0x8f6b50a4
char * g18; // 0x8f6b50a8
int32_t g19 = 0; // 0x8f6c0044
int32_t g20 = 0; // 0x8f6e0789
int32_t g21 = 0; // 0x8f6e078c
char * g22; // 0x8f6e0794
int32_t g23 = 0; // 0x8f6e0798
char * g24; // 0x8f6e0c40
char * g25; // 0x8f6eda40
int32_t g26 = 0; // 0x8f6eda80
int32_t g27 = 0; // 0x8f70da40
int32_t g28 = 0; // 0x8f70da44
int32_t g29 = 0; // 0x8f70da48
int32_t g30 = 0; // 0x8f70da4c
char * g31; // 0x8f70da50
int32_t g32 = 0; // 0x8f70da54
int32_t g33 = 0; // 0x8f70da58
int32_t g34 = 0; // 0x8f70da60
int32_t g35 = 0; // 0x8f70da64
int32_t g36 = 0; // 0x8f70da68
char * g37; // 0x8f70da8c
int32_t g38 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f63211c - 0x8f632573
int32_t get_ldo_setting(int32_t a1, int32_t * a2) {
    int32_t v1 = (int32_t)a2;
    int32_t v2 = g43; // 0x8f63211c
    int32_t v3 = g45; // 0x8f63211c
    g43 = a1;
    int32_t v4 = v1; // R4
    int32_t v5 = g38;
    if (get_int_prop((int32_t)"ldo", a1, v1, v5, a1, v5, g42) == -1) {
        // 0x8f632500
        if (v5 != g38) {
            // 0x8f632510
            __stack_chk_fail();
            // branch -> 0x8f632514
        }
        // 0x8f632514
        g43 = v2;
        g45 = v3;
        return -1;
    }
    int32_t v6 = *(int32_t *)v4; // 0x8f632160
    int32_t v7;
    print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"ldo", v6, a1, v5, g42, v2, g44, v3, g46, 0, v7);
    if (get_int_prop((int32_t)"voltage", g43, v4 + 4, v6, a1, v5, g42) == -1) {
        // 0x8f632500
        if (v5 != g38) {
            // 0x8f632510
            __stack_chk_fail();
            // branch -> 0x8f632514
        }
        // 0x8f632514
        g43 = v2;
        g45 = v3;
        return -1;
    }
    int32_t v8 = *(int32_t *)(v4 + 4); // 0x8f632194
    print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"voltage", v8, a1, v5, g42, v2, g44, v3, g46, 0, v7);
    if (get_int_prop((int32_t)"pre_delay", g43, v4 + 8, v8, a1, v5, g42) == -1) {
        // 0x8f632500
        if (v5 != g38) {
            // 0x8f632510
            __stack_chk_fail();
            // branch -> 0x8f632514
        }
        // 0x8f632514
        g43 = v2;
        g45 = v3;
        return -1;
    }
    int32_t v9 = *(int32_t *)(v4 + 8); // 0x8f6321c0
    print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"pre_delay", v9, a1, v5, g42, v2, g44, v3, g46, 0, v7);
    if (get_int_prop((int32_t)"post_delay", g43, v4 + 12, v9, a1, v5, g42) == -1) {
        // 0x8f632500
        if (v5 != g38) {
            // 0x8f632510
            __stack_chk_fail();
            // branch -> 0x8f632514
        }
        // 0x8f632514
        g43 = v2;
        g45 = v3;
        return -1;
    }
    int32_t v10 = *(int32_t *)(v4 + 12); // 0x8f6321ec
    print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"post_delay", v10, a1, v5, g42, v2, g44, v3, g46, 0, v7);
    if (get_int_prop((int32_t)"ldo_enable_gpio", g43, v4 + 16, v10, a1, v5, g42) == -1) {
        // 0x8f632500
        if (v5 != g38) {
            // 0x8f632510
            __stack_chk_fail();
            // branch -> 0x8f632514
        }
        // 0x8f632514
        g43 = v2;
        g45 = v3;
        return 0;
    }
    int32_t v11 = *(int32_t *)(v4 + 16); // 0x8f63220c
    int32_t result = 0;
    int32_t v12; // 0x8f6324b0
    int32_t v13; // 0x8f6324dc
    int32_t v14; // 0x8f6324c8
    int32_t v15; // 0x8f6324f4
    switch (v11) {
        case 1: {
            int32_t v16 = *(int32_t *)v4; // 0x8f632220
            print_log(1, (int32_t)"Getting enable GPIO for LDO %d...\n", v16, v10, a1, v5, g42, v2, g44, v3, g46, 0, v7);
            if (get_int_prop((int32_t)"en_gpio", g43, v4 + 20, v10, a1, v5, g42) != -1) {
                int32_t v17 = *(int32_t *)(v4 + 20); // 0x8f632250
                print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"en_gpio", v17, a1, v5, g42, v2, g44, v3, g46, 0, v7);
                if (get_int_prop((int32_t)"en_func", g43, v4 + 24, v17, a1, v5, g42) != -1) {
                    int32_t v18 = *(int32_t *)(v4 + 24); // 0x8f63227c
                    print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"en_func", v18, a1, v5, g42, v2, g44, v3, g46, 0, v7);
                    if (get_int_prop((int32_t)"en_pull", g43, v4 + 28, v18, a1, v5, g42) != -1) {
                        int32_t v19 = *(int32_t *)(v4 + 28); // 0x8f6322a8
                        print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"en_pull", v19, a1, v5, g42, v2, g44, v3, g46, 0, v7);
                        if (get_int_prop((int32_t)"en_drv", g43, v4 + 32, v19, a1, v5, g42) != -1) {
                            int32_t v20 = *(int32_t *)(v4 + 32); // 0x8f6322d4
                            print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"en_drv", v20, v7, 0, 0, 0, 0, 0, 0, 0, 0);
                            if (get_int_prop((int32_t)"en_dir", g43, v4 + 36, v20, v7, 0, 0) != -1) {
                                int32_t v21 = *(int32_t *)(v4 + 36); // 0x8f632300
                                print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"en_dir", v21, v7, 0, 0, 0, 0, 0, 0, 0, 0);
                                if (get_int_prop((int32_t)"en_output", g43, v4 + 44, v21, v7, 0, 0) != -1) {
                                    int32_t v22 = *(int32_t *)(v4 + 44); // 0x8f632320
                                    int32_t v23 = v22; // R3
                                    print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"en_output", v22, v7, 0, 0, 0, 0, 0, 0, 0, 0);
                                    if (get_int_prop((int32_t)"en_set_dir", g43, v4 + 40, v23, v7, 0, 0) < 0) {
                                        int32_t v24 = *(int32_t *)(v4 + 36); // 0x8f632348
                                        v23 = v24;
                                        *(int32_t *)(v4 + 40) = v24;
                                        // branch -> 0x8f6324a4
                                    }
                                    // 0x8f6324a4
                                    v12 = get_int_prop((int32_t)"en_pre_delay", g43, v4 + 48, v23, v7, 0, 0);
                                    if (v12 != -1) {
                                        // 0x8f6324bc
                                        v14 = *(int32_t *)(v4 + 48);
                                        print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"en_pre_delay", v14, v7, 0, 0, 0, 0, 0, 0, 0, 0);
                                        v13 = get_int_prop((int32_t)"en_post_delay", g43, v4 + 52, v14, v7, 0, 0);
                                        if (v13 != -1) {
                                            // 0x8f6324e8
                                            v15 = *(int32_t *)(v4 + 52);
                                            print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"en_post_delay", v15, v7, 0, 0, 0, 0, 0, 0, 0, 0);
                                            result = 0;
                                            // branch -> 0x8f632500
                                        } else {
                                            result = -1;
                                        }
                                    } else {
                                        result = -1;
                                    }
                                } else {
                                    result = -1;
                                }
                            } else {
                                result = -1;
                            }
                        } else {
                            result = -1;
                        }
                    } else {
                        result = -1;
                    }
                } else {
                    result = -1;
                }
            } else {
                result = -1;
            }
            break;
        }
        case 2: {
            int32_t v25 = v4 + 20; // 0x8f632364
            g45 = v25;
            int32_t v26 = *(int32_t *)v4; // 0x8f632364
            print_log(1, (int32_t)"Getting enable PMIC_GPIO for LDO %d...\n", v26, v10, a1, v5, g42, v2, g44, v3, g46, 0, v7);
            if (get_int_prop((int32_t)"en_gpio", g43, v25, v10, a1, v5, g42) != -1) {
                int32_t v27 = *(int32_t *)(v4 + 20); // 0x8f632394
                print_log(v11, (int32_t)"get prop %s: 0x%x\n", (int32_t)"en_gpio", v27, a1, v5, g42, v2, g44, v3, g46, 0, v7);
                if (get_int_prop((int32_t)"en_mode", g43, v4 + 24, v27, a1, v5, g42) != -1) {
                    int32_t v28 = *(int32_t *)(v4 + 24); // 0x8f6323c0
                    print_log(v11, (int32_t)"get prop %s: 0x%x\n", (int32_t)"en_mode", v28, a1, v5, g42, v2, g44, v3, g46, 0, v7);
                    if (get_int_prop((int32_t)"en_pull", g43, v4 + 28, v28, a1, v5, g42) != -1) {
                        int32_t v29 = *(int32_t *)(v4 + 28); // 0x8f6323ec
                        print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"en_pull", v29, a1, v5, g42, v2, g44, v3, g46, 0, v7);
                        if (get_int_prop((int32_t)"en_vin-sel", g43, v4 + 32, v29, a1, v5, g42) != -1) {
                            int32_t v30 = *(int32_t *)(v4 + 32); // 0x8f632418
                            print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"en_vin-sel", v30, v7, 0, 0, 0, 0, 0, 0, 0, 0);
                            if (get_int_prop((int32_t)"en_output-type", g43, v4 + 36, v30, v7, 0, 0) != -1) {
                                int32_t v31 = *(int32_t *)(v4 + 36); // 0x8f632444
                                print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"en_output-type", v31, v7, 0, 0, 0, 0, 0, 0, 0, 0);
                                if (get_int_prop((int32_t)"en_output-strength", g43, v4 + 40, v31, v7, 0, 0) != -1) {
                                    int32_t v32 = *(int32_t *)(v4 + 40); // 0x8f632470
                                    print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"en_output-strength", v32, v7, 0, 0, 0, 0, 0, 0, 0, 0);
                                    if (get_int_prop((int32_t)"en_output", g43, v4 + 44, v32, v7, 0, 0) != -1) {
                                        int32_t v33 = *(int32_t *)(v4 + 44); // 0x8f63249c
                                        print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"en_output", v33, v7, 0, 0, 0, 0, 0, 0, 0, 0);
                                        // branch -> 0x8f6324a4
                                        // 0x8f6324a4
                                        v12 = get_int_prop((int32_t)"en_pre_delay", g43, v4 + 48, v33, v7, 0, 0);
                                        if (v12 != -1) {
                                            // 0x8f6324bc
                                            v14 = *(int32_t *)(v4 + 48);
                                            print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"en_pre_delay", v14, v7, 0, 0, 0, 0, 0, 0, 0, 0);
                                            v13 = get_int_prop((int32_t)"en_post_delay", g43, v4 + 52, v14, v7, 0, 0);
                                            if (v13 != -1) {
                                                // 0x8f6324e8
                                                v15 = *(int32_t *)(v4 + 52);
                                                print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"en_post_delay", v15, v7, 0, 0, 0, 0, 0, 0, 0, 0);
                                                result = 0;
                                                // branch -> 0x8f632500
                                            } else {
                                                result = -1;
                                            }
                                        } else {
                                            result = -1;
                                        }
                                    } else {
                                        result = -1;
                                    }
                                } else {
                                    result = -1;
                                }
                            } else {
                                result = -1;
                            }
                        } else {
                            result = -1;
                        }
                    } else {
                        result = -1;
                    }
                } else {
                    result = -1;
                }
            } else {
                result = -1;
            }
            break;
        }
    }
    // 0x8f632500
    if (v5 != g38) {
        // 0x8f632510
        __stack_chk_fail();
        // branch -> 0x8f632514
    }
    // 0x8f632514
    g43 = v2;
    g45 = v3;
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// time_t time(time_t * timer);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:42:08