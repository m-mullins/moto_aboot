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

// ------------------------ Structures ------------------------

struct _TYPEDEF_lldiv_t {
    int64_t e0;
    int64_t e1;
};

// ------------------- Function Prototypes --------------------

int32_t config_cmd_allowed(char * a1, int32_t a2);
int32_t confirm_unlock(int32_t a1, int32_t a2);
int32_t handle_fboot_oem_command_lock(int32_t a1, int32_t a2);
int32_t hash_partition(int32_t a1, int32_t a2, int32_t a3);
int32_t list_partition(int32_t a1);
int32_t list_utag(char * a1);
int32_t oem_blankflash(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t oem_partition(int32_t a1, int32_t a2);
int32_t oem_partitions(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_ramdump_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_show_screen(int32_t a1, int32_t a2);
int32_t send_emmc_data(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t test_bool(char * str, int32_t a2, int32_t a3);
int32_t type_atoi_9(char * str, int32_t a2);
int32_t type_itoa_8(int32_t a1, int32_t a2);
int32_t unset_utag(int32_t a1, int32_t a2, int32_t a3);
int32_t validate_device(int32_t a1, char * a2);

// --------------------- Global Variables ---------------------

int32_t g7 = 0; // R1
int32_t g8 = 0; // R2
int32_t g9 = 0; // R3
int32_t g10 = 0; // R4
int32_t g11 = 0; // R5
int32_t g12 = 0; // R6
int32_t g1 = -0x16d2bc09; // 0x8f638ab0
char * g2[6] = {
    "fsg-id",
    "battery",
    "carrier",
    "bootmode",
    "enable_dump_gpt",
    "num-sims"
}; // 0x8f688974
int32_t g3 = 0x746e6300; // 0x8f6a4e20
int64_t g4 = 0; // 0x8f7112f4
int32_t g5 = 0; // 0x8f711514
char * g6; // 0x8f711530

// ------------------------ Functions -------------------------

// Address range: 0x8f6264ac - 0x8f626737
int32_t list_utag(char * a1) {
    int32_t v1 = (int32_t)a1;
    g10 = v1;
    int32_t v2 = g4;
    int32_t v3 = utag_shortnameof(v1, g7); // R6
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t result;
    if (__utag_defined(0, g10, g8, v2, v6, v5, 0, v4, 0, 0, 0) == 0) {
        // 0x8f6264e4
        fboot_info((int32_t)"INFO", (int32_t)"no such utag", g8, v2, v6, v5, 0, v4, 0, 0, 0);
        result = 3;
        // branch -> 0x8f6266e4
    } else {
        char * found_char_pos = strrchr((char *)g10, 58); // 0x8f626500
        int32_t v7 = (int32_t)(found_char_pos != NULL) + (int32_t)found_char_pos; // 0x8f626508
        g11 = v7;
        int32_t v8; // 0x8f626524
        if (type_atoi_9((char *)v7, 58) == 0) {
            // 0x8f62651c
            v8 = type_itoa_8((int32_t)__utag_typeof(0, g10, g8), g10);
            g11 = v8;
            // branch -> 0x8f62652c
        } else {
            // 0x8f62652c
            v8 = g11;
            // branch -> 0x8f62652c
        }
        int32_t v9 = __utag_is_protected(0, g10, g8, v2, v6, v5, 0, v4, 0, 0); // 0x8f626578
        int32_t v10; // R2
        int32_t v11; // R3
        if (v8 == 0) {
            // 0x8f626570
            v11 = (int32_t)"true";
            int32_t v12 = (int32_t)"true"; // 0x8f626598
            if (v9 == 0) {
                // if_8f626590_0_true
                v11 = (int32_t)"false";
                v12 = (int32_t)"false";
                // branch -> after_if_8f626590_0
            }
            int32_t v13 = v3; // 0x8f626594
            v10 = v13;
            fboot_info((int32_t)"INFO", (int32_t)"<UTAG name=\"%s\" protected=\"%s\">", v13, v12, v6, v5, 0, v4, 0, 0, 0);
            // branch -> 0x8f62659c
        } else {
            int32_t v14 = v9 == 0 ? (int32_t)"false" : (int32_t)"true";
            v10 = v3;
            v11 = g11;
            fboot_info((int32_t)"INFO", (int32_t)"<UTAG name=\"%s\" type=\"%s\" protected=\"%s\">", v3, g11, v14, v5, 0, v4, 0, 0, 0);
            v6 = v14;
            // branch -> 0x8f62659c
        }
        // 0x8f62659c
        fboot_info((int32_t)"INFO", (int32_t)"  <value>", v10, v11, v6, v5, 0, v4, 0, 0, 0);
        int32_t v15 = g10; // R1
        int32_t v16 = &v4; // 0x8f6265b0_0
        v10 = v16;
        int32_t v17 = __utag_format(0, g10, v16, 1024, v6, v5, 0, v4, 0, 0, 0, 0, 0, 0, 0, 0); // 0x8f6265b8
        int32_t v18 = v17; // R5
        int32_t v19; // 0x8f626658
        int32_t v20; // 0x8f62665c
        int32_t v21; // 0x8f62666834
        int32_t v22; // 0x8f62667c
        int32_t v23; // 0x8f62668c26
        int32_t v24; // R4
        int32_t v25; // R8
        int32_t v26; // 0x8f62667437
        int32_t v27; // 0x8f62669829
        int32_t v28; // 0x8f62669831
        int32_t v29; // 0x8f62664c
        int32_t v30; // 0x8f62666c35
        int32_t v31; // 0x8f62669027
        int32_t v32; // 0x8f62669030
        int32_t v33; // 0x8f626674
        if (v17 == 0) {
            // 0x8f6265c4
            strings_from(v16, v15, v10, 1024, v6, v5, 0, v4, 0, 0, 0, 0, 0, 0, 0);
            int32_t v34 = v18; // 0x8f6265d87
            if (v34 < strings_count(v16, v15, v10)) {
                while (true) {
                    int32_t v35 = *(int32_t *)(4 * v34 + v16); // 0x8f6265e0
                    v15 = 55;
                    int32_t v36 = strings_split_from(v35, 55, v10, 1024, v6, v5, 0, v4, 0, 0, 0, 0, 0, 0); // 0x8f6265e8
                    int32_t v37 = v36; // R9
                    int32_t v38 = 0; // 0x8f6265fc44
                    int32_t v39 = v37; // 0x8f62660446
                    uint32_t v40; // 0x8f6265d4
                    int32_t v41; // 0x8f6265d8
                    if (v38 < strings_count(v36, v15, v10)) {
                        int32_t v42 = *(int32_t *)(4 * v38 + v39); // 0x8f626604
                        v10 = v42;
                        v15 = (int32_t)"    %s";
                        fboot_info((int32_t)"INFO", (int32_t)"    %s", v42, 1024, v6, v5, 0, v4, 0, 0, 0);
                        int32_t v43 = v38 + 1; // 0x8f6265fc
                        int32_t v44 = v37; // 0x8f626604
                        while (v43 < strings_count(v37, v15, v10)) {
                            // 0x8f626604
                            v38 = v43;
                            v42 = *(int32_t *)(4 * v38 + v44);
                            v10 = v42;
                            v15 = (int32_t)"    %s";
                            fboot_info((int32_t)"INFO", (int32_t)"    %s", v42, 1024, v6, v5, 0, v4, 0, 0, 0);
                            v43 = v38 + 1;
                            v44 = v37;
                            // continue -> 0x8f626604
                        }
                        // 0x8f62661c
                        v18++;
                        strings_delete(v44, v15, v10, 1024, v6, v5, 0, v4);
                        v40 = strings_count(v16, v15, v10);
                        v41 = v18;
                        if (v41 >= v40) {
                            // break -> 0x8f62662c
                            break;
                        }
                        v34 = v41;
                        // continue -> 0x8f6265e0
                        continue;
                    }
                    // 0x8f62661c
                    v18++;
                    strings_delete(v39, v15, v10, 1024, v6, v5, 0, v4);
                    v40 = strings_count(v16, v15, v10);
                    v41 = v18;
                    if (v41 >= v40) {
                        // break -> 0x8f62662c
                        break;
                    }
                    v34 = v41;
                    // continue -> 0x8f6265e0
                }
                // 0x8f62662c
                strings_delete(v16, v15, v10, 1024, v6, v5, 0, v4);
                // branch -> 0x8f626634
                // 0x8f626634
                fboot_info((int32_t)"INFO", (int32_t)"  </value>", v10, 1024, v6, v5, 0, v4, 0, 0, 0);
                fboot_info((int32_t)"INFO", (int32_t)"  <description>", v10, 1024, v6, v5, 0, v4, 0, 0, 0);
                v29 = g10;
                v15 = v29;
                v24 = 0;
                v19 = __utag_describe(0, v29, v10, 1024, v6, v5, 0, v4, 0, 0, 0, 0, 0, 0);
                v20 = strings_from(v19, v15, v10, 1024, v6, v5, 0, v4, 0, 0, 0, 0, 0, 0, 0);
                v3 = v20;
                v21 = strings_count(v20, v15, v10);
                v30 = v24;
                v26 = v3;
                if (v30 >= v21) {
                    // 0x8f6266c0
                    strings_delete(v26, v15, v10, 1024, v6, v5, 0, v4);
                    fboot_info((int32_t)"INFO", (int32_t)"  </description>", v10, 1024, v6, v5, 0, v4, 0, 0, 0);
                    fboot_info((int32_t)"INFO", (int32_t)"</UTAG>\n", v10, 1024, v6, v5, 0, v4, 0, 0, 0);
                    // branch -> 0x8f6266e4
                    // 0x8f6266e4
                    if (v2 != (int32_t)g4) {
                        // 0x8f6266f4
                        __stack_chk_fail();
                        // branch -> 0x8f6266f8
                    }
                    // 0x8f6266f8
                    return 1;
                }
                int32_t v45 = v26; // 0x8f62667439
                int32_t v46 = v30; // 0x8f62666c38
                int32_t v47; // 0x8f626674
                while (true) {
                    // 0x8f626674
                    v33 = *(int32_t *)(4 * v46 + v45);
                    v15 = 55;
                    v22 = strings_split_from(v33, 55, v10, 1024, v6, v5, 0, v4, 0, 0, 0, 0, 0, 0);
                    v25 = v22;
                    v23 = strings_count(v22, v15, v10);
                    v31 = 0;
                    v27 = v25;
                    uint32_t v48; // 0x8f626668
                    int32_t v49; // 0x8f62666c
                    if (v31 < v23) {
                        v28 = v27;
                        v32 = v31;
                      lab_0x8f626698:;
                        int32_t v50; // 0x8f626698
                        while (true) {
                            int32_t v51 = *(int32_t *)(4 * v32 + v28); // 0x8f626698
                            v10 = v51;
                            v15 = (int32_t)"    %s";
                            fboot_info((int32_t)"INFO", (int32_t)"    %s", v51, 1024, v6, v5, 0, v4, 0, 0, 0);
                            int32_t v52 = v32 + 1; // 0x8f626690
                            v50 = v25;
                            if (v52 >= strings_count(v25, v15, v10)) {
                                // break -> 0x8f6266b0
                                break;
                            }
                            v28 = v50;
                            v32 = v52;
                            // continue -> 0x8f626698
                        }
                        // 0x8f6266b0
                        v24++;
                        strings_delete(v50, v15, v10, 1024, v6, v5, 0, v4);
                        v48 = strings_count(v3, v15, v10);
                        v49 = v24;
                        v47 = v3;
                        if (v49 >= v48) {
                            // break -> 0x8f6266c0
                            break;
                        }
                        v45 = v47;
                        v46 = v49;
                        // continue -> 0x8f626674
                        continue;
                    }
                  lab_0x8f6266b0:
                    // 0x8f6266b0
                    v24++;
                    strings_delete(v27, v15, v10, 1024, v6, v5, 0, v4);
                    v48 = strings_count(v3, v15, v10);
                    v49 = v24;
                    v47 = v3;
                    if (v49 >= v48) {
                        // break -> 0x8f6266c0
                        break;
                    }
                    v45 = v47;
                    v46 = v49;
                    // continue -> 0x8f626674
                }
                // 0x8f6266c0
                strings_delete(v47, v15, v10, 1024, v6, v5, 0, v4);
                fboot_info((int32_t)"INFO", (int32_t)"  </description>", v10, 1024, v6, v5, 0, v4, 0, 0, 0);
                fboot_info((int32_t)"INFO", (int32_t)"</UTAG>\n", v10, 1024, v6, v5, 0, v4, 0, 0, 0);
                // branch -> 0x8f6266e4
                // 0x8f6266e4
                if (v2 != (int32_t)g4) {
                    // 0x8f6266f4
                    __stack_chk_fail();
                    // branch -> 0x8f6266f8
                }
                // 0x8f6266f8
                return 1;
            }
            // 0x8f62662c
            strings_delete(v16, v15, v10, 1024, v6, v5, 0, v4);
            // branch -> 0x8f626634
        }
        // 0x8f626634
        fboot_info((int32_t)"INFO", (int32_t)"  </value>", v10, 1024, v6, v5, 0, v4, 0, 0, 0);
        fboot_info((int32_t)"INFO", (int32_t)"  <description>", v10, 1024, v6, v5, 0, v4, 0, 0, 0);
        v29 = g10;
        v15 = v29;
        v24 = 0;
        v19 = __utag_describe(0, v29, v10, 1024, v6, v5, 0, v4, 0, 0, 0, 0, 0, 0);
        v20 = strings_from(v19, v15, v10, 1024, v6, v5, 0, v4, 0, 0, 0, 0, 0, 0, 0);
        v3 = v20;
        v21 = strings_count(v20, v15, v10);
        v30 = v24;
        v26 = v3;
        if (v30 < v21) {
            while (true) {
                // 0x8f626674
                v33 = *(int32_t *)(4 * v30 + v26);
                v15 = 55;
                v22 = strings_split_from(v33, 55, v10, 1024, v6, v5, 0, v4, 0, 0, 0, 0, 0, 0);
                v25 = v22;
                v23 = strings_count(v22, v15, v10);
                v31 = 0;
                v27 = v25;
                if (v31 < v23) {
                    v28 = v27;
                    v32 = v31;
                    goto lab_0x8f626698;
                }
                goto lab_0x8f6266b0;
            }
        }
        // 0x8f6266c0
        strings_delete(v26, v15, v10, 1024, v6, v5, 0, v4);
        fboot_info((int32_t)"INFO", (int32_t)"  </description>", v10, 1024, v6, v5, 0, v4, 0, 0, 0);
        fboot_info((int32_t)"INFO", (int32_t)"</UTAG>\n", v10, 1024, v6, v5, 0, v4, 0, 0, 0);
        result = 1;
        // branch -> 0x8f6266e4
    }
    // 0x8f6266e4
    if (v2 != (int32_t)g4) {
        // 0x8f6266f4
        __stack_chk_fail();
        // branch -> 0x8f6266f8
    }
    // 0x8f6266f8
    return result;
}

// --------------- Statically Linked Functions ----------------

// lldiv_t __aeabi_ldivmod(long long n, long long d);
// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int sprintf(char * restrict s, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// int strncasecmp(const char * s1, const char * s2, size_t n);
// int strncmp(const char * s1, const char * s2, size_t n);
// size_t strnlen(const char * string, size_t maxlen);
// char * strrchr(char * s, int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 17
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:38:38