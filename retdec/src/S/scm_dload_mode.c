//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

char * scm_call2_atomic(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t scm_dload_mode(int32_t a1);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // R1
int32_t g2 = 0; // R11

// ------------------------ Functions -------------------------

// Address range: 0x8f617890 - 0x8f6179ef
int32_t scm_dload_mode(int32_t a1) {
    int32_t v1 = g2; // 0x8f617890
    int32_t v2 = 0; // bp-4
    g2 = &v2;
    int32_t v3 = *(int32_t *)-0x708eed0c; // 0x8f6178a8
    int32_t v4;
    print_log(2, -0x7097f1e8, a1, 0, v1, 0, v4, 0, 0, 0, 0, 0, 0);
    int32_t result3; // 0x8f617980
    int32_t v5; // 0x8f61792c_5
    int32_t result4; // 0x8f6179a0_5
    char * v6; // 0x8f61792c
    int32_t result; // 0x8f61794c
    int32_t v7; // 0x8f617980
    char * v8; // 0x8f6179a0
    int32_t result2;
    int32_t v9; // 0x8f6179483
    switch (a1) {
        default: {
            // 0x8f617914
            // branch -> 0x8f61791c
        }
        case 0: {
            v9 = 16;
            // 0x8f61791c
            v6 = scm_call2_atomic(1, 16, v9, 0);
            v5 = (int32_t)v6;
            result3 = v5;
            if (v6 != NULL) {
                // 0x8f617940
                g1 = v9;
                result = scm_io_write(0x193d100, v9, v9, v5);
                if (result != 0) {
                    // 0x8f617964
                    print_log(-1, -0x7097f1d8, result, result, v1, v2, v4, 0, 0, 0, 0, 0, 0);
                    // branch -> 0x8f6179c8
                    // 0x8f6179c8
                    if (v3 != *(int32_t *)-0x708eed0c) {
                        // 0x8f6179e4
                        __stack_chk_fail();
                        // branch -> 0x8f6179e8
                    }
                    // 0x8f6179e8
                    return result;
                }
                result3 = 0;
            }
            // 0x8f617980
            v7 = is_secure_boot_enable(result3, g1);
            result2 = result3;
            if (v7 != 0) {
                // 0x8f617990
                v8 = scm_call2_atomic(1, 9, 1, 0);
                result4 = (int32_t)v8;
                if (v8 != NULL) {
                    // 0x8f6179b4
                    print_log(-1, -0x7097f1b4, 1, result4, v1, v2, v4, 0, 0, 0, 0, 0, 0);
                    result2 = result4;
                    // branch -> 0x8f6179c8
                } else {
                    result2 = result4;
                }
            }
            // 0x8f6179c8
            if (v3 != *(int32_t *)-0x708eed0c) {
                // 0x8f6179e4
                __stack_chk_fail();
                // branch -> 0x8f6179e8
            }
            // 0x8f6179e8
            return result2;
        }
        case 1: {
            // 0x8f6178f0
            v9 = 2;
            // branch -> 0x8f61791c
            break;
        }
        case 3: {
            // 0x8f617908
            v9 = 32;
            // branch -> 0x8f61791c
            break;
        }
    }
    // 0x8f61791c
    v6 = scm_call2_atomic(1, 16, v9, 0);
    v5 = (int32_t)v6;
    result3 = v5;
    if (v6 == NULL) {
        // 0x8f617980
        if (is_secure_boot_enable(result3, g1) == 0) {
            // 0x8f6179c8
            if (v3 != *(int32_t *)-0x708eed0c) {
                // 0x8f6179e4
                __stack_chk_fail();
                // branch -> 0x8f6179e8
            }
            // 0x8f6179e8
            return result3;
        }
        // 0x8f617990
        v8 = scm_call2_atomic(1, 9, 1, 0);
        result4 = (int32_t)v8;
        if (v8 != NULL) {
            // 0x8f6179b4
            print_log(-1, -0x7097f1b4, 1, result4, v1, v2, v4, 0, 0, 0, 0, 0, 0);
            // branch -> 0x8f6179c8
        }
        // 0x8f6179c8
        if (v3 != *(int32_t *)-0x708eed0c) {
            // 0x8f6179e4
            __stack_chk_fail();
            // branch -> 0x8f6179e8
        }
        // 0x8f6179e8
        return result4;
    }
    // 0x8f617940
    g1 = v9;
    result = scm_io_write(0x193d100, v9, v9, v5);
    if (result != 0) {
        // 0x8f617964
        print_log(-1, -0x7097f1d8, result, result, v1, v2, v4, 0, 0, 0, 0, 0, 0);
        // branch -> 0x8f6179c8
        // 0x8f6179c8
        if (v3 != *(int32_t *)-0x708eed0c) {
            // 0x8f6179e4
            __stack_chk_fail();
            // branch -> 0x8f6179e8
        }
        // 0x8f6179e8
        return result;
    }
    result3 = 0;
    // 0x8f617980
    v7 = is_secure_boot_enable(result3, g1);
    result2 = result3;
    if (v7 != 0) {
        // 0x8f617990
        v8 = scm_call2_atomic(1, 9, 1, 0);
        result4 = (int32_t)v8;
        if (v8 != NULL) {
            // 0x8f6179b4
            print_log(-1, -0x7097f1b4, 1, result4, v1, v2, v4, 0, 0, 0, 0, 0, 0);
            result2 = result4;
            // branch -> 0x8f6179c8
        } else {
            result2 = result4;
        }
    }
    // 0x8f6179c8
    if (v3 != *(int32_t *)-0x708eed0c) {
        // 0x8f6179e4
        __stack_chk_fail();
        // branch -> 0x8f6179e8
    }
    // 0x8f6179e8
    return result2;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memset(void * s, int c, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 07:42:32
