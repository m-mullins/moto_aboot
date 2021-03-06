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

// Address range: 0x8f6333d4 - 0x8f6334d7
int32_t type_atoi_13(char * str, int32_t a2, int32_t a3) {
    int32_t str2 = (int32_t)str; // 0x8f6333d4_0
    g26 = a2;
    int32_t v1 = g19;
    int32_t v2;
    if (str == NULL) {
        // 0x8f633498
        // branch -> 0x8f63349c
        // 0x8f63349c
        g27 = v1;
        v2 = g19;
        g28 = v2;
        if (v1 != v2) {
            // 0x8f6334ac
            __stack_chk_fail();
            // branch -> 0x8f6334b0
        }
        // 0x8f6334b0
        return str2;
    }
    // 0x8f6333f0
    g26 = (int32_t)"bool";
    if (strcmp(str, "bool") == 0) {
        // if_8f6333fc_0_true
        // branch -> 0x8f63349c
        // 0x8f63349c
        g27 = v1;
        v2 = g19;
        g28 = v2;
        if (v1 != v2) {
            // 0x8f6334ac
            __stack_chk_fail();
            // branch -> 0x8f6334b0
        }
        // 0x8f6334b0
        return 1;
    }
    // 0x8f633404
    g26 = (int32_t)"str";
    if (strcmp((char *)str2, "str") == 0) {
        // if_8f633414_0_true
        // branch -> 0x8f63349c
        // 0x8f63349c
        g27 = v1;
        v2 = g19;
        g28 = v2;
        if (v1 != v2) {
            // 0x8f6334ac
            __stack_chk_fail();
            // branch -> 0x8f6334b0
        }
        // 0x8f6334b0
        return 2;
    }
    // 0x8f63341c
    g26 = (int32_t)"char";
    if (strcmp((char *)str2, "char") == 0) {
        // if_8f63342c_0_true
        // branch -> 0x8f63349c
        // 0x8f63349c
        g27 = v1;
        v2 = g19;
        g28 = v2;
        if (v1 != v2) {
            // 0x8f6334ac
            __stack_chk_fail();
            // branch -> 0x8f6334b0
        }
        // 0x8f6334b0
        return 3;
    }
    // 0x8f633434
    g26 = (int32_t)"long";
    if (strcmp((char *)str2, "long") == 0) {
        // if_8f633444_0_true
        // branch -> 0x8f63349c
        // 0x8f63349c
        g27 = v1;
        v2 = g19;
        g28 = v2;
        if (v1 != v2) {
            // 0x8f6334ac
            __stack_chk_fail();
            // branch -> 0x8f6334b0
        }
        // 0x8f6334b0
        return 4;
    }
    // 0x8f63344c
    g26 = (int32_t)"ulong";
    if (strcmp((char *)str2, "ulong") == 0) {
        // if_8f63345c_0_true
        // branch -> 0x8f63349c
        // 0x8f63349c
        g27 = v1;
        v2 = g19;
        g28 = v2;
        if (v1 != v2) {
            // 0x8f6334ac
            __stack_chk_fail();
            // branch -> 0x8f6334b0
        }
        // 0x8f6334b0
        return 5;
    }
    // 0x8f633464
    g26 = (int32_t)"llong";
    if (strcmp((char *)str2, "llong") == 0) {
        // if_8f633474_0_true
        // branch -> 0x8f63349c
        // 0x8f63349c
        g27 = v1;
        v2 = g19;
        g28 = v2;
        if (v1 != v2) {
            // 0x8f6334ac
            __stack_chk_fail();
            // branch -> 0x8f6334b0
        }
        // 0x8f6334b0
        return 6;
    }
    // 0x8f63347c
    g26 = (int32_t)"ullong";
    int32_t v3; // R0
    int32_t v4; // 0x8f6334b4_28
    if (strcmp((char *)str2, "ullong") == 0) {
        // if_8f633490_0_true
        v3 = 7;
        v4 = 7;
        // branch -> 0x8f63349c
    } else {
        // if_8f63348c_0_true
        v3 = 255;
        v4 = 255;
        // branch -> 0x8f63349c
    }
    // 0x8f63349c
    g27 = v1;
    v2 = g19;
    g28 = v2;
    int32_t result; // 0x8f6334b4_2
    if (v1 != v2) {
        // 0x8f6334ac
        __stack_chk_fail();
        result = v3;
        // branch -> 0x8f6334b0
    } else {
        result = v4;
    }
    // 0x8f6334b0
    return result;
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
