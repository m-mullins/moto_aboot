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

int32_t __utag_gets_104(char * a1, char * a2, int32_t a3, int32_t a4);
int32_t get_default_backup_zone(int32_t a1, int32_t a2);
int32_t get_default_backup_zone_size(int32_t a1, int32_t a2);
char * get_ram(char * a1, int32_t a2);
char * get_storage(char * a1, int32_t a2);
int32_t index_value_cb(int32_t a1, int32_t * a2);
int32_t is_gpt_initialized(int32_t a1);
int32_t next_valpair(int32_t * a1, int32_t * a2, int32_t a3, int32_t * a4, int32_t a5);
char * notify_user(char * format, int32_t a2, int32_t a3);
int32_t resize_gpt_entry(uint32_t a1, int32_t a2);
int32_t str_to_utf(char * str, int32_t a2);
int32_t type_atoi_103(char * str, int32_t a2, int32_t a3);
int32_t type_itoa_102(int32_t a1, int32_t a2, int32_t a3);
char * utag_set_cmdline_cb(char * a1, char * a2, int32_t * a3);
int32_t utags_set_chosen(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t utags_set_chosen_cb(char * a1, char * str, int32_t * a3);
int32_t utf_to_str_constprop_3(int32_t a1, int32_t a2, int32_t a3);
int32_t validate_gpt(char * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

bool g16 = false; // LR
int32_t g17 = 0; // R0
int32_t g18 = 0; // R1
int32_t g19 = 0; // R10
int32_t g20 = 0; // R2
int32_t g21 = 0; // R3
int32_t g22 = 0; // R4
int32_t g23 = 0; // R5
int32_t g24 = 0; // R6
int32_t g25 = 0; // R7
int32_t g26 = 0; // R8
int32_t g27 = 0; // R9
int32_t g1 = -0x1a60df84; // 0x8f654f64
int32_t g2 = -0x16d2b810; // 0x8f655294
int32_t g3 = 0x2020003a; // 0x8f686ac4
int32_t g4 = 0x5542003d; // 0x8f69c373
int32_t g5 = 0x70750020; // 0x8f6a4f1e
int32_t (*g6)(int32_t) = NULL; // 0x8f6afe28
int32_t g7 = 0; // 0x8f6e130c
int32_t g8 = 0; // 0x8f6e1310
char * g9; // 0x8f6e1318
char * g10; // 0x8f6e131c
int32_t g11 = 0; // 0x8f6e1320
int32_t g12 = 0; // 0x8f6e1328
int32_t g13 = 0; // 0x8f7112f4
char * g14; // 0x8f711464
int32_t g15 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f654d1c - 0x8f654e97
int32_t next_valpair(int32_t * a1, int32_t * a2, int32_t a3, int32_t * a4, int32_t a5) {
    int32_t v1 = (int32_t)a4;
    int32_t v2 = g22; // 0x8f654d1c
    int32_t v3 = g24; // 0x8f654d1c
    g24 = a3;
    int32_t v4 = (int32_t)a1; // R5
    int32_t v5 = (int32_t)a2; // R10
    int32_t v6 = g13;
    int32_t c = 0x1000000 * a5 / 0x1000000; // R11
    if (a1 == NULL) {
        // 0x8f654e60
        // branch -> 0x8f654e64
        // 0x8f654e64
        if (v6 != g13) {
            // 0x8f654e74
            __stack_chk_fail();
            // branch -> 0x8f654e78
        }
        // 0x8f654e78
        g22 = v2;
        g24 = v3;
        return -1;
    }
    int32_t v7 = *a1; // 0x8f654d4c
    g22 = v7;
    if (v7 == 0) {
        // 0x8f654e60
        // branch -> 0x8f654e64
        // 0x8f654e64
        if (v6 != g13) {
            // 0x8f654e74
            __stack_chk_fail();
            // branch -> 0x8f654e78
        }
        // 0x8f654e78
        g22 = v2;
        g24 = v3;
        return -1;
    }
    char * str = (char *)v7; // 0x8f654d58_0
    if (*str != 0) {
        int32_t len = strlen(str); // R7
        int32_t v8; // 0x8f654df4_4
        int32_t * v9; // 0x8f654e4c_1
        char * found_char_pos; // 0x8f654df4
        int32_t found_char_pos2; // R0
        int32_t v10; // R3
        int32_t str3;
        int32_t v11;
        int32_t v12;
        int32_t v13; // 0x8f654e40
        int32_t str2; // 0x8f654e14
        if (str3 == 0) {
            // 0x8f654dec
            found_char_pos = strchr((char *)g22, g24);
            v8 = (int32_t)found_char_pos;
            g24 = v8;
            if (found_char_pos == NULL) {
                // 0x8f654e00
                // branch -> 0x8f654e08
                // 0x8f654e08
                print_log(-1, (int32_t)"%s: delim1 not found", (int32_t)"next_valpair", v1, v12, 0, v11, v1, 0, v6, 0, v2, g23);
                // branch -> 0x8f654e60
                // 0x8f654e60
                // branch -> 0x8f654e64
                // 0x8f654e64
                if (v6 != g13) {
                    // 0x8f654e74
                    __stack_chk_fail();
                    // branch -> 0x8f654e78
                }
                // 0x8f654e78
                g22 = v2;
                g24 = v3;
                return -1;
            }
            // 0x8f654e14
            str2 = v8 + 1;
            found_char_pos2 = (int32_t)strchr((char *)str2, c);
            *(int32_t *)v5 = g22;
            *a4 = str2;
            v10 = 0;
            *(char *)g24 = 0;
            v13 = found_char_pos2;
            if (v13 == 0) {
                // if_8f654e4c_0_true
                v9 = (int32_t *)v4;
                *v9 = len + *v9;
                // branch -> 0x8f654e64
            } else {
                // if_8f654e44_0_true
                *(char *)v13 = (char)v10;
                *(int32_t *)v4 = v13 + 1;
                found_char_pos2 = v10;
                // branch -> 0x8f654e64
            }
            // 0x8f654e64
            if (v6 != g13) {
                // 0x8f654e74
                __stack_chk_fail();
                // branch -> 0x8f654e78
            }
            // 0x8f654e78
            g22 = v2;
            g24 = v3;
            return found_char_pos2;
        }
        int32_t len2 = strlen((char *)str3); // 0x8f654d7c
        if (len <= len2 + 1) {
            // if_8f654d8c_0_true
            // branch -> 0x8f654e08
            // 0x8f654e08
            print_log(-1, (int32_t)"%s: value size mismatch", (int32_t)"next_valpair", v1, v12, 0, v11, v1, 0, v6, 0, v2, g23);
            // branch -> 0x8f654e60
            // 0x8f654e60
            // branch -> 0x8f654e64
            // 0x8f654e64
            if (v6 != g13) {
                // 0x8f654e74
                __stack_chk_fail();
                // branch -> 0x8f654e78
            }
            // 0x8f654e78
            g22 = v2;
            g24 = v3;
            return -1;
        }
        int32_t str4 = g22; // 0x8f654d98
        int32_t v14 = g24; // 0x8f654d9c
        if ((int32_t)*(char *)(str4 + len2) != v14) {
            // 0x8f654da4
            print_log(2, (int32_t)"%s: delimiter [%c] not found after expected value1 [%s]", (int32_t)"next_valpair", v14, str3, 0, v11, v1, 0, v6, 0, v2, g23);
            // branch -> 0x8f654e60
            // 0x8f654e60
            // branch -> 0x8f654e64
            // 0x8f654e64
            if (v6 != g13) {
                // 0x8f654e74
                __stack_chk_fail();
                // branch -> 0x8f654e78
            }
            // 0x8f654e78
            g22 = v2;
            g24 = v3;
            return -1;
        }
        // 0x8f654dc0
        if (strncmp((char *)str4, (char *)str3, len2) != 0) {
            // 0x8f654dd4
            print_log(2, (int32_t)"%s: val1 does not match expected value [%s]", (int32_t)"next_valpair", str3, v12, 0, v11, v1, 0, v6, 0, v2, g23);
            // branch -> 0x8f654e60
            // 0x8f654e60
            // branch -> 0x8f654e64
            // 0x8f654e64
            if (v6 != g13) {
                // 0x8f654e74
                __stack_chk_fail();
                // branch -> 0x8f654e78
            }
            // 0x8f654e78
            g22 = v2;
            g24 = v3;
            return -1;
        }
        // 0x8f654dec
        found_char_pos = strchr((char *)g22, g24);
        v8 = (int32_t)found_char_pos;
        g24 = v8;
        if (found_char_pos == NULL) {
            // 0x8f654e00
            // branch -> 0x8f654e08
            // 0x8f654e08
            print_log(-1, (int32_t)"%s: delim1 not found", (int32_t)"next_valpair", v1, v12, 0, v11, v1, 0, v6, 0, v2, g23);
            // branch -> 0x8f654e60
            // 0x8f654e60
            // branch -> 0x8f654e64
            // 0x8f654e64
            if (v6 != g13) {
                // 0x8f654e74
                __stack_chk_fail();
                // branch -> 0x8f654e78
            }
            // 0x8f654e78
            g22 = v2;
            g24 = v3;
            return -1;
        }
        // 0x8f654e14
        str2 = v8 + 1;
        found_char_pos2 = (int32_t)strchr((char *)str2, c);
        *(int32_t *)v5 = g22;
        *a4 = str2;
        v10 = 0;
        *(char *)g24 = 0;
        v13 = found_char_pos2;
        if (v13 == 0) {
            // if_8f654e4c_0_true
            v9 = (int32_t *)v4;
            *v9 = len + *v9;
            // branch -> 0x8f654e64
        } else {
            // if_8f654e44_0_true
            *(char *)v13 = (char)v10;
            *(int32_t *)v4 = v13 + 1;
            found_char_pos2 = v10;
            // branch -> 0x8f654e64
        }
        // 0x8f654e64
        if (v6 != g13) {
            // 0x8f654e74
            __stack_chk_fail();
            // branch -> 0x8f654e78
        }
        // 0x8f654e78
        g22 = v2;
        g24 = v3;
        return found_char_pos2;
    }
    // 0x8f654e60
    // branch -> 0x8f654e64
    // 0x8f654e64
    if (v6 != g13) {
        // 0x8f654e74
        __stack_chk_fail();
        // branch -> 0x8f654e78
    }
    // 0x8f654e78
    g22 = v2;
    g24 = v3;
    return -1;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// uLong crc32(uLong crc, const Bytef * buf, uInt len);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// char * strchr(char * s, int c);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// char * strrchr(char * s, int c);
// int vsnprintf(char * restrict s, size_t maxlen, const char * restrict format, _G_va_list arg);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 18
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:49:00