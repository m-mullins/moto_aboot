//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ---------------- Integer Types Definitions -----------------

typedef int8_t int4_t;

// ------------------- Function Prototypes --------------------

int32_t backup_needed(int32_t a1, int32_t a2, int32_t a3);
int32_t check_security_version(int32_t a1, uint32_t a2, uint32_t a3);
int32_t detect_current_secure_state(char * a1, int32_t a2);
int32_t get_block_size(int32_t a1, int32_t a2, int32_t a3);
int32_t get_current_secure_state(int32_t a1, int32_t a2);
int32_t get_hab_signature_offset(int32_t a1, int32_t a2);
int32_t get_hab_signature_size(int32_t a1, int32_t a2);
int32_t get_image_version(int32_t a1, int32_t a2, int32_t a3);
int32_t get_output_block_count(int32_t a1, int32_t a2, int32_t a3);
int32_t get_partition_version(int32_t a1);
int32_t get_unlock_data(int32_t * a1, int32_t a2);
int32_t hab_policy_init(void);
int32_t lock_phone(int32_t a1, int32_t a2);
int32_t locking_phone(int32_t a1, int32_t a2, int32_t a3);
int32_t move_to_verified(int32_t a1, int32_t a2, int32_t a3);
int32_t move_to_verified_validator(int32_t a1, int32_t a2, int32_t a3);
int32_t reset_current_secure_state(int32_t a1, int32_t result, int32_t a3);
int32_t state_transition_validate(int32_t a1);
int32_t transit_to_state(int32_t a1, int32_t a2, int32_t (*a3)(int32_t), int32_t a4);
int32_t validate_hab_sparse_partition(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t verify_hab_image(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

// --------------------- Global Variables ---------------------

int32_t g17 = 0; // LR
int32_t g18 = 0; // R0
int32_t g19 = 0; // R1
int32_t g20 = 0; // R10
int32_t g21 = 0; // R2
int32_t g22 = 0; // R3
int32_t g23 = 0; // R4
int32_t g24 = 0; // R5
int32_t g25 = 0; // R6
int32_t g26 = 0; // R7
int32_t g27 = 0; // R8
int32_t g28 = 0; // R9
int32_t g1 = 0; // 0x8f6b000c
int32_t g2 = 0; // 0x8f6b0048
int32_t g3 = 0; // 0x8f6b004c
int32_t g4 = 0; // 0x8f6b0074
int32_t g5 = 0; // 0x8f6b0078
char * g6; // 0x8f710a25
int32_t g7 = 0; // 0x8f710a26
char g8 = 0; // 0x8f710c22
char g9 = 0; // 0x8f710c23
char g10 = 0; // 0x8f710c24
char g11 = 0; // 0x8f710c25
int32_t g12 = 0; // 0x8f710c30
int32_t g13 = 0; // 0x8f710c34
int32_t g14 = 0; // 0x8f7112f4
int32_t g15 = 0; // 0x8f71302c
int32_t g16 = 0; // 0x8f713044

// ------------------------ Functions -------------------------

// Address range: 0x8f6754d4 - 0x8f67557b
int32_t get_hab_signature_offset(int32_t a1, int32_t a2) {
    int32_t v1 = g14;
    unsigned char v2 = *(char *)(a2 + 49); // 0x8f6754e8
    int32_t v3 = v2 % 16; // 0x8f6754ec
    int32_t v4;
    int32_t v5;
    int32_t v6; // 0x8f675554
    char v7; // 0x8f675510
    char v8; // 0x8f675514
    char v9; // 0x8f675518
    char v10; // 0x8f675520
    char v11; // 0x8f675528
    char v12; // 0x8f675530
    char v13; // 0x8f675538
    char v14; // 0x8f675540
    switch ((int4_t)v2) {
        default: {
            // 0x8f6754fc
            int32_t v15;
            print_log(0, (int32_t)"Not supported sign type(%d) to get signature\n", v3, (int32_t)&g14, a1, v1, g23, g17, v15, 0, 0, 0, 0);
            v5 = g14;
            v4 = -1;
            // branch -> 0x8f675558
            break;
        }
        case 4: {
            // 0x8f675510
            v7 = *(char *)(a2 + 41);
            v8 = *(char *)(a2 + 40);
            v9 = *(char *)(a2 + 33);
            v10 = *(char *)(a2 + 42);
            v11 = *(char *)(a2 + 43);
            v12 = *(char *)(a2 + 32);
            v13 = *(char *)(a2 + 34);
            v14 = *(char *)(a2 + 35);
            v6 = 512 * ((0x10000 * (int32_t)v10 | (int32_t)v8 | 256 * (int32_t)v7 | 0x1000000 * (int32_t)v11) - (0x10000 * (int32_t)v13 | (int32_t)v12 | 256 * (int32_t)v9 | 0x1000000 * (int32_t)v14) + 0x7ffff9);
            v5 = v1;
            v4 = v6;
            // branch -> 0x8f675558
            break;
        }
        case 1: {
            // 0x8f675510
            v7 = *(char *)(a2 + 41);
            v8 = *(char *)(a2 + 40);
            v9 = *(char *)(a2 + 33);
            v10 = *(char *)(a2 + 42);
            v11 = *(char *)(a2 + 43);
            v12 = *(char *)(a2 + 32);
            v13 = *(char *)(a2 + 34);
            v14 = *(char *)(a2 + 35);
            v6 = 512 * ((0x10000 * (int32_t)v10 | (int32_t)v8 | 256 * (int32_t)v7 | 0x1000000 * (int32_t)v11) - (0x10000 * (int32_t)v13 | (int32_t)v12 | 256 * (int32_t)v9 | 0x1000000 * (int32_t)v14) + 0x7ffff9);
            v5 = v1;
            v4 = v6;
            // branch -> 0x8f675558
            break;
        }
    }
    // 0x8f675558
    g18 = v4;
    int32_t result; // 0x8f675570_2
    if (v1 != v5) {
        // 0x8f675568
        __stack_chk_fail();
        result = g18;
        // branch -> 0x8f67556c
    } else {
        result = v4;
    }
    // 0x8f67556c
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 21
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:53:40
