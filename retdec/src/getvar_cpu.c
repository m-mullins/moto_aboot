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

int32_t getvar_channelid(char * a1, int32_t a2, int32_t a3);
int32_t getvar_cid(char * str, int32_t a2, int32_t a3);
int32_t getvar_confess_all(void);
int32_t getvar_cpu(int32_t a1, int32_t a2, int32_t a3);
int32_t getvar_hwrev(char * str, int32_t a2, int32_t a3);
int32_t getvar_iswarrantyvoid(int32_t a1, int32_t a2, int32_t a3);
char * getvar_partition_size(char * str, int32_t a2, int32_t a3, int32_t a4);
char * getvar_partition_type(char * str, int32_t a2, int32_t a3, int32_t a4);
int32_t getvar_product(int32_t a1, int32_t a2, int32_t a3);
int32_t getvar_radio(char * str, int32_t a2, int32_t a3);
int32_t getvar_secure_state(int32_t a1, int32_t a2, int32_t a3);
int32_t getvar_serialno(int32_t a1);
char * getvar_uid(int32_t a1);
int32_t getvar_unlocked(int32_t a1, int32_t a2, int32_t a3);
int32_t getvar_version_bootloader(int32_t a1);
int32_t type_atoi_10(char * str, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

bool g7 = false; // LR
int32_t g8 = 0; // R1
int32_t g9 = 0; // R2
int32_t g10 = 0; // R4
int32_t g11 = 0; // R5
int32_t g12 = 0; // R6
int32_t g13 = 0; // R7
int32_t g14 = 0; // R8
int32_t g1 = -0x16d2bfed; // 0x8f62bdfc
int32_t g2 = 0x6e61000a; // 0x8f6826e7
char * g3[8] = {
    "raw",
    "ext2",
    "ext3",
    "ext4",
    "vfat",
    "yaffs2",
    "jfss2",
    "iso"
}; // 0x8f6889a8
char * g5; // 0x8f6a4e20
int32_t g6 = 0; // 0x8f7112f4
char * g4[2] = {
    "version",
    (char *)&g1
}; // 0x8f688c8c

// ------------------------ Functions -------------------------

// Address range: 0x8f62c450 - 0x8f62c49b
int32_t getvar_cpu(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g10; // 0x8f62c450
    int32_t v2 = g11; // 0x8f62c450
    g11 = a1;
    g10 = &g6;
    int32_t v3 = g6;
    strlcpy(a1, target_cpu(a1, a2, a3, v3, a1), 64, v3, a1);
    if (v3 != g6) {
        // 0x8f62c48c
        __stack_chk_fail();
        // branch -> 0x8f62c490
    }
    // 0x8f62c490
    g10 = v1;
    g11 = v2;
    return 1;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int sprintf(char * restrict s, const char * restrict format, ...);
// char * strchr(char * s, int c);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 16
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:40:49