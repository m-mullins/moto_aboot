//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t dev_tree_appended(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t platform_dt_absolute_match(char * a1, int32_t * a2);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f613d10 - 0x8f613eeb
int32_t platform_dt_absolute_match(char * a1, int32_t * a2) {
    int32_t v1 = 0; // R2
    int32_t v2 = (int32_t)a1;
    int32_t v3 = (int32_t)a2;
    int32_t v4 = (int32_t)*(int16_t *)a1; // 0x8f613d20
    int32_t v5 = *(int32_t *)(v2 + 8); // R5
    if (v4 == board_platform_id(v2, v3) % 0x10000) {
        int32_t v6 = board_hardware_id(v4, v3, v1, g1); // 0x8f613d48
        if (*(int32_t *)(v2 + 4) % 256 == v6) {
            int32_t v7 = board_hardware_subtype(v6, v3, v1, g1); // 0x8f613d58
            if (v5 % 256 == v7) {
                int32_t v8 = target_get_hlos_subtype(v7, v3); // 0x8f613d68
                if ((v5 & 0xffff00) == v7) {
                    uint32_t v9 = board_soc_version(v7, v3, v8, v7); // 0x8f613d80
                    if (*(int32_t *)(v2 + 12) <= v9) {
                        // 0x8f613d8c
                        if ((board_target_id(v9, v3) & 0xffff00) < (*(int32_t *)(v2 + 4) & 0xffff00)) {
                            int32_t v10 = *(int32_t *)(v2 + 16); // 0x8f613db8
                            if ((board_pmic_target(0, v3, v8, v7) & 0xffff00) < (v10 & 0xffff00)) {
                                // 0x8f613dac
                                // branch -> 0x8f613ec8
                                // 0x8f613edc
                                return 0;
                            }
                            int32_t v11 = *(int32_t *)(v2 + 20); // 0x8f613ddc
                            if ((board_pmic_target(1, v3, v8, v7) & 0xffff00) < (v11 & 0xffff00)) {
                                // 0x8f613dac
                                // branch -> 0x8f613ec8
                                // 0x8f613edc
                                return 0;
                            }
                            int32_t v12 = *(int32_t *)(v2 + 24); // 0x8f613e00
                            if ((board_pmic_target(2, v3, v8, v7) & 0xffff00) < (v12 & 0xffff00)) {
                                // 0x8f613dac
                                // branch -> 0x8f613ec8
                                // 0x8f613edc
                                return 0;
                            }
                            uint32_t v13 = board_pmic_target(3, v3, v8, v7) & 0xffff00; // 0x8f613e38
                            if (v13 < (*(int32_t *)(v2 + 28) & 0xffff00)) {
                                // 0x8f613dac
                                // branch -> 0x8f613ec8
                                // 0x8f613edc
                                return 0;
                            }
                            // 0x8f613e44
                            int32_t v14;
                            int32_t v15;
                            int32_t v16;
                            int32_t v17;
                            int32_t v18;
                            int32_t v19;
                            int32_t v20 = dt_entry_list_init(v13, v3, v8, v7, v19, v18, v17, v16, v15, v14); // 0x8f613e44
                            v5 = v20;
                            memcpy((char *)*(int32_t *)(v20 + 8), (char *)v2, 40);
                            int32_t v21 = *(int32_t *)(v5 + 8); // 0x8f613e5c
                            int32_t v22 = *(int32_t *)(v21 + 8); // 0x8f613e68
                            int32_t v23 = *(int32_t *)(v21 + 12); // 0x8f613e70
                            int32_t v24 = *(int32_t *)(v21 + 16); // 0x8f613e78
                            int32_t v25 = *(int32_t *)(v21 + 20); // 0x8f613e80
                            int32_t v26 = *(int32_t *)(v21 + 24); // 0x8f613e88
                            int32_t v27 = *(int32_t *)(v21 + 28); // 0x8f613e90
                            int32_t v28 = *(int32_t *)(v21 + 32); // 0x8f613e98
                            int32_t v29 = *(int32_t *)(v21 + 36); // 0x8f613ea0
                            int32_t v30 = *(int32_t *)v21; // 0x8f613ea8
                            int32_t v31 = *(int32_t *)(v21 + 4); // 0x8f613ea8
                            print_log(2, (int32_t)"Add DTB entry %u/%08x/0x%08x/%x/%x/%x/%x/%x/%x/%x\n", v30, v31, v22, v23, v24, v25, v26, v27, v28, v29, 0);
                            *(int32_t *)v5 = *(int32_t *)v3;
                            *(int32_t *)(v5 + 4) = v3;
                            *(int32_t *)(*(int32_t *)v3 + 4) = v5;
                            *(int32_t *)v3 = v5;
                            // branch -> 0x8f613ec8
                            // 0x8f613edc
                            return 1;
                        }
                    }
                    // 0x8f613dac
                    // branch -> 0x8f613ec8
                    // 0x8f613edc
                    return 0;
                }
            }
        }
    }
    // 0x8f613dac
    // branch -> 0x8f613ec8
    // 0x8f613edc
    return 0;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 07:24:31
