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

int32_t arch_context_switch(int32_t a1, int32_t a2, int32_t a3);
int32_t arch_early_init(void);
int32_t arch_init(int32_t a1, int32_t a2);
int32_t arch_thread_initialize(int32_t a1, int32_t a2, int32_t a3);
int32_t bptools_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t confession_get_buffer(int32_t a1, int32_t a2, int32_t a3);
int32_t confession_printf(char * a1, int32_t a2);
int32_t fboot_usb_init(int32_t a1, int32_t a2, int32_t a3);
int32_t fboot_usb_write(int32_t a1, int32_t a2);
int32_t fboot_usb_write_queue(int32_t a1, uint32_t a2, int32_t a3);
int32_t fboot_usb_write_wait(int32_t a1, int32_t a2, int32_t a3);
int32_t generic_mmc_init(char * a1, int32_t a2);
int32_t generic_mmc_read_sector(int64_t a1, int64_t a2, int32_t a3, int32_t a4);
int32_t hab_su_code(int32_t a1, int32_t a2);
int32_t hab_su_srk_selection(int32_t a1, int32_t a2);
int32_t handle_fboot_command_erase(int32_t a1, int32_t a2);
int32_t handle_fboot_command_multiflash(int32_t * a1);
int32_t is_qcom_mode(void);
int32_t mcs_DER_decode(char * a1, int16_t * a2, char * a3, int16_t * a4);
int32_t mcs_DER_decodeItem(int32_t a1, int32_t a2, int32_t a3);
char * mmc_get_card_status_isra_3(char * a1, int32_t * a2, int32_t * a3);
int32_t pm8x41_reset_configure(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t power_source_detected(int32_t a1, int32_t a2, int32_t a3);
int32_t remove_sp_block(int32_t a1);
int32_t sdhci_mode_disable(int32_t a1);
int32_t SecBoundSigAllowed(void);
int32_t SecICTypeRead(void);
int32_t smb1359_init(int32_t a1, int32_t a2, int32_t a3);
int32_t smb1359_masked_write_reg(int32_t a1, int32_t a2, int32_t a3);
int32_t update_sp_block(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

bool g28 = false; // LR
int32_t g29 = 0; // R0
int32_t g30 = 0; // R1
int32_t g31 = 0; // R10
int32_t g32 = 0; // R2
int32_t g33 = 0; // R3
int32_t g34 = 0; // R4
int32_t g35 = 0; // R5
int32_t g36 = 0; // R6
int32_t g37 = 0; // R7
int32_t g38 = 0; // R8
int32_t g39 = 0; // R9
int32_t g1 = -0x15fffffa; // 0x8f600000
int32_t g2 = -0x1a60cfa4; // 0x8f619a9c
int32_t g3 = -0x1a60cfc4; // 0x8f62d6e8
char * g4 = "\n"; // 0x8f6ac1b0
int32_t g5 = -0x709d28c8; // 0x8f6ac1cc
int32_t g6 = 0; // 0x8f6c03b4
int32_t g7 = 0; // 0x8f6c064c
int32_t g8 = 0; // 0x8f6c0650
int32_t g9 = 0; // 0x8f6c0654
int32_t g10 = 0; // 0x8f6c0658
int32_t g11 = 0; // 0x8f6c065c
int32_t g12 = 0; // 0x8f6c0660
int32_t g13 = 0; // 0x8f6c0664
int32_t g14 = 0; // 0x8f6c0668
int32_t g15 = 0; // 0x8f6c066c
int32_t g16 = 0; // 0x8f6e0bd4
char * g17; // 0x8f6e12e8
int32_t g18 = 0; // 0x8f6e12ec
int32_t g19 = 0; // 0x8f6e12f0
int32_t g20 = 0; // 0x8f710c38
char * g21; // 0x8f710c3c
int32_t g22 = 0; // 0x8f710c48
int32_t g23 = 0; // 0x8f710c60
char * g24; // 0x8f710e74
int32_t g25 = 0; // 0x8f7112f4
int32_t g26 = 0; // 0x8f711534
char * g27; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f62da90 - 0x8f62db5f
int32_t fboot_usb_write_queue(int32_t a1, uint32_t a2, int32_t a3) {
    int32_t v1 = g28 ? -0x709af928 : 0; // 0x8f62da90
    int32_t v2 = g25;
    int32_t v3 = &g10; // R5
    if (g10 == 2) {
        // 0x8f62db14
        *(int32_t *)(int32_t)&g10 = 2;
        // branch -> 0x8f62db20
        // 0x8f62db20
        if (v2 != g25) {
            // 0x8f62db30
            __stack_chk_fail();
            // branch -> 0x8f62db34
        }
        // 0x8f62db34
        return -1;
    }
    // 0x8f62dab8
    int32_t v4;
    if (a2 > 0x8000) {
        int32_t v5 = &g10; // 0x8f62db10
        // branch -> 0x8f62db0c
        // 0x8f62db0c
        print_log(1, (int32_t)"%s: data too large\n", (int32_t)"fboot_usb_write_queue", v5, a1, v2, a3, g34, g35, v1, v4, 0, 0);
        // branch -> 0x8f62db14
        // 0x8f62db14
        *(int32_t *)v3 = 2;
        // branch -> 0x8f62db20
        // 0x8f62db20
        if (v2 != g25) {
            // 0x8f62db30
            __stack_chk_fail();
            // branch -> 0x8f62db34
        }
        // 0x8f62db34
        return -1;
    }
    // 0x8f62dac8
    g7 = (int32_t)&g25 & -0x10000 | 0xea60;
    int32_t v6 = g9;
    *(int32_t *)(v6 + 8) = (int32_t)&g3;
    *(int32_t *)v6 = a1;
    *(int32_t *)(v6 + 4) = a2;
    int32_t v7 = udc_request_queue(g8, v6, (int32_t)&g8, v6, a1, v2, a3, g34, g35, v1); // 0x8f62daf4
    int32_t result; // R0
    if (v7 > -1) {
        // if_8f62dafc_0_true
        result = 0;
        // branch -> 0x8f62db20
    } else {
        // 0x8f62db04
        // branch -> 0x8f62db0c
        // 0x8f62db0c
        print_log(1, (int32_t)"%s: queue failed\n", (int32_t)"fboot_usb_write_queue", v6, a1, v2, a3, g34, g35, v1, v4, 0, 0);
        // branch -> 0x8f62db14
        // 0x8f62db14
        result = -1;
        *(int32_t *)v3 = 2;
        // branch -> 0x8f62db20
    }
    // 0x8f62db20
    if (v2 != g25) {
        // 0x8f62db30
        __stack_chk_fail();
        // branch -> 0x8f62db34
    }
    // 0x8f62db34
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memset(void * s, int c, size_t n);
// int sprintf(char * restrict s, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// int vsnprintf(char * restrict s, size_t maxlen, const char * restrict format, _G_va_list arg);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:29:09
