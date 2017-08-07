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
#include <time.h>

// ------------------------ Structures ------------------------

struct tm {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    char * e10;
};

// ------------------- Function Prototypes --------------------

int32_t __utag_gets_107(char * a1, char * a2, int32_t a3, int32_t a4);
int32_t __utag_sizeof(char * a1, int32_t a2, int32_t a3);
int32_t _dputc(char a1, int32_t a2);
int32_t board_baseband(int32_t a1);
int32_t board_hardware_id(int32_t a1, int32_t a2, int32_t a3);
int32_t boot_linux(int32_t (*a1)(int32_t, int32_t, int32_t), int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t bs_set_timestamp(int32_t a1);
int32_t build_sig_for_all(char * str, int32_t (*a2)(int32_t, int32_t), int32_t a3);
int32_t build_sig_is_uniform(void);
int32_t dev_tree_add_mem_info(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t dev_tree_get_entry_info(int32_t a1, int32_t * a2);
int32_t disable_usbin_valid_irq(int32_t a1);
int32_t do_dead_battery_recovery(int32_t a1, int32_t a2, int32_t a3);
int32_t enable_usbin_valid_irq(int32_t a1, int32_t a2);
void function_8f64aa80(void);
void function_8f64aacc(int32_t a1, int32_t a2, int32_t a3);
void function_8f678528(void);
void function_8f6786f0(int32_t * timep, int32_t a2, int32_t a3);
int32_t get_udc_device(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t get_ui_coordinates(int32_t a1, int32_t a2);
int32_t init(int32_t a1, int32_t a2, int32_t a3);
int32_t is_fastboot_busy(int32_t a1, int32_t a2, int32_t a3);
int32_t mdss_dsi_phy_regulator_init(int32_t * a1, int32_t a2);
int32_t mdss_dsi_phy_sw_reset(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t on_confirm_timeout(int32_t a1, int32_t a2, char * a3);
int32_t select_device_tree(int32_t a1, int32_t a2);
int32_t start_charging(int32_t a1);
int32_t stop_charging(int32_t a1, int32_t a2);
int32_t target_platform_id(char * a1, int32_t a2, int32_t a3);
int32_t target_restart_reason_addr(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g58 = 0; // LR
int32_t g59 = 0; // R0
int32_t g60 = 0; // R1
int32_t g61 = 0; // R10
int32_t g62 = 0; // R11
int32_t g63 = 0; // R2
int32_t g64 = 0; // R3
int32_t g65 = 0; // R4
int32_t g66 = 0; // R5
int32_t g67 = 0; // R6
int32_t g68 = 0; // R7
int32_t g69 = 0; // R8
int32_t g70 = 0; // R9
int32_t g1 = -0x1a60cfd8; // 0x8f603944
int32_t g2 = -0x1a60cfd0; // 0x8f603978
int32_t g3 = -0x16d2bfc9; // 0x8f603ad8
int32_t g4 = -0x16d2bfc9; // 0x8f603c64
int32_t g5 = -0x1a60cd10; // 0x8f637e98
int32_t g6 = -0x1a60cf7c; // 0x8f63867c
int32_t g7 = -0x16d2bfc9; // 0x8f6387c0
int32_t (*g8)() = (int32_t (*)())-0x16d2bf8d; // 0x8f64338c
int32_t g9 = -0x16d2bf8d; // 0x8f64385c
int32_t g10 = -0x16d2bf8d; // 0x8f645798
int32_t g11 = -0x16d2bf10; // 0x8f651560
int32_t g12 = 0x2020003a; // 0x8f686ac4
int32_t g13 = 0x65440030; // 0x8f69c66f
char * g14 = "S"; // 0x8f6a4aed
char * g15; // 0x8f6a4e20
int32_t g16 = 31; // 0x8f6a9020
int32_t g17 = 365; // 0x8f6a9080
char * g18 = "\x01"; // 0x8f6ab02c
int32_t g19 = 0x1000; // 0x8f6ab03c
int32_t g20 = 0; // 0x8f6ab040
int32_t g21 = 0; // 0x8f6ab044
int32_t g22 = 0; // 0x8f6ab048
int32_t g23 = 0x2e8022b8; // 0x8f6ac050
char * g24; // 0x8f6ac05c
int32_t g25 = 0; // 0x8f6ac074
int32_t g26 = 0; // 0x8f6ac080
int32_t g27 = -1; // 0x8f6ac0c0
int32_t g28 = 1; // 0x8f6ac0f0
int32_t g29 = 1; // 0x8f6afe1c
int32_t g30 = 0; // 0x8f6b5064
int32_t g31 = 0; // 0x8f6b5080
char * g32; // 0x8f6b509c
int32_t g33 = 0; // 0x8f6b50a0
int32_t g34 = 0; // 0x8f6b7950
char * g35; // 0x8f6b7954
int32_t g36 = 0; // 0x8f6b8bdc
int32_t g37 = 0; // 0x8f6b8be0
int32_t g38 = 0; // 0x8f6b8be4
int32_t g39 = 0; // 0x8f6b8be8
int32_t g40 = 0; // 0x8f6b8bec
int32_t g41 = 0; // 0x8f6c0398
int32_t g42 = 0; // 0x8f6c03d0
int32_t g43 = 0; // 0x8f6e07ac
int32_t g44 = 0; // 0x8f6e07cc
int32_t g45 = 0; // 0x8f6e07e8
int32_t g46 = 0; // 0x8f6e07ec
int32_t g47 = 0; // 0x8f6e07f4
int32_t g48 = 0; // 0x8f6e0808
int32_t g49 = 0; // 0x8f6e080c
char * g50; // 0x8f6e0848
char * g51; // 0x8f6e1000
char * g52; // 0x8f6e1200
int32_t g53 = 0; // 0x8f6e1228
int32_t g54 = 0; // 0x8f6e12dc
int32_t g55 = 0; // 0x8f6e12e0
struct tm * g56 = NULL; // 0x8f710e90
int32_t g57 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f614ca8 - 0x8f615003
int32_t dev_tree_get_entry_info(int32_t a1, int32_t * a2) {
    // 0x8f614ca8
    int32_t v1;
    int32_t v2 = v1; // bp-76
    int32_t v3 = (int32_t)a2; // R9
    int32_t v4 = a1; // R6
    int32_t v5 = g57;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    if (a2 == NULL) {
        // 0x8f614cc8
        print_log(-1, (int32_t)"ERROR: Bad parameter passed to %s \n", (int32_t)"dev_tree_get_entry_info", v5, v12, v11, 0, v1, v10, v9, v8, v7, v6);
        // branch -> 0x8f614fc8
        // 0x8f614fc8
        g63 = v5;
        v13 = g57;
        g64 = v13;
        if (v5 != v13) {
            // 0x8f614fd8
            __stack_chk_fail();
            // branch -> 0x8f614fdc
        }
        // 0x8f614fdc
        return -1;
    }
    int32_t v14 = a1 + 12; // R4
    char * mem = malloc(12); // 0x8f614ce4
    int32_t v15 = (int32_t)mem; // 0x8f614ce4_3
    if (mem == NULL) {
        // 0x8f614cf0
        print_log(-1, (int32_t)"Out of memory\n", g63, v5, v12, v11, 0, v2, v10, v9, v8, v7, v6);
        // branch -> 0x8f614fc8
        // 0x8f614fc8
        g63 = v5;
        v13 = g57;
        g64 = v13;
        if (v5 != v13) {
            // 0x8f614fd8
            __stack_chk_fail();
            // branch -> 0x8f614fdc
        }
        // 0x8f614fdc
        return -1;
    }
    // 0x8f614d04
    *(int32_t *)(v15 + 4) = v15;
    *(int32_t *)v15 = v15;
    int32_t v16 = 0; // R10
    int32_t v17 = (int32_t)"DTB Total entry: %d, DTB version: %d\n"; // R1
    int32_t v18 = v4; // 0x8f614d18
    int32_t v19 = *(int32_t *)(v18 + 8); // 0x8f614d18
    int32_t v20 = v19; // R2
    int32_t v21 = *(int32_t *)(v18 + 4); // 0x8f614d1c
    int32_t v22 = print_log(1, (int32_t)"DTB Total entry: %d, DTB version: %d\n", v19, v21, v12, v11, 0, v2, v10, v9, v8, v7, v6); // R0
    int32_t v23 = &v2; // 0x8f614d30_0
    int32_t v24;
    int32_t v25 = 0x1000000 * v24 / 0x1000000; // 0x8f614e54
    int32_t v26 = *(int32_t *)(v4 + 8); // 0x8f614d2486
    int32_t v27; // 0x8f614f88
    int32_t v28; // 0x8f614f80
    int32_t v29; // R3
    int32_t v30; // R7
    int32_t v31;
    int32_t v32;
    int32_t v33;
    int32_t v34; // 0x8f614f1c48
    int32_t v35; // 0x8f614ee4
    int32_t v36; // 0x8f614eec
    int32_t v37; // 0x8f614ef4
    int32_t v38; // 0x8f614fa0
    int32_t v39;
    int32_t v40; // 0x8f614f84
    int32_t v41; // 0x8f614ee4
    int32_t v42; // 0x8f614ef4
    if (v16 >= v26) {
        while (true) {
            // 0x8f614d30
            v17 = 0;
            memset((char *)&v2, 0, 40);
            int32_t v43 = *(int32_t *)(v4 + 4); // 0x8f614d40
            v30 = v43;
            int32_t v44; // 0x8f614f9c7
            int32_t v45; // 0x8f614f9c10
            int32_t v46; // 0x8f614f9c5
            int32_t v47; // 0x8f614da8
            int32_t v48; // 0x8f614dc4
            int32_t v49; // 0x8f614dcc
            int32_t v50; // 0x8f614de4
            int32_t v51; // 0x8f614dec
            switch (v43) {
                default: {
                    // 0x8f614e60
                    print_log(-1, (int32_t)"ERROR: Unsupported version (%d) in DT table \n", v43, v26, v12, v11, 0, v2, v10, v9, v8, v7, v6);
                    free((char *)v15);
                    // branch -> 0x8f614fc8
                    // 0x8f614fc8
                    g63 = v5;
                    v13 = g57;
                    g64 = v13;
                    if (v5 != v13) {
                        // 0x8f614fd8
                        __stack_chk_fail();
                        // branch -> 0x8f614fdc
                    }
                    // 0x8f614fdc
                    return -1;
                }
                case 2: {
                    // 0x8f614dc4
                    v48 = v14;
                    v49 = *(int32_t *)(v48 + 4);
                    v20 = v49;
                    v14 = v48 + 24;
                    v2 = *(int32_t *)v48;
                    v50 = *(int32_t *)(v48 + 8);
                    if (v50 == 0) {
                        // if_8f614dec_0_true
                        v51 = v49 / 0x1000000;
                        v20 = v51;
                        // branch -> after_if_8f614df4_0
                    } else {
                        v51 = v49;
                    }
                    break;
                }
                case 3: {
                    int32_t v52 = v14; // 0x8f614e38
                    v17 = v52;
                    v20 = 40;
                    v14 = v52 + 40;
                    char * dest_mem = memcpy((char *)&v2, (char *)v52, 40); // 0x8f614e48
                    int32_t v53 = v9 == 0 ? v25 : v9; // 0x8f614f9c8
                    v29 = v53;
                    v47 = (int32_t)dest_mem;
                    v45 = v8;
                    v44 = v53;
                    v46 = v10;
                    // branch -> 0x8f614e7c
                  lab_0x8f614e7c_2:;
                    uint32_t v54 = v2 % 0x10000; // 0x8f614e7c
                    int32_t v55 = board_platform_id(v47, v17) % 0x10000; // 0x8f614e84
                    v22 = v55;
                    if (v54 == v55) {
                        int32_t v56 = target_product_id(v54, v17, v20, v29); // 0x8f614e94
                        v20 = v56;
                        if (v46 == v22) {
                            int32_t v57 = target_hwrev(v46, v17, v56, v29); // 0x8f614ea4
                            v22 = v57;
                            if (v44 <= v57) {
                                int32_t v58 = dt_entry_list_init(v57, v17, v20, v29, v12, v11, 0, v2, v46, v44); // 0x8f614eb0
                                v17 = v23;
                                v20 = 40;
                                v30 = v58;
                                int32_t v59 = *(int32_t *)(v58 + 8); // 0x8f614ec0
                                char * dest_mem2 = memcpy((char *)v59, (char *)&v2, 40); // 0x8f614ec4
                                v22 = (int32_t)dest_mem2;
                                int32_t v60 = v30; // 0x8f614ecc
                                *(int32_t *)v60 = *(int32_t *)v15;
                                *(int32_t *)(v60 + 4) = v15;
                                *(int32_t *)(*(int32_t *)v15 + 4) = v30;
                                *(int32_t *)v15 = v30;
                                // branch -> 0x8f614edc
                            }
                        }
                    }
                    int32_t v61 = v16 + 1; // 0x8f614edc
                    v16 = v61;
                    int32_t v62 = *(int32_t *)(v4 + 8); // 0x8f614d24
                    if (v61 < v62) {
                        v26 = v62;
                        v10 = v46;
                        v9 = v44;
                        v8 = v45;
                        // break (via goto) -> 0x8f614ee4
                        goto lab_0x8f614ee4;
                    }
                    v26 = v62;
                    v10 = v46;
                    v9 = v44;
                    v8 = v45;
                    // continue -> 0x8f614d30
                    continue;
                }
                case 1: {
                    int32_t v63 = v14; // 0x8f614d5c
                    int32_t v64 = *(int32_t *)(v63 + 8); // 0x8f614d64
                    v20 = v64;
                    v14 = v63 + 20;
                    v2 = *(int32_t *)v63;
                    uint32_t v65 = *(int32_t *)(v63 + 4); // 0x8f614d70
                    int32_t v66 = v65 / 0x1000000; // 0x8f614d7c
                    int32_t v67 = board_pmic_target(0, v17, v64, v66); // 0x8f614d84
                    int32_t v68 = board_pmic_target(v30, v17, v20, v66); // 0x8f614d90
                    board_pmic_target(2, v17, v20, v66);
                    v47 = board_pmic_target(3, v17, v20, v66);
                    v29 = *(int32_t *)(v14 - 4);
                    v6 = v68;
                    v7 = v67;
                    v45 = v64;
                    v44 = v66;
                    v46 = v65;
                    // branch -> 0x8f614e7c
                    goto lab_0x8f614e7c_2;
                }
            }
            int32_t v69 = board_pmic_target(0, v17, v51, v50); // 0x8f614df8
            int32_t v70 = board_pmic_target(1, v17, v20, v50); // 0x8f614e04
            board_pmic_target(2, v17, v20, v50);
            int32_t v71 = board_pmic_target(3, v17, v20, v50); // 0x8f614e1c
            v29 = *(int32_t *)(v14 - 4);
            v47 = v71;
            v6 = v70;
            v7 = v69;
            v45 = *(int32_t *)(v48 + 12);
            v44 = v51;
            v46 = v49;
            // branch -> 0x8f614e7c
            goto lab_0x8f614e7c_2;
        }
      lab_0x8f614ee4:
        // 0x8f614ee4
        v35 = v15;
        v41 = *(int32_t *)(v35 + 4);
        v4 = v41;
        v30 = 0;
        if (v41 != v35) {
            v37 = v41;
            while (true) {
                // 0x8f614ef4
                v42 = *(int32_t *)(v37 + 8);
                v14 = v42;
                if (v42 == 0) {
                    v34 = 0;
                    v36 = v35;
                    goto lab_0x8f614f14;
                }
                goto lab_0x8f614f00;
            }
        }
        // 0x8f614f80
        v28 = target_product_id(v22, v17, v20, v26);
        v40 = v22;
        v27 = target_hwrev(v40, v17, v28, v26);
        print_log(-1, (int32_t)"Unable to find suitable device tree for device (0x%x, 0x%x)\n", v40, v27, v12, v11, 0, v2, v10, v9, v8, v7, v6);
        // branch -> 0x8f614fa0
        // 0x8f614fa0
        v38 = v15;
        v32 = *(int32_t *)(v38 + 4);
        if (v32 == v38) {
            // 0x8f614fbc
            free((char *)v38);
            // branch -> 0x8f614fc8
            // 0x8f614fc8
            g63 = v5;
            v13 = g57;
            g64 = v13;
            if (v5 != v13) {
                // 0x8f614fd8
                __stack_chk_fail();
                // branch -> 0x8f614fdc
            }
            // 0x8f614fdc
            return 0x80000000 * (v30 ^ 1) >> 31;
        }
        v33 = v32;
        dt_entry_list_delete(v33, (int32_t)"Unable to find suitable device tree for device (0x%x, 0x%x)\n", v40, v27, v12, v11, 0);
        v39 = v15;
        v31 = *(int32_t *)(*(int32_t *)v33 + 4);
        while (v31 != v39) {
            // 0x8f614fac
            v33 = v31;
            dt_entry_list_delete(v33, (int32_t)"Unable to find suitable device tree for device (0x%x, 0x%x)\n", v40, v27, v12, v11, 0);
            v39 = v15;
            v31 = *(int32_t *)(*(int32_t *)v33 + 4);
            // continue -> 0x8f614fac
        }
        // 0x8f614fbc
        free((char *)v39);
        // branch -> 0x8f614fc8
        // 0x8f614fc8
        g63 = v5;
        v13 = g57;
        g64 = v13;
        if (v5 != v13) {
            // 0x8f614fd8
            __stack_chk_fail();
            // branch -> 0x8f614fdc
        }
        // 0x8f614fdc
        return 0x80000000 * (v30 ^ 1) >> 31;
    }
    // 0x8f614ee4
    v35 = v15;
    v41 = *(int32_t *)(v35 + 4);
    v4 = v41;
    v30 = 0;
    if (v41 != v35) {
        int32_t v72 = 0; // 0x8f614f1c49
        int32_t v73 = v35; // 0x8f614eec46
        v37 = v41;
        int32_t v74; // 0x8f614f38
        int32_t v75; // 0x8f614f30
        int32_t v76; // 0x8f614f28
        int32_t v77; // 0x8f614f34
        int32_t v78; // 0x8f614f5c
        int32_t v79; // 0x8f614f64
        int32_t v80; // 0x8f614f28
        int32_t v81; // 0x8f614f2c
        while (true) {
            // 0x8f614ef4
            v42 = *(int32_t *)(v37 + 8);
            v14 = v42;
            v34 = v72;
            v36 = v73;
            int32_t v82; // 0x8f614f14
            if (v42 != 0) {
              lab_0x8f614f00:;
                int32_t v83 = *(int32_t *)(v42 + 8); // 0x8f614f00
                int32_t v84 = target_hwrev(v22, v17, v20, v26); // 0x8f614f04
                v22 = v84;
                if (v83 == v84) {
                    // 0x8f614f28
                    v76 = v14;
                    // branch -> 0x8f614f28
                    // 0x8f614f28
                    v80 = *(int32_t *)(v76 + 4);
                    v81 = *(int32_t *)(v76 + 8);
                    v75 = target_product_id(v83, v17, v20, v26);
                    v77 = v22;
                    v74 = target_hwrev(v77, v17, v75, v26);
                    v30 = 1;
                    print_log(1, (int32_t)"Using device tree (0x%x, 0x%x) for device (0x%x, 0x%x)\n", v80, v81, v77, v74, 0, v2, v10, v9, v8, v7, v6);
                    v78 = v14;
                    v79 = v3;
                    *(int32_t *)v79 = *(int32_t *)v78;
                    *(int32_t *)(v79 + 4) = *(int32_t *)(v78 + 4);
                    *(int32_t *)(v79 + 8) = *(int32_t *)(v78 + 8);
                    *(int32_t *)(v79 + 12) = *(int32_t *)(v78 + 12);
                    v20 = *(int32_t *)(v78 + 24);
                    v29 = *(int32_t *)(v78 + 28);
                    *(int32_t *)(v79 + 16) = *(int32_t *)(v78 + 16);
                    *(int32_t *)(v79 + 20) = *(int32_t *)(v78 + 20);
                    *(int32_t *)(v79 + 24) = v20;
                    *(int32_t *)(v79 + 28) = v29;
                    v17 = *(int32_t *)(v78 + 36);
                    *(int32_t *)(v79 + 32) = *(int32_t *)(v78 + 32);
                    *(int32_t *)(v79 + 36) = v17;
                    // branch -> 0x8f614fa0
                } else {
                    int32_t v85 = v4; // 0x8f614f10
                    int32_t v86 = *(int32_t *)(v85 + 8); // 0x8f614f10
                    v30 = v86;
                    v34 = v86;
                    v36 = v15;
                    // branch -> 0x8f614f14
                    // 0x8f614f14
                    v82 = *(int32_t *)(v85 + 4);
                    v4 = v82;
                    if (v82 == v36) {
                        // break -> 0x8f614f1c
                        break;
                    }
                    v72 = v34;
                    v73 = v36;
                    v37 = v82;
                    // continue -> 0x8f614ef4
                    continue;
                }
                // 0x8f614fa0
                v38 = v15;
                v32 = *(int32_t *)(v38 + 4);
                if (v32 == v38) {
                    // 0x8f614fbc
                    free((char *)v38);
                    // branch -> 0x8f614fc8
                    // 0x8f614fc8
                    g63 = v5;
                    v13 = g57;
                    g64 = v13;
                    if (v5 != v13) {
                        // 0x8f614fd8
                        __stack_chk_fail();
                        // branch -> 0x8f614fdc
                    }
                    // 0x8f614fdc
                    return 0x80000000 * (v30 ^ 1) >> 31;
                }
                v33 = v32;
                dt_entry_list_delete(v33, v17, v20, v29, v77, v74, 0);
                v39 = v15;
                v31 = *(int32_t *)(*(int32_t *)v33 + 4);
                while (v31 != v39) {
                    // 0x8f614fac
                    v33 = v31;
                    dt_entry_list_delete(v33, v17, v20, v29, v77, v74, 0);
                    v39 = v15;
                    v31 = *(int32_t *)(*(int32_t *)v33 + 4);
                    // continue -> 0x8f614fac
                }
                // 0x8f614fbc
                free((char *)v39);
                // branch -> 0x8f614fc8
                // 0x8f614fc8
                g63 = v5;
                v13 = g57;
                g64 = v13;
                if (v5 != v13) {
                    // 0x8f614fd8
                    __stack_chk_fail();
                    // branch -> 0x8f614fdc
                }
                // 0x8f614fdc
                return 0x80000000 * (v30 ^ 1) >> 31;
            }
          lab_0x8f614f14:
            // 0x8f614f14
            v82 = *(int32_t *)(v37 + 4);
            v4 = v82;
            if (v82 == v36) {
                // break -> 0x8f614f1c
                break;
            }
            v72 = v34;
            v73 = v36;
            v37 = v82;
            // continue -> 0x8f614ef4
        }
        // 0x8f614f1c
        if (v34 != 0) {
            // 0x8f614f24
            v76 = v34;
            // branch -> 0x8f614f28
            // 0x8f614f28
            v80 = *(int32_t *)(v76 + 4);
            v81 = *(int32_t *)(v76 + 8);
            v75 = target_product_id(v22, v17, v20, v26);
            v77 = v22;
            v74 = target_hwrev(v77, v17, v75, v26);
            v30 = 1;
            print_log(1, (int32_t)"Using device tree (0x%x, 0x%x) for device (0x%x, 0x%x)\n", v80, v81, v77, v74, 0, v2, v10, v9, v8, v7, v6);
            v78 = v34;
            v79 = v3;
            *(int32_t *)v79 = *(int32_t *)v78;
            *(int32_t *)(v79 + 4) = *(int32_t *)(v78 + 4);
            *(int32_t *)(v79 + 8) = *(int32_t *)(v78 + 8);
            *(int32_t *)(v79 + 12) = *(int32_t *)(v78 + 12);
            v20 = *(int32_t *)(v78 + 24);
            v29 = *(int32_t *)(v78 + 28);
            *(int32_t *)(v79 + 16) = *(int32_t *)(v78 + 16);
            *(int32_t *)(v79 + 20) = *(int32_t *)(v78 + 20);
            *(int32_t *)(v79 + 24) = v20;
            *(int32_t *)(v79 + 28) = v29;
            v17 = *(int32_t *)(v78 + 36);
            *(int32_t *)(v79 + 32) = *(int32_t *)(v78 + 32);
            *(int32_t *)(v79 + 36) = v17;
            // branch -> 0x8f614fa0
            // 0x8f614fa0
            v38 = v15;
            v32 = *(int32_t *)(v38 + 4);
            if (v32 == v38) {
                // 0x8f614fbc
                free((char *)v38);
                // branch -> 0x8f614fc8
                // 0x8f614fc8
                g63 = v5;
                v13 = g57;
                g64 = v13;
                if (v5 != v13) {
                    // 0x8f614fd8
                    __stack_chk_fail();
                    // branch -> 0x8f614fdc
                }
                // 0x8f614fdc
                return 0x80000000 * (v30 ^ 1) >> 31;
            }
            v33 = v32;
            dt_entry_list_delete(v33, v17, v20, v29, v77, v74, 0);
            v39 = v15;
            v31 = *(int32_t *)(*(int32_t *)v33 + 4);
            while (v31 != v39) {
                // 0x8f614fac
                v33 = v31;
                dt_entry_list_delete(v33, v17, v20, v29, v77, v74, 0);
                v39 = v15;
                v31 = *(int32_t *)(*(int32_t *)v33 + 4);
                // continue -> 0x8f614fac
            }
            // 0x8f614fbc
            free((char *)v39);
            // branch -> 0x8f614fc8
            // 0x8f614fc8
            g63 = v5;
            v13 = g57;
            g64 = v13;
            if (v5 != v13) {
                // 0x8f614fd8
                __stack_chk_fail();
                // branch -> 0x8f614fdc
            }
            // 0x8f614fdc
            return 0x80000000 * (v30 ^ 1) >> 31;
        }
    }
    // 0x8f614f80
    v28 = target_product_id(v22, v17, v20, v26);
    v40 = v22;
    v27 = target_hwrev(v40, v17, v28, v26);
    print_log(-1, (int32_t)"Unable to find suitable device tree for device (0x%x, 0x%x)\n", v40, v27, v12, v11, 0, v2, v10, v9, v8, v7, v6);
    // branch -> 0x8f614fa0
    // 0x8f614fa0
    v38 = v15;
    v32 = *(int32_t *)(v38 + 4);
    if (v32 == v38) {
        // 0x8f614fbc
        free((char *)v38);
        // branch -> 0x8f614fc8
        // 0x8f614fc8
        g63 = v5;
        v13 = g57;
        g64 = v13;
        if (v5 != v13) {
            // 0x8f614fd8
            __stack_chk_fail();
            // branch -> 0x8f614fdc
        }
        // 0x8f614fdc
        return 0x80000000 * (v30 ^ 1) >> 31;
    }
    v33 = v32;
    dt_entry_list_delete(v33, (int32_t)"Unable to find suitable device tree for device (0x%x, 0x%x)\n", v40, v27, v12, v11, 0);
    v39 = v15;
    v31 = *(int32_t *)(*(int32_t *)v33 + 4);
    while (v31 != v39) {
        // 0x8f614fac
        v33 = v31;
        dt_entry_list_delete(v33, (int32_t)"Unable to find suitable device tree for device (0x%x, 0x%x)\n", v40, v27, v12, v11, 0);
        v39 = v15;
        v31 = *(int32_t *)(*(int32_t *)v33 + 4);
        // continue -> 0x8f614fac
    }
    // 0x8f614fbc
    free((char *)v39);
    // branch -> 0x8f614fc8
    // 0x8f614fc8
    g63 = v5;
    v13 = g57;
    g64 = v13;
    if (v5 != v13) {
        // 0x8f614fd8
        __stack_chk_fail();
        // branch -> 0x8f614fdc
    }
    // 0x8f614fdc
    return 0x80000000 * (v30 ^ 1) >> 31;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// struct tm * gmtime_r(const time_t * restrict timer, struct tm * restrict tp);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// size_t strnlen(const char * string, size_t maxlen);
// char * strrchr(char * s, int c);
// int vsprintf(char * restrict s, const char * restrict format, _G_va_list arg);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:51:25