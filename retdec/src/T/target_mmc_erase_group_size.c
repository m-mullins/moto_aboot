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

int32_t cache_inv_range(int32_t a1, int32_t a2, int32_t a3);
char * mmc_get_card_status_isra_3(char * a1, int32_t * a2, int32_t * a3);
int32_t mmc_parse_response(char * a1, int32_t a2);
char * mmc_send_app_cmd_isra_5(char * a1, int32_t a2);
int32_t mmc_set_bus_width(char * a1);
char * mmc_switch_cmd(char * a1, int32_t a2, int32_t a3, int32_t a4);
char * mot_tzbsp_call(int32_t a1, int32_t a2, int32_t a3);
int32_t sdhci_int_handler(int32_t * a1, int32_t a2);
int32_t sdhci_msm_config_dll_isra_4(char * a1, int32_t a2);
int32_t sdhci_msm_init(int32_t * a1, int32_t * a2);
int32_t sdhci_msm_init_dll(char * a1, int32_t a2, int32_t a3);
int32_t SecReadFuse(int32_t a1, int32_t a2);
int32_t SecReadFuseQC(int32_t a1);
int32_t setup_ack(int32_t result, int32_t a2, int32_t a3);
int32_t target_mmc_do_write_protect(int32_t a1, int32_t a2, int32_t a3);
int32_t target_mmc_erase(int32_t a1, int32_t a2, int32_t a3);
int32_t target_mmc_erase_group_size(int32_t a1, int32_t a2);
int32_t target_mmc_get_protect_group_size(int32_t a1, int32_t a2, int32_t a3);
int32_t target_mmc_read(int32_t a1, int32_t a2, int32_t a3);
int32_t target_mmc_write(int32_t a1, int32_t a2, int32_t a3);
int32_t udc_interrupt(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g31 = 0; // LR
int32_t g32 = 0; // R1
int32_t g33 = 0; // R2
int32_t g34 = 0; // R3
int32_t g35 = 0; // R4
int32_t g36 = 0; // R5
int32_t g37 = 0; // R6
int32_t g38 = 0; // R7
int32_t g1 = -0x1a60df78; // 0x8f604cbc
int32_t g2 = -0x16d2bfed; // 0x8f608218
char * g3[12] = {
    "GET_STATUS",
    "CLEAR_FEATURE",
    "*UNKNOWN*",
    "SET_FEATURE",
    "*UNKNOWN*",
    "SET_ADDRESS",
    "GET_DESCRIPTOR",
    "SET_DESCRIPTOR",
    "GET_CONFIGURATION",
    "SET_CONFIGURATION",
    "GET_INTERFACE",
    "SET_INTERFACE"
}; // 0x8f67d234
int32_t g4 = 0; // 0x8f67d910
int32_t g5 = 1; // 0x8f67d914
int32_t g6 = 3; // 0x8f67d918
int32_t g7 = 2; // 0x8f67d91c
int32_t g8 = 6; // 0x8f67d920
int32_t g9 = 7; // 0x8f67d924
int32_t g10 = 5; // 0x8f67d928
int32_t g11 = 4; // 0x8f67d92c
int32_t g12 = 12; // 0x8f67d930
int32_t g13 = 13; // 0x8f67d934
int32_t g14 = 15; // 0x8f67d938
int32_t g15 = 14; // 0x8f67d93c
int32_t g16 = 10; // 0x8f67d940
int32_t g17 = 11; // 0x8f67d944
int32_t g18 = 9; // 0x8f67d948
int32_t g19 = 8; // 0x8f67d94c
int32_t g20 = 0; // 0x8f6b7920
int32_t g21 = 0; // 0x8f6b7924
char * g22; // 0x8f6b7928
int32_t g23 = 0; // 0x8f6b792c
int32_t g24 = 0; // 0x8f6b7934
int32_t g25 = 0; // 0x8f6b7938
int32_t g26 = 0; // 0x8f6b793c
int32_t g27 = 0; // 0x8f6b7940
int32_t g28 = 0; // 0x8f6b7944
int32_t g29 = 0; // 0x8f6b7948
int32_t g30 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f6065ec - 0x8f60668b
int32_t target_mmc_erase_group_size(int32_t a1, int32_t a2) {
    // 0x8f6065ec
    int32_t v1;
    int32_t v2;
    if (a2 == 0) {
        // after_if_8f6065f4_0.thread
        v2 = g30;
        // branch -> 0x8f606664
        // 0x8f606664
        print_log(-1, (int32_t)"%s: mmc not recognized correctly\n", (int32_t)"target_mmc_erase_group_size", (int32_t)&g30, a1, v2, g35, g31, v1, 0, 0, 0, 0);
        if (v2 != g30) {
            // 0x8f606674
            __stack_chk_fail();
            // branch -> 0x8f606678
        }
        // 0x8f606678
        return 0;
    }
    // after_if_8f6065f4_0
    if (a1 != 0) {
        // 0x8f606624
        int32_t result; // 0x8f60667c_2
        if (*(char *)(a2 + 175) == 0) {
            // 0x8f606664
            result = (*(int32_t *)(a1 + 140) + 1) * (*(int32_t *)(a1 + 144) + 1);
            // branch -> 0x8f606678
        } else {
            int32_t v3 = (int32_t)*(char *)(a2 + 224); // 0x8f606630
            result = 1024 * v3 & 0x7ffc00 | 0x800000 * v3 / 0x1000;
            // branch -> 0x8f606678
        }
        // 0x8f606678
        return result;
    }
    v2 = g30;
    // 0x8f606664
    print_log(-1, (int32_t)"%s: mmc not recognized correctly\n", (int32_t)"target_mmc_erase_group_size", (int32_t)&g30, a1, v2, g35, g31, v1, 0, 0, 0, 0);
    if (v2 != g30) {
        // 0x8f606674
        __stack_chk_fail();
        // branch -> 0x8f606678
    }
    // 0x8f606678
    return 0;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 21
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:32:07
