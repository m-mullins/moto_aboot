//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t __gnu_uldivmod_helper(uint32_t a1, int32_t a2, int64_t a3, int32_t a4, int32_t * a5, int32_t a6, int32_t a7);
int32_t bytes_to_mpint(int32_t a1, int32_t a2, int32_t a3);
int32_t clock_config_mmc(int32_t a1, int32_t a2);
int32_t clock_config_uart_dm(void);
int32_t clock_lib2_rcg_set_rate(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t clock_lib2_rcg_set_rate_mnd(int32_t * a1, int32_t a2);
int32_t fastboot_get_reason(void);
int32_t get_accessory_type(int32_t a1);
int32_t gpio_config_factory_cable(int32_t a1, int32_t a2);
int32_t handle_fboot_oem_command_unlock(int32_t a1, int32_t a2);
char * init_temp_monitoring(void);
int32_t is_charger_bq24296(int32_t a1, int32_t a2);
int32_t is_charger_smb1359(int32_t a1, int32_t a2);
int32_t is_launch_to_fastboot_log(void);
int32_t is_stick_to_fastboot_mode(int32_t a1, int32_t a2);
int32_t is_warm_reset(int32_t a1);
int32_t mcs_DER_decodeContents(int32_t a1);
int32_t mcs_DER_decodeItem(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_mp_subb(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_unit_modular_inverse(int64_t a1);
int32_t mipi_mot_panel_apply_dt_cfg(int32_t a1, int32_t a2, int32_t a3);
int32_t mipi_mot_panel_off(int32_t a1, int32_t a2, int32_t a3);
int32_t mp_mont_prod(int32_t * a1, int32_t result, int32_t a3, int32_t a4);
int32_t msm_gpio_int_uninit(int32_t a1);
int32_t report_usbin_uv_status(int32_t a1, int32_t a2, int32_t a3);
int32_t set_accessory_type(int32_t a1);
int32_t thread_block(int32_t a1, int32_t a2);
int32_t thread_preempt(void);
int32_t write_protect_enabled_on_eng_hw(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

// --------------------- Global Variables ---------------------

int32_t g22 = 0; // LR
int32_t g23 = 0; // R0
int32_t g24 = 0; // R1
int32_t g25 = 0; // R12
int32_t g26 = 0; // R2
int32_t g27 = 0; // R4
int32_t g28 = 0; // R5
int32_t g29 = 0; // R6
int32_t g30 = 0; // R7
int32_t g31 = 0; // R8
int32_t g1 = -0x16d2be0d; // 0x8f6039b8
int32_t g2 = -0x16d2bfed; // 0x8f627020
int32_t g3 = -0x16d2be0d; // 0x8f6385e0
int32_t g4 = -0x16d2bfc9; // 0x8f6387c0
int32_t g5 = -0x16d2bc09; // 0x8f638ab0
int32_t g6 = 0x65440030; // 0x8f69c66f
int32_t g7 = 1; // 0x8f6ac0f0
int32_t g8 = 4; // 0x8f6acb30
char * g9 = "\n"; // 0x8f6afe00
char * g10; // 0x8f6b5080
char * g11; // 0x8f6b509c
char * g12; // 0x8f6c02dd
char * g13; // 0x8f6c02e4
int32_t g14 = 0; // 0x8f6c02ec
char * g15; // 0x8f6c032c
char * g16; // 0x8f6e069e
char * g17; // 0x8f6e06a5
char * g18; // 0x8f6e06a7
char * g19; // 0x8f6e06a8
int32_t g20 = 0; // 0x8f7112f4
int32_t g21 = 0; // 0x8f7114ac

// ------------------------ Functions -------------------------

// Address range: 0x8f602384 - 0x8f60248b
int32_t clock_config_uart_dm(void) {
    int32_t str;
    int32_t v1 = &str; // 0x8f60239c_0
    snprintf((char *)&str, 64, "uart%u_iface_clk", g23);
    int32_t str2;
    int32_t v2 = &str2; // 0x8f6023c0_0
    snprintf((char *)&str2, 64, "uart%u_core_clk", g23);
    int32_t v3;
    int32_t v4 = clk_get_set_enable(v1, 0, 1, g23, v3, 0, 0, str, 0, 0); // 0x8f6023d4
    int32_t v5 = v1; // 0x8f602418
    int32_t v6 = v3;
    if (v4 != 0) {
        // 0x8f6023e0
        print_log(-1, (int32_t)"failed to set %s ret = %d\n", v1, v1, v3, 0, 0, str, 0, 0, 0, 0, 0);
        _panic(g22, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"platform/msm8916/acpuclock.c", 162, (int32_t)&g6, 0, 0);
        v5 = 162;
        v6 = &g6;
        // branch -> 0x8f60240c
    }
    int32_t v7 = clk_get_set_enable(v2, 0x708000, 1, v5, v6, 0, 0, str, 0, 0); // 0x8f602418
    int32_t result = v7; // R0
    int32_t v8 = 0; // 0x8f602468_23
    if (v7 != 0) {
        // 0x8f602424
        print_log(-1, (int32_t)"failed to set %s ret = %d\n", v2, v2, v6, 0, 0, str, 0, 0, 0, 0, 0);
        int32_t v9 = _panic(g22, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"platform/msm8916/acpuclock.c", 169, (int32_t)&g6, 0, 0); // 0x8f60244c
        result = v9;
        v8 = v9;
        // branch -> 0x8f602450
    }
    result = v8;
    // 0x8f602464
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// size_t strlen(const char * s);
// size_t strnlen(const char * string, size_t maxlen);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 29
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:23:15