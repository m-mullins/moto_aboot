//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int32_t charger_gone_shutdown_handler(int32_t a1, int32_t a2, int32_t a3);
int32_t temp_timer_func(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g8 = 0; // R4
int32_t g9 = 0; // R5
int32_t g1 = -0x16d2be0d; // 0x8f6039b8
char * g2 = "\x01"; // 0x8f6ab02c
char * g3 = "\x01"; // 0x8f6ab030
char * g4 = "\x01"; // 0x8f6ab034
int32_t g5 = 0; // 0x8f6b5064
int32_t g6 = 0; // 0x8f6b5080
int32_t g7 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f603ad8 - 0x8f603c07
int32_t charger_gone_shutdown_handler(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = a2; // R1
    int32_t v2 = a3; // R2
    int32_t v3 = g7; // R3
    int32_t v4 = event_wait((int32_t)&g5, a2); // 0x8f603af0
    int32_t v5 = is_charger_fan54046(v4, v1, v2, v3); // 0x8f603af4
    int32_t v6; // 0x8f603b74
    int32_t v7; // 0x8f603b78
    int32_t v8;
    int32_t v9;
    if (v5 == 0) {
        int32_t v10 = is_charger_bq24296(0, v1, v2, v3, a1, g7, a3, g8); // 0x8f603b60
        if (v10 != 0) {
          lab_0x8f603bdc_2:
            // 0x8f603bdc
            if (bq24296_get_ibuslim(v10, v1, v2, v3, a1, g7, a3, g8) >= 1) {
              lab_0x8f603b98:;
                int32_t v11 = bq24296_chg_enable(0, v1, v2, v3, a1, g7, a3, g8); // 0x8f603b9c
                bq24296_ibuslim_set(bq24296_get_ibuslim(v11, v1, v2, v3, a1, g7, a3, g8) - 1, v1, v2, v3, a1, g7, a3);
                thread_sleep(1000, v1, v2, v3, a1, g7, a3, g8);
                bq24296_chg_enable(1, v1, v2, v3, a1, g7, a3, g8);
                v1 = (int32_t)"Dropping Input Rate!\n";
                int32_t v12 = print_log(1, (int32_t)"Dropping Input Rate!\n", v2, v3, a1, g7, a3, g8, g9, 0, v8, 0, 0); // 0x8f603bc4
                if (power_source_detected(v12, v1, v2, v3) == 0) {
                    v10 = 0;
                    goto lab_0x8f603bdc_2;
                }
                // 0x8f603bd4
                v10 = event_wait((int32_t)&g5, v1);
                // branch -> 0x8f603bdc
                goto lab_0x8f603bdc_2;
            }
            // 0x8f603b6c
            v1 = (int32_t)"Accessory Unplugged from device!\n";
            v6 = print_log(1, (int32_t)"Accessory Unplugged from device!\n", v2, v3, a1, g7, a3, g8, g9, 0, v8, 0, 0);
            v7 = display_turn_off(v6, v1, v2, v3, a1, g7);
            trigger_to_power_off(v7, v1, v2);
            v2 = g7;
            v9 = g7;
            v3 = v9;
            if (g7 == v9) {
                // 0x8f603bec
                return 0;
            }
          lab_0x8f603b94_4:
            // 0x8f603b94
            __stack_chk_fail();
            // branch -> 0x8f603b98
            goto lab_0x8f603b98;
        }
        // 0x8f603b6c
        v1 = (int32_t)"Accessory Unplugged from device!\n";
        v6 = print_log(1, (int32_t)"Accessory Unplugged from device!\n", v2, v3, a1, g7, a3, g8, g9, 0, v8, 0, 0);
        v7 = display_turn_off(v6, v1, v2, v3, a1, g7);
        trigger_to_power_off(v7, v1, v2);
        v2 = g7;
        v9 = g7;
        v3 = v9;
        if (g7 != v9) {
            goto lab_0x8f603b94_4;
        }
        // 0x8f603bec
        return 0;
    }
    // 0x8f603b00
    if (fan54046_get_ibuslim(v5, v1, v2, v3, a1, g7) < 1) {
        // 0x8f603b6c
        v1 = (int32_t)"Accessory Unplugged from device!\n";
        v6 = print_log(1, (int32_t)"Accessory Unplugged from device!\n", v2, v3, a1, g7, a3, g8, g9, 0, v8, 0, 0);
        v7 = display_turn_off(v6, v1, v2, v3, a1, g7);
        trigger_to_power_off(v7, v1, v2);
        v2 = g7;
        v9 = g7;
        v3 = v9;
        if (g7 != v9) {
            goto lab_0x8f603b94_4;
        }
        // 0x8f603bec
        return 0;
    }
    while (true) {
        int32_t v13 = (int32_t)*(char *)&g2; // 0x8f603b10
        int32_t v14 = fan54046_chg_enable(0, v13, v2, v3, a1, g7, a3, g8); // 0x8f603b18
        fan54046_ibuslim_set(fan54046_get_ibuslim(v14, v13, v2, v3, a1, g7) - 1, v13, v2, v3, a1, g7);
        thread_sleep(1000, v13, v2, v3, a1, g7, a3, g8);
        char v15 = *(char *)&g2; // 0x8f603b34
        fan54046_chg_enable(1, (int32_t)v15, v2, v3, a1, g7, a3, g8);
        v1 = (int32_t)"Dropping Input Rate!\n";
        int32_t v16 = print_log(1, (int32_t)"Dropping Input Rate!\n", v2, v3, a1, g7, a3, g8, g9, 0, v8, 0, 0); // 0x8f603b44
        int32_t v17 = 0; // 0x8f603b04
        if (power_source_detected(v16, v1, v2, v3) != 0) {
            // 0x8f603b54
            v17 = event_wait((int32_t)&g5, v1);
            // branch -> 0x8f603b04
        }
        // 0x8f603b04
        if (fan54046_get_ibuslim(v17, v1, v2, v3, a1, g7) < 1) {
            // break -> 0x8f603b6c
            break;
        }
        // continue -> 0x8f603b10
    }
    // 0x8f603b6c
    v1 = (int32_t)"Accessory Unplugged from device!\n";
    v6 = print_log(1, (int32_t)"Accessory Unplugged from device!\n", v2, v3, a1, g7, a3, g8, g9, 0, v8, 0, 0);
    v7 = display_turn_off(v6, v1, v2, v3, a1, g7);
    trigger_to_power_off(v7, v1, v2);
    v2 = g7;
    v9 = g7;
    v3 = v9;
    if (g7 != v9) {
        goto lab_0x8f603b94_4;
    }
    // 0x8f603bec
    return 0;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 05:51:05
