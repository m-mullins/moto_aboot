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

int32_t _dputs(int32_t a1, int32_t a2, int32_t a3);
int32_t _udc_endpoint_alloc(char a1, char a2, int16_t a3, char a4);
int32_t charger_gone_irq_handler(int32_t (*a1)(int32_t), int32_t a2, int32_t a3);
int32_t confession_printf(char * a1, int32_t a2);
int32_t confession_redirect_to_logger(char a1, int32_t a2, int32_t a3);
int32_t display_turn_on(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t fdt_first_property_offset(void);
int32_t fdt_get_name(int32_t a1, int32_t a2, int32_t * a3);
int32_t get_platform_name(void);
int32_t get_temperature_thresholds(int32_t a1, char * a2, int32_t a3);
int32_t halt(int32_t result, int32_t a2, int32_t a3);
int32_t is_display_on(void);
int32_t mcs_habp_rsa_core(int32_t a1, int32_t a2, int32_t a3, int32_t a4, uint32_t a5, int32_t a6, int32_t * a7);
int32_t mcs_habp_rsa_small(int32_t a1);
int32_t mcs_memcpy(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_mp_mont_prod(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mipi_detect(int32_t a1, int32_t a2);
int32_t mipi_init(int32_t a1, int32_t a2);
int32_t onkey_27(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
char * platform_early_init(char * result);
int32_t platform_init(int32_t a1, int32_t a2);
int32_t thread_set_name(int32_t a1);
int32_t thread_set_priority(int32_t a1);
int32_t tlmm_set_hdrive_ctrl(int32_t result, int32_t a2, int32_t a3);
int32_t tlmm_set_pull_ctrl(int32_t result, int32_t a2, int32_t a3);
int32_t udc_endpoint_alloc(int32_t a1, int32_t a2, int32_t a3);
int32_t ufs_get_page_size(int32_t a1);
int32_t ufs_read(int32_t a1, int32_t a2, int32_t a3);
int32_t update_toggle_menu_item(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t usbin_valid_irq_handler(int32_t (*a1)(int32_t), int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g25 = 0; // LR
int32_t g26 = 0; // R0
int32_t g27 = 0; // R1
int32_t g28 = 0; // R10
int32_t g29 = 0; // R11
int32_t g30 = 0; // R2
int32_t g31 = 0; // R3
int32_t g32 = 0; // R4
int32_t g33 = 0; // R5
int32_t g34 = 0; // R6
int32_t g35 = 0; // R7
int32_t g36 = 0; // R8
int32_t g37 = 0; // R9
char * g1; // 0x8f610c40
int32_t g2 = -0x16d2bc09; // 0x8f638ab0
char * g3 = "\xd0\x0d\xfe\xed"; // 0x8f68ac00
int32_t g4 = 0x10001; // 0x8f6ac04c
int32_t g5 = 1; // 0x8f6ac0f0
int32_t g6 = 3; // 0x8f6ac52c
int32_t g7 = 0; // 0x8f6ac5d8
int32_t g8 = 2; // 0x8f6ac614
int32_t g9 = 0; // 0x8f6ac618
int32_t g10 = 0; // 0x8f6ac7a8
int32_t g11 = 2; // 0x8f6afe14
int32_t g12 = 0; // 0x8f6b7930
int32_t g13 = 0; // 0x8f6b7934
int32_t g14 = 0; // 0x8f6e06a0
char * g15; // 0x8f6e0980
int32_t g16 = 0; // 0x8f6e0998
int32_t g17 = 0; // 0x8f6e09a0
int32_t g18 = 0; // 0x8f6e09b0
int32_t g19 = 0; // 0x8f6e0c3c
char * g20; // 0x8f6e12e8
int32_t g21 = 0; // 0x8f6e12ec
int32_t g22 = 0; // 0x8f6e12f0
int32_t g23 = 0; // 0x8f7112f4
int32_t g24 = 0; // 0x8f7114ac

// ------------------------ Functions -------------------------

// Address range: 0x8f632e18 - 0x8f632ef7
int32_t get_temperature_thresholds(int32_t a1, char * a2, int32_t a3) {
    int32_t str = (int32_t)a2;
    int32_t v1 = g23;
    int32_t v2 = get_device_setting_offset((int32_t)"battery", str, a3, v1, a1, v1, a3, g32); // 0x8f632e38
    if (v2 < 0) {
        // if_8f632e40_0_true
        // branch -> 0x8f632e60
        // 0x8f632e60
        print_log(-1, (int32_t)"Temperature feature disabled!\n", a3, v1, a1, v1, a3, g32, g33, g34, g35, g36, g37);
        // branch -> 0x8f632ec0
        // 0x8f632ec0
        if (v1 != g23) {
            // 0x8f632ed0
            __stack_chk_fail();
            // branch -> 0x8f632ed4
        }
        // 0x8f632ed4
        return 0;
    }
    int32_t str2 = get_device_type(v2, str, a3, v1); // 0x8f632e4c
    if (str2 == 0) {
        // 0x8f632e58
        // branch -> 0x8f632e60
        // 0x8f632e60
        print_log(-1, (int32_t)"incompatible battery type!\n", a3, v1, a1, v1, a3, g32, g33, g34, g35, g36, g37);
        // branch -> 0x8f632ec0
        // 0x8f632ec0
        if (v1 != g23) {
            // 0x8f632ed0
            __stack_chk_fail();
            // branch -> 0x8f632ed4
        }
        // 0x8f632ed4
        return 0;
    }
    int32_t v3 = fdt_subnode_offset((char *)&g3, v2, (int32_t)"temp-conv", v1, a1, v1, a3, g32, g33); // 0x8f632e74
    int32_t result;
    if (v3 > -1) {
        // 0x8f632e94
        if (strcmp((char *)str, (char *)str2) == 0) {
            // 0x8f632ea8
            get_temperature_setting(a1, v3, (int32_t)"temp-conv", v1, a1, v1, a3, g32, g33, g34, g35);
            result = 1;
            // branch -> 0x8f632ec0
        } else {
            result = 0;
        }
    } else {
        // 0x8f632e80
        print_log(-1, (int32_t)"Failed to get temp-conv at node@0x%x\n", v2, v1, a1, v1, a3, g32, g33, g34, g35, g36, g37);
        result = 0;
        // branch -> 0x8f632ec0
    }
    // 0x8f632ec0
    if (v1 != g23) {
        // 0x8f632ed0
        __stack_chk_fail();
        // branch -> 0x8f632ed4
    }
    // 0x8f632ed4
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int vsnprintf(char * restrict s, size_t maxlen, const char * restrict format, _G_va_list arg);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:51:07
