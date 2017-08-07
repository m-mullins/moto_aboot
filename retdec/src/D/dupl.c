//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <regex.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------------ Structures ------------------------

struct re_pattern_buffer {
    char * e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    char * e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    int32_t e10;
    int32_t e11;
    int32_t e12;
    int32_t e13;
};

// ------------------- Function Prototypes --------------------

int32_t doemit(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t dofwd(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t doinsert(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t dupl(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t enlarge(int32_t a1, int32_t a2);
void function_8f65db8c(struct re_pattern_buffer * a1, char * a2, int32_t a3);
int32_t lstep(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t nonnewline(int32_t * a1);
int32_t ordinary(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t othercase(int32_t c, int32_t a2, int32_t a3, int32_t a4);
int32_t p_b_symbol(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t p_bracket(int32_t * a1);
int32_t p_bre(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t p_ere(int32_t * a1, int32_t a2, uint32_t a3);
int32_t repeat(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t sslow(int32_t * a1, char * a2, int32_t a3, int32_t a4);
int32_t sstep(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

// --------------------- Global Variables ---------------------

int32_t g7 = 0; // LR
int32_t g8 = 0; // R1
int32_t g9 = 0; // R10
int32_t g10 = 0; // R11
int32_t g11 = 0; // R12
int32_t g12 = 0; // R2
int32_t g13 = 0; // R3
int32_t g14 = 0; // R4
int32_t g15 = 0; // R5
int32_t g16 = 0; // R6
int32_t g17 = 0; // R7
int32_t g18 = 0; // R8
int32_t g19 = 0; // R9
bool g1 = false; // flagc
int32_t g2 = 0x65440030; // 0x8f69c66f
int32_t g3 = 0x746e6300; // 0x8f6a4e20
int32_t g4 = 0xa090807; // 0x8f6a4e27
char * g6; // 0x8f7112f4
char * g5[33] = {
    "alpha",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",
    (char *)&g3,
    "blank",
    " \t",
    (char *)&g3,
    "cntrl",
    (char *)&g4,
    (char *)&g3,
    "digit",
    "0123456789",
    (char *)&g3,
    "graph",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",
    (char *)&g3,
    "lower",
    "abcdefghijklmnopqrstuvwxyz",
    (char *)&g3,
    "print",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",
    (char *)&g3,
    "punct",
    "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~",
    (char *)&g3,
    "space",
    "\t\n\v\f\r ",
    (char *)&g3,
    "upper",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
    (char *)&g3,
    "xdigit",
    "0123456789ABCDEFabcdef",
    (char *)&g3
}; // 0x8f6a4f6c

// ------------------------ Functions -------------------------

// Address range: 0x8f65b7d8 - 0x8f65b8bf
int32_t dupl(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = g14; // 0x8f65b7d8
    int32_t v2 = g16; // 0x8f65b7d8
    int32_t v3 = g17; // 0x8f65b7d8
    g14 = a1;
    g17 = g7;
    g16 = a2;
    g15 = a3 - a2;
    char * v4 = g6;
    int32_t v5 = a1; // 0x8f65b824
    int32_t v6 = a2; // 0x8f65b820
    if (a1 == 0) {
        // 0x8f65b804
        _panic(g7, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/regex/regcomp.c", (int32_t)"p != ((void *)0)" & -0x10000 | 1645, (int32_t)"p != ((void *)0)", a2, a3);
        v5 = g14;
        v6 = g16;
        // branch -> 0x8f65b820
    }
    int32_t result = *(int32_t *)(v5 + 20); // 0x8f65b824
    if (a3 >= v6) {
        // 0x8f65b82c
        _panic(g17, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/regex/regcomp.c", (int32_t)"finish >= start" & -0x10000 | 1649, (int32_t)"finish >= start", a2, a3);
        // branch -> 0x8f65b848
    }
    // 0x8f65b848
    if (g15 == 0) {
        // 0x8f65b88c
        if (v4 != g6) {
            // 0x8f65b8a0
            __stack_chk_fail();
            // branch -> 0x8f65b8a4
        }
        // 0x8f65b8a4
        g14 = v1;
        g16 = v2;
        g17 = v3;
        return result;
    }
    int32_t v7 = g14; // 0x8f65b850
    if (enlarge(v7, *(int32_t *)(v7 + 16) + g15) != 0) {
        int32_t v8 = *(int32_t *)(g14 + 20); // 0x8f65b868
        int32_t v9 = *(int32_t *)(g14 + 12); // 0x8f65b870
        memcpy((char *)(v9 + 4 * v8), (char *)(4 * g16 + v9), 4 * g15);
        int32_t * v10 = (int32_t *)(g14 + 20); // 0x8f65b880_0
        *v10 = g15 + *v10;
        // branch -> 0x8f65b88c
    }
    // 0x8f65b88c
    if (v4 != g6) {
        // 0x8f65b8a0
        __stack_chk_fail();
        // branch -> 0x8f65b8a4
    }
    // 0x8f65b8a4
    g14 = v1;
    g16 = v2;
    g17 = v3;
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// int isalnum(int c);
// int isalpha(int c);
// int isdigit(int c);
// int islower(int c);
// int isupper(int c);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// void * realloc(void * ptr, size_t size);
// void regfree(regex_t * preg);
// char * strcpy(char * restrict dest, const char * restrict src);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// int tolower(int c);
// int toupper(int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 17
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:51:08