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

int32_t _fdt_check_node_offset(int32_t a1, int32_t a2);
int32_t fboot_cmd_flash_name_mangle(int32_t a1, int32_t a2);
int32_t fdt_get_alias_namelen(char * a1, int32_t a2, int32_t a3);
int32_t fdt_getprop(int32_t a1, int32_t a2, char * str);
int32_t fdt_next_tag(int32_t a1, int32_t a2, int32_t * a3);
int32_t font_draw_char_moto_horizontal(int32_t * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t font_set_type(char * str, int32_t a2, int32_t a3);
int32_t get_code128_checksum(char * str, int32_t a2, int32_t a3);
int32_t get_num_of_sims(char * a1, int32_t a2, int32_t a3);
int32_t get_sku(char * a1, int32_t a2);
int32_t get_termination_code128(int32_t a1, int32_t a2, int32_t a3);
int32_t gpio_set_value(uint32_t a1, int32_t a2, int32_t a3);
int32_t gpio_status(int32_t a1, int32_t a2, int32_t a3);
int32_t is_fastboot_screen(int32_t a1, int32_t a2, int32_t a3);
int32_t lines(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_multi_multiply(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_multi_shift_left(int32_t * a1, int32_t a2, uint32_t a3);
int32_t nexus_usbpidvid(int32_t a1, int32_t a2);
int32_t pmic_get_extra_reset_info(int32_t a1, int32_t a2);
int32_t secure_allow_console(int32_t a1, int32_t a2);
int32_t set_flash_fail(void);
int32_t set_show_battery_fn(char * a1, int32_t a2, int32_t a3);
int32_t show_fastboot_menu(int32_t a1, int32_t a2);
void thread_become_idle(int32_t a1, int32_t a2, int32_t a3);
int32_t timer_cancel(int32_t result, int32_t a2);
int32_t timer_set_periodic(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t type_atoi_11(char * str, int32_t a2, int32_t a3);
int32_t wait_queue_init(int32_t * a1, int32_t a2);
int32_t XXH32_init(char * a1, int32_t a2);
int32_t XXH32_update(char * a1, char * a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g15 = 0; // R2
int32_t g16 = 0; // R4
int32_t g17 = 0; // R5
int32_t g18 = 0; // R6
int32_t g19 = 0; // R7
int32_t g20 = 0; // R8
int32_t g21 = 0; // R9
int32_t g1 = -0x16d2bfc9; // 0x8f638578
int32_t g2 = 0; // 0x8f69eef0
int32_t g3 = 0x66c06cc; // 0x8f6a28d8
char * g4 = "\x01"; // 0x8f6a3f48
int32_t g6 = 0x10100; // 0x8f6a9f58
int32_t g7 = 1; // 0x8f6ac0f0
int32_t g8 = -1; // 0x8f6ac214
int32_t g9 = 0; // 0x8f6e0850
int32_t g10 = 0; // 0x8f6e09b0
int32_t g11 = 0; // 0x8f6e09b4
int32_t g12 = 0; // 0x8f7112f4
int32_t g13 = 0; // 0x8f7114a8
int32_t g14 = 0; // 0x8f7114ac
int32_t * g5 = &g2; // 0x8f6a9eec

// ------------------------ Functions -------------------------

// Address range: 0x8f6328fc - 0x8f6329ab
int32_t nexus_usbpidvid(int32_t a1, int32_t a2) {
    // 0x8f6328fc
    int32_t v1; // bp-16
    int32_t v2 = &v1; // 0x8f632900_1
    int32_t v3 = g12;
    v1 = -1;
    int32_t v4 = g8;
    int32_t v5;
    int32_t v6; // 0x8f63295c
    int32_t result; // 0x8f632974
    if (v4 <= -1) {
        // 0x8f632928
        print_log(-1, (int32_t)"No product setting\n", (int32_t)&g8, (int32_t)&g12, -1, v3, g16, 0, v5, 0, 0, 0, 0);
        // branch -> 0x8f63295c
        // 0x8f63295c
        v6 = v1;
        result = v6;
        if (v6 == 1) {
            int32_t v7 = &g8; // 0x8f632970
            print_log(2, (int32_t)"Using nexus PID/VID", v7, 1, 1, v3, g16, 0, v5, 0, 0, 0, 0);
            result = v1;
            // branch -> 0x8f632974
        }
        // 0x8f632974
        // branch -> 0x8f632978
        // 0x8f632978
        if (v3 != g12) {
            // 0x8f632988
            __stack_chk_fail();
            // branch -> 0x8f63298c
        }
        // 0x8f63298c
        return result;
    }
    int32_t v8 = get_int_prop((int32_t)"nexus_usbpidvid", v4, v2, (int32_t)&g12, -1, v3, g16); // 0x8f63293c
    int32_t result2 = v8; // R0
    int32_t v9 = -1; // 0x8f632990_24
    if (v8 != -1) {
        int32_t v10 = v1; // 0x8f632954
        print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"nexus_usbpidvid", v10, v10, v3, g16, 0, v5, 0, 0, 0, 0);
        // branch -> 0x8f63295c
        // 0x8f63295c
        v6 = v1;
        result = v6;
        if (v6 == 1) {
            // 0x8f632968
            print_log(2, (int32_t)"Using nexus PID/VID", (int32_t)"nexus_usbpidvid", 1, 1, v3, g16, 0, v5, 0, 0, 0, 0);
            result = v1;
            // branch -> 0x8f632974
        }
        // 0x8f632974
        result2 = result;
        v9 = result;
        // branch -> 0x8f632978
    }
    // 0x8f632978
    if (v3 != g12) {
        // 0x8f632988
        __stack_chk_fail();
        // branch -> 0x8f63298c
    } else {
        result2 = v9;
    }
    // 0x8f63298c
    return result2;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// int strcmp(const char * s1, const char * s2);
// char * strcpy(char * restrict dest, const char * restrict src);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_bswap_i32(int32_t a1);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:10:18