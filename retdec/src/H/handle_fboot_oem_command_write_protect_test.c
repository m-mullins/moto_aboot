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

int32_t __utag_gets(char * a1, char * a2, int32_t a3, int32_t a4);
int32_t bin2hex(int32_t a1, char * a2, int32_t a3);
int32_t handle_fboot_command_oem(int32_t a1, int32_t a2);
int32_t handle_fboot_oem_command_write_protect_test(int32_t a1, int32_t a2);
int32_t list_existing_utags_cb(int32_t a1, char * a2, int32_t * a3);
int32_t list_str_utag_short(int32_t a1, int32_t a2);
int32_t list_utags_cb(int32_t a1, char * a2, int32_t * a3);
int32_t load_string_utag_constprop_29(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_boot_mode_clear(char * a1);
int32_t oem_bp_tools_off(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_bp_tools_on(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_fb_mode_clear(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_fb_mode_set(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_off_mode_charge(int32_t a1, int32_t a2);
int32_t oem_off_mode_charge_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_qcom_off(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_qcom_on(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_utag(int32_t a1, int32_t * a2);
int32_t set_utag(int32_t a1, int32_t * a2, int32_t a3, int32_t a4);
int32_t validate_utag_range(char * a1, int32_t a2, char * str);

// --------------------- Global Variables ---------------------

bool g15 = false; // LR
int32_t g16 = 0; // R0
int32_t g17 = 0; // R1
int32_t g18 = 0; // R2
int32_t g19 = 0; // R3
int32_t g20 = 0; // R4
int32_t g21 = 0; // R5
int32_t g22 = 0; // R6
int32_t g23 = 0; // R7
int32_t g24 = 0; // R8
int32_t g25 = 0; // R9
int32_t g1 = -0x16d2bf8d; // 0x8f624998
int32_t g2 = -0x16d2bf10; // 0x8f6287bc
int32_t g3 = 0x7325002c; // 0x8f682749
int32_t g4 = 0x2020003a; // 0x8f686ac4
int32_t g5 = 0x402d2b00; // 0x8f686e33
char g6[2] = "/"; // 0x8f686fbc
char g7[2] = "0"; // 0x8f69c66f
char g8[2] = "1"; // 0x8f69c693
int32_t g9 = 0x746e6300; // 0x8f6a4e20
int32_t g10 = 0x70750020; // 0x8f6a4f1e
int32_t g11 = 0x10100; // 0x8f6a9f58
int32_t g12 = 0x10100; // 0x8f6a9f64
int32_t g13 = 0x7ffd14f4; // 0x8f6aa114
int32_t g14 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f62adb0 - 0x8f62b17f
int32_t handle_fboot_oem_command_write_protect_test(int32_t a1, int32_t a2) {
    // 0x8f62adb0
    int32_t v1;
    int32_t v2 = v1; // bp-64
    int32_t v3 = g20; // 0x8f62adb0
    int32_t v4 = g22; // 0x8f62adb0
    int32_t v5 = a1 - 1; // 0x8f62adb4
    int32_t v6 = v5; // R5
    g22 = &g14;
    int32_t v7 = 4 * a1 + a2; // 0x8f62adc0
    int32_t v8 = g14;
    int32_t v9 = v8; // R3
    if (v5 < 1) {
        // 0x8f62adf0
        if (v5 == 0) {
            // 0x8f62adf4
            oem_wptest_usage(v7, a2);
            // branch -> 0x8f62b0f4
            // 0x8f62b0f4
            if (v8 != g14) {
                // 0x8f62b104
                __stack_chk_fail();
                // branch -> 0x8f62b108
            }
            // 0x8f62b108
            g20 = v3;
            g22 = v4;
            return 0;
        }
    } else {
        int32_t v10; // 0x8f62ade8
        int32_t v11; // 0x8f62add8
        while (true) {
            // 0x8f62add8
            v11 = v7 - 4;
            char v12 = *(char *)*(int32_t *)v11; // 0x8f62addc
            v9 = v12;
            if (v12 == 0) {
                // 0x8f62ade8
                v10 = v5 - 1;
                v6 = v10;
                if (v5 < 2) {
                    // break -> 0x8f62adf0
                    break;
                }
                v5 = v10;
                v7 = v11;
                // continue -> 0x8f62add8
                continue;
            }
        }
        // 0x8f62adf0
        if (v10 == 0) {
            // 0x8f62adf4
            oem_wptest_usage(v11, a2);
            // branch -> 0x8f62b0f4
            // 0x8f62b0f4
            if (v8 != g14) {
                // 0x8f62b104
                __stack_chk_fail();
                // branch -> 0x8f62b108
            }
            // 0x8f62b108
            g20 = v3;
            g22 = v4;
            return 0;
        }
    }
    int32_t str = *(int32_t *)(a2 + 4); // 0x8f62adfc
    g20 = str;
    if (strcmp((char *)str, "help") == 0) {
        // 0x8f62adfc
        // branch -> 0x8f62adf4
        // 0x8f62adf4
        oem_wptest_usage(0, (int32_t)"help");
        // branch -> 0x8f62b0f4
    } else {
        int32_t strcmp_rc = strcmp((char *)g20, "enable"); // 0x8f62ae1c
        int32_t v13; // 0x8f62aeb0
        int32_t v14; // R2
        int32_t v15;
        int32_t v16;
        int32_t v17;
        int32_t v18;
        int32_t v19;
        if (strcmp_rc != 0) {
            int32_t v20 = (int32_t)"disable"; // R1
            int32_t strcmp_rc2 = strcmp((char *)g20, "disable"); // 0x8f62ae78
            int32_t result;
            if (strcmp_rc2 == 0) {
                // 0x8f62ae84
                v14 = (int32_t)"wpdisable";
                if (__utag_puts(0, (int32_t)"WPDisable", (int32_t)"wpdisable", v9, v19, v18, v17, v16, v1, v15) != NULL) {
                    int32_t v21 = __utags_flush(strcmp_rc2, (int32_t)"WPDisable", v14, v9, v19, v18, v17, v16); // 0x8f62ae9c
                    g20 = v21;
                    if (v21 == 0) {
                        // 0x8f62aea8
                        v13 = (int32_t)"Write protect disabled!";
                        // branch -> 0x8f62aeb0
                    } else {
                        // 0x8f62ae58
                        v13 = (int32_t)"Failed to update utags";
                        // branch -> 0x8f62aeb0
                    }
                    // 0x8f62aeb0
                    fboot_info((int32_t)"INFO", v13, v14, v9, v19, v18, v17, v16, v2, v15, 0);
                    // branch -> 0x8f62b0f4
                    // 0x8f62b0f4
                    if (v8 != g14) {
                        // 0x8f62b104
                        __stack_chk_fail();
                        // branch -> 0x8f62b108
                    }
                    // 0x8f62b108
                    g20 = v3;
                    g22 = v4;
                    return 0;
                }
                // 0x8f62ae3c
                // branch -> 0x8f62aeb0
                // 0x8f62aeb0
                fboot_info((int32_t)"INFO", (int32_t)"Failed to update wpdisable", v14, v9, v19, v18, v17, v16, v2, v15, 0);
                result = 0;
                // branch -> 0x8f62b0f4
            } else {
                if (v6 == 2) {
                    // 0x8f62aec0
                    v20 = (int32_t)"test";
                    int32_t strcmp_rc3 = strcmp((char *)g20, "test"); // 0x8f62aec8
                    if (strcmp_rc3 == 0) {
                        int32_t str_as_i = atoi((char *)*(int32_t *)(a2 + 8)); // R8
                        int32_t v22 = partition_get_index((int32_t)"system", v20, g18, v9, v19, v18); // 0x8f62aee4
                        g20 = 0x800000 * v20 | partition_get_offset(v22, v20, g18) / 512;
                        int32_t v23 = partition_get_size(v22, v20, g18, v9, v19, v18, v17, v16); // 0x8f62aefc
                        int32_t v24 = g20; // 0x8f62af04
                        int32_t v25; // 0x8f62b0a8
                        int32_t v26; // 0x8f62af6c
                        switch (str_as_i) {
                            default: {
                                // 0x8f62b0b4
                                fboot_info((int32_t)"INFO", (int32_t)"checking write protect status for sector %d", str_as_i, v9, v19, v18, v17, v16, v1, v15, 0);
                                int32_t v27 = generic_mmc_do_write_protect_test(str_as_i, (int32_t)"checking write protect status for sector %d", str_as_i, v9, v19, v18, v17, v16) == 0 ? (int32_t)"sector not writable" : (int32_t)"sector writable";
                                fboot_info((int32_t)"INFO", v27, str_as_i, v9, v19, v18, v17, v16, v2, v15, 0);
                                mmc_sdhci_get_wp_status(str_as_i, v27, str_as_i, v9, v19, v18, v17, v16, v2, v15);
                                // branch -> 0x8f62b0f4
                                // 0x8f62b0f4
                                if (v8 != g14) {
                                    // 0x8f62b104
                                    __stack_chk_fail();
                                    // branch -> 0x8f62b108
                                }
                                // 0x8f62b108
                                g20 = v3;
                                g22 = v4;
                                return 0;
                            }
                            case 1: {
                                int32_t v28 = write_protect_enabled_on_eng_hw(v23, v20, g18, v9, v19, v18, v17); // 0x8f62af14
                                fboot_info((int32_t)"INFO", (int32_t)"write protect enabled is %d", v28, v9, v19, v18, v17, v16, v2, v15, 0);
                                fboot_info((int32_t)"INFO", (int32_t)"write protect supported is %d", is_write_protect_supported((int32_t)"system", str_as_i, v28, v9, v19, v18, v17, v16, v2, v15, 0, 0, 0, v8, 0, v3, g21, v4), v9, v19, v18, v17, v16, v2, v15, 0);
                                fboot_info((int32_t)"INFO", (int32_t)"starting sector %d", g20, v9, v19, v18, v17, v16, v2, v15, 0);
                                int32_t v29 = g20 - 1 + (0x800000 * v20 | v23 / 512); // 0x8f62af68
                                v26 = fboot_info((int32_t)"INFO", (int32_t)"ending sector %d", v29, v9, v19, v18, v17, v16, v2, v15, 0);
                                generic_mmc_get_protect_group_size(v26, (int32_t)"ending sector %d", v29, v9);
                                v25 = (int32_t)"group size %d";
                                // branch -> 0x8f62b0a8
                                break;
                            }
                            case 2: {
                                // 0x8f62af8c
                                v26 = write_protect_partition((int32_t)"system", v20, g18, v9);
                                v25 = (int32_t)"enabling write protect with result %d ";
                                // branch -> 0x8f62b0a8
                                break;
                            }
                            case 3: {
                                // 0x8f62afac
                                v26 = generic_mmc_init((char *)v23, v20, g18, v9, v19, v18, v17, v16, v1, v15);
                                v25 = (int32_t)"Resetting eMMC result %d";
                                // branch -> 0x8f62b0a8
                                break;
                            }
                            case 4: {
                                char * mem = malloc(0x1000); // 0x8f62afcc
                                v6 = (int32_t)mem;
                                if (mem != NULL) {
                                    // 0x8f62afd8
                                    g20 = 0;
                                    SecHashInit(1, v20, g18, v9, v19, v18, v17);
                                    int32_t v30 = g20; // 0x8f62afe4
                                    // branch -> 0x8f62afe4
                                    while (true) {
                                        // 0x8f62afe4
                                        g20 = v30 + 8;
                                        generic_mmc_read_sector(v24 + v30, 8, v6, v9, v19, v18, v17, v16, v1, v15);
                                        SecHashUpdate(v6, 0x1000, v6, v9);
                                        int32_t v31 = g20; // 0x8f62b004
                                        if (v31 == 800) {
                                            // break (via goto) -> 0x8f62b00c
                                            goto lab_0x8f62b00c;
                                        }
                                        v30 = v31;
                                        // continue -> 0x8f62afe4
                                    }
                                  lab_0x8f62b00c:
                                    // 0x8f62b00c
                                    SecHashFinal((int32_t)&v2, 20, v6, v9, v19, v18, v17, v16, v1, v15, 0, 0);
                                    int32_t v32;
                                    int32_t v33;
                                    int32_t v34;
                                    fboot_info((int32_t)"INFO", (int32_t)"Digest %x%x%x%x%x %d sectors\n", 0x1000000 * v2 / 0x1000000, 0x1000000 * v34 / 0x1000000, 0x1000000 * v33 / 0x1000000, 0x1000000 * v32 / 0x1000000, 0x1000000 * v15 / 0x1000000, g20, v2, v15, 0);
                                    free((char *)v6);
                                    // branch -> 0x8f62b0f4
                                }
                                // 0x8f62b0f4
                                if (v8 != g14) {
                                    // 0x8f62b104
                                    __stack_chk_fail();
                                    // branch -> 0x8f62b108
                                }
                                // 0x8f62b108
                                g20 = v3;
                                g22 = v4;
                                return 0;
                            }
                            case 5: {
                                // 0x8f62b05c
                                v26 = mmc_sdhci_enable_enhanced_erase(v23, v20, g18, v9);
                                v25 = (int32_t)"enabling enhanced erase %d";
                                // branch -> 0x8f62b0a8
                                break;
                            }
                            case 6: {
                                // 0x8f62b078
                                v26 = can_write_partition((int32_t)"system", v20, g18, v9, v19, v18, v17);
                                v25 = (int32_t)"can write system %d";
                                // branch -> 0x8f62b0a8
                                break;
                            }
                            case 7: {
                                // 0x8f62b098
                                v26 = mmc_sdhci_enable_hw_reset(v23, v20, g18, v9);
                                v25 = (int32_t)"enabling hw_rest %d";
                                // branch -> 0x8f62b0a8
                                break;
                            }
                        }
                        // 0x8f62b0a8
                        fboot_info((int32_t)"INFO", v25, v26, v9, v19, v18, v17, v16, v2, v15, 0);
                        // branch -> 0x8f62b0f4
                        // 0x8f62b0f4
                        if (v8 != g14) {
                            // 0x8f62b104
                            __stack_chk_fail();
                            // branch -> 0x8f62b108
                        }
                        // 0x8f62b108
                        g20 = v3;
                        g22 = v4;
                        return 0;
                    }
                    strcmp_rc2 = strcmp_rc3;
                }
                // 0x8f62b0ec
                oem_wptest_usage(strcmp_rc2, v20);
                result = 3;
                // branch -> 0x8f62b0f4
            }
            // 0x8f62b0f4
            if (v8 != g14) {
                // 0x8f62b104
                __stack_chk_fail();
                // branch -> 0x8f62b108
            }
            // 0x8f62b108
            g20 = v3;
            g22 = v4;
            return result;
        }
        // 0x8f62ae28
        v14 = &g9;
        char * v35 = __utag_puts(0, (int32_t)"WPDisable", (int32_t)&g9, v9, v19, v18, v17, v16, v1, v15); // 0x8f62ae30
        if (v35 != NULL) {
            int32_t v36 = __utags_flush(strcmp_rc, (int32_t)"WPDisable", v14, v9, v19, v18, v17, v16); // 0x8f62ae4c
            g20 = v36;
            if (v36 == 0) {
                // 0x8f62ae64
                v13 = (int32_t)"Write protect enabled!";
                // branch -> 0x8f62aeb0
            } else {
                // 0x8f62ae58
                v13 = (int32_t)"Failed to update utags";
                // branch -> 0x8f62aeb0
            }
            // 0x8f62aeb0
            fboot_info((int32_t)"INFO", v13, v14, v9, v19, v18, v17, v16, v2, v15, 0);
            // branch -> 0x8f62b0f4
            // 0x8f62b0f4
            if (v8 != g14) {
                // 0x8f62b104
                __stack_chk_fail();
                // branch -> 0x8f62b108
            }
            // 0x8f62b108
            g20 = v3;
            g22 = v4;
            return 0;
        }
        // 0x8f62ae3c
        // branch -> 0x8f62aeb0
        // 0x8f62aeb0
        fboot_info((int32_t)"INFO", (int32_t)"Failed to update wpdisable", v14, v9, v19, v18, v17, v16, v2, v15, 0);
        // branch -> 0x8f62b0f4
    }
    // 0x8f62b0f4
    if (v8 != g14) {
        // 0x8f62b104
        __stack_chk_fail();
        // branch -> 0x8f62b108
    }
    // 0x8f62b108
    g20 = v3;
    g22 = v4;
    return 0;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int atoi(const char * nptr);
// long int atol(const char * nptr);
// long long int atoll(const char * nptr);
// void free(void * ptr);
// void * malloc(size_t size);
// char * strchr(char * s, int c);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// char * strrchr(char * s, int c);
// char * strstr(char * haystack, const char * needle);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 20
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:38:46