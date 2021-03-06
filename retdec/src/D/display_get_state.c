//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ---------------- Integer Types Definitions -----------------

typedef int8_t int7_t;

// ------------------- Function Prototypes --------------------

int32_t __utag_longnameof(void);
int32_t __utags_flush(int32_t a1, int32_t a2);
int32_t arch_context_switch(int32_t a1, int32_t a2, int32_t a3);
void arm_data_abort_handler(void);
void arm_prefetch_abort_handler(void);
int32_t clock_config_cdc(int32_t a1, int32_t a2, int32_t a3);
char * dbval_malloc(char * size);
int32_t dbval_memcmp(char * str, char * str2, int32_t n);
int32_t display_draw_screen_line(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t display_get_auto_detect_state(int32_t a1, int32_t a2, int32_t a3);
int32_t display_get_state(int32_t a1, int32_t a2);
void function_8f64a1e0(void);
void function_8f64a234(int32_t a1, int32_t a2, int32_t a3);
int32_t get_current_path(int32_t a1, int32_t a2);
int32_t get_powerup_reason(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t is_battery_max17050(void);
int32_t is_charger_fan54046(void);
int32_t is_gpio_107_asserted(int32_t a1, int32_t a2);
char * mmc_sdhci_read(char * a1, int32_t a2, int32_t a3);
char * mmc_sdhci_write(char * a1, int32_t a2, int32_t a3);
int32_t pmic_arb_read_cmd(char * a1);
int32_t power_check(int32_t a1, int32_t a2);
int32_t sdhci_reset(int32_t * a1, char a2, int32_t a3);
int32_t SecAESDecrypt(char * a1, int32_t a2, int32_t a3);
int32_t SecAESEncrypt(char * a1, int32_t a2, int32_t a3);
int32_t SecTzVersion(int32_t a1, int32_t a2, int32_t a3);
int32_t set_current_path(int32_t a1, char * a2, int32_t a3, int32_t a4);
int32_t unregister_spmi_int_handler(int32_t a1, int32_t a2);
int32_t up_key_timer_func(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g22 = 0; // R0
int32_t g23 = 0; // R1
int32_t g24 = 0; // R2
int32_t g25 = 0; // R4
int32_t g26 = 0; // R5
int32_t g27 = 0; // R6
int32_t g28 = 0; // R7
int32_t g29 = 0; // R8
int32_t g1 = -0x16d2bc09; // 0x8f638ab0
int32_t g2 = 1; // 0x8f6ac0f0
int32_t g3 = 2; // 0x8f6afe0c
char * g4; // 0x8f6b7990
char * g5; // 0x8f6b7c28
int32_t g6 = 0; // 0x8f6b7c38
int32_t g7 = 0; // 0x8f6b7c48
int32_t g8 = 0; // 0x8f6b8afc
int32_t g9 = 0; // 0x8f6b8b04
int32_t g10 = 0; // 0x8f6b8b08
int32_t g11 = 0; // 0x8f6b8b0c
char * g12; // 0x8f6b8b10
char * g13; // 0x8f6e069a
char * g14; // 0x8f6e069b
char * g15; // 0x8f6e069c
char * g16; // 0x8f6e06aa
int32_t g17 = 0; // 0x8f6e07a0
char * g18; // 0x8f6e07a4
int32_t g19 = 0; // 0x8f6e07a8
int32_t g20 = 0; // 0x8f6e0c2c
int32_t g21 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f64fdf4 - 0x8f64fe2f
int32_t display_get_state(int32_t a1, int32_t a2) {
    // 0x8f64fdf4
    return g3;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 29
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:14:19
