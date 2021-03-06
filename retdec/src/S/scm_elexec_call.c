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
#include <time.h>

// ------------------- Function Prototypes --------------------

int32_t __utag_longnameof(void);
int32_t __utag_validate(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t __utags_protect(int32_t a1, int32_t a2);
int32_t board_hlos_subtype(int32_t a1);
int32_t board_init(void);
int32_t clock_lib2_branch_set_rate(int32_t a1, int32_t a2, int32_t a3);
int32_t clock_lib2_rcg_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t default_get_battery_capacity(int32_t a1, int32_t a2, int32_t a3);
int32_t display_get_screen_height(int32_t a1, int32_t a2, int32_t a3);
int32_t display_get_screen_width(int32_t a1, int32_t a2, int32_t a3);
int32_t fboot_cmd_boot_validate(int32_t a1, int32_t a2, int32_t a3);
int32_t fboot_cmd_flash_name_mangle(int32_t a1, int32_t a2);
void function_8f64b1b0(void);
void function_8f6784a4(void);
void function_8f678528(int32_t * a1, int32_t * a2);
int32_t hab_mcs_ctx_init_hash(void);
int32_t hab_mcs_hash_data(char * a1, char * a2);
int32_t mot_sst_pal_get_security_version(char * a1, int32_t a2, int32_t a3);
int32_t mot_sst_pal_get_security_version_length(int32_t * a1, int32_t a2, int32_t a3);
int32_t platform_led_off(int32_t a1, int32_t a2, int32_t a3);
int32_t pm8x41_reg_read(uint32_t a1);
int32_t pm8x41_reg_write(int32_t a1);
char * scm_elexec_call(int32_t a1, int32_t a2, int32_t a3);
char * scm_halt_pmic_arbiter(int32_t a1);
int32_t set_download_mode(int32_t a1);
int32_t sod_check_crash(void);
int32_t sod_ramdump_pending_pull(int32_t a1, int32_t a2, int32_t a3);
int32_t strlcat(char * str, char * a2, int32_t max_len);
int32_t target_cpu(void);
int32_t utags_early_init(char * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g45 = 0; // LR
int32_t g46 = 0; // R0
int32_t g47 = 0; // R1
int32_t g48 = 0; // R10
int32_t g49 = 0; // R11
int32_t g50 = 0; // R12
int32_t g51 = 0; // R2
int32_t g52 = 0; // R3
int32_t g53 = 0; // R4
int32_t g54 = 0; // R5
int32_t g55 = 0; // R6
int32_t g56 = 0; // R7
int32_t g57 = 0; // R8
int32_t g58 = 0; // R9
int32_t g1 = 0x6e61000a; // 0x8f6826e7
int32_t g2 = 0x65440030; // 0x8f69c66f
int32_t g3 = 0x1010000; // 0x8f6a6b09
int32_t g4 = -0x7f7fbfc0; // 0x8f6a6bb4
int32_t g5 = -0x709918c4; // 0x8f6a6bb8
int32_t g6 = 0; // 0x8f6a6bc8
int32_t g7 = 0x1010000; // 0x8f6a6bd8
int32_t g8 = 0x40402014; // 0x8f6a6c1c
int32_t g9 = 0x6a6ba040; // 0x8f6a6c1f
int32_t g10 = 31; // 0x8f6a9020
int32_t g11 = 365; // 0x8f6a9080
int32_t g12 = 0; // 0x8f6ac068
int32_t g13 = 0; // 0x8f6ac06c
int32_t g14 = 0; // 0x8f6ac070
int32_t g15 = 0; // 0x8f6ac074
int32_t g16 = 0; // 0x8f6ac078
int32_t g17 = 0; // 0x8f6ac07c
int32_t g18 = 0x7fffffff; // 0x8f6ac084
int32_t g19 = 0; // 0x8f6ac088
int32_t g20 = 1; // 0x8f6ac0a8
int32_t g21 = 1; // 0x8f6ac0f0
int32_t g22 = 0; // 0x8f6b00b0
int32_t g23 = 0; // 0x8f6b00cc
int32_t g24 = 0; // 0x8f6b00d0
int32_t g25 = 0; // 0x8f6b00d4
int32_t g26 = 0; // 0x8f6b00d8
int32_t g27 = 0; // 0x8f6b0110
int32_t g28 = 0; // 0x8f6b012c
int32_t g29 = 0; // 0x8f6b0130
int32_t g30 = 0; // 0x8f6b0134
int32_t g31 = 0; // 0x8f6b0138
char * g32; // 0x8f6b5000
int32_t g33 = 0; // 0x8f6b503f
int32_t g34 = 0; // 0x8f6e0789
int32_t g35 = 0; // 0x8f6e078c
int32_t g36 = 0; // 0x8f6e0798
int32_t g37 = 0; // 0x8f6e0c00
int32_t g38 = 0; // 0x8f6e0c04
int32_t g39 = 0; // 0x8f6e0c08
int32_t g40 = 0; // 0x8f6e0c0c
int32_t g41 = 0; // 0x8f6e0c18
int32_t g42 = 0; // 0x8f6e0c1c
char * g43; // 0x8f6e0c40
int32_t g44 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f61704c - 0x8f6171cb
char * scm_elexec_call(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g45; // 0x8f61704c
    int32_t v2;
    int32_t v3 = &v2; // 0x8f617084_0
    int32_t v4 = 64; // R2
    memset((char *)&v2, 0, 64);
    *(int32_t *)-0x709473d0 = a2;
    *(int32_t *)-0x709473cc = 0;
    *(int32_t *)-0x70947388 = a1;
    *(int32_t *)-0x70947384 = 0;
    int32_t v5;
    print_log(1, -0x7097f2f4, v4, -0x709473d0, g53, g49, v1, v5, 0, 0, 0, 0, 0);
    int32_t v6; // R3
    int32_t v7;
    if (*(char *)-0x70947380 == 1) {
        // 0x8f617134
        v2 = 0x200010f;
        v6 = v3;
        scm_call2(v3, 0, v4, v3, g53, g49);
        // branch -> 0x8f61716c
    } else {
        // 0x8f6170f8
        v4 = -0x709473d0;
        v6 = 80;
        scm_call(1, 15, -0x709473d0, 80, 0);
        v7 = 0;
        // branch -> 0x8f61716c
    }
    // 0x8f61716c
    print_log(-1, -0x7097f2d4, v4, v6, g53, g49, v1, v5, 0, 0, 0, 0, 0);
    char * result = (char *)_panic(v1, -0x7097f470, -0x7097f450, -0x7097fc89, -0x7097f2b8, v7, a2);
    if (*(int32_t *)-0x708eed0c != *(int32_t *)-0x708eed0c) {
        // 0x8f6171c0
        __stack_chk_fail();
        // branch -> 0x8f6171c4
    }
    // 0x8f6171c4
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// char * strcpy(char * restrict dest, const char * restrict src);
// size_t strlen(const char * s);
// size_t strnlen(const char * string, size_t maxlen);
// time_t time(time_t * timer);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:10:21
