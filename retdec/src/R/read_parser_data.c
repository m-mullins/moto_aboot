//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t free_context(int32_t a1, int32_t a2, int32_t a3);
void function_8f660c54(int32_t * a1, char * a2, int32_t a3, int32_t * a4);
int32_t lbackref(int32_t * a1, char * a2, int32_t a3, int32_t a4, uint32_t a5);
int32_t ldissect(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t lslow(int32_t * a1, char * a2, int32_t a3, int32_t a4);
int32_t mcs_ctx_init_rsa_sig(char a1, char a2, char a3, int32_t a4, uint32_t a5);
int32_t mcs_free_name(char * a1, int32_t a2);
int32_t mcs_rsa_add_cipher_pad_isra_1(int32_t a1, char * a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, uint32_t a7, int32_t a8);
int32_t mcs_rsa_do_rsa(char * a1, int32_t a2, int32_t a3, uint32_t a4);
int32_t mcs_rsa_mgf_isra_0(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_rsa_remove_cipher_pad_isra_3(char * a1, int32_t * a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t mcs_verify_cert_chain(int32_t a1, int16_t * a2);
int32_t mcs_X509Certificate_decodeExtension(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_X509Certificate_decodeName(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t read_parser_data(int32_t a1);
int32_t read_verify_data(int32_t a1);
int32_t sbackref(int32_t * a1, char * a2, int32_t a3, int32_t a4, uint32_t a5);
int32_t sdissect(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t sslow(int32_t * a1, char * a2, int32_t a3, int32_t a4);

// --------------------- Global Variables ---------------------

int32_t g6 = 0; // LR
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
int32_t g1 = -0x79b779d6; // 0x8f6a69c9
int32_t g2 = 0x2b0b0455; // 0x8f6a69d2
int32_t g3 = 0x20494b50; // 0x8f6a69dd
int32_t g4 = 0x67251d55; // 0x8f6a69e7
int32_t g5 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f66407c - 0x8f66418b
int32_t read_parser_data(int32_t a1) {
    int32_t v1 = g12; // 0x8f66407c
    g12 = g7;
    int32_t v2 = g5;
    int32_t v3;
    int32_t v4 = &v3; // 0x8f6640a8_0
    int32_t v5 = v4; // R3
    int32_t v6;
    int32_t v7;
    int32_t v8 = mcs_X509Certificate_getSubjectPublicKey(a1, (int32_t)&v6, (int32_t)&v7, v4); // 0x8f6640ac
    int32_t v9; // R0
    int32_t result; // 0x8f664184_2
    int32_t v10; // 0x8f664184_24
    if (v8 == 0) {
        int32_t v11 = *(int32_t *)(g12 + 4); // 0x8f6640bc
        if (v11 != 0) {
            // 0x8f6640c8
            free((char *)v11);
            *(int32_t *)(g12 + 4) = v8;
            // branch -> 0x8f6640d0
        }
        int32_t v12 = *(int32_t *)(g12 + 12); // 0x8f6640d0
        if (v12 != 0) {
            // 0x8f6640dc
            free((char *)v12);
            v5 = 0;
            *(int32_t *)(g12 + 12) = 0;
            // branch -> 0x8f6640e8
        }
        // 0x8f6640e8
        *(int32_t *)(g12 + 4) = (int32_t)malloc(v7 % 0x10000);
        uint32_t v13;
        uint32_t size = v13 % 0x10000; // 0x8f6640f4
        int32_t mem = (int32_t)malloc(size); // 0x8f6640f8_3
        *(int32_t *)(g12 + 12) = mem;
        int32_t v14 = g12; // 0x8f664104
        int32_t v15 = *(int32_t *)(v14 + 4); // 0x8f664104
        int32_t v16; // 0x8f664120
        if (v15 != 0) {
            // 0x8f664110
            if (mem == 0) {
                // 0x8f664118
                free((char *)v15);
                *(int32_t *)(g12 + 4) = mem;
                // branch -> 0x8f664120
                // 0x8f664120
                v16 = *(int32_t *)(g12 + 12);
                if (v16 != 0) {
                    // 0x8f66412c
                    free((char *)v16);
                    *(int32_t *)(g12 + 12) = 0;
                    // branch -> 0x8f664168
                }
                // 0x8f664168
                v9 = 11;
                v10 = 11;
                // branch -> 0x8f66416c
            } else {
                uint32_t v17 = v7 % 0x10000; // 0x8f66413c
                *(int32_t *)(v14 + 8) = v17;
                mcs_memcpy(v15, v6, v17, v5);
                int32_t v18 = g12; // 0x8f664150
                *(int32_t *)(v18 + 16) = size;
                mcs_memcpy(*(int32_t *)(v18 + 12), v3, size, v5);
                v9 = 0;
                v10 = 0;
                // branch -> 0x8f66416c
            }
            // 0x8f66416c
            g10 = v2;
            if (v2 != g5) {
                // 0x8f66417c
                __stack_chk_fail();
                result = v9;
                // branch -> 0x8f664180
            } else {
                result = v10;
            }
            // 0x8f664180
            g12 = v1;
            return result;
        }
        // 0x8f664120
        v16 = *(int32_t *)(v14 + 12);
        if (v16 != 0) {
            // 0x8f66412c
            free((char *)v16);
            *(int32_t *)(g12 + 12) = 0;
            // branch -> 0x8f664168
        }
        // 0x8f664168
        v9 = 11;
        v10 = 11;
        // branch -> 0x8f66416c
    } else {
        // if_8f6640b4_0_true
        v9 = 1;
        v10 = 1;
        // branch -> 0x8f66416c
    }
    // 0x8f66416c
    g10 = v2;
    if (v2 != g5) {
        // 0x8f66417c
        __stack_chk_fail();
        result = v9;
        // branch -> 0x8f664180
    } else {
        result = v10;
    }
    // 0x8f664180
    g12 = v1;
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// int isalnum(int c);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 19
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:51:38
