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

int32_t bd65060_read_reg(int32_t a1, int32_t a2);
int32_t bd65b60_backlight_off(int32_t a1, int32_t a2, int32_t a3);
int32_t bd65b60_backlight_on(int32_t a1, int32_t a2, int32_t a3);
int32_t bd65b60_init(void);
int32_t get_brightness_59(int32_t a1, int32_t a2, int32_t a3);
int32_t get_brightness_63(int32_t a1, int32_t a2, int32_t a3);
int32_t get_max_brightness_60(int32_t a1, int32_t a2, int32_t a3);
int32_t get_max_brightness_64(int32_t a1, int32_t a2, int32_t a3);
int32_t lm3697_backlight_on(int32_t a1, int32_t a2, int32_t a3);
int32_t lp8556_init(void);
int32_t oem_bd65060(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_bd65060_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_lp8556_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t set_brightness_62(uint32_t a1, int32_t a2);
int32_t set_brightness_66(uint32_t a1, int32_t a2);
int32_t set_default_brightness_61(uint32_t a1, int32_t a2, int32_t a3);
int32_t set_default_brightness_65(uint32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g12 = 0; // R2
int32_t g13 = 0; // R4
int32_t g14 = 0; // R5
int32_t g15 = 0; // R6
bool g16 = false; // R7
int32_t g1 = 0x746e6300; // 0x8f6a4e20
int32_t g2 = 255; // 0x8f6aca7c
int32_t g3 = 255; // 0x8f6aca84
int32_t g4 = 255; // 0x8f6aca88
char * g5 = "\x01"; // 0x8f6aca8c
int32_t g6 = 255; // 0x8f6aca90
int32_t g7 = 255; // 0x8f6aca94
int32_t g8 = 0; // 0x8f6e0a88
int32_t g9 = 0; // 0x8f6e0a94
int32_t g10 = 0; // 0x8f6e0a98
int32_t g11 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f63ffec - 0x8f64032b
int32_t bd65b60_init(void) {
    int32_t v1 = g14; // 0x8f63ffec
    int32_t v2 = g16 ? (int32_t)&g11 : 0; // 0x8f63ffec
    int32_t v3 = g11;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    print_log(2, (int32_t)"%s\n", (int32_t)"bd65b60_init", v3, v8, v7, v6, v5, v4, v3, 0, g13, v1);
    int32_t v9 = g9;
    int32_t v10 = v8; // 0x8f6402a08
    int32_t v11 = v7; // 0x8f6402a04
    int32_t v12; // 0x8f6402a8
    int32_t v13; // R1
    int32_t v14; // 0x8f640288
    int32_t result;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;
    uint32_t v21;
    int32_t v22; // 0x8f640200
    if (v9 != 0) {
        // 0x8f640150
        mdelay(5, (int32_t)"%s\n", (int32_t)"bd65b60_init", v9);
        print_log(2, (int32_t)"%s, BD65B60_I2C_ADDRESS = 0x%x\n", (int32_t)"bd65b60_init", 100, v10, v11, v6, v5, v4, v3, 0, g13, v1);
        v15 = g9;
        qup_i2c_write_byte(v15, 100, 0, 1, v10, v11, v6, v5, v4, v3, 0);
        if (v15 <= 0xffffffff) {
            // 0x8f640188
            print_log(-1, (int32_t)"%s: fail to write REG_SFTRST\n", (int32_t)"bd65b60_init", 1, v10, v11, v6, v5, v4, v3, 0, g13, v1);
            // branch -> 0x8f640198
        }
        // 0x8f640198
        v16 = g9;
        qup_i2c_write_byte(v16, 100, 1, 17, v10, v11, v6, v5, v4, v3, 0);
        if (v16 <= 0xffffffff) {
            // 0x8f6401b4
            print_log(-1, (int32_t)"%s: fail to write REG_COM1\n", (int32_t)"bd65b60_init", 17, v10, v11, v6, v5, v4, v3, 0, g13, v1);
            // branch -> 0x8f6401c4
        }
        // 0x8f6401c4
        v17 = g9;
        qup_i2c_write_byte(v17, 100, 2, 0, v10, v11, v6, v5, v4, v3, 0);
        if (v17 <= 0xffffffff) {
            // 0x8f6401e0
            print_log(-1, (int32_t)"%s: fail to write REG_FBVS\n", (int32_t)"bd65b60_init", 0, v10, v11, v6, v5, v4, v3, 0, g13, v1);
            // branch -> 0x8f6401f0
        }
        // 0x8f6401f0
        v18 = g9;
        v22 = (int32_t)*(char *)&g5;
        qup_i2c_write_byte(v18, 100, 3, v22, v10, v11, v6, v5, v4, v3, 0);
        if (v18 <= 0xffffffff) {
            // 0x8f640210
            print_log(-1, (int32_t)"%s: fail to write REG_LED_SEL\n", (int32_t)"bd65b60_init", v22, v10, v11, v6, v5, v4, v3, 0, g13, v1);
            // branch -> 0x8f640220
        }
        // 0x8f640220
        v19 = g9;
        qup_i2c_write_byte(v19, 100, 5, 255, v10, v11, v6, v5, v4, v3, 0);
        if (v19 <= 0xffffffff) {
            // 0x8f64023c
            print_log(-1, (int32_t)"%s: fail to write REG_LED_CRS\n", (int32_t)"bd65b60_init", 255, v10, v11, v6, v5, v4, v3, 0, g13, v1);
            // branch -> 0x8f64024c
        }
        // 0x8f64024c
        v20 = g9;
        qup_i2c_write_byte(v20, 100, 7, 38, v10, v11, v6, v5, v4, v3, 0);
        if (v20 <= 0xffffffff) {
            // 0x8f640268
            print_log(-1, (int32_t)"%s: fail to write REG_CONTROL_SETTING\n", (int32_t)"bd65b60_init", 38, v10, v11, v6, v5, v4, v3, 0, g13, v1);
            // branch -> 0x8f640278
        }
        // 0x8f640278
        v21 = g9;
        v13 = 100;
        v14 = qup_i2c_write_byte(v21, 100, 14, 1, v10, v11, v6, v5, v4, v3, 0);
        v12 = v14;
        if (v21 <= 0xffffffff) {
            // 0x8f640294
            v13 = (int32_t)"%s: fail to write REG_PON\n";
            print_log(-1, (int32_t)"%s: fail to write REG_PON\n", (int32_t)"bd65b60_init", 1, v10, v11, v6, v5, v4, v3, 0, g13, v1);
            v12 = (int32_t)"bd65b60_init";
            // branch -> 0x8f6402a4
        }
        // 0x8f6402a4
        result = mdelay(2, v13, v12, 1);
        // branch -> 0x8f6402ac
        // 0x8f6402ac
        if (v3 != g11) {
            // 0x8f6402bc
            __stack_chk_fail();
            // branch -> 0x8f6402c0
        }
        // 0x8f6402c0
        g14 = v1;
        return result;
    }
    int32_t v23 = g8;
    int32_t v24 = v23; // R3
    int32_t v25 = *(int32_t *)(v23 + 44); // 0x8f640038
    int32_t v26 = get_int_prop((int32_t)"blsp", v25, (int32_t)&v6, v23, v8, v7, v6); // 0x8f64003c
    int32_t result2; // 0x8f640114
    if (v26 == 0) {
        int32_t v27 = g8;
        v24 = v27;
        int32_t v28 = *(int32_t *)(v27 + 44); // 0x8f640054
        int32_t v29 = get_int_prop((int32_t)"qup", v28, (int32_t)&v5, v27, v8, v7, v6); // 0x8f640058
        if (v29 == 0) {
            int32_t v30 = g8;
            int32_t v31 = *(int32_t *)(v30 + 44); // 0x8f640080
            int32_t v32 = get_int_prop((int32_t)"led", v31, (int32_t)&g5, v30, v8, v7, v6); // 0x8f640084
            if (v32 != 0) {
                // 0x8f640090
                print_log(1, (int32_t)"Property \"led\" is not defined in dev tree for backlight device %s!", g8, v30, v8, v7, v6, v5, v4, v3, 0, g13, v1);
                // branch -> 0x8f6400a0
            }
            int32_t v33 = v6; // 0x8f6400a0_0
            int32_t v34 = v5; // 0x8f6400a4_0
            int32_t v35;
            int32_t v36 = qup_blsp_i2c_init(0x1000000 * v33 / 0x1000000, 0x1000000 * v34 / 0x1000000, 0x186a0, 0x124f800, v8, v7, v33, v34, v4, v3, 0, g13, v1, g15, v2, 0, v35); // 0x8f6400b0
            *(int32_t *)(int32_t)&g9 = v36;
            if (v36 == 0) {
                // if_8f6400bc_0_true
                // branch -> 0x8f640114
                // 0x8f640114
                result2 = print_log(-1, (int32_t)"%s: qup_i2c_init fail\n", (int32_t)"bd65b60_init", 0x124f800, v8, v7, v6, v5, v4, v3, 0, g13, v1);
                // branch -> 0x8f6402ac
                // 0x8f6402ac
                if (v3 != g11) {
                    // 0x8f6402bc
                    __stack_chk_fail();
                    // branch -> 0x8f6402c0
                }
                // 0x8f6402c0
                g14 = v1;
                return result2;
            }
            int32_t v37 = v5; // 0x8f6400cc
            int32_t v38 = v6; // 0x8f6400e0
            print_log(2, (int32_t)"%s, qup_blsp_i2c_init(BLSP_ID_%d, QUP_ID_%d, 100000, 19200000)\n", (int32_t)"bd65b60_init", v38, v37, v7, v38, v37, v4, v3, 0, g13, v1);
            int32_t v39 = g8;
            int32_t v40 = *(int32_t *)(v39 + 44); // 0x8f6400f4
            int32_t v41 = get_int_prop((int32_t)"reset", v40, (int32_t)&v4, v39, v37, v7, v6); // 0x8f6400f8
            if (v41 == 0) {
                int32_t v42 = 1; // R5
                int32_t v43 = 1; // R2
                v24 = 1;
                gpio_tlmm_config(v4, 0, 1, 1, 0, 1, v6);
                gpio_set_dir(v4, 2, v43, v24);
                gpio_set_value(v4, v42, v43, v24);
                v10 = 0;
                v11 = 1;
                // branch -> 0x8f640150
                // 0x8f640150
                mdelay(5, v42, v43, v24);
                print_log(2, (int32_t)"%s, BD65B60_I2C_ADDRESS = 0x%x\n", (int32_t)"bd65b60_init", 100, v10, v11, v6, v5, v4, v3, 0, g13, v1);
                v15 = g9;
                qup_i2c_write_byte(v15, 100, 0, 1, v10, v11, v6, v5, v4, v3, 0);
                if (v15 <= 0xffffffff) {
                    // 0x8f640188
                    print_log(-1, (int32_t)"%s: fail to write REG_SFTRST\n", (int32_t)"bd65b60_init", 1, v10, v11, v6, v5, v4, v3, 0, g13, v1);
                    // branch -> 0x8f640198
                }
                // 0x8f640198
                v16 = g9;
                qup_i2c_write_byte(v16, 100, 1, 17, v10, v11, v6, v5, v4, v3, 0);
                if (v16 <= 0xffffffff) {
                    // 0x8f6401b4
                    print_log(-1, (int32_t)"%s: fail to write REG_COM1\n", (int32_t)"bd65b60_init", 17, v10, v11, v6, v5, v4, v3, 0, g13, v1);
                    // branch -> 0x8f6401c4
                }
                // 0x8f6401c4
                v17 = g9;
                qup_i2c_write_byte(v17, 100, 2, 0, v10, v11, v6, v5, v4, v3, 0);
                if (v17 <= 0xffffffff) {
                    // 0x8f6401e0
                    print_log(-1, (int32_t)"%s: fail to write REG_FBVS\n", (int32_t)"bd65b60_init", 0, v10, v11, v6, v5, v4, v3, 0, g13, v1);
                    // branch -> 0x8f6401f0
                }
                // 0x8f6401f0
                v18 = g9;
                v22 = (int32_t)*(char *)&g5;
                qup_i2c_write_byte(v18, 100, 3, v22, v10, v11, v6, v5, v4, v3, 0);
                if (v18 <= 0xffffffff) {
                    // 0x8f640210
                    print_log(-1, (int32_t)"%s: fail to write REG_LED_SEL\n", (int32_t)"bd65b60_init", v22, v10, v11, v6, v5, v4, v3, 0, g13, v1);
                    // branch -> 0x8f640220
                }
                // 0x8f640220
                v19 = g9;
                qup_i2c_write_byte(v19, 100, 5, 255, v10, v11, v6, v5, v4, v3, 0);
                if (v19 <= 0xffffffff) {
                    // 0x8f64023c
                    print_log(-1, (int32_t)"%s: fail to write REG_LED_CRS\n", (int32_t)"bd65b60_init", 255, v10, v11, v6, v5, v4, v3, 0, g13, v1);
                    // branch -> 0x8f64024c
                }
                // 0x8f64024c
                v20 = g9;
                qup_i2c_write_byte(v20, 100, 7, 38, v10, v11, v6, v5, v4, v3, 0);
                if (v20 <= 0xffffffff) {
                    // 0x8f640268
                    print_log(-1, (int32_t)"%s: fail to write REG_CONTROL_SETTING\n", (int32_t)"bd65b60_init", 38, v10, v11, v6, v5, v4, v3, 0, g13, v1);
                    // branch -> 0x8f640278
                }
                // 0x8f640278
                v21 = g9;
                v13 = 100;
                v14 = qup_i2c_write_byte(v21, 100, 14, 1, v10, v11, v6, v5, v4, v3, 0);
                v12 = v14;
                if (v21 <= 0xffffffff) {
                    // 0x8f640294
                    v13 = (int32_t)"%s: fail to write REG_PON\n";
                    print_log(-1, (int32_t)"%s: fail to write REG_PON\n", (int32_t)"bd65b60_init", 1, v10, v11, v6, v5, v4, v3, 0, g13, v1);
                    v12 = (int32_t)"bd65b60_init";
                    // branch -> 0x8f6402a4
                }
                // 0x8f6402a4
                result = mdelay(2, v13, v12, 1);
                // branch -> 0x8f6402ac
            } else {
                // 0x8f640104
                // branch -> 0x8f640114
                int32_t v44 = &g8; // 0x8f640114
                result2 = print_log(-1, (int32_t)"Property \"reset\" is not defined in dev tree for backlight device %s!", g8, v44, v37, v7, v6, v5, v4, v3, 0, g13, v1);
                result = result2;
                // branch -> 0x8f6402ac
            }
            // 0x8f6402ac
            if (v3 != g11) {
                // 0x8f6402bc
                __stack_chk_fail();
                // branch -> 0x8f6402c0
            }
            // 0x8f6402c0
            g14 = v1;
            return result;
        }
    }
    // 0x8f640064
    // branch -> 0x8f640114
    // 0x8f640114
    result2 = print_log(-1, (int32_t)"Property \"blsp\" is not defined in dev tree for backlight device %s!", g8, v24, v8, v7, v6, v5, v4, v3, 0, g13, v1);
    // branch -> 0x8f6402ac
    // 0x8f6402ac
    if (v3 != g11) {
        // 0x8f6402bc
        __stack_chk_fail();
        // branch -> 0x8f6402c0
    }
    // 0x8f6402c0
    g14 = v1;
    return result2;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// long int atol(const char * nptr);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 17
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:46:56