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

int32_t backlight_config(char * a1, int32_t a2);
int32_t backlight_get_brightness(int32_t * a1, int32_t a2);
int32_t backlight_off(int32_t a1, int32_t a2);
int32_t board_hlos_subtype(int32_t a1);
int32_t clk_get(char * str2);
int32_t clk_init(int32_t a1, int32_t a2, int32_t a3);
int32_t fboot_cmd_multiflash_disable(int32_t a1, int32_t a2);
int32_t get_verified_enabled(void);
int32_t gpio_set_dir(int32_t a1, int32_t a2, int32_t a3);
int32_t gpio_tlmm_config(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t init_sp_partition(char * a1, int32_t a2);
int32_t max17058_is_batt_temp_ok(void);
int32_t mcs_cert_get_rsa_public_key(char * a1, int32_t a2, int32_t * a3, int32_t a4);
int32_t mcs_ctx_init_cert(int16_t * a1);
int32_t mcs_multi_bit_length(int32_t a1, uint32_t a2);
int32_t mcs_multi_shift_right(int32_t a1, int32_t a2, uint32_t a3);
int32_t mmc_sdhci_enable_hw_reset(int32_t a1, int32_t a2, int32_t a3);
int32_t mmc_sdhci_get_wp_status(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t panel_common_init(void);
int32_t pm8x41_chgr_led_enable(int32_t a1, int32_t a2);
int32_t pm8x41_get_is_cold_boot(void);
int32_t secure_allow_console(int32_t a1, int32_t a2);
int32_t set_backlight_dev(int32_t a1, int32_t a2, int32_t a3);
int32_t set_logger_capacity(int32_t a1, int32_t a2);
int32_t set_logger_ops(int32_t a1, int32_t * a2);
int32_t set_restart_reason(int32_t a1);
int32_t show_locked_command_restriction(int32_t a1);
int32_t sp_init(void);
int32_t udc_endpoint_alloc(int32_t a1, int32_t a2, int32_t a3);
int32_t udc_endpoint_free(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g32 = 0; // LR
int32_t g33 = 0; // R0
int32_t g34 = 0; // R1
int32_t g35 = 0; // R2
int32_t g36 = 0; // R3
int32_t g37 = 0; // R4
int32_t g38 = 0; // R5
int32_t g39 = 0; // R6
int32_t g40 = 0; // R7
int32_t g41 = 0; // R8
int32_t g1 = 0x10001; // 0x8f6ac04c
int32_t g2 = 1; // 0x8f6ac0a8
int32_t g3 = -1; // 0x8f6ac1f0
int32_t g4 = -1; // 0x8f6ac214
int32_t g5 = 768; // 0x8f6acab7
char * g6 = "\x03"; // 0x8f6acab8
int32_t g7 = 0xffff; // 0x8f6acae4
int32_t g8 = 0xffff; // 0x8f6acaec
int32_t g9 = 0xffff; // 0x8f6acb2c
int32_t g10 = 0xffff; // 0x8f6acb6c
int32_t g11; // 0x8f6afe74
char * g12; // 0x8f6b7d40
char g13 = 0; // 0x8f6b7d41
int32_t g14 = 0; // 0x8f6b8ad0
int32_t g15 = 0; // 0x8f6b8ad4
int32_t g16 = 0; // 0x8f6e0a88
int32_t g17 = 0; // 0x8f6e0b4c
int32_t g18 = 0; // 0x8f6e0b54
int32_t g19 = 0; // 0x8f710c40
int32_t g20 = 0; // 0x8f710c44
char * g21; // 0x8f710c48
char * g22; // 0x8f710c50
int32_t g23 = 0; // 0x8f710c60
int32_t g24 = 0; // 0x8f710c64
char g25 = 0; // 0x8f710c68
char * g26; // 0x8f710c70
int32_t g27 = 0; // 0x8f710e70
char * g28; // 0x8f710e74
int32_t g29 = 0; // 0x8f710e78
int32_t g30 = 0; // 0x8f710e7c
int32_t g31 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f677058 - 0x8f6772bf
int32_t sp_init(void) {
    // 0x8f677058
    int32_t v1;
    int32_t str = v1; // bp-52
    int32_t v2 = g37; // 0x8f677058
    int32_t v3 = g38; // 0x8f677058
    int32_t v4 = g39; // 0x8f677058
    int32_t v5 = g32; // 0x8f677058
    g39 = &g31;
    int32_t v6 = (int32_t)&g28; // R7
    int32_t v7 = g31;
    char v8 = *(char *)&g28; // 0x8f677070
    int32_t result2; // R0
    if (v8 == 0) {
        // 0x8f677080
        int32_t v9;
        int32_t v10;
        char * v11 = get_partition_by_name((int32_t)"sp", g34, g35, (int32_t)v8, v10, v9, 0, v1, 0, 0, 0); // 0x8f677084
        int32_t v12 = (int32_t)v11; // 0x8f677084_12
        g27 = v12;
        if (v11 != NULL) {
            char v13 = *(char *)(v12 + 33); // 0x8f6770a0
            char v14 = *(char *)(v12 + 32); // 0x8f6770a4
            char v15 = *(char *)(v12 + 41); // 0x8f6770a8
            char v16 = *(char *)(v12 + 34); // 0x8f6770b0
            char v17 = *(char *)(v12 + 40); // 0x8f6770b4
            int32_t v18 = 0x10000 * (int32_t)v16 | (int32_t)v14 | 256 * (int32_t)v13; // 0x8f6770bc
            char v19 = *(char *)(v12 + 42); // 0x8f6770c8
            uint32_t v20 = 0x1000000 * (int32_t)*(char *)(v12 + 35) | v18; // 0x8f6770cc
            char v21 = *(char *)(v12 + 37); // 0x8f6770d0
            char v22 = *(char *)(v12 + 36); // 0x8f6770d4
            char v23 = *(char *)(v12 + 43); // 0x8f6770dc
            int32_t v24 = 512 * v18; // 0x8f6770e0
            char v25 = *(char *)(v12 + 38); // 0x8f6770e8
            g19 = v24;
            int32_t v26 = 0x10000 * (int32_t)v25 | (int32_t)v22 | 256 * (int32_t)v21; // 0x8f6770f0
            int32_t v27 = 0x1000000 * (int32_t)v23 | 0x10000 * (int32_t)v19 | (int32_t)v17 | 256 * (int32_t)v15; // 0x8f6770fc
            char v28 = *(char *)(v12 + 45); // 0x8f677100
            uint32_t v29 = v27 + 1; // 0x8f677104
            char v30 = *(char *)(v12 + 44); // 0x8f677108
            int32_t v31 = 512 * v26 | v20 / 0x800000; // 0x8f677110
            g20 = v31;
            char v32 = *(char *)(v12 + 46); // 0x8f67711c
            int32_t v33 = 0x10000 * (int32_t)v32 | (int32_t)v30 | 256 * (int32_t)v28; // 0x8f677124
            g32 = v33;
            uint32_t v34 = v29 - v20; // 0x8f677134
            g37 = (int32_t)&g21;
            int32_t v35 = 512 * ((int32_t)(v27 == -1) - v26 + (int32_t)(v29 < v20) + v33) | v34 / 0x800000; // 0x8f677144
            int32_t v36 = 512 * v34; // 0x8f677148
            g29 = v36;
            g30 = v35;
            int32_t v37 = str; // 0x8f677160
            print_log(2, (int32_t)"got sp partition block [0x%llx, 0x%llx]\n", v36, v35, v24, v31, 0, v37, 0, 0, 0, v7, 0);
            g36 = 0;
            int32_t v38;
            int32_t v39 = generic_mmc_read_logical(g19, g20, 552, 0, g37, v31, 0, v37, 0, 0, 0, v7, 0, v2, v3, v4, g40, g41, 0, v5, v38, 0, 0); // 0x8f677174
            g38 = v39;
            if (v39 == 0) {
                // 0x8f677190
                memset((char *)&str, 0, 14);
                g35 = 8;
                int32_t strncmp_rc = strncmp((char *)g37, "MOTO SP", 8); // 0x8f6771ac
                int32_t v40; // 0x8f6771ec
                int32_t result; // 0x8f677250
                if (strncmp_rc == 0) {
                    // 0x8f6771c0
                    SecProcessorUID((int32_t)&str, 14, g35, g36, g37, v31, 0, str, 0, 0, 0);
                    g35 = 14;
                    int32_t memcmp_rc = memcmp((char *)&str, (char *)&g22, 14); // 0x8f6771d8
                    g38 = memcmp_rc;
                    if (memcmp_rc != 0) {
                        // 0x8f6771e4
                        // branch -> 0x8f6771ec
                        // 0x8f6771ec
                        v40 = print_log(strncmp_rc, (int32_t)"Mismatched AP UID in SP\n", g35, g36, g37, v31, 0, str, 0, 0, 0, v7, 0);
                        if (init_sp_partition((char *)v40, (int32_t)"Mismatched AP UID in SP\n") != 0) {
                            // 0x8f677264
                            // branch -> 0x8f677268
                            // 0x8f677268
                            if (v7 != g31) {
                                // 0x8f677278
                                __stack_chk_fail();
                                // branch -> 0x8f67727c
                            }
                            // 0x8f67727c
                            return -1;
                        }
                        // 0x8f677250
                        result = init_free_blocks(0, g34, g35, g36, g37, v31, 0, str, 0, 0, 0, v7, 0, v2, v3, v4, g40, g41);
                        if (result == 0) {
                            // if_8f67725c_0_true
                            *(char *)v6 = 1;
                            // branch -> 0x8f677268
                        }
                        // 0x8f677268
                        if (v7 != g31) {
                            // 0x8f677278
                            __stack_chk_fail();
                            // branch -> 0x8f67727c
                        }
                        // 0x8f67727c
                        return result;
                    }
                    // 0x8f677200
                    g35 = 512;
                    int32_t v41 = crc32(255, (char *)&g26, 512); // 0x8f67720c
                    int32_t v42 = g25;
                    g36 = v42;
                    int32_t v43; // 0x8f677250
                    if (v41 == v42) {
                        // 0x8f677224
                        g34 = g37;
                        g35 = 552;
                        int32_t v44 = g24; // R8
                        g24 = g38;
                        int32_t v45 = crc32(255, (char *)g37, 552); // 0x8f677238
                        g24 = v44;
                        if (v45 != v44) {
                            // if_8f677244_0_true
                            // branch -> 0x8f6771ec
                            // 0x8f6771ec
                            v40 = print_log(g38, (int32_t)"Invalid SP header CRC32\n", g35, g36, g37, v31, 0, str, 0, 0, 0, v7, 0);
                            if (init_sp_partition((char *)v40, (int32_t)"Invalid SP header CRC32\n") != 0) {
                                // 0x8f677264
                                // branch -> 0x8f677268
                                // 0x8f677268
                                if (v7 != g31) {
                                    // 0x8f677278
                                    __stack_chk_fail();
                                    // branch -> 0x8f67727c
                                }
                                // 0x8f67727c
                                return -1;
                            }
                            v43 = 0;
                        } else {
                            v43 = v45;
                        }
                    } else {
                        // if_8f677218_0_true
                        // branch -> 0x8f6771ec
                        // 0x8f6771ec
                        v40 = print_log(g38, (int32_t)"Invalid SP entry CRC32\n", g35, g36, g37, v31, 0, str, 0, 0, 0, v7, 0);
                        if (init_sp_partition((char *)v40, (int32_t)"Invalid SP entry CRC32\n") != 0) {
                            // 0x8f677264
                            // branch -> 0x8f677268
                            // 0x8f677268
                            if (v7 != g31) {
                                // 0x8f677278
                                __stack_chk_fail();
                                // branch -> 0x8f67727c
                            }
                            // 0x8f67727c
                            return -1;
                        }
                        v43 = 0;
                    }
                    // 0x8f677250
                    result = init_free_blocks(v43, g34, g35, g36, g37, v31, 0, str, 0, 0, 0, v7, 0, v2, v3, v4, g40, g41);
                    if (result == 0) {
                        // if_8f67725c_0_true
                        *(char *)v6 = 1;
                        // branch -> 0x8f677268
                    }
                    // 0x8f677268
                    if (v7 != g31) {
                        // 0x8f677278
                        __stack_chk_fail();
                        // branch -> 0x8f67727c
                    }
                    // 0x8f67727c
                    return result;
                }
                // if_8f6771b4_0_true
                // branch -> 0x8f6771ec
                // 0x8f6771ec
                v40 = print_log(g38, (int32_t)"Invalid SP header magic\n", g35, g36, g37, v31, 0, str, 0, 0, 0, v7, 0);
                if (init_sp_partition((char *)v40, (int32_t)"Invalid SP header magic\n") == 0) {
                    // 0x8f677250
                    result = init_free_blocks(0, g34, g35, g36, g37, v31, 0, str, 0, 0, 0, v7, 0, v2, v3, v4, g40, g41);
                    if (result == 0) {
                        // if_8f67725c_0_true
                        *(char *)v6 = 1;
                        // branch -> 0x8f677268
                    }
                    // 0x8f677268
                    if (v7 != g31) {
                        // 0x8f677278
                        __stack_chk_fail();
                        // branch -> 0x8f67727c
                    }
                    // 0x8f67727c
                    return result;
                }
            } else {
                // 0x8f677180
                // branch -> 0x8f677188
                // 0x8f677188
                print_log(-1, (int32_t)"Failed to read SP header\n", 552, g36, g37, v31, 0, v37, 0, 0, 0, v7, 0);
                // branch -> 0x8f677264
            }
            // 0x8f677264
            // branch -> 0x8f677268
            // 0x8f677268
            if (v7 != g31) {
                // 0x8f677278
                __stack_chk_fail();
                // branch -> 0x8f67727c
            }
            // 0x8f67727c
            return -1;
        }
        int32_t v46 = &g27; // 0x8f677188
        // branch -> 0x8f677188
        // 0x8f677188
        print_log(v12, (int32_t)"Not found SP partition\n", 552, v46, v10, v9, 0, v1, 0, 0, 0, v7, 0);
        // branch -> 0x8f677264
        // 0x8f677264
        result2 = -1;
        // branch -> 0x8f677268
    } else {
        // if_8f677078_0_true
        result2 = 0;
        // branch -> 0x8f677268
    }
    // 0x8f677268
    if (v7 != g31) {
        // 0x8f677278
        __stack_chk_fail();
        // branch -> 0x8f67727c
    }
    // 0x8f67727c
    return result2;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// uLong crc32(uLong crc, const Bytef * buf, uInt len);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:46:49
