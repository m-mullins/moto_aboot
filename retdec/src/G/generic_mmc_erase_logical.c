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

int32_t _fdt_add_property(int32_t a1, int32_t a2, char * a3, int32_t a4);
int32_t _fdt_packblocks(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t _fdt_rw_check_header(void);
int32_t blink_callback(int32_t a1, int32_t a2);
int32_t build_sig_for_all(char * str, int32_t (*a2)(int32_t, int32_t), int32_t a3);
int32_t cmd_line_parse(int32_t a1, int32_t a2, int32_t a3);
int32_t cmd_overlay_command_tokens(char * str6, int32_t a2);
int32_t cmd_token_append(int32_t * a1, int32_t * a2, int32_t a3);
int32_t cmd_token_free(char * a1, int32_t a2);
char * collect_desc(int32_t * str2);
int32_t display_auto_detect(int32_t a1, int32_t a2, int32_t a3);
int32_t display_draw_text_with_color(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);
int32_t display_render_done(int32_t a1, int32_t a2);
int32_t draw_runlength_image(char * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t draw_text_in_landscape(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t draw_text_in_portrait(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t fdt_reserveprop(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t generic_mmc_erase_legacy(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t generic_mmc_erase_logical(int64_t a1, int32_t a2, uint32_t a3, int32_t a4);
int32_t led_on(char a1, int32_t a2, int32_t a3);
int32_t lstrdup(char * str);
int32_t strtok_r_q_constprop_3(void);

// --------------------- Global Variables ---------------------

int32_t g26 = 0; // LR
int32_t g27 = 0; // R0
int32_t g28 = 0; // R1
int32_t g29 = 0; // R10
int32_t g30 = 0; // R11
int32_t g31 = 0; // R12
int32_t g32 = 0; // R2
int32_t g33 = 0; // R3
int32_t g34 = 0; // R4
int32_t g35 = 0; // R5
int32_t g36 = 0; // R6
int32_t g37 = 0; // R7
int32_t g38 = 0; // R8
int32_t g39 = 0; // R9
bool g1 = false; // flagc
int32_t g2 = 0xa092000; // 0x8f6826e4
char * g3; // 0x8f6a4e20
int32_t g4 = 2; // 0x8f6afe0c
char * g5 = "\x01"; // 0x8f6afe10
int32_t g6 = 0; // 0x8f6e0bfc
int32_t g7 = 0; // 0x8f6e0c00
int32_t g8 = 0; // 0x8f6e0c08
int32_t g9 = 0; // 0x8f6e0c2c
int32_t g10 = 0; // 0x8f6e0c30
int32_t g11 = 0; // 0x8f6e0c38
char * g12; // 0x8f6e0c40
char * g13; // 0x8f6e0c48
char g14 = 0; // 0x8f6e0c49
int32_t g15 = 0; // 0x8f6e0c68
int32_t g16 = 0; // 0x8f6e0c6c
char * g17; // 0x8f6e1000
int32_t g18 = 0; // 0x8f6e1200
char * g19; // 0x8f6e122c
int32_t g20 = 0; // 0x8f6e1253
int32_t g21 = 0; // 0x8f6e1254
int32_t g22 = 0; // 0x8f6e12dc
char * g23; // 0x8f6e12e4
char * g24; // 0x8f7112f4
int32_t g25 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f650f94 - 0x8f651153
int32_t generic_mmc_erase_logical(int64_t a1, int32_t a2, uint32_t a3, int32_t a4) {
    int32_t v1 = a1;
    int32_t v2 = g34; // 0x8f650f94
    int32_t v3 = g35; // 0x8f650f94
    int32_t v4 = g36; // 0x8f650f94
    int32_t v5 = g37; // 0x8f650f94
    int32_t v6 = g38; // 0x8f650f94
    int32_t v7 = g39; // 0x8f650f94
    int32_t v8 = g29; // 0x8f650f94
    int32_t v9 = g30; // 0x8f650f94
    int32_t v10 = g26; // 0x8f650f94
    g34 = v1;
    g35 = a2;
    char * v11 = g24;
    int32_t v12 = g25;
    uint32_t v13 = 512 * *(int32_t *)(v12 + 44); // 0x8f650fc4
    if (a3 == a4) {
        // 0x8f650fe0
        g27 = 0;
        // branch -> 0x8f651128
        // 0x8f651128
        if (v11 != g24) {
            // 0x8f65113c
            __stack_chk_fail();
            // branch -> 0x8f651140
        }
        // 0x8f651140
        return g27;
    }
    uint32_t v14 = *(int32_t *)(v12 + 32); // 0x8f650fec
    uint32_t v15 = *(int32_t *)(v12 + 36); // 0x8f650fec
    uint32_t v16 = v1 + a3; // 0x8f650ff0
    g36 = v16;
    int32_t v17 = a4 + a2 + (int32_t)(v16 < a3); // 0x8f650ff4
    g37 = v17;
    bool v18 = false; // 0x8f651000
    bool v19 = v17 >= v15; // 0x8f651000
    if (v17 == v15) {
        // if_8f650ffc_0_true
        v18 = v16 == v14;
        v19 = v16 >= v14;
        // branch -> after_if_8f650ffc_0
    }
    // after_if_8f650ffc_0
    if (!v18 && !((v19 ^ true))) {
        // 0x8f651004
        return print_log(1, (int32_t)"Invalid logical range: start=%llu, end=%llu, total=%llu\n", v1, a2, v16, v17, v14, v15, v13, 0, a3, a4, 0);
    }
    // 0x8f651028
    g38 = a3;
    g39 = a4;
    g29 = v13;
    if (a4 == 0) {
        // after_if_8f651034_0
        if (v13 > a3) {
            // 0x8f65104c
            g34 = v2;
            g35 = v3;
            g36 = v4;
            g37 = v5;
            g38 = v6;
            g39 = v7;
            g29 = v8;
            g30 = v9;
            g26 = v10;
            return generic_mmc_erase_legacy(v1, a2, a3, 0);
        }
    }
    int64_t v20 = v13;
    int32_t v21 = 0; // R3
    __aeabi_uldivmod(a1, v20);
    g30 = v21 | v13;
    int32_t v22; // 0x8f6510c8
    int32_t v23;
    uint32_t v24; // 0x8f6510e0
    uint32_t v25; // 0x8f6510d4
    uint32_t v26; // 0x8f6510d8
    int32_t v27; // 0x8f6510e4
    uint32_t v28; // 0x8f6510b8
    int32_t v29; // 0x8f65111c
    int32_t v30; // 0x8f6510b8
    int32_t v31; // 0x8f6510e0
    bool v32; // 0x8f6510e8
    int32_t v33; // 0x8f6510e4
    int32_t v34; // 0x8f6510e4
    int32_t v35; // 0x8f6510bc
    if (v13 == v21) {
        // 0x8f651098
        __aeabi_uldivmod((int64_t)g36, v20);
        if (v13 != 0) {
            // 0x8f6510b8
            v28 = g36;
            v30 = v28 - v13;
            g36 = v30;
            v35 = g37 - ((int32_t)(v28 >= v13) ^ 1);
            g37 = v35;
            v22 = generic_mmc_erase_legacy(v30, v35, v13, 0);
            g27 = v22;
            if (v22 != 0) {
                // 0x8f651128
                if (v11 != g24) {
                    // 0x8f65113c
                    __stack_chk_fail();
                    // branch -> 0x8f651140
                }
                // 0x8f651140
                return g27;
            }
        }
        // 0x8f6510d4
        v25 = g36;
        v26 = g37;
        g38 = v13;
        v24 = g34;
        v31 = v25 - v24;
        g32 = v31;
        v27 = g35;
        v33 = (int32_t)(v25 >= v24) ^ 1;
        v34 = v26 - v27;
        g33 = v34 - v33;
        if (v26 == v27) {
            // after_if_8f6510ec_0
            if (v25 != v24) {
                // if_8f6510f4_0_true
                v23 = -1;
                // branch -> after_if_8f6510f4_0
            } else {
                v23 = 0;
            }
        } else {
            // if_8f6510f4_0_true
            v23 = -1;
            // branch -> after_if_8f6510f4_0
        }
        // after_if_8f6510f4_0
        g27 = v23;
        if (v34 == v33) {
            // if_8f6510fc_0_true
            if (v31 < v13) {
                // 0x8f651128
                if (v11 != g24) {
                    // 0x8f65113c
                    __stack_chk_fail();
                    // branch -> 0x8f651140
                }
                // 0x8f651140
                return g27;
            }
        }
        // 0x8f651104
        v32 = v26 == v27 ? v25 >= v24 : v26 >= v27;
        g1 = v32;
        if (v25 == v24 && v26 == v27 || v32 ^ true) {
            // 0x8f650fe0
            g27 = 0;
            // branch -> 0x8f651128
        } else {
            // 0x8f651110
            g39 = &g25;
            g27 = v24;
            v29 = *(int32_t *)(g25 + 64);
            g31 = v29;
            g28 = v27;
            g26 = -0x709aeed8;
            ((int32_t (*)(int32_t, int32_t))v29)(v24, v27);
            // branch -> 0x8f651128
        }
        // 0x8f651128
        if (v11 != g24) {
            // 0x8f65113c
            __stack_chk_fail();
            // branch -> 0x8f651140
        }
        // 0x8f651140
        return g27;
    }
    // 0x8f651068
    g38 = 0;
    int32_t v36 = -v21; // 0x8f651078
    g39 = v36;
    int32_t v37 = generic_mmc_erase_legacy(g34, g35, 0, v36); // 0x8f651084
    g27 = v37;
    if (v37 != 0) {
        // 0x8f651128
        if (v11 != g24) {
            // 0x8f65113c
            __stack_chk_fail();
            // branch -> 0x8f651140
        }
        // 0x8f651140
        return g27;
    }
    uint32_t v38 = g34; // 0x8f651090
    int32_t v39 = v38 + g38; // 0x8f651090
    g34 = v39;
    g35 = g35 + g39 + (int32_t)(v39 < v38);
    // branch -> 0x8f651098
    // 0x8f651098
    __aeabi_uldivmod((int64_t)g36, v20);
    if (v13 != 0) {
        // 0x8f6510b8
        v28 = g36;
        v30 = v28 - v13;
        g36 = v30;
        v35 = g37 - ((int32_t)(v28 >= v13) ^ 1);
        g37 = v35;
        v22 = generic_mmc_erase_legacy(v30, v35, v13, 0);
        g27 = v22;
        if (v22 != 0) {
            // 0x8f651128
            if (v11 != g24) {
                // 0x8f65113c
                __stack_chk_fail();
                // branch -> 0x8f651140
            }
            // 0x8f651140
            return g27;
        }
    }
    // 0x8f6510d4
    v25 = g36;
    v26 = g37;
    g38 = v13;
    v24 = g34;
    v31 = v25 - v24;
    g32 = v31;
    v27 = g35;
    v33 = (int32_t)(v25 >= v24) ^ 1;
    v34 = v26 - v27;
    g33 = v34 - v33;
    if (v26 == v27) {
        // after_if_8f6510ec_0
        if (v25 != v24) {
            // if_8f6510f4_0_true
            v23 = -1;
            // branch -> after_if_8f6510f4_0
        } else {
            v23 = 0;
        }
    } else {
        // if_8f6510f4_0_true
        v23 = -1;
        // branch -> after_if_8f6510f4_0
    }
    // after_if_8f6510f4_0
    g27 = v23;
    if (v34 == v33) {
        // if_8f6510fc_0_true
        if (v31 < v13) {
            // 0x8f651128
            if (v11 != g24) {
                // 0x8f65113c
                __stack_chk_fail();
                // branch -> 0x8f651140
            }
            // 0x8f651140
            return g27;
        }
    }
    // 0x8f651104
    v32 = v26 == v27 ? v25 >= v24 : v26 >= v27;
    g1 = v32;
    if (v25 == v24 && v26 == v27 || v32 ^ true) {
        // 0x8f650fe0
        g27 = 0;
        // branch -> 0x8f651128
    } else {
        // 0x8f651110
        g39 = &g25;
        g27 = v24;
        v29 = *(int32_t *)(g25 + 64);
        g31 = v29;
        g28 = v27;
        g26 = -0x709aeed8;
        ((int32_t (*)(int32_t, int32_t))v29)(v24, v27);
        // branch -> 0x8f651128
    }
    // 0x8f651128
    if (v11 != g24) {
        // 0x8f65113c
        __stack_chk_fail();
        // branch -> 0x8f651140
    }
    // 0x8f651140
    return g27;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// char * strchr(char * s, int c);
// int strcmp(const char * s1, const char * s2);
// char * strcpy(char * restrict dest, const char * restrict src);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// size_t strnlen(const char * string, size_t maxlen);
// char * strrchr(char * s, int c);
// size_t strspn(const char * s, const char * accept);
// char * strstr(char * haystack, const char * needle);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 22
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:49:08