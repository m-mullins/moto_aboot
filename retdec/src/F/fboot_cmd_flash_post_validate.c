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

int32_t __utag_gets_constprop_6_14(int32_t a1, int32_t a2);
char * __utag_puts_constprop_8(char * a1);
int32_t check_and_backup_partition(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t fboot_cmd_erase_post_validate(int32_t a1, int32_t a2, int32_t a3);
int32_t fboot_cmd_flash_post_backup_validate(int32_t * a1);
int32_t fboot_cmd_flash_post_validate(int32_t * a1);
int32_t get_device_offset_by_type(int32_t a1, char * a2);
int32_t get_device_setting_offset(int32_t a1, int32_t a2);
int32_t get_subnode_offset(int32_t a1, int32_t a2, int32_t a3);
int32_t get_temperature_setting(int32_t * a1, int32_t a2, int32_t a3);
int32_t handle_poweroff_callback(int32_t a1, int32_t a2, int32_t a3);
int32_t panel_manager_init(int32_t a1, int32_t a2, int32_t a3);
int32_t power_off(void);
int32_t poweroff_handler_init_part_0(int32_t a1, int32_t a2);
int32_t poweroff_handler_start(char * a1, int32_t a2, int32_t a3);
int32_t register_cmd_validator(int32_t * a1, char a2, int32_t a3);
int32_t register_pre_cmd_validator(int32_t a1, int32_t a2);
int32_t shutdown_timer_func(int32_t a1, int32_t a2);
int32_t source_detect_status(int32_t a1, int32_t a2, int32_t a3);
int32_t type_atoi_13(char * str, int32_t a2, int32_t a3);
int32_t type_itoa_12(char * a1, int32_t a2, int32_t a3);
int32_t update_fastchg_status(int32_t a1, int32_t a2, int32_t a3);
int32_t validate_sparse_data(int32_t a1, int32_t * a2, char * a3);

// --------------------- Global Variables ---------------------

int32_t g24 = 0; // LR
int32_t g25 = 0; // R0
int32_t g26 = 0; // R1
int32_t g27 = 0; // R2
int32_t g28 = 0; // R3
int32_t g29 = 0; // R4
int32_t g30 = 0; // R5
int32_t g31 = 0; // R6
int32_t g32 = 0; // R7
int32_t g33 = 0; // R8
int32_t g34 = 0; // R9
int32_t g1 = -0x16d2bfc9; // 0x8f6342ac
int32_t g2 = -0x1d7bfff8; // 0x8f6342dc
int32_t g3 = -0x16d2bf10; // 0x8f634310
int32_t g4 = 0x2020003a; // 0x8f686ac4
char * g5 = "\xd0\x0d\xfe\xed"; // 0x8f68ac00
int32_t g6 = 1; // 0x8f6ac0f0
int32_t g7 = -1; // 0x8f6ac1e8
int32_t g8 = -1; // 0x8f6ac1f8
int32_t g9 = -1; // 0x8f6ac204
int32_t g10 = -1; // 0x8f6ac20c
char * g11; // 0x8f6c0690
char * g12; // 0x8f6e0698
char * g13; // 0x8f6e06ae
int32_t g14 = 0; // 0x8f6e06b8
int32_t g15 = 0; // 0x8f6e06bc
int32_t g16 = 0; // 0x8f6e06c0
char * g17; // 0x8f6e06dc
int32_t g18 = 0; // 0x8f6e06e0
int32_t g19 = 0; // 0x8f7112f4
int32_t g20 = 0; // 0x8f71150c
int32_t g21 = 0; // 0x8f711550
int32_t g22 = 0; // 0x8f711554
int32_t g23 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f62eb6c - 0x8f62ef57
int32_t fboot_cmd_flash_post_validate(int32_t * a1) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = *a1; // 0x8f62eb7c
    int32_t v3 = g19;
    int32_t v4 = v3; // R3
    int32_t str = *(int32_t *)(v1 + 12) + 1; // 0x8f62eb84
    int32_t v5 = *(int32_t *)(v1 + 8); // R8
    int32_t strcmp_rc = strcmp((char *)str, "clogo"); // 0x8f62eb98
    int32_t v6 = strcmp_rc; // R6
    int32_t v7;
    int32_t v8;
    if (strcmp_rc == 0) {
        // 0x8f62eba4
        int32_t v9;
        int32_t v10 = &v9; // 0x8f62eba4_0
        memset((char *)&v9, 0, 16);
        int32_t str3;
        int32_t v11 = &str3; // 0x8f62ebc4_0
        memset((char *)&str3, v6, 33);
        int32_t v12 = &v7; // 0x8f62ebcc_0
        md5_init(v12, v6, 33, v4);
        md5_append(v12, v2, v5, v4, v8, 0, v7, 0, 0, 0, 0, 0, 0, 0);
        md5_finish(v12, v10, v5, v4, v8, 0, v7, 0, 0, 0, 0, 0, 0);
        // branch -> 0x8f62ebf0
        for (int32_t i = 0; i < 16; i++) {
            char v13 = *(char *)(v10 + i); // 0x8f62ebf4
            sprintf((char *)(2 * i + v11), "%02x", (int32_t)v13);
            // continue -> 0x8f62ebf0
        }
        // 0x8f62ec10
        print_log(1, (int32_t)"clogo image md5 checksum %s\n", v11, v11, v8, 0, v7, 0, 0, 0, 0, 0, 0);
        __utag_unprotect(0, (int32_t)"md5-clogo", v11, v11, v8, 0, v7, 0, 0, 0);
        int32_t v14 = 31; // R2
        int32_t str2;
        int32_t v15 = &str2; // 0x8f62ec34_0
        v4 = 0;
        strncpy((char *)&str2, "md5-clogo", 31);
        char * found_char_pos = strrchr((char *)&str2, 58); // 0x8f62ec4c
        int32_t v16 = type_atoi_11((int32_t)(found_char_pos != NULL) + (int32_t)found_char_pos, 58, v14, v4, v8, 0); // 0x8f62ec58
        int32_t v17 = v16; // 0x8f62ec9c
        if (v16 == 0) {
            // 0x8f62ec64
            strlcat(v15, (int32_t)&g4, 31, v4, v8, 0, v7, 0, 0, 0, 0, 0);
            v14 = 31;
            strlcat(v15, (int32_t)"str", 31, v4, v8, 0, v7, 0, 0, 0, 0, 0);
            char * found_char_pos2 = strrchr((char *)&str2, 58); // 0x8f62ec8c
            v17 = type_atoi_11((int32_t)(found_char_pos2 != NULL) + (int32_t)found_char_pos2, 58, v14, v4, v8, 0);
            // branch -> 0x8f62ec9c
        }
        // 0x8f62ec9c
        int32_t v18; // 0x8f62ed1c
        if (v17 == 255) {
            // 0x8f62eca4
            print_log(-1, (int32_t)"Error: not a string type: %s\n", (int32_t)"<invalid>", v4, v8, 0, v7, 0, 0, 0, 0, 0, 0);
            // branch -> 0x8f62ecfc
            // 0x8f62ecfc
            v14 = (int32_t)"md5-clogo";
            print_log(0, (int32_t)"Failed to put UTAG \"%s\"!\n", (int32_t)"md5-clogo", v4, v8, 0, v7, 0, 0, 0, 0, 0, 0);
            // branch -> 0x8f62ed0c
            // 0x8f62ed0c
            __utag_protect(0, (int32_t)"md5-clogo", v14, v4, v8, 0, v7, 0, 0, 0);
            v18 = __utags_flush(0, (int32_t)"md5-clogo", v14, v4, v8, 0, v7, 0);
            if (v18 != 0) {
                // 0x8f62ed28
                print_log(0, (int32_t)"Failed to flush UTAG for \"%s\"!\n", (int32_t)"md5-clogo", v4, v8, 0, v7, 0, 0, 0, 0, 0, 0);
                // branch -> 0x8f62eed0
            }
            // 0x8f62eed0
            if (v3 != g19) {
                // 0x8f62eee0
                __stack_chk_fail();
                // branch -> 0x8f62eee4
            }
            // 0x8f62eee4
            return 1;
        }
        int32_t v19 = strnlen((char *)&str3, 1024); // 0x8f62ecc0
        v4 = v19;
        if (v19 == 1024) {
            // 0x8f62ecd0
            print_log(-1, (int32_t)"Error: string too long\n", v14, 1024, v8, 0, v7, 0, 0, 0, 0, 0, 0);
            // branch -> 0x8f62ecfc
        } else {
            // 0x8f62ece0
            v14 = v11;
            int32_t v20 = v19 + 1; // 0x8f62ecec
            v4 = v20;
            if (__utag_write(0, v15, v11, v20, v8, 0, v7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) != 0) {
                // 0x8f62ed0c
                __utag_protect(0, (int32_t)"md5-clogo", v14, v4, v8, 0, v7, 0, 0, 0);
                v18 = __utags_flush(0, (int32_t)"md5-clogo", v14, v4, v8, 0, v7, 0);
                if (v18 != 0) {
                    // 0x8f62ed28
                    print_log(0, (int32_t)"Failed to flush UTAG for \"%s\"!\n", (int32_t)"md5-clogo", v4, v8, 0, v7, 0, 0, 0, 0, 0, 0);
                    // branch -> 0x8f62eed0
                }
                // 0x8f62eed0
                if (v3 != g19) {
                    // 0x8f62eee0
                    __stack_chk_fail();
                    // branch -> 0x8f62eee4
                }
                // 0x8f62eee4
                return 1;
            }
        }
        // 0x8f62ecfc
        v14 = (int32_t)"md5-clogo";
        print_log(0, (int32_t)"Failed to put UTAG \"%s\"!\n", (int32_t)"md5-clogo", v4, v8, 0, v7, 0, 0, 0, 0, 0, 0);
        // branch -> 0x8f62ed0c
        // 0x8f62ed0c
        __utag_protect(0, (int32_t)"md5-clogo", v14, v4, v8, 0, v7, 0, 0, 0);
        v18 = __utags_flush(0, (int32_t)"md5-clogo", v14, v4, v8, 0, v7, 0);
        if (v18 != 0) {
            // 0x8f62ed28
            print_log(0, (int32_t)"Failed to flush UTAG for \"%s\"!\n", (int32_t)"md5-clogo", v4, v8, 0, v7, 0, 0, 0, 0, 0, 0);
            // branch -> 0x8f62eed0
        }
        // 0x8f62eed0
        if (v3 != g19) {
            // 0x8f62eee0
            __stack_chk_fail();
            // branch -> 0x8f62eee4
        }
        // 0x8f62eee4
        return 1;
    }
    // 0x8f62ed3c
    if (strcmp((char *)str, "motoboot") == 0) {
        // if_8f62ed4c_0_true
        // branch -> 0x8f62ee30
        // 0x8f62ee30
        print_log(2, (int32_t)"Motoboot flashed successfully\n", g27, v4, v8, 0, v7, 0, 0, 0, 0, 0, 0);
        // branch -> 0x8f62eed0
        // 0x8f62eed0
        if (v3 != g19) {
            // 0x8f62eee0
            __stack_chk_fail();
            // branch -> 0x8f62eee4
        }
        // 0x8f62eee4
        return 1;
    }
    // 0x8f62ed58
    if (strcmp((char *)str, "partition") == 0) {
        // 0x8f62ed6c
        if (is_validation_enabled(NULL, (int32_t)"partition", g27, v4) != 0) {
            int32_t v21 = print_log(2, (int32_t)"Re-initializing CID...\n", g27, v4, v8, 0, v7, 0, 0, 0, 0, 0, 0); // 0x8f62ed80
            cid_init(v21, (int32_t)"Re-initializing CID...\n", g27, v4, v8, 0, v7, 0, 0, 0);
            // branch -> 0x8f62eed0
        }
    } else {
        int32_t v22 = (int32_t)"cid_prov"; // R1
        if (strcmp((char *)str, "cid_prov") != 0) {
            char * v23 = get_partition_by_name(str, v22, g27, v4, v8, 0, v7, 0, 0, 0, 0); // 0x8f62eda4
            int32_t v24 = (int32_t)v23; // 0x8f62eda4_12
            int32_t v25 = v24; // R5
            int32_t result;
            if (v23 == NULL) {
                // 0x8f62edb0
                fboot_info((int32_t)"INFO", (int32_t)"partition name is corrupted", g27, v4, v8, 0, v7, 0, 0, 0, 0);
                result = 3;
                // branch -> 0x8f62eed0
            } else {
                // 0x8f62edc0
                if (is_skip_validation(v24, v22, g27) == 0) {
                    // 0x8f62ede8
                    if (is_skip_sparse_preflash_validation(v25, v22, g27, v4, v8, 0, v7, 0) == 0) {
                        // 0x8f62edf8
                        if (*(char *)(v25 + 49) % 16 != 6) {
                            // 0x8f62eed0
                            if (v3 != g19) {
                                // 0x8f62eee0
                                __stack_chk_fail();
                                // branch -> 0x8f62eee4
                            }
                            // 0x8f62eee4
                            return 1;
                        }
                        // 0x8f62ee08
                        v6 = (int32_t)&g12;
                        char v26 = *(char *)&g12; // 0x8f62ee0c
                        int32_t v27 = v26; // 0x8f62ee0c
                        switch (v26) {
                            default: {
                                char v28 = *(char *)&g11; // 0x8f62ee3c
                                if (v28 == 0) {
                                    // 0x8f62ee80
                                    fboot_info((int32_t)"INFO", (int32_t)"Secure data is corrupted", 0, v27, v8, 0, v7, 0, 0, 0, 0);
                                    *(char *)v6 = (char)(int32_t)v28;
                                    // branch -> 0x8f62eeb0
                                    // 0x8f62eeb0
                                    if (*(char *)&g11 != 0) {
                                        // 0x8f62eec0
                                        memset((char *)&g11, 0, 0x20000);
                                        // branch -> 0x8f62eed0
                                    }
                                    // 0x8f62eed0
                                    if (v3 != g19) {
                                        // 0x8f62eee0
                                        __stack_chk_fail();
                                        // branch -> 0x8f62eee4
                                    }
                                    // 0x8f62eee4
                                    return 3;
                                }
                                // 0x8f62ee50
                                if (v26 != 2) {
                                    // 0x8f62eeac
                                    fboot_info((int32_t)"INFO", (int32_t)"PIV image validation failed!", g27, v27, v8, 0, v7, 0, 0, 0, 0);
                                    // branch -> 0x8f62eeb0
                                    // 0x8f62eeb0
                                    if (*(char *)&g11 != 0) {
                                        // 0x8f62eec0
                                        memset((char *)&g11, 0, 0x20000);
                                        // branch -> 0x8f62eed0
                                    }
                                    // 0x8f62eed0
                                    if (v3 != g19) {
                                        // 0x8f62eee0
                                        __stack_chk_fail();
                                        // branch -> 0x8f62eee4
                                    }
                                    // 0x8f62eee4
                                    return 3;
                                }
                                // 0x8f62ee58
                                v25 = 0;
                                if (add_sp_block(str, v22, 0, 0, 0, 0, v7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) == -1) {
                                    // 0x8f62ee58
                                    // branch -> 0x8f62ee80
                                    // 0x8f62ee80
                                    fboot_info((int32_t)"INFO", (int32_t)"Failed to store secure data", 0, 0, 0, 0, v7, 0, 0, 0, 0);
                                    *(char *)v6 = (char)v25;
                                    // branch -> 0x8f62eeb0
                                    // 0x8f62eeb0
                                    if (*(char *)&g11 != 0) {
                                        // 0x8f62eec0
                                        memset((char *)&g11, 0, 0x20000);
                                        result = 3;
                                        // branch -> 0x8f62eed0
                                    } else {
                                        result = 3;
                                    }
                                } else {
                                    // 0x8f62ee8c
                                    memset((char *)(int32_t)&g11, v25, 0x20000);
                                    result = 1;
                                    // branch -> 0x8f62eed0
                                }
                                // 0x8f62eed0
                                if (v3 != g19) {
                                    // 0x8f62eee0
                                    __stack_chk_fail();
                                    // branch -> 0x8f62eee4
                                }
                                // 0x8f62eee4
                                return result;
                            }
                            case 0: {
                                // 0x8f62eeac
                                fboot_info((int32_t)"INFO", (int32_t)"Invalid PIV image", g27, v27, v8, 0, v7, 0, 0, 0, 0);
                                // branch -> 0x8f62eeb0
                                break;
                            }
                            case 1: {
                                // 0x8f62ee28
                                // branch -> 0x8f62ee30
                                // 0x8f62ee30
                                print_log(2, (int32_t)"validation ongoing, continuing...\n", g27, v27, v8, 0, v7, 0, 0, 0, 0, 0, 0);
                                // branch -> 0x8f62eed0
                                // 0x8f62eed0
                                if (v3 != g19) {
                                    // 0x8f62eee0
                                    __stack_chk_fail();
                                    // branch -> 0x8f62eee4
                                }
                                // 0x8f62eee4
                                return 1;
                            }
                        }
                        // 0x8f62eeb0
                        if (*(char *)&g11 != 0) {
                            // 0x8f62eec0
                            memset((char *)&g11, 0, 0x20000);
                            // branch -> 0x8f62eed0
                        }
                        // 0x8f62eed0
                        if (v3 != g19) {
                            // 0x8f62eee0
                            __stack_chk_fail();
                            // branch -> 0x8f62eee4
                        }
                        // 0x8f62eee4
                        return 3;
                    }
                }
                // 0x8f62edcc
                print_log(2, (int32_t)"skip post flash validation on eng & unlocked HW\n", g27, v4, v8, 0, v7, 0, 0, 0, 0, 0, 0);
                *(char *)&g12 = 0;
                result = 1;
                // branch -> 0x8f62eed0
            }
            // 0x8f62eed0
            if (v3 != g19) {
                // 0x8f62eee0
                __stack_chk_fail();
                // branch -> 0x8f62eee4
            }
            // 0x8f62eee4
            return result;
        }
    }
    // 0x8f62eed0
    if (v3 != g19) {
        // 0x8f62eee0
        __stack_chk_fail();
        // branch -> 0x8f62eee4
    }
    // 0x8f62eee4
    return 1;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * malloc(size_t size);
// void * memset(void * s, int c, size_t n);
// int sprintf(char * restrict s, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// size_t strnlen(const char * string, size_t maxlen);
// char * strrchr(char * s, int c);
// char * strstr(char * haystack, const char * needle);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 23
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:40:36