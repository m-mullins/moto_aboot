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

int32_t __utag_defined(int32_t a1, int32_t a2);
char * __utag_typeof(void);
int32_t handle_fboot_command_boot(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t handle_fboot_command_continue(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t heap_alloc(uint32_t a1, uint32_t a2);
int32_t heap_free(void);
int32_t is_piv_magic(char * str, int32_t a2);
char * is_secure_boot_enable(int32_t a1);
int32_t mcs_clear_rng_ctx(int32_t a1, int32_t a2);
int32_t mcs_habp_rsa_core(int32_t a1, int32_t a2, int32_t a3, int32_t a4, uint32_t a5, int32_t a6, int32_t * a7);
int32_t mcs_habp_rsa_crt_large(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_rsa_do_rsa(char * a1, int32_t a2, int32_t a3, uint32_t a4);
int32_t mdp_dsi_cmd_config(int32_t a1, int32_t a2);
int32_t mdp_dsi_video_on(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mdss_qos_remapper_setup(int32_t result, int32_t a2, int32_t a3);
char * mdss_vbif_qos_remapper_setup(int32_t a1);
int32_t mipi_dsi_cmd_bta_sw_trigger(int32_t a1, int32_t a2, int32_t a3);
int32_t mipi_dsi_cmds_rx(int32_t * a1, int32_t result);
int32_t misc_check_mode(char * a1, int32_t a2);
int32_t pm8x41_chgr_led_enable(int32_t a1, int32_t a2);
int32_t rtc_get(void);
char * scm_io_write(int32_t a1, int32_t a2, int32_t a3);
int32_t set_accessory_type(int32_t a1);
int32_t thread_init(int32_t a1, int32_t a2);
int32_t thread_init_early(void);
int32_t thread_sleep(int32_t a1);
int32_t type_atoi_98(char * str, int32_t a2, int32_t a3);
int32_t XXH32(char * a1, int32_t a2, int32_t a3);
int32_t XXH32_resetState(int32_t * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g25 = 0; // R0
int32_t g26 = 0; // R1
int32_t g27 = 0; // R11
int32_t g28 = 0; // R2
int32_t g29 = 0; // R4
int32_t g30 = 0; // R5
int32_t g31 = 0; // R6
int32_t g32 = 0; // R7
int32_t g33 = 0; // R8
int32_t g34 = 0; // R9
int32_t g1 = -0x16d2bfc9; // 0x8f61b264
char * g2; // 0x8f622364
int32_t g3 = -0x16d2bfc9; // 0x8f6387c0
int32_t g4 = -0x16d2bc09; // 0x8f638ab0
char * g5 = "\x01"; // 0x8f6a3f48
char * g6 = "\x4d\x4f\x54\x4f\x13\x57\x9b"; // 0x8f6a42ac
int32_t g7 = 1; // 0x8f6ac0f0
int32_t g8 = 10; // 0x8f6afe00
char (*g9)[14] = "boot-recovery"; // 0x8f6aff94
int32_t g10 = 0; // 0x8f6c0064
int32_t g11 = 0; // 0x8f6c0164
int32_t g12 = 0; // 0x8f6c0168
char * g13; // 0x8f6c016c
int32_t g14 = 0; // 0x8f6c0170
int32_t g15 = 0; // 0x8f6c0174
int32_t g16 = 0; // 0x8f6c0180
int32_t g17 = 0; // 0x8f6c0184
int32_t g18 = 0; // 0x8f6c0188
int32_t g19 = 0; // 0x8f6c01b0
int32_t g20 = 0; // 0x8f6e0bf0
int32_t g21 = 0; // 0x8f6e0bf4
char * g22; // 0x8f6ed840
int32_t g23 = 0; // 0x8f7112f4
int32_t g24 = 0; // 0x8f7114ac

// ------------------------ Functions -------------------------

// Address range: 0x8f64987c - 0x8f649a4f
int32_t heap_alloc(uint32_t a1, uint32_t a2) {
    int32_t v1 = a2 - 1; // 0x8f649880
    int32_t result = a2; // R4
    int32_t v2 = g23;
    if (v1 != 0) {
        // 0x8f649a0c
        // branch -> 0x8f649a18
        // 0x8f649a18
        if (v2 != g23) {
            // 0x8f649a28
            __stack_chk_fail();
            // branch -> 0x8f649a2c
        }
        // 0x8f649a2c
        return 0;
    }
    int32_t v3 = a1 > 0xfffffff3 ? 12 : a1 + 15 & -4; // R5
    if (a2 == 0) {
        int32_t v4 = g7;
        int32_t v5 = &g7; // R7
        g7 = v4 + 1;
        if (v4 == 0) {
            // 0x8f649904
            function_8f619448(a1);
            // branch -> 0x8f649908
        }
        int32_t * v6 = &g21;
        // branch -> 0x8f649914
        int32_t * v7; // 0x8f6499e4_0
        int32_t v8; // R12
        int32_t v9; // R3
        int32_t v10;
        int32_t v11; // 0x8f6499f4
        while (true) {
            // 0x8f649914
            v10 = *v6;
            v9 = v10;
            if (v10 == (int32_t)&g20) {
                // 0x8f6499ec
                result = 0;
                // branch -> 0x8f6499f0
            } else {
                uint32_t v12 = *(int32_t *)(v10 + 8); // 0x8f649920
                v8 = v12;
                v7 = (int32_t *)(v10 + 4);
                if (v12 >= v3) {
                    // break -> 0x8f64992c
                    break;
                }
                v6 = v7;
                // continue -> 0x8f649914
                continue;
            }
            // 0x8f6499f0
            v11 = g7 - 1;
            *(int32_t *)v5 = v11;
            if (v11 == 0) {
                // 0x8f649a04
                function_8f619438();
                // branch -> 0x8f649a14
            }
            // 0x8f649a14
            // branch -> 0x8f649a18
        }
        int32_t v13 = *v7; // 0x8f64992c
        int32_t v14 = v13; // R2
        *(int32_t *)v13 = *(int32_t *)v10;
        int32_t v15; // R1
        if (v13 == (int32_t)&g20) {
            // if_8f649944_0_true.critedge
            v15 = 0;
            // branch -> after_if_8f649944_0
        } else {
            v15 = v14;
            // branch -> after_if_8f649944_0
        }
        // after_if_8f649944_0
        *(int32_t *)(*(int32_t *)v9 + 4) = v14;
        *(int32_t *)(v9 + 4) = 0;
        *(int32_t *)v9 = 0;
        int32_t v16;
        int32_t v17; // 0x8f6499b0
        int32_t v18; // 0x8f6499b4
        int32_t v19; // 0x8f6499b4
        if (v8 > v3 + 12) {
            int32_t v20 = v9 + v3; // 0x8f649964
            v14 = v20;
            *(int32_t *)(v20 + 8) = v8 - v3;
            *(int32_t *)(v9 + 8) = v3;
            if (v15 == 0) {
                // 0x8f649998
                *(int32_t *)(v3 + v9) = g20;
                *(int32_t *)(v14 + 4) = (int32_t)&g20;
                *(int32_t *)(g20 + 4) = v14;
                g20 = v14;
                // branch -> 0x8f6499b0
            } else {
                int32_t v21 = *(int32_t *)v15; // 0x8f64997c
                *(int32_t *)(v3 + v9) = v21;
                *(int32_t *)(v14 + 4) = v15;
                *(int32_t *)(*(int32_t *)v15 + 4) = v14;
                *(int32_t *)v15 = v14;
                // branch -> 0x8f6499b0
            }
            // 0x8f6499b0
            v17 = result;
            v18 = v9;
            v19 = v18 + 12;
            v16 = v19;
            if (v17 != 0) {
                // if_8f6499c8_0_true
                v16 = v19 + v17 - 1 & -v17;
                // branch -> after_if_8f6499c8_0
            }
            // after_if_8f6499c8_0
            result = v16;
            *(int32_t *)(v16 - 8) = v18;
            *(int32_t *)(result - 4) = *(int32_t *)(v18 + 8);
            *(int32_t *)(result - 12) = 0x48454150;
            // branch -> 0x8f6499f0
            // 0x8f6499f0
            v11 = g7 - 1;
            *(int32_t *)v5 = v11;
            if (v11 == 0) {
                // 0x8f649a04
                function_8f619438();
                // branch -> 0x8f649a14
            }
            // 0x8f649a14
            // branch -> 0x8f649a18
            // 0x8f649a18
            if (v2 != g23) {
                // 0x8f649a28
                __stack_chk_fail();
                // branch -> 0x8f649a2c
            }
            // 0x8f649a2c
            return result;
        }
        // 0x8f6499b0
        v17 = result;
        v18 = v9;
        v19 = v18 + 12;
        v16 = v19;
        if (v17 != 0) {
            // if_8f6499c8_0_true
            v16 = v19 + v17 - 1 & -v17;
            // branch -> after_if_8f6499c8_0
        }
        // after_if_8f6499c8_0
        result = v16;
        *(int32_t *)(v16 - 8) = v18;
        *(int32_t *)(result - 4) = *(int32_t *)(v18 + 8);
        *(int32_t *)(result - 12) = 0x48454150;
        // branch -> 0x8f6499f0
        // 0x8f6499f0
        v11 = g7 - 1;
        *(int32_t *)v5 = v11;
        if (v11 == 0) {
            // 0x8f649a04
            function_8f619438();
            // branch -> 0x8f649a14
        }
        // branch -> 0x8f649a18
    } else {
        // 0x8f6498c4
        if (a2 < 16) {
            // if_8f6498c8_0_true
            // branch -> after_if_8f6498c8_0
        }
        // after_if_8f6498c8_0
        print_log(-1, (int32_t)"invalid input alignment\n", g28, v2, a1, v2, g28, g29, g30, g31, g32, g33, g34);
        result = v1 & a2;
        // branch -> 0x8f649a18
    }
    // 0x8f649a18
    if (v2 != g23) {
        // 0x8f649a28
        __stack_chk_fail();
        // branch -> 0x8f649a2c
    }
    // 0x8f649a2c
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strrchr(char * s, int c);

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_bswap_i32(int32_t a1);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 29
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:29:06
