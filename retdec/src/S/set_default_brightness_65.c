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

int32_t bd65060_read_reg(int32_t a1, int32_t a2);
int32_t bd65b60_backlight_off(int32_t a1, int32_t a2, int32_t a3);
int32_t bd65b60_backlight_on(int32_t a1, int32_t a2, int32_t a3);
int32_t bd65b60_init(void);
int32_t get_brightness_59(int32_t a1, int32_t a2, int32_t a3);
int32_t get_brightness_63(int32_t a1, int32_t a2, int32_t a3);
int32_t get_max_brightness_60(int32_t a1, int32_t a2, int32_t a3);
int32_t get_max_brightness_64(int32_t a1, int32_t a2, int32_t a3);
int32_t lm3697_backlight_on(int32_t a1, int32_t a2, int32_t a3);
int32_t lp8556_init(void);
int32_t oem_bd65060(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_bd65060_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_lp8556_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t set_brightness_62(uint32_t a1, int32_t a2);
int32_t set_brightness_66(uint32_t a1, int32_t a2);
int32_t set_default_brightness_61(uint32_t a1, int32_t a2, int32_t a3);
int32_t set_default_brightness_65(uint32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g12 = 0; // R2
int32_t g13 = 0; // R4
int32_t g14 = 0; // R5
int32_t g15 = 0; // R6
bool g16 = false; // R7
int32_t g1 = 0x746e6300; // 0x8f6a4e20
int32_t g2 = 255; // 0x8f6aca7c
int32_t g3 = 255; // 0x8f6aca84
int32_t g4 = 255; // 0x8f6aca88
char * g5 = "\x01"; // 0x8f6aca8c
int32_t g6 = 255; // 0x8f6aca90
int32_t g7 = 255; // 0x8f6aca94
int32_t g8 = 0; // 0x8f6e0a88
int32_t g9 = 0; // 0x8f6e0a94
int32_t g10 = 0; // 0x8f6e0a98
int32_t g11 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f640780 - 0x8f6407c3
int32_t set_default_brightness_65(uint32_t a1, int32_t a2, int32_t a3) {
    int32_t result = a1; // 0x8f64079c
    if (a1 < 255) {
        // if_8f64078c_0_true
        result = 255;
        // branch -> after_if_8f64078c_0
    }
    // after_if_8f64078c_0
    g6 = result;
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// long int atol(const char * nptr);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 17
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:46:56
