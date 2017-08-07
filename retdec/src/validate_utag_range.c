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

// Address range: 0x8f629094 - 0x8f62922f
int32_t validate_utag_range(char * a1, int32_t a2, char * str) {
    int32_t v1 = g20; // 0x8f629094
    int32_t v2 = g21; // 0x8f629094
    int32_t v3 = g22; // 0x8f629094
    int32_t v4 = g23; // 0x8f629094
    int32_t v5 = g24; // 0x8f629094
    int32_t v6 = g25; // 0x8f629094
    int32_t v7;
    int32_t v8 = &v7; // 0x8f629098_0
    g20 = &g14;
    g24 = (int32_t)a1;
    g22 = a2;
    g21 = (int32_t)str;
    int32_t v9 = g14;
    g25 = &g14;
    int32_t v10;
    if (strlen(str) == 0) {
        // 0x8f6290c8
        print_log(2, (int32_t)"DEBUG %s: allow empty value\n", (int32_t)"validate_utag_range", v9, v7, 0, 0, 0, 0, 0, 0, 0, 0);
        // branch -> 0x8f6291e4
        // 0x8f6291e4
        v10 = g14;
        g19 = v10;
        if (v9 != v10) {
            // 0x8f6291f4
            __stack_chk_fail();
            // branch -> 0x8f6291f8
        }
        // 0x8f6291f8
        g20 = v1;
        g21 = v2;
        g22 = v3;
        g23 = v4;
        g24 = v5;
        g25 = v6;
        return 0;
    }
    // 0x8f6290dc
    strlcpy(v8, g22, 33, v9, v7);
    strlcat(v8, (int32_t)&g6, 33, v9, v7, 0, 0, 0, 0, 0, 0, 0);
    strlcat(v8, (int32_t)".range", 33, v9, v7, 0, 0, 0, 0, 0, 0, 0);
    int32_t size = __utag_sizeof((char *)g24, v8, 33, v9, v7, 0, 0, 0, 0); // 0x8f629114
    g23 = size;
    if (size == 0) {
        // 0x8f629120
        print_log(2, (int32_t)"%s: utag [%s] does not have .range\n", (int32_t)"validate_utag_range", g22, v7, 0, 0, 0, 0, 0, 0, 0, 0);
        // branch -> 0x8f6291e4
        // 0x8f6291e4
        v10 = g14;
        g19 = v10;
        if (v9 != v10) {
            // 0x8f6291f4
            __stack_chk_fail();
            // branch -> 0x8f6291f8
        }
        // 0x8f6291f8
        g20 = v1;
        g21 = v2;
        g22 = v3;
        g23 = v4;
        g24 = v5;
        g25 = v6;
        return 0;
    }
    char * mem = malloc(size); // 0x8f629138
    int32_t v11 = (int32_t)mem; // 0x8f629138_3
    g20 = v11;
    if (mem == NULL) {
        // 0x8f629144
        print_log(-1, (int32_t)"%s: out of memory", (int32_t)"validate_utag_range", v9, v7, 0, 0, 0, 0, 0, 0, 0, 0);
        // branch -> 0x8f6291e4
    } else {
        // 0x8f629158
        if (__utag_gets((char *)g24, (char *)&v7, v11, g23) != 0) {
            char * v12 = token_present(g20, (int32_t)&g3, g21, g23, v7, 0, 0, 0, 0, 0, 0); // 0x8f629198
            int32_t result;
            if (v12 == NULL) {
                // 0x8f6291a4
                print_log(2, (int32_t)"%s: utag [%s] .range validation failed", (int32_t)"validate_utag_range", g22, v7, 0, 0, 0, 0, 0, 0, 0, 0);
                fboot_info((int32_t)"INFO", (int32_t)"validation failed [%s]", g21, g22, v7, 0, 0, 0, 0, 0, 0);
                // branch -> 0x8f6291c8
                // 0x8f6291c8
                free((char *)g20);
                result = -1;
                // branch -> 0x8f6291e4
            } else {
                // 0x8f6291d8
                free((char *)g20);
                result = 0;
                // branch -> 0x8f6291e4
            }
            // 0x8f6291e4
            v10 = g14;
            g19 = v10;
            if (v9 != v10) {
                // 0x8f6291f4
                __stack_chk_fail();
                // branch -> 0x8f6291f8
            }
            // 0x8f6291f8
            g20 = v1;
            g21 = v2;
            g22 = v3;
            g23 = v4;
            g24 = v5;
            g25 = v6;
            return result;
        }
        // 0x8f629174
        print_log(-1, (int32_t)"%s: failed to read utag [%s]\n", (int32_t)"validate_utag_range", v8, v7, 0, 0, 0, 0, 0, 0, 0, 0);
        // branch -> 0x8f6291c8
        // 0x8f6291c8
        free((char *)g20);
        // branch -> 0x8f6291e4
    }
    // 0x8f6291e4
    v10 = g14;
    g19 = v10;
    if (v9 != v10) {
        // 0x8f6291f4
        __stack_chk_fail();
        // branch -> 0x8f6291f8
    }
    // 0x8f6291f8
    g20 = v1;
    g21 = v2;
    g22 = v3;
    g23 = v4;
    g24 = v5;
    g25 = v6;
    return -1;
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