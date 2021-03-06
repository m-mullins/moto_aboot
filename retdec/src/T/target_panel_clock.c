//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int32_t dsi_pll_toggle_lock_detect_8916_constprop_5(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t target_panel_clock(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g2 = 0; // R4
int32_t g3 = 0; // R5
int32_t g1 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f60161c - 0x8f6018fb
int32_t target_panel_clock(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g2; // 0x8f60161c
    int32_t v2 = g3; // 0x8f60161c
    int32_t v3 = 0; // 0x8f60161c
    int32_t v4 = 0; // 0x8f60161c
    int32_t v5 = 0; // 0x8f60161c
    int32_t v6 = 0; // 0x8f60161c
    int32_t v7 = a1; // R6
    int32_t v8 = (int32_t)"target_panel_clock\n"; // R1
    int32_t v9 = g1;
    int32_t v10 = print_log(2, (int32_t)"target_panel_clock\n", a3, v9, a1, v9, a3, v1, v2, v3, v4, v5, v6); // 0x8f60163c
    int32_t v11 = *(int32_t *)(a2 + 220); // 0x8f601640
    g3 = v11;
    int32_t v12 = 1000; // R3
    *(int32_t *)(v11 + 24) = 1000;
    int32_t v13; // R2
    int32_t result; // R4
    if (v7 == 0) {
        int32_t v14 = target_cont_splash_screen(v10, v8, a3, v12); // 0x8f60188c
        result = v14;
        if (v14 == 0) {
            int32_t v15 = (int32_t)*(char *)(a2 + 255); // 0x8f60189c
            int32_t v16 = gcc_dsi_clocks_disable(v15, v8, a3, v12, a1, v9, a3, v1, v2, v3, v4); // 0x8f6018a0
            v13 = v16;
            mdss_bus_clocks_disable(mdp_clock_disable(v15, v8, v16, v12), v8, v13, v12);
            // branch -> 0x8f6018b0
            // 0x8f6018b0
            mdp_gdsc_ctrl(result, v8, v13);
            // branch -> 0x8f6018b4
        } else {
            // if_8f601894_0_true
            result = v7;
            // branch -> 0x8f6018b4
        }
        // 0x8f6018b4
        if (v9 != g1) {
            // 0x8f6018c8
            __stack_chk_fail();
            // branch -> 0x8f6018cc
        }
        // 0x8f6018cc
        return result;
    }
    int32_t v17 = mdp_gdsc_ctrl(v7, v8, a3); // 0x8f601658
    mdp_clock_enable(mdss_bus_clocks_enable(v17, v8, a3, v12), v8, a3, v12);
    int32_t v18 = restore_secure_cfg(1, v8, a3); // 0x8f601668
    result = v18;
    if (v18 == 0) {
        // 0x8f601694
        v7 = 0x1a98000;
        int32_t v19 = 1; // R9
        int32_t v20 = 0; // R10
        *(int32_t *)0x1a98368 = 1;
        mdelay(1, v8, a3, v12);
        *(int32_t *)(v7 + 872) = result;
        g2 = v7;
        mdelay(v19, v8, a3, v12);
        int32_t v21 = v7; // 0x8f6016c4
        v8 = v21;
        int32_t v22 = g3; // 0x8f6016c8
        v13 = v22;
        int32_t v23;
        mdss_dsi_auto_pll_config(0x1a98300, v21, v22, v12, a1, v9, a3, v1, v2, v3, v4, v5, v6, 0, (int32_t)(bool)false, 0, v23, 0);
        *(int32_t *)(g2 + 872) = (int32_t)true;
        udelay(1, v8, v13, v12);
        *(int32_t *)(g2 + 872) = 0;
        *(int32_t *)(g2 + 880) = 52;
        *(int32_t *)(g2 + 800) = v19;
        *(int32_t *)(g2 + 800) = 5;
        *(int32_t *)(g2 + 800) = 15;
        v20++;
        dsi_pll_toggle_lock_detect_8916_constprop_5(udelay(500, v8, v13, 15), v8, v13, 15, a1);
        v8 = (int32_t)"TSMC pll locked status is %d\n";
        int32_t v24 = *(int32_t *)(g2 + 960) % 2; // 0x8f60171c
        v13 = v24;
        print_log(2, (int32_t)"TSMC pll locked status is %d\n", v24, 15, a1, v9, a3, v1, v2, v3, v4, v5, v6);
        uint32_t v25 = v20 > 2 ? 0 : v24 ^ 1; // 0x8f601728
        int32_t v26 = v20 < 3 ? v25 % 2 : v25; // 0x8f601728
        v12 = v26;
        // branch -> 0x8f6016d0
        while (v26 != 0) {
            // 0x8f6016d0
            *(int32_t *)(g2 + 872) = (int32_t)true;
            udelay(1, v8, v13, v12);
            *(int32_t *)(g2 + 872) = 0;
            *(int32_t *)(g2 + 880) = 52;
            *(int32_t *)(g2 + 800) = v19;
            *(int32_t *)(g2 + 800) = 5;
            *(int32_t *)(g2 + 800) = 15;
            v20++;
            dsi_pll_toggle_lock_detect_8916_constprop_5(udelay(500, v8, v13, 15), v8, v13, 15, a1);
            v8 = (int32_t)"TSMC pll locked status is %d\n";
            v24 = *(int32_t *)(g2 + 960) % 2;
            v13 = v24;
            print_log(2, (int32_t)"TSMC pll locked status is %d\n", v24, 15, a1, v9, a3, v1, v2, v3, v4, v5, v6);
            v25 = v20 > 2 ? 0 : v24 ^ 1;
            v26 = v20 < 3 ? v25 % 2 : v25;
            v12 = v26;
            // continue -> 0x8f6016d0
        }
        // 0x8f601740
        int32_t v27; // 0x8f601878
        char v28; // 0x8f601870
        char v29; // 0x8f601878
        char v30; // 0x8f60187c
        char v31; // 0x8f601880
        if (v24 == 0) {
            // 0x8f601748
            g2 = 0x1a98000;
            v19 = 0;
            int32_t v32 = 0x1a98000; // 0x8f60175c
            // branch -> 0x8f601758
            while (true) {
                // 0x8f601758
                *(int32_t *)(v32 + 872) = (int32_t)true;
                udelay(1, v8, v13, v12);
                *(int32_t *)(g2 + 872) = 0;
                *(int32_t *)(g2 + 880) = 20;
                *(int32_t *)(g2 + 800) = 1;
                *(int32_t *)(g2 + 800) = 5;
                v19++;
                udelay(3, v8, v13, 5);
                *(int32_t *)(g2 + 800) = 15;
                dsi_pll_toggle_lock_detect_8916_constprop_5(udelay(500, v8, v13, 15), v8, v13, 15, a1);
                v8 = (int32_t)"GF P1 pll locked status is %d\n";
                int32_t v33 = *(int32_t *)(g2 + 960) % 2; // 0x8f6017ac
                v7 = v33;
                v13 = v33;
                print_log(2, (int32_t)"GF P1 pll locked status is %d\n", v33, 15, a1, v9, a3, v1, v2, v3, v4, v5, v6);
                int32_t v34 = v7; // 0x8f6017b8
                uint32_t v35 = v19 > 2 ? 0 : v34 ^ 1; // 0x8f6017b8
                int32_t v36 = v19 < 3 ? v35 % 2 : v35; // 0x8f6017b8
                v12 = v36;
                if (v36 == 0) {
                    // 0x8f6017d0
                    if (v34 == 0) {
                        // 0x8f6017d8
                        g2 = 0x1a98000;
                        int32_t v37 = 0x1a98000; // 0x8f6017e8
                        // branch -> 0x8f6017e4
                        while (true) {
                            // 0x8f6017e4
                            *(int32_t *)(v37 + 872) = (int32_t)true;
                            udelay(1, v8, v13, v12);
                            *(int32_t *)(g2 + 872) = 0;
                            *(int32_t *)(g2 + 880) = 4;
                            *(int32_t *)(g2 + 800) = 1;
                            *(int32_t *)(g2 + 800) = 5;
                            v7++;
                            udelay(3, v8, v13, 5);
                            *(int32_t *)(g2 + 800) = 15;
                            dsi_pll_toggle_lock_detect_8916_constprop_5(udelay(500, v8, v13, 15), v8, v13, 15, v23);
                            v8 = (int32_t)"GF P2 pll locked status is %d\n";
                            int32_t v38 = *(int32_t *)(g2 + 960) % 2; // 0x8f601838
                            v13 = v38;
                            print_log(2, (int32_t)"GF P2 pll locked status is %d\n", v38, 15, v23, 0, 0, 0, 0, 0, 0, 0, 0);
                            uint32_t v39 = v7 > 2 ? 0 : v38 ^ 1; // 0x8f601844
                            int32_t v40 = v7 < 3 ? v39 % 2 : v39; // 0x8f601844
                            v12 = v40;
                            if (v40 == 0) {
                                // 0x8f60185c
                                if (v38 == 0) {
                                    // 0x8f601864
                                    print_log(-1, (int32_t)"Not able to enable the pll\n", v13, 0, v23, 0, 0, 0, 0, 0, 0, 0, 0);
                                    // branch -> 0x8f601870
                                }
                                // 0x8f601870
                                v28 = *(char *)(a2 + 255);
                                v27 = g3;
                                v29 = *(char *)(v27 + 31);
                                v30 = *(char *)(v27 + 32);
                                v31 = *(char *)(v27 + 33);
                                gcc_dsi_clocks_enable((int32_t)v28, (int32_t)v29, (int32_t)v30, (int32_t)v31, v23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                                // branch -> 0x8f6018b4
                                // 0x8f6018b4
                                if (v9 != g1) {
                                    // 0x8f6018c8
                                    __stack_chk_fail();
                                    // branch -> 0x8f6018cc
                                }
                                // 0x8f6018cc
                                return 0;
                            }
                            // 0x8f6017e4
                            v37 = g2;
                            // branch -> 0x8f6017e4
                        }
                    }
                    // 0x8f601870
                    v28 = *(char *)(a2 + 255);
                    v27 = g3;
                    v29 = *(char *)(v27 + 31);
                    v30 = *(char *)(v27 + 32);
                    v31 = *(char *)(v27 + 33);
                    gcc_dsi_clocks_enable((int32_t)v28, (int32_t)v29, (int32_t)v30, (int32_t)v31, v23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                    // branch -> 0x8f6018b4
                    // 0x8f6018b4
                    if (v9 != g1) {
                        // 0x8f6018c8
                        __stack_chk_fail();
                        // branch -> 0x8f6018cc
                    }
                    // 0x8f6018cc
                    return 0;
                }
                // 0x8f601758
                v32 = g2;
                // branch -> 0x8f601758
            }
        }
        // 0x8f601870
        v28 = *(char *)(a2 + 255);
        result = 0;
        v27 = g3;
        v29 = *(char *)(v27 + 31);
        v30 = *(char *)(v27 + 32);
        v31 = *(char *)(v27 + 33);
        gcc_dsi_clocks_enable((int32_t)v28, (int32_t)v29, (int32_t)v30, (int32_t)v31, v23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        // branch -> 0x8f6018b4
    } else {
        // 0x8f601674
        v8 = (int32_t)"%s: Failed to restore MDP security configs";
        v13 = (int32_t)"target_panel_clock";
        int32_t v41 = print_log(-1, (int32_t)"%s: Failed to restore MDP security configs", (int32_t)"target_panel_clock", v12, a1, v9, a3, v1, v2, v3, v4, v5, v6); // 0x8f601680
        mdss_bus_clocks_disable(mdp_clock_disable(v41, v8, v13, v12), v8, v13, v12);
        // branch -> 0x8f6018b0
        // 0x8f6018b0
        mdp_gdsc_ctrl(0, v8, v13);
        // branch -> 0x8f6018b4
    }
    // 0x8f6018b4
    if (v9 != g1) {
        // 0x8f6018c8
        __stack_chk_fail();
        // branch -> 0x8f6018cc
    }
    // 0x8f6018cc
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 05:45:06
