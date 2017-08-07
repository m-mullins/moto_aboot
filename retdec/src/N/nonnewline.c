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

// Address range: 0x8f65c74c - 0x8f65c82b
int32_t nonnewline(int32_t * a1) {
    // 0x8f65c74c
    int32_t v1;
    int32_t v2 = v1; // bp-40
    int32_t v3 = (int32_t)a1;
    int32_t v4 = g14; // 0x8f65c750
    int32_t v5 = g15; // 0x8f65c750
    int32_t v6 = g16; // 0x8f65c750
    int32_t v7 = g17; // 0x8f65c750
    int32_t v8 = g18; // 0x8f65c750
    int32_t v9 = g19; // 0x8f65c750
    g14 = v3;
    int32_t v10 = g7; // 0x8f65c760
    g15 = v10;
    g17 = (int32_t)&g6;
    if (a1 == NULL) {
        // 0x8f65c770
        g8 = (int32_t)"ASSERT FAILED at (%s:%d): %s\n";
        _panic(v10, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/regex/regcomp.c", 1104, (int32_t)"p != ((void *)0)", 0, v1);
        v3 = g14;
        // branch -> 0x8f65c78c
    }
    int32_t * v11 = (int32_t *)v3; // 0x8f65c78c_0
    g19 = *v11;
    g18 = *(int32_t *)(v3 + 4);
    *v11 = (int32_t)&v2;
    int32_t v12;
    int32_t v13 = &v12; // 0x8f65c7a0_0
    g16 = v13;
    *(int32_t *)(g14 + 4) = v13;
    v2 = 94;
    v12 = 0;
    int32_t result = p_bracket(v11); // R0
    if (*(int32_t *)g14 != g16) {
        // 0x8f65c7d8
        result = _panic(g15, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/regex/regcomp.c", (int32_t)"p->next == bracket+3" & -0x10000 | 1116, (int32_t)"p->next == bracket+3", 0, v2);
        // branch -> 0x8f65c7f4
    }
    char * v14 = g6;
    g13 = (int32_t)v14;
    *(int32_t *)g14 = g19;
    *(int32_t *)(g14 + 4) = g18;
    if (g6 != v14) {
        // 0x8f65c80c
        __stack_chk_fail();
        // branch -> 0x8f65c810
    }
    // 0x8f65c810
    g14 = v4;
    g15 = v5;
    g16 = v6;
    g17 = v7;
    g18 = v8;
    g19 = v9;
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