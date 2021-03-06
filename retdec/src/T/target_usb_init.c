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

void arm_syscall_handler(void);
void arm_undefined_handler(void);
int32_t confession_clear(int32_t a1, int32_t a2, int32_t a3);
int32_t confession_get_chars(int32_t a1, int32_t a2, int32_t a3);
int32_t display_set_margin(int32_t a1, int32_t a2);
int32_t display_set_orientation(char a1, int32_t a2);
int32_t enable_kpdpwr_n_irq(int32_t a1);
void function_8f64a49c(void);
void function_8f64a9f0(char * str, int32_t size, char * format, int32_t a4);
int32_t get_battery_offset_by_type(int32_t a1, int32_t a2, int32_t a3);
int32_t get_charger_offset_by_type(int32_t a1, int32_t a2, int32_t a3);
int32_t get_ddr_start(void);
int32_t getvar_version_baseband(char * a1, int32_t a2, int32_t a3);
int32_t is_fastboot_mode(int32_t a1, int32_t a2);
int32_t is_valid_supplier_id(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_clear_cert_ctx(char * a1, int32_t a2, int32_t a3);
int32_t mcs_DER_advanceBuffer(int32_t a1, int16_t * a2, int16_t a3);
int32_t mipi_dsi_set_brightness(char a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t oem_off_mode_charge(int32_t a1, int32_t a2);
int32_t oem_off_mode_charge_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t platform_detect_fact_cbl(int32_t a1, int32_t a2, int32_t a3);
int32_t pm8x41_irq_unmask(uint32_t a1, uint32_t a2);
int32_t qup_i2c_read_byte(int32_t a1, int32_t a2, int32_t a3);
int32_t qup_i2c_write_word(int32_t a1, int32_t a2, int32_t a3);
int32_t ramdump_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t read_version(char * a1, char * a2, int32_t a3);
int32_t sod_ramdump_enabled(char * a1, int32_t a2);
int32_t sod_ramdump_set_test_cookie(int32_t a1, int32_t a2);
int32_t target_usb_init(int32_t a1, int32_t a2);
int32_t target_usb_stop(int32_t a1);

// --------------------- Global Variables ---------------------

int32_t g22 = 0; // R0
int32_t g23 = 0; // R1
int32_t g24 = 0; // R2
int32_t g25 = 0; // R3
int32_t g26 = 0; // R4
int32_t g27 = 0; // R5
int32_t g28 = 0; // R6
int32_t g1 = -0x16d2bfed; // 0x8f645700
char g2[2] = "0"; // 0x8f69c66f
char g3[2] = "1"; // 0x8f69c693
int32_t g4 = 0x746e6300; // 0x8f6a4e20
char * g5 = "\n"; // 0x8f6ac1b0
int32_t g6 = -0x7fea01; // 0x8f6acae9
int32_t g7 = 8; // 0x8f6acb08
int32_t g8 = 4; // 0x8f6acb54
int32_t g9 = 0xcffff0f; // 0x8f6acba9
int32_t g10 = 0xcffff; // 0x8f6acbaa
int32_t g11 = 0; // 0x8f6c02e4
int32_t g12 = 0; // 0x8f6e0c00
int32_t g13 = 0; // 0x8f6e0c04
int32_t g14 = 0; // 0x8f6e0c08
int32_t g15 = 0; // 0x8f6e0c0c
int32_t g16 = 0; // 0x8f6e0c18
int32_t g17 = 0; // 0x8f6e0c1c
char * g18; // 0x8f6e0c40
char * g19; // 0x8f6e12ec
int32_t g20 = 0; // 0x8f6e12f0
char * g21; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f600b14 - 0x8f600c8b
int32_t target_usb_init(int32_t a1, int32_t a2) {
    int32_t v1 = a1; // bp-24
    int32_t v2 = &v1; // 0x8f600b14_1
    char * v3 = g21;
    int32_t v4 = (int32_t)v3;
    int32_t result = ulpi_write(3, 151, g24, v4, a1); // 0x8f600b2c
    int32_t v5;
    char * v6;
    if (result == -1) {
        // 0x8f600b3c
        print_log(-1, (int32_t)"FAILURE: Enabling external config!\n", g24, v4, v1, v4, g24, g26, g27, 0, v5, 0, 0);
        // branch -> 0x8f600c34
      lab_0x8f600c34_2:
        // 0x8f600c34
        v6 = g21;
        if (v3 == v6) {
            // 0x8f600c5c
            return result;
        }
        // 0x8f600c48
        __stack_chk_fail();
        // branch -> 0x8f600c4c
    } else {
        // 0x8f600b48
        *(int32_t *)0x78d90a0 = *(int32_t *)0x78d90a0 | 128;
        int32_t * v7 = (int32_t *)0x78d9140; // 0x8f600b58_0
        *v7 = *v7 | 0x2000000;
        int32_t v8 = -0x50000001; // R3
        uint32_t v9 = *(int32_t *)-0x50000400; // 0x8f600b68
        int32_t v10 = v9; // R4
        uint32_t v11 = v9 / 0x1000000 + v9 + v9 / 0x10000 + v9 / 256; // 0x8f600b7c
        int32_t v12 = v11 % 256; // 0x8f600b80
        int32_t v13 = v12; // R2
        int32_t v14 = v12 ^ 255; // 0x8f600b88
        uint32_t v15; // 0x8f600c10
        if ((int32_t)*(char *)-0x500003fc == v14) {
            // 0x8f600b94
            *(char *)-0x500003fc = (char)v11;
            v13 = v10;
            print_log(1, (int32_t)"oem tuning USB: 0x%x\n", v10, v8, v1, v4, g24, g26, g27, 0, v5, 0, 0);
            v15 = v10;
            // branch -> 0x8f600c04
            // 0x8f600c04
            if (v15 != -1) {
                // 0x8f600c0c
                ulpi_write(v15 / 0x10000 % 256, 129, v13, v8, v1);
                ulpi_write(v10 / 256 % 256, 130, v13, v8, v1);
                ulpi_write(v10 % 256, 131, v13, v8, v1);
                // branch -> 0x8f600c30
                // 0x8f600c30
                result = 0;
                // branch -> 0x8f600c34
                goto lab_0x8f600c34_2;
            }
        } else {
            int32_t v16 = mbm_fdt_find_node((int32_t)"usbphy_setting", v14, v12); // 0x8f600bb0
            v8 = 0;
            v1 = 0;
            if (v16 < 0) {
                // if_8f600bc0_0_true
                // branch -> 0x8f600be8
            } else {
                // 0x8f600bcc
                v13 = v2;
                if (get_int_prop((int32_t)"usbphy_init_seq", v16, v2, 0, 0, v4, g24) == 0) {
                    int32_t v17 = v1; // 0x8f600bf8
                    v13 = v17;
                    print_log(2, (int32_t)"USB Phy init sequence is 0x%08x\n", v17, v8, v17, v4, g24, g26, g27, 0, v5, 0, 0);
                    int32_t v18 = v1; // 0x8f600c00
                    v10 = v18;
                    v15 = v18;
                    // branch -> 0x8f600c04
                    // 0x8f600c04
                    if (v15 != -1) {
                        // 0x8f600c0c
                        ulpi_write(v15 / 0x10000 % 256, 129, v13, v8, v1);
                        ulpi_write(v10 / 256 % 256, 130, v13, v8, v1);
                        ulpi_write(v10 % 256, 131, v13, v8, v1);
                        // branch -> 0x8f600c30
                      lab_0x8f600c30_3:
                        // 0x8f600c30
                        result = 0;
                        // branch -> 0x8f600c34
                        goto lab_0x8f600c34_2;
                    }
                } else {
                    // 0x8f600be0
                    // branch -> 0x8f600be8
                    // 0x8f600be8
                    print_log(1, (int32_t)"No USB Phy init settings\n", v13, v8, v1, v4, g24, g26, g27, 0, v5, 0, 0);
                    // branch -> 0x8f600c4c
                }
                // 0x8f600c4c
                print_log(-1, (int32_t)"USB PHY not tuned!\n", v13, v8, v1, v4, g24, g26, g27, 0, v5, 0, 0);
                // branch -> 0x8f600c30
                goto lab_0x8f600c30_3;
            }
            // 0x8f600be8
            print_log(1, (int32_t)"No USB Phy settings\n", v13, 0, 0, v4, g24, g26, g27, 0, v5, 0, 0);
            // branch -> 0x8f600c4c
        }
        // 0x8f600c4c
        print_log(-1, (int32_t)"USB PHY not tuned!\n", v13, v8, v1, v4, g24, g26, g27, 0, v5, 0, 0);
        // branch -> 0x8f600c30
        goto lab_0x8f600c30_3;
    }
    // 0x8f600c4c
    print_log(-1, (int32_t)"USB PHY not tuned!\n", v4, (int32_t)v6, v1, v4, g24, g26, g27, 0, v5, 0, 0);
    // branch -> 0x8f600c30
    goto lab_0x8f600c30_3;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strstr(char * haystack, const char * needle);
// int vsnprintf(char * restrict s, size_t maxlen, const char * restrict format, _G_va_list arg);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:44:06
