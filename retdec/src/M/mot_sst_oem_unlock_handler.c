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

// ---------------- Integer Types Definitions -----------------

typedef int8_t int4_t;

// ------------------- Function Prototypes --------------------

int32_t _fdt_check_node_offset(int32_t a1, int32_t a2);
int32_t _fdt_check_prop_offset(int32_t a1);
int32_t add_panel_to_manager(int32_t * a1, int32_t a2, int32_t a3);
int32_t arch_disable_mmu(int32_t a1, int32_t a2, int32_t a3);
int32_t arm_mmu_init(int32_t a1);
int32_t board_machtype(int32_t a1, int32_t a2, int32_t a3);
int32_t display_draw_screen_line(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t display_draw_screen_line_alignment(int32_t a1);
int32_t factory_mode(int32_t a1, int32_t a2, int32_t a3);
void function_8f67b680(void);
int32_t is_factory_mode(void);
int32_t is_validation_enabled(char * a1, int32_t a2);
int32_t load_and_validate_logo(void);
int32_t load_and_validate_oem_image(void);
int32_t mipi_mot_panel_off(int32_t a1, int32_t a2, int32_t a3);
int32_t mipi_mot_panel_on(int32_t a1, int32_t a2, int32_t a3);
int32_t mmc_enable_enhanced_erase(void);
int32_t mmc_sdhci_enable_enhanced_erase(int32_t a1, int32_t a2, int32_t a3);
int32_t mmc_sdhci_get_wp_group_size(void);
void mmc_set_power_on_wp_user(char * a1, int32_t a2, int32_t a3);
int32_t mot_sst_get_unlock_data(char * a1, char * a2);
int32_t mot_sst_oem_unlock_handler(void);
int32_t panel_manager_init(int32_t a1, int32_t a2, int32_t a3);
int32_t pm8x41_config_s3_source(uint32_t a1, int32_t a2, int32_t a3);
int32_t pm8x41_resin_status(int32_t a1, int32_t a2);
int32_t target_serialno(char * a1, int32_t a2);
int32_t validate_partition(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t wait_queue_block(int32_t a1, int32_t a2);
int32_t wait_queue_init(int32_t * a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g19 = 0; // LR
int32_t g20 = 0; // R0
int32_t g21 = 0; // R1
int32_t g22 = 0; // R10
int32_t g23 = 0; // R11
int32_t g24 = 0; // R2
int32_t g25 = 0; // R3
int32_t g26 = 0; // R4
int32_t g27 = 0; // R5
int32_t g28 = 0; // R6
int32_t g29 = 0; // R7
int32_t g30 = 0; // R8
int32_t g31 = 0; // R9
int32_t g1 = -0x16d2bfed; // 0x8f61bf74
char * g2 = "\xff\xff\xff\xff\x6c\x6f\x61\x64\x5f\x61\x6e\x64\x5f\x76\x61\x6c\x69\x64\x61\x74\x65\x5f\x6b\x65\x72\x6e\x65\x6c\x5f\x69\x6d\x61\x67\x65"; // 0x8f6826be
char * g3 = "\n"; // 0x8f6ac1b0
int32_t g4 = 4; // 0x8f6acacc
int32_t g5 = 4; // 0x8f6acb18
int32_t g6 = 4; // 0x8f6acb30
int32_t g7 = -1; // 0x8f6affb0
int32_t g8 = 102; // 0x8f6affdc
int32_t g9 = 1; // 0x8f6b0044
char * g10; // 0x8f6b0070
int32_t g11 = 0; // 0x8f6bc000
char * g12; // 0x8f6e06ae
int32_t g13 = 0; // 0x8f6e06b4
int32_t g14 = 0; // 0x8f6e0c38
int32_t g15 = 0; // 0x8f7112f4
int32_t g16 = 0; // 0x8f7114ac
int32_t g17 = 0; // 0x8f711550
int32_t g18 = 0; // 0x8f711554

// ------------------------ Functions -------------------------

// Address range: 0x8f672808 - 0x8f67294f
int32_t mot_sst_oem_unlock_handler(void) {
    int32_t v1 = g26; // 0x8f672808
    int32_t result = 0; // R5
    int32_t v2 = 0; // bp-35
    int32_t v3 = g15;
    int32_t v4 = -0x2153; // bp-34
    int32_t v5 = 2; // bp-32
    int32_t v6 = mot_sst_is_locked(g20); // 0x8f672838
    g26 = v6;
    if (v6 != 255) {
        // if_8f672844_0_true
        g26 = result;
        // branch -> 0x8f672918
        // 0x8f672918
        if (v3 != g15) {
            // 0x8f67292c
            __stack_chk_fail();
            // branch -> 0x8f672930
        }
        // 0x8f672930
        g26 = v1;
        return result;
    }
    int32_t v7 = &v4; // 0x8f672850_0
    int32_t v8;
    cid_get_cid_data(v7, (int32_t)&v5, g24, 2, v8, 0, 2, v3, 0, v1, g27);
    result = v7;
    print_log(1, (int32_t)"dbvc_cid: %02x status: %02x\n", v4 % 0x10000, v7, v8, 0, v5, v3, 0, v1, g27, g28, g29);
    uint32_t v9 = v4 % 0x10000; // 0x8f672870
    int32_t v10 = 256 * v9 & 0xff00 | v9 / 256; // 0x8f67287c
    int32_t v11; // 0x8f6728f8
    int32_t v12; // 0x8f6728b0_0
    int32_t v13; // 0x8f6728b4
    int32_t v14; // 0x8f6728ec
    int32_t v15; // R1
    int32_t v16;
    int32_t result2;
    switch ((int16_t)v10) {
        case 222: {
            // 0x8f67288c
            if (result != 15) {
                // 0x8f6728ac
                v12 = &v2;
                v15 = v12;
                v13 = mot_sst_validate_hash_password(g20, v12, v9, v10, v8, 0, v5, v3, 0, v1, g27, g28, g29, g19, v16, 0);
                if (v13 == 0) {
                    // 0x8f6728cc
                    if (mot_sst_pal_set_sbd_en_otp_bit(0, v15, v9, v10) == 0) {
                        // 0x8f6728ec
                        v14 = is_factory_product(0, v15, v9, v10);
                        v11 = v14;
                        if (v14 == 0) {
                            // 0x8f672908
                            if (mot_sst_pal_delete_user_partition(0, v15, v9, v10) != 0) {
                                // 0x8f6728d8
                                print_log(1, (int32_t)"unlock failed in sst oem unlock handler\n", v9, v10, v8, 0, v5, v3, 0, v1, g27, g28, g29);
                                // branch -> 0x8f6728e4
                                // 0x8f6728e4
                                g26 = 0;
                                // branch -> 0x8f672918
                                // 0x8f672918
                                if (v3 != g15) {
                                    // 0x8f67292c
                                    __stack_chk_fail();
                                    // branch -> 0x8f672930
                                }
                                // 0x8f672930
                                g26 = v1;
                                return 0;
                            }
                            v11 = 0;
                        }
                        // 0x8f6728f8
                        if (mot_sst_pal_erase_token(v11, v15, v9, v10) == 0) {
                            // 0x8f6728f8
                            result2 = g26;
                            // branch -> 0x8f672918
                            // 0x8f672918
                            if (v3 != g15) {
                                // 0x8f67292c
                                __stack_chk_fail();
                                // branch -> 0x8f672930
                            }
                            // 0x8f672930
                            g26 = v1;
                            return result2;
                        }
                    }
                    // 0x8f6728d8
                    print_log(1, (int32_t)"unlock failed in sst oem unlock handler\n", v9, v10, v8, 0, v5, v3, 0, v1, g27, g28, g29);
                    // branch -> 0x8f6728e4
                } else {
                    // if_8f6728bc_0_true
                    g7 = 0x1000000 * v2 / 0x1000000;
                    // branch -> 0x8f6728e4
                }
                // 0x8f6728e4
                g26 = 0;
                // branch -> 0x8f672918
                // 0x8f672918
                if (v3 != g15) {
                    // 0x8f67292c
                    __stack_chk_fail();
                    // branch -> 0x8f672930
                }
                // 0x8f672930
                g26 = v1;
                return 0;
            }
            break;
        }
        case 255: {
            // 0x8f67288c
            if (result != 15) {
                // 0x8f6728ac
                v12 = &v2;
                v15 = v12;
                v13 = mot_sst_validate_hash_password(g20, v12, v9, v10, v8, 0, v5, v3, 0, v1, g27, g28, g29, g19, v16, 0);
                if (v13 == 0) {
                    // 0x8f6728cc
                    if (mot_sst_pal_set_sbd_en_otp_bit(0, v15, v9, v10) == 0) {
                        // 0x8f6728ec
                        v14 = is_factory_product(0, v15, v9, v10);
                        v11 = v14;
                        if (v14 == 0) {
                            // 0x8f672908
                            if (mot_sst_pal_delete_user_partition(0, v15, v9, v10) != 0) {
                                // 0x8f6728d8
                                print_log(1, (int32_t)"unlock failed in sst oem unlock handler\n", v9, v10, v8, 0, v5, v3, 0, v1, g27, g28, g29);
                                // branch -> 0x8f6728e4
                                // 0x8f6728e4
                                g26 = 0;
                                // branch -> 0x8f672918
                                // 0x8f672918
                                if (v3 != g15) {
                                    // 0x8f67292c
                                    __stack_chk_fail();
                                    // branch -> 0x8f672930
                                }
                                // 0x8f672930
                                g26 = v1;
                                return 0;
                            }
                            v11 = 0;
                        }
                        // 0x8f6728f8
                        if (mot_sst_pal_erase_token(v11, v15, v9, v10) == 0) {
                            // 0x8f6728f8
                            result2 = g26;
                            // branch -> 0x8f672918
                            // 0x8f672918
                            if (v3 != g15) {
                                // 0x8f67292c
                                __stack_chk_fail();
                                // branch -> 0x8f672930
                            }
                            // 0x8f672930
                            g26 = v1;
                            return result2;
                        }
                    }
                    // 0x8f6728d8
                    print_log(1, (int32_t)"unlock failed in sst oem unlock handler\n", v9, v10, v8, 0, v5, v3, 0, v1, g27, g28, g29);
                    // branch -> 0x8f6728e4
                } else {
                    // if_8f6728bc_0_true
                    g7 = 0x1000000 * v2 / 0x1000000;
                    // branch -> 0x8f6728e4
                }
                // 0x8f6728e4
                g26 = 0;
                // branch -> 0x8f672918
                // 0x8f672918
                if (v3 != g15) {
                    // 0x8f67292c
                    __stack_chk_fail();
                    // branch -> 0x8f672930
                }
                // 0x8f672930
                g26 = v1;
                return 0;
            }
            break;
        }
    }
    // 0x8f6728ac
    v12 = &v2;
    v15 = v12;
    v13 = mot_sst_validate_hash_password(g20, v12, v9, v10, v8, 0, v5, v3, 0, v1, g27, g28, g29, g19, v16, 0);
    if (v13 == 0) {
        // 0x8f6728cc
        if (mot_sst_pal_set_sbd_en_otp_bit(0, v15, v9, v10) == 0) {
            // 0x8f6728ec
            v14 = is_factory_product(0, v15, v9, v10);
            v11 = v14;
            if (v14 == 0) {
                // 0x8f672908
                if (mot_sst_pal_delete_user_partition(0, v15, v9, v10) != 0) {
                    // 0x8f6728d8
                    print_log(1, (int32_t)"unlock failed in sst oem unlock handler\n", v9, v10, v8, 0, v5, v3, 0, v1, g27, g28, g29);
                    // branch -> 0x8f6728e4
                    // 0x8f6728e4
                    g26 = 0;
                    // branch -> 0x8f672918
                    // 0x8f672918
                    if (v3 != g15) {
                        // 0x8f67292c
                        __stack_chk_fail();
                        // branch -> 0x8f672930
                    }
                    // 0x8f672930
                    g26 = v1;
                    return 0;
                }
                v11 = 0;
            }
            // 0x8f6728f8
            if (mot_sst_pal_erase_token(v11, v15, v9, v10) == 0) {
                // 0x8f6728f8
                result2 = g26;
                // branch -> 0x8f672918
                // 0x8f672918
                if (v3 != g15) {
                    // 0x8f67292c
                    __stack_chk_fail();
                    // branch -> 0x8f672930
                }
                // 0x8f672930
                g26 = v1;
                return result2;
            }
        }
        // 0x8f6728d8
        print_log(1, (int32_t)"unlock failed in sst oem unlock handler\n", v9, v10, v8, 0, v5, v3, 0, v1, g27, g28, g29);
        // branch -> 0x8f6728e4
    } else {
        // if_8f6728bc_0_true
        g7 = 0x1000000 * v2 / 0x1000000;
        // branch -> 0x8f6728e4
    }
    // 0x8f6728e4
    g26 = 0;
    // branch -> 0x8f672918
    // 0x8f672918
    if (v3 != g15) {
        // 0x8f67292c
        __stack_chk_fail();
        // branch -> 0x8f672930
    }
    // 0x8f672930
    g26 = v1;
    return 0;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// char * strcpy(char * restrict dest, const char * restrict src);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_ctlz_i32(int32_t a1, bool a2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 29
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:56:15
