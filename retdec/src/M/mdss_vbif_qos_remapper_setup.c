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

// Address range: 0x8f60ecdc - 0x8f60ee03
char * mdss_vbif_qos_remapper_setup(int32_t a1) {
    int32_t v1;
    int32_t v2 = &v1; // R5
    int32_t set_mem = (int32_t)memset((char *)&v1, 0, 16); // 0x8f60ed0c_6
    int32_t v3; // 0x8f60ed74
    int32_t v4; // 0x8f60ed78
    switch (*(int32_t *)(a1 + 28)) {
        default: {
            // if_8f60ed28_0_true
            v4 = 8;
            v3 = 0;
            // branch -> 0x8f60ed34
            break;
        }
        case 1: {
            // if_8f60ed18_0_true
            v4 = 10;
            v3 = 2;
            // branch -> 0x8f60ed34
            break;
        }
        case 2: {
            // if_8f60ed24_0_true
            v4 = 20;
            v3 = 4;
            // branch -> 0x8f60ed34
            break;
        }
    }
    uint32_t v5 = *(int32_t *)0x1a01000; // 0x8f60ed34
    uint32_t v6 = v5 / 0x10000; // 0x8f60ed34
    int32_t v7 = set_mem & -0x10000; // 0x8f60ed3c
    int32_t * v8; // 0x8f60eda4_0
    int32_t v9; // 0x8f60edc8
    uint32_t v10; // 0x8f60edbc
    int32_t v11; // 0x8f60edb4
    int32_t v12; // 0x8f60edc8
    int32_t v13; // 0x8f60edbc
    int32_t v14; // 0x8f60edbc
    if ((v5 & -0x10000) == 0x10060000) {
        // after_if_8f60ed4c_0.thread8
        v1 = 2;
        // branch -> 0x8f60ed74
    } else {
        // after_if_8f60ed44_0
        if (v6 != (v7 || 0x1008)) {
            int32_t v15 = v7 | 0x1009; // 0x8f60ed58
            if ((v5 & -0x10000) == 0x10050000 || v6 == v15) {
                // 0x8f60ed68
                v1 = 1;
                // branch -> 0x8f60ed74
                // 0x8f60ed74
                v9 = 0x1ac8020;
                // branch -> 0x8f60ed9c
                while (true) {
                    // 0x8f60ed9c
                    v8 = (int32_t *)v9;
                    v11 = *(int32_t *)(v2 + v9 - 0x1ac8020);
                    v10 = v3 % 256;
                    v13 = v10 == 0 ? v11 : v10 < 32 ? v11 << v10 : 0;
                    v14 = v13 | *v8 & (v3 == 0 ? -4 : (-3 << v3) - 1);
                    v12 = v14;
                    if (*(char *)(a1 + 112) != 0) {
                      lab_if_8f60edc4_0_true_2:;
                        uint32_t v16 = v4 % 256; // 0x8f60edc4
                        int32_t v17 = v16 == 0 ? v11 : v16 < 32 ? v11 << v16 : 0; // 0x8f60edc4
                        v12 = v17 | (-3 << v4) - 1 & v14;
                        // branch -> after_if_8f60edc4_0
                    }
                  lab_after_if_8f60edc4_0_2:
                    // after_if_8f60edc4_0
                    *v8 = v12;
                    int32_t v18 = v9 + 4; // 0x8f60edcc
                    if (v18 != 0x1ac8030) {
                        // after_if_8f60edc4_0.dec_label_pc_8f60ed9c_crit_edge
                        v9 = v18;
                        // branch -> 0x8f60ed9c
                        continue;
                    }
                }
            }
            // 0x8f60ede8
            return (char *)v15;
        }
        // after_if_8f60ed4c_0
        v1 = 2;
        // branch -> 0x8f60ed74
        // 0x8f60ed74
        v9 = 0x1ac8020;
        // branch -> 0x8f60ed9c
        while (true) {
            // 0x8f60ed9c
            v8 = (int32_t *)v9;
            v11 = *(int32_t *)(v2 + v9 - 0x1ac8020);
            v10 = v3 % 256;
            v13 = v10 == 0 ? v11 : v10 < 32 ? v11 << v10 : 0;
            v14 = v13 | *v8 & (v3 == 0 ? -4 : (-3 << v3) - 1);
            if (*(char *)(a1 + 112) == 0) {
                v12 = v14;
                goto lab_after_if_8f60edc4_0_2;
            }
            goto lab_if_8f60edc4_0_true_2;
        }
    }
    // 0x8f60ed74
    v9 = 0x1ac8020;
    // branch -> 0x8f60ed9c
    while (true) {
        // 0x8f60ed9c
        v8 = (int32_t *)v9;
        v11 = *(int32_t *)(v2 + v9 - 0x1ac8020);
        v10 = v3 % 256;
        v13 = v10 == 0 ? v11 : v10 < 32 ? v11 << v10 : 0;
        v14 = v13 | *v8 & (v3 == 0 ? -4 : (-3 << v3) - 1);
        if (*(char *)(a1 + 112) == 0) {
            v12 = v14;
            goto lab_after_if_8f60edc4_0_2;
        }
        goto lab_if_8f60edc4_0_true_2;
    }
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
