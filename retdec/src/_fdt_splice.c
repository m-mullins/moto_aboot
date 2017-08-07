//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t _fdt_add_property(int32_t a1, int32_t a2, char * a3, int32_t a4);
int32_t _fdt_blocks_misordered(int32_t a1, int32_t a2, int32_t a3);
int32_t _fdt_splice(void);
int32_t _fdt_splice_struct(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t _nextprop(int32_t a1, int32_t result2);
int32_t copyrect24(int32_t * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t fdt32_to_cpu_100(int32_t a1, int32_t a2, int32_t a3);
int32_t fdt32_to_cpu_101(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t fdt32_to_cpu_99(int32_t a1, int32_t a2, int32_t a3);
int32_t fdt64_to_cpu(int32_t a1, int32_t a2);
int32_t fdt_check_header(int32_t * a1, int32_t a2, int32_t a3);
int32_t fdt_string(int32_t a1, int32_t a2);
int32_t fillrect24(int32_t * a1, int32_t a2, int32_t a3, uint32_t a4, int32_t a5);
void function_8f649c50(char * a1, int32_t a2);
void function_8f64a450(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t gfx_fillrect(int32_t a1, uint32_t a2, uint32_t a3, int32_t a4, int32_t a5);
int32_t heap_alloc(uint32_t a1, uint32_t a2);
int32_t heap_insert_free_chunk(int32_t * a1, int32_t a2);
int32_t hexval(int32_t a1);
int32_t longlong_to_string_constprop_0(int32_t a1, int32_t a2, int64_t a3, int32_t a4);
int32_t putpixel16(int32_t * a1, int32_t a2, int32_t a3, uint32_t a4);
int32_t putpixel24(int32_t * a1, uint32_t a2, uint32_t a3);

// --------------------- Global Variables ---------------------

int32_t g5 = 0; // LR
int32_t g6 = 0; // R0
int32_t g7 = 0; // R1
int32_t g8 = 0; // R10
int32_t g9 = 0; // R11
int32_t g10 = 0; // R2
int32_t g11 = 0; // R3
int32_t g12 = 0; // R4
int32_t g13 = 0; // R5
int32_t g14 = 0; // R6
int32_t g15 = 0; // R7
int32_t g16 = 0; // R8
int32_t g17 = 0; // R9
int32_t g1 = 1; // 0x8f6ac0f0
int32_t g2 = 0; // 0x8f6e0bf0
int32_t g3 = 0; // 0x8f6e0bf4
int32_t g4 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f64c874 - 0x8f64c923
int32_t _fdt_splice(void) {
    int32_t v1 = g6; // 0x8f64c874
    int32_t v2 = g11; // R8
    int32_t v3 = *(int32_t *)(v1 + 12); // 0x8f64c884
    int32_t v4 = g7; // 0x8f64c888
    int32_t v5 = g10; // 0x8f64c88c
    int32_t v6 = g4;
    int32_t v7 = fdt32_to_cpu_101(v3, v4, v5, v6, v1); // 0x8f64c898
    int32_t v8 = *(int32_t *)(v1 + 32); // 0x8f64c8a0
    int32_t v9 = v4 + v5; // 0x8f64c8a8
    int32_t v10 = v1 + fdt32_to_cpu_101(v8, g7, g10, v6, v1) + v7; // 0x8f64c8b0
    if (v9 > v10) {
        // 0x8f64c8f8
        // branch -> 0x8f64c904
        // 0x8f64c904
        if (v6 != g4) {
            // 0x8f64c914
            __stack_chk_fail();
            // branch -> 0x8f64c918
        }
        // 0x8f64c918
        return -4;
    }
    int32_t v11 = *(int32_t *)(v1 + 4); // 0x8f64c8c0
    int32_t v12; // R0
    int32_t v13; // 0x8f64c91c_22
    if (v10 + v2 - v5 > v1 + fdt32_to_cpu_101(v11, g7, g10, v6, v1)) {
        // 0x8f64c900
        v12 = -3;
        v13 = -3;
        // branch -> 0x8f64c904
    } else {
        // 0x8f64c8dc
        memcpy((char *)(v2 + v4), (char *)v9, v10 - v4 - v5);
        v12 = 0;
        v13 = 0;
        // branch -> 0x8f64c904
    }
    // 0x8f64c904
    int32_t result; // 0x8f64c91c_2
    if (v6 != g4) {
        // 0x8f64c914
        __stack_chk_fail();
        result = v12;
        // branch -> 0x8f64c918
    } else {
        result = v13;
    }
    // 0x8f64c918
    return result;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// int isdigit(int c);
// int isxdigit(int c);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 22
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:49:11