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

char * display_mode_text(char * a1, int32_t a2);
char * display_sw_version_38(void);
int32_t fastboot_flush_all_logs_35(int32_t a1, int32_t a2);
int32_t get_line(int32_t a1);
int32_t menu_init(int32_t a1);
int32_t menu_ondraw(void);
int32_t menu_onkey(void);
int32_t menu_start(int32_t a1, int32_t a2);
int32_t onkey_37(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t screen_onkey(int32_t a1, int32_t a2);
int32_t screen_start(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t screen_stop(int32_t a1, int32_t a2, int32_t a3);
int32_t set_content_to_show_34(int32_t a1, int32_t a2);
int32_t stop_36(int32_t a1, int32_t a2);
int32_t unlock_abort(int32_t a1, int32_t a2, int32_t a3);
int32_t unlock_continue(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g55 = 0; // LR
int32_t g56 = 0; // R0
int32_t g57 = 0; // R1
int32_t g58 = 0; // R2
int32_t g59 = 0; // R3
int32_t g60 = 0; // R4
int32_t g61 = 0; // R5
int32_t g62 = 0; // R6
int32_t g63 = 0; // R7
int32_t g64 = 0; // R8
int32_t g1 = -0x16d2bfed; // 0x8f623e84
int32_t (*g2)() = (int32_t (*)())-0x16d2bfc9; // 0x8f638578
int32_t g3 = -0x16d2bc09; // 0x8f638ab0
int32_t g4 = -0x15ffffc9; // 0x8f63ca90
int32_t g5 = -0x16d2bfed; // 0x8f63ccf0
int32_t g6 = 0x40000; // 0x8f69cce4
int32_t g7 = 0x80000; // 0x8f69ccf0
char * g8; // 0x8f6a4e20
int32_t g9 = 0; // 0x8f6ac7f8
int32_t g10 = 0; // 0x8f6ac7fc
int32_t g11 = 0; // 0x8f6ac848
int32_t g12 = 0; // 0x8f6ac84c
int32_t g13 = 0; // 0x8f6ac898
int32_t g14 = 0; // 0x8f6ac89c
int32_t g15 = 0; // 0x8f6ac8f0
int32_t g16 = 0; // 0x8f6ac92c
int32_t g17 = 0; // 0x8f6ac930
int32_t g18 = 0; // 0x8f6ac97c
int32_t g19 = 0; // 0x8f6ac980
int32_t g20 = 0; // 0x8f6ac9cc
int32_t g21 = 0; // 0x8f6ac9d0
int32_t g22 = 3; // 0x8f6aca20
int32_t g23 = 0; // 0x8f6aca24
int32_t g24 = -0x709e1c78; // 0x8f6aca70
int32_t g25 = 2; // 0x8f6aca74
int32_t g26 = 0; // 0x8f6b1698
int32_t g27 = 0; // 0x8f6b16c4
int32_t g28 = 0; // 0x8f6b170c
int32_t g29 = 0; // 0x8f6e09bc
int32_t g30 = 0; // 0x8f6e09c0
int32_t g31 = 0; // 0x8f6e09c4
int32_t g32 = 0; // 0x8f6e09c8
int32_t g33 = 0; // 0x8f6e09e8
int32_t g34 = 0; // 0x8f6e09ec
int32_t g35 = 0; // 0x8f6e09f0
int32_t g36 = 0; // 0x8f6e09f4
int32_t g37 = 0; // 0x8f6e09f8
int32_t g38 = 0; // 0x8f6e09fc
char * g39; // 0x8f6e0a00
int32_t g40 = 0; // 0x8f6e0a04
char * g41; // 0x8f6e0a09
int32_t g42 = 0; // 0x8f6e0a28
int32_t g43 = 0; // 0x8f6e0a44
char * g44; // 0x8f6e0a49
int32_t g45 = 0; // 0x8f6e0a4c
int32_t g46 = 0; // 0x8f7112f4
int32_t g47 = 0; // 0x8f7114b8
int32_t g48 = 0; // 0x8f711514
char * g49; // 0x8f711530
int32_t g50 = 0; // 0x8f712580
int32_t g51 = 0; // 0x8f71259c
int32_t g52 = 0; // 0x8f7125a0
int32_t g53 = 0; // 0x8f7125a4
int32_t g54 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f63c9c0 - 0x8f63ca0f
int32_t screen_onkey(int32_t a1, int32_t a2) {
    // 0x8f63c9c0
    g56 = a1;
    g57 = a2;
    int32_t v1 = g60; // 0x8f63c9c8
    int32_t result = g46;
    g60 = &g46;
    int32_t v2 = result;
    if (a2 != 0) {
        // 0x8f63c9dc
        menu_onkey();
        v2 = g46;
        // branch -> 0x8f63c9ec
    }
    // 0x8f63c9ec
    if (result != v2) {
        // 0x8f63c9fc
        __stack_chk_fail();
        // branch -> 0x8f63ca00
    }
    // 0x8f63ca00
    g60 = v1;
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// size_t strlen(const char * s);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 16
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:44:58
