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

int32_t __aeabi_unwind_cpp_pr0(int32_t a1, int32_t a2, int32_t a3);
int32_t backlight_turn_off(int32_t a1, int32_t a2, int32_t a3);
int32_t clock_lib2_branch_clk_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t cxo_clk_disable(int32_t a1, int32_t a2, int32_t a3);
int32_t display_turn_on(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t fastboot_init(int32_t a1, int32_t a2);
void function_8f64a048(void);
void function_8f64a088(int32_t a1, int32_t a2, int32_t a3);
void function_8f64ac04(void);
void function_8f64afa0(void);
void function_8f64b000(char * a1, uint32_t a2, int32_t a3);
void function_8f64b470(void);
void function_8f64b4dc(int32_t a1, int32_t a2, int32_t a3);
int32_t get_security_code(void);
int32_t handle_fboot_command_reboot_bl(int32_t a1, int32_t a2);
int32_t is_factory_product(int32_t a1, int32_t a2);
int32_t mcs_habp_rsa_large_window(int32_t a1);
int32_t mcs_habp_rsa_med_window(int32_t a1);
int32_t mcs_X509Certificate_finalize(int32_t a1, int32_t a2);
int32_t mcs_X509Certificate_getSignature(int32_t a1, int32_t * a2);
int32_t mcs_X509Certificate_getSignedData(int32_t a1, int32_t * a2);
int32_t mipi_init(int32_t a1, int32_t a2);
int32_t mipi_uninit(int32_t a1);
int32_t mutex_acquire(int32_t a1, int32_t a2);
int32_t mutex_init(int32_t * a1, int32_t a2, int32_t a3);
int32_t platform_init_mmu_mappings(void);
int32_t platform_use_identity_mmu_mappings(int32_t a1);
int32_t smb1359_config_for_fact_cbl(void);
int32_t smb1359_drop_usbin_rate(void);

// --------------------- Global Variables ---------------------

int32_t g15 = 0; // LR
int32_t g16 = 0; // R0
int32_t g17 = 0; // R1
int32_t g18 = 0; // R2
int32_t g19 = 0; // R3
int32_t g20 = 0; // R4
int32_t g21 = 0; // R5
int32_t g22 = 0; // R6
char * g1; // 0x8f610c40
int32_t g2 = -0x1a60cd88; // 0x8f621660
int32_t g3 = 8; // 0x8f67c624
int32_t g4 = 1; // 0x8f6ac0f0
char * g5; // 0x8f6ac1b8
int32_t g6 = 2; // 0x8f6afe0c
int32_t g7 = 2; // 0x8f6afe14
int32_t g8 = 0; // 0x8f6c0398
int32_t g9 = 0; // 0x8f6c03d8
int32_t g10 = 0; // 0x8f6e0c3c
int32_t g11 = 0; // 0x8f7112f4
int32_t g12 = 0; // 0x8f7114ac
char * g13; // 0x8f7114fc
int32_t g14 = 0; // 0x8f711500

// ------------------------ Functions -------------------------

// Address range: 0x8f64afa0 - 0x8f64afff
void function_8f64afa0(void) {
    int32_t v1 = g11;
    int32_t v2 = g16; // 0x8f64afb8
    int32_t v3 = v2; // R2
    char v4 = *(char *)v2; // 0x8f64afc0
    int32_t v5 = v4; // 0x8f64afc0
    // branch -> 0x8f64afb8
    while (v4 != 0) {
        // 0x8f64afb8
        v2++;
        v3 = v2;
        v4 = *(char *)v2;
        v5 = v4;
        // continue -> 0x8f64afb8
    }
    char v6 = *(char *)(g17 + v5); // 0x8f64afcc8
    *(char *)(v5 + v2) = v6;
    int32_t v7 = v5 + 1; // 0x8f64afd813
    if (v6 == 0) {
        // 0x8f64afe0
        if (v1 != g11) {
            // 0x8f64aff0
            __stack_chk_fail();
            // branch -> 0x8f64aff4
        }
        // 0x8f64aff4
        return;
    }
    char v8 = *(char *)(g17 + v7); // 0x8f64afcc
    *(char *)(v7 + v3) = v8;
    int32_t v9 = v7 + 1; // 0x8f64afd8
    while (v8 != 0) {
        // 0x8f64afcc
        v7 = v9;
        v8 = *(char *)(g17 + v7);
        *(char *)(v7 + v3) = v8;
        v9++;
        // continue -> 0x8f64afcc
    }
    // 0x8f64afe0
    if (v1 != g11) {
        // 0x8f64aff0
        __stack_chk_fail();
        // branch -> 0x8f64aff4
    }
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * memset(void * s, int c, size_t n);
// int tolower(int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 29
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:12:28