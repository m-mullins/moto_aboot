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

int32_t handle_fboot_oem_command_get_unlock_data(void);
int32_t handle_fboot_oem_command_prod_fuse(int32_t a1, int32_t a2);
int32_t oem_build_sig(int32_t a1, int32_t a2);
int32_t oem_display(int32_t a1, int32_t a2);
int32_t oem_dump_logs(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_led(int32_t a1, int32_t a2);
int32_t oem_logo(int32_t a1, int32_t a2);
int32_t oem_partition_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_partitions(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_pmic(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_read_sv(void);
int32_t oem_security_test(int32_t a1, int32_t a2);
int32_t oem_test_sp(int32_t a1, int32_t a2);
int32_t oem_usb_tune(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t ptn_stat(char * a1, int32_t * a2, int32_t * a3, int32_t * a4);
int32_t require_mot_fastboot(int32_t a1, int32_t a2, int32_t a3);
int32_t utag_name_prefix_found_cb(int32_t a1, char * str2, char * str);
int32_t utag_shortnameof(void);

// --------------------- Global Variables ---------------------

int32_t g22 = 0; // LR
int32_t g23 = 0; // R0
int32_t g24 = 0; // R1
int32_t g25 = 0; // R2
int32_t g26 = 0; // R3
int32_t g27 = 0; // R4
int32_t g28 = 0; // R5
int32_t g29 = 0; // R6
int32_t g30 = 0; // R7
int32_t g31 = 0; // R8
int32_t g1 = -0x16d2bfed; // 0x8f61c43c
int32_t g2 = -0x16d2bfed; // 0x8f61c478
int32_t g3 = -0x16d2bf10; // 0x8f61c4ac
int32_t g4 = -0x16d2bff0; // 0x8f61c534
int32_t g5 = -0x1a60cf20; // 0x8f61c5a8
int32_t g6 = -0x1a60cfc8; // 0x8f624774
int32_t g7 = -0x15ffffc8; // 0x8f625868
int32_t g8 = -0x1a60cf7c; // 0x8f63867c
int32_t g9 = -0x16d2bc09; // 0x8f638ab0
int32_t g10 = 0x746e6300; // 0x8f6a4e20
int32_t g11 = -0x709c73f8; // 0x8f6ac374
int32_t g12 = 0; // 0x8f6c05e0
char * g13; // 0x8f6c0600
int32_t g14 = 0; // 0x8f6c0624
int32_t (*g15)() = NULL; // 0x8f7112f4
char * g16; // 0x8f711580
char * g17; // 0x8f711588
char * g18; // 0x8f711589
char g19 = 0; // 0x8f71158a
char g20 = 0; // 0x8f71158b
int32_t g21 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f624eb4 - 0x8f624fcf
int32_t oem_usb_tune(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t (*v1)() = g15;
    int32_t v2 = (int32_t)v1;
    switch (a1) {
        case 1: {
            int32_t v3 = ulpi_read(129, a2, v2); // 0x8f624ed8
            int32_t v4 = ulpi_read(130, a2, v2); // 0x8f624ee4
            fboot_info((int32_t)"INFO", (int32_t)"current setting: 0x00%02x%02x%02x", v3, v4, ulpi_read(131, a2, v2), a2, a3, v2, g27, g28, g29);
            // branch -> 0x8f624f9c
            // 0x8f624f9c
            if (v1 != g15) {
                // 0x8f624fac
                __stack_chk_fail();
                // branch -> 0x8f624fb0
            }
            // 0x8f624fb0
            return 1;
        }
        case 2: {
            // 0x8f624f1c
            if (strcmp((char *)*(int32_t *)(a2 + 4), "help") == 0) {
                // 0x8f624f30
                oem_usb_tune_usage(0, (int32_t)"help", v2, (int32_t)&g15);
                // branch -> 0x8f624f9c
                // 0x8f624f9c
                if (v1 != g15) {
                    // 0x8f624fac
                    __stack_chk_fail();
                    // branch -> 0x8f624fb0
                }
                // 0x8f624fb0
                return 1;
            }
            break;
        }
        case 3: {
            // 0x8f624f40
            if (strcmp((char *)*(int32_t *)(a2 + 4), "set") == 0) {
                uint32_t str_as_l = atol((char *)*(int32_t *)(a2 + 8)); // 0x8f624f58
                *(int32_t *)-0x50000400 = str_as_l;
                int32_t v5 = str_as_l / 0x1000000 + str_as_l + str_as_l / 0x10000; // 0x8f624f6c
                *(char *)-0x500003fc = (char)(v5 + str_as_l / 256 ^ 255);
                request_warm_reset(1, (int32_t)"set", -0x50000001, v5);
                // branch -> 0x8f624f9c
                // 0x8f624f9c
                if (v1 != g15) {
                    // 0x8f624fac
                    __stack_chk_fail();
                    // branch -> 0x8f624fb0
                }
                // 0x8f624fb0
                return 1;
            }
            break;
        }
    }
    int32_t v6 = fboot_info((int32_t)"INFO", (int32_t)"Invalid option", v2, (int32_t)&g15, a1, a2, a3, v2, g27, g28, g29); // 0x8f624f90
    oem_usb_tune_usage(v6, (int32_t)"Invalid option", v2, (int32_t)&g15);
    // branch -> 0x8f624f9c
    // 0x8f624f9c
    if (v1 != g15) {
        // 0x8f624fac
        __stack_chk_fail();
        // branch -> 0x8f624fb0
    }
    // 0x8f624fb0
    return 3;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int atoi(const char * nptr);
// long int atol(const char * nptr);
// void free(void * ptr);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strrchr(char * s, int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 18
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:38:36
