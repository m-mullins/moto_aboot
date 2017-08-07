//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t __aeabi_unwind_cpp_pr0(int32_t a1, int32_t a2, int32_t a3);
int32_t backlight_turn_off(int32_t a1, int32_t a2, int32_t a3);
int32_t clock_lib2_branch_clk_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t cxo_clk_disable(int32_t a1, int32_t a2, int32_t a3);
int32_t display_turn_on(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t fastboot_init(int32_t a1, int32_t a2);
void function_8f64a048(void);
void function_8f64a088(int32_t a1, int32_t a2, int32_t a3);
void function_8f64ac04(void);
void function_8f64afa0(void);
void function_8f64b000(char * a1, uint32_t a2, int32_t a3);
void function_8f64b470(void);
void function_8f64b4dc(int32_t a1, int32_t a2, int32_t a3);
int32_t get_security_code(void);
int32_t handle_fboot_command_reboot_bl(int32_t a1, int32_t a2);
int32_t is_factory_product(int32_t a1, int32_t a2);
int32_t mcs_habp_rsa_large_window(int32_t a1);
int32_t mcs_habp_rsa_med_window(int32_t a1);
int32_t mcs_X509Certificate_finalize(int32_t a1, int32_t a2);
int32_t mcs_X509Certificate_getSignature(int32_t a1, int32_t * a2);
int32_t mcs_X509Certificate_getSignedData(int32_t a1, int32_t * a2);
int32_t mipi_init(int32_t a1, int32_t a2);
int32_t mipi_uninit(int32_t a1);
int32_t mutex_acquire(int32_t a1, int32_t a2);
int32_t mutex_init(int32_t * a1, int32_t a2, int32_t a3);
int32_t platform_init_mmu_mappings(void);
int32_t platform_use_identity_mmu_mappings(int32_t a1);
int32_t smb1359_config_for_fact_cbl(void);
int32_t smb1359_drop_usbin_rate(void);

// --------------------- Global Variables ---------------------

int32_t g15 = 0; // LR
int32_t g16 = 0; // R0
int32_t g17 = 0; // R1
int32_t g18 = 0; // R2
int32_t g19 = 0; // R3
int32_t g20 = 0; // R4
int32_t g21 = 0; // R5
int32_t g22 = 0; // R6
char * g1; // 0x8f610c40
int32_t g2 = -0x1a60cd88; // 0x8f621660
int32_t g3 = 8; // 0x8f67c624
int32_t g4 = 1; // 0x8f6ac0f0
char * g5; // 0x8f6ac1b8
int32_t g6 = 2; // 0x8f6afe0c
int32_t g7 = 2; // 0x8f6afe14
int32_t g8 = 0; // 0x8f6c0398
int32_t g9 = 0; // 0x8f6c03d8
int32_t g10 = 0; // 0x8f6e0c3c
int32_t g11 = 0; // 0x8f7112f4
int32_t g12 = 0; // 0x8f7114ac
char * g13; // 0x8f7114fc
int32_t g14 = 0; // 0x8f711500

// ------------------------ Functions -------------------------

// Address range: 0x8f6106a0 - 0x8f610c6f
int32_t mipi_init(int32_t a1, int32_t a2) {
    int32_t v1 = g20; // 0x8f6106a0
    int32_t v2 = g21; // 0x8f6106a0
    g21 = a1;
    int32_t v3 = g11;
    int32_t v4 = -1;
    int32_t result; // 0x8f610c30_2
    if (a1 == 0) {
        // 0x8f610c18
        g16 = v4;
        g18 = v3;
        if (v3 != g11) {
            // 0x8f610c28
            __stack_chk_fail();
            result = g16;
            // branch -> 0x8f610c2c
        } else {
            result = v4;
        }
        // 0x8f610c2c
        g20 = v1;
        g21 = v2;
        return result;
    }
    // 0x8f6106c0
    g17 = (int32_t)"%s is called \n";
    g20 = *(int32_t *)(a1 + 500);
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    print_log(2, (int32_t)"%s is called \n", (int32_t)"mipi_init", v3, v13, v12, v11, v10, v9, v8, v7, v6, v5);
    int32_t v14 = *(int32_t *)(g21 + 504); // 0x8f6106d4
    char * v15 = g1;
    int32_t v16 = (int32_t)v15;
    int32_t * v17 = (int32_t *)v14; // 0x8f6106dc_0
    int32_t v18 = v14; // 0x8f610710
    int32_t v19 = v16; // 0x8f610710
    if (*v17 != v16) {
        int32_t v20 = *(int32_t *)(v14 + 4); // 0x8f6106ec
        *v17 = v16;
        int32_t v21 = *(int32_t *)(v14 + 16); // 0x8f6106f4
        g17 = 0;
        int32_t v22 = v20 * *(int32_t *)(v14 + 8) * v21 / 8; // 0x8f610704
        memset(v15, 0, v22);
        v18 = v21;
        v19 = v22;
        // branch -> 0x8f61070c
    }
    int32_t v23 = mdp_set_revision(a2, g17, v19, v18); // 0x8f610710
    g18 = v23;
    int32_t v24 = *(int32_t *)(g21 + 524); // 0x8f610714
    g19 = v24;
    int32_t v25;
    int32_t v26 = &v25; // 0x8f610718_0
    g16 = v26;
    g15 = -0x709ef8e0;
    ((int32_t (*)(int32_t, int32_t, int32_t))v24)(v26, v23, v24);
    int32_t v27 = g21; // 0x8f610720
    int32_t v28 = *(int32_t *)(v27 + 584); // 0x8f610720
    g19 = v28;
    int32_t v29 = v27; // 0x8f610738
    if (v28 != 0) {
        // 0x8f61072c
        g16 = v27;
        g17 = v26;
        g15 = -0x709ef8c8;
        ((int32_t (*)(int32_t, int32_t))v28)(v27, v26);
        v29 = g21;
        // branch -> 0x8f610738
    }
    int32_t v30 = *(int32_t *)(v29 + 532); // 0x8f610738
    g19 = v30;
    int32_t v31 = 1; // R9
    g15 = -0x709ef8bc;
    ((int32_t (*)(int32_t))v30)(v30);
    int32_t v32 = *(int32_t *)(g21 + 556); // 0x8f610744
    g19 = v32;
    g16 = 1;
    g17 = v26;
    g15 = -0x709ef8ac;
    ((int32_t (*)(int32_t, int32_t, int32_t))v32)(1, v26, v32);
    int32_t v33 = v25; // 0x8f610754
    int32_t v34 = v33; // R7
    int32_t v35;
    int32_t v36 = 0x1000000 * v35;
    int32_t v37 = v36 / 0x1000000; // 0x8f610758
    int32_t v38 = v37; // R3
    char v39 = *(char *)g20; // 0x8f610760
    int32_t v40 = v39; // 0x8f610760
    uint32_t v41 = (int32_t)*(char *)(g20 + 1) % 256; // 0x8f610768
    int32_t v42 = v41 < 32 ? v31 << v41 : 0; // 0x8f610768
    if ((v36 || 0xffffff) >= 0x1ffffff) {
        // if_8f61076c_0_true
        v34 = v33 / 2;
        // branch -> after_if_8f61076c_0
    }
    int32_t v43 = ((v41 == 0 ? v31 : v42) + 255) % 256; // R6
    int32_t v44; // R2
    int32_t v45;
    int32_t v46;
    int32_t v47;
    int32_t v48;
    int32_t v49;
    int32_t v50;
    int32_t v51;
    int32_t v52;
    int32_t v53;
    uint32_t v54;
    int32_t v55;
    int32_t v56;
    int32_t v57;
    int32_t v58;
    int32_t v59;
    if (v40 == v31) {
        // 0x8f610784
        print_log(v40, (int32_t)"Config MIPI_VIDEO_PANEL.\n", g18, v37, v13, v12, v11, v10, v9, v8, v7, v6, v5);
        mdss_dsi_phy_init(g20, 0x1a98000, 0x1a98500, v38, v13, v12, v11, v10, v9, v8, v7, v6, v5, v59, v58, v57, v56, v55, v25);
        if ((v36 || 0xffffff) >= 0x1ffffff) {
            // 0x8f6107a8
            mdss_dsi_phy_init(g20, 0x1aa0000, 0x1aa0500, v37, v13, v12, v11, v10, v9, v8, v7, v6, v5, v59, v58, v57, v56, v55, v25);
            // branch -> 0x8f6107b8
        }
        int32_t v60 = 0x1000000 * v46 / 0x1000000; // 0x8f6107b8
        int32_t v61 = 0x1000000 * v45 / 0x1000000; // 0x8f6107c0
        v44 = v61;
        v38 = 1;
        mdss_dsi_host_init(g20, v37, v61, 1, v60, v12, v11, v10, v9, v8, v7, v6, v5, v59, v58, v57, v56, v55, v25);
        mdss_dsi_panel_power_on_reset(mdss_dsi_phy_contention_detection(g20, 0x1a98500, v44, v38, v60, v12, v11, v10), 0x1a98500, v44, v38);
        if (mdss_dsi_panel_identify(1, 0x1a98500, v44, v38, v60, v12, v11, v10, v9, v8) == 0) {
            // 0x8f6107f4
            if (mdss_dsi_panel_pre_initialize(g20, v61, v44, v38) != 0) {
                // 0x8f610808
                print_log(-1, (int32_t)"dsi panel pre_init error\n", v44, v38, v60, v12, v11, v10, v9, v8, v7, v6, v5);
                v4 = -1;
                // branch -> 0x8f610c18
                // 0x8f610c18
                g16 = v4;
                g18 = v3;
                if (v3 != g11) {
                    // 0x8f610c28
                    __stack_chk_fail();
                    result = g16;
                    // branch -> 0x8f610c2c
                } else {
                    result = v4;
                }
                // 0x8f610c2c
                g20 = v1;
                g21 = v2;
                return result;
            }
            int32_t v62 = 0x1000000 * v50;
            int32_t v63 = v62 / 0x1000000; // 0x8f61081c
            if ((v62 || 0xffffff) < 0x1ffffff) {
                // 0x8f6109b0
                if (mdss_dsi_panel_initialize(g20, v61, v44, 0) != 0) {
                    v4 = -1;
                    // 0x8f610c18
                    g16 = v4;
                    g18 = v3;
                    if (v3 != g11) {
                        // 0x8f610c28
                        __stack_chk_fail();
                        result = g16;
                        // branch -> 0x8f610c2c
                    } else {
                        result = v4;
                    }
                    // 0x8f610c2c
                    g20 = v1;
                    g21 = v2;
                    return result;
                }
            }
            int32_t v64 = *(int32_t *)(g21 + 504); // 0x8f610828
            mdp_dsi_video_config(v26, v64, v44, v63, v60, v12, v11, v10, v9, v8);
            int32_t v65 = v34 % 0x10000; // 0x8f61083c
            uint32_t v66;
            int32_t v67 = v66 % 0x10000; // 0x8f610844
            uint32_t v68;
            int32_t v69 = v68 % 0x10000; // 0x8f610850
            uint32_t v70;
            int32_t v71 = v70 % 0x10000; // 0x8f610854
            int32_t v72;
            int32_t v73 = (v68 + v72) % 0x10000; // 0x8f610868
            int32_t v74 = v54 % 0x10000; // 0x8f610874
            uint32_t v75;
            int32_t v76 = v75 % 0x10000; // 0x8f610884
            int32_t v77 = 0x1000000 * v48 / 0x1000000; // 0x8f6108a0
            int32_t v78 = (v51 + v54) % 0x10000; // 0x8f6108a4
            int32_t v79;
            int32_t v80 = (v70 + v79) % 0x10000; // 0x8f6108a8
            int32_t v81;
            int32_t v82 = 0x1000000 * v81 / 0x1000000; // 0x8f6108b4
            int32_t v83;
            int32_t v84 = 0x1000000 * v83 / 0x1000000; // 0x8f6108bc
            int32_t v85;
            int32_t v86 = 0x1000000 * v85 / 0x1000000; // 0x8f6108c4
            int32_t v87 = 0x1000000 * v49 / 0x1000000; // 0x8f6108cc
            int32_t v88 = 0x1000000 * v47 / 0x1000000; // 0x8f6108d4
            g18 = v65;
            v38 = v37;
            int32_t v89 = 0; // 0x8f6109c8
            int32_t v90 = mdss_dsi_video_mode_config((v34 + v52) % 0x10000, v78, v65, v74, v67, v73, v76, v80, v69, v71, v77, v82, v43, v84, v86, v87, v88, 0x1a98000, v25, v54, v53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); // 0x8f6109c8
            if ((v36 || 0xffffff) >= 0x1ffffff) {
                // 0x8f6108f8
                v38 = v74;
                g18 = v65;
                v89 = v38;
                v90 = mdss_dsi_video_mode_config((v65 + v52) % 0x10000, v78, v65, v74, v67, v73, v76, v80, v69, v71, v77, v82, v43, v84, v86, v87, v88, 0x1aa0000, v25, v54, v53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                // branch -> 0x8f6109c8
            }
            // 0x8f6109c8
            target_display_pre_on(v90, v78, g18, v89);
            g17 = (int32_t)"Turn on MIPI_VIDEO_PANEL.\n";
            print_log(1, (int32_t)"Turn on MIPI_VIDEO_PANEL.\n", g18, v38, v67, v73, v76, v80, v69, v71, v77, v82, v43);
            int32_t v91 = mdp_dsi_video_on(v26, g17, g18, v38, v67, v73, v76, v80); // 0x8f6109dc
            v38 = v63;
            int32_t v92; // 0x8f6109ec
            if ((v62 || 0xffffff) < 0x1ffffff) {
                // 0x8f6109ec
                v92 = mipi_dsi_on(v91, g17, g18, 0, v67, v73, v76, v80);
                // branch -> 0x8f610bf8
                // 0x8f610bf8
                if (v92 == 0) {
                    // 0x8f610bf8
                    // branch -> 0x8f610a14
                    // 0x8f610a14
                    if (mdp_get_revision(0, g17, g18, v38) == 5) {
                        // if_8f610a24_0_true
                        v38 = 0x1a98000;
                        *(int32_t *)0x1a98110 = 0x1110101;
                        // branch -> 0x8f610c04
                    }
                    // 0x8f610c04
                    print_log(2, (int32_t)"%s is done\n", (int32_t)"mipi_init", v38, v67, v73, v76, v80, v69, v71, v77, v82, v43);
                    v4 = 0;
                    // branch -> 0x8f610c18
                } else {
                    v4 = -1;
                }
            } else {
                // 0x8f6109f4
                g17 = v61;
                if (mdss_dsi_panel_initialize(g20, v61, g18, v63) == 0) {
                    // 0x8f6109f4
                    // branch -> 0x8f6109ec
                    // 0x8f6109ec
                    v92 = mipi_dsi_on(0, g17, g18, v38, v67, v73, v76, v80);
                    // branch -> 0x8f610bf8
                    // 0x8f610bf8
                    if (v92 == 0) {
                        // 0x8f610bf8
                        // branch -> 0x8f610a14
                        // 0x8f610a14
                        if (mdp_get_revision(0, g17, g18, v38) == 5) {
                            // if_8f610a24_0_true
                            v38 = 0x1a98000;
                            *(int32_t *)0x1a98110 = 0x1110101;
                            // branch -> 0x8f610c04
                        }
                        // 0x8f610c04
                        print_log(2, (int32_t)"%s is done\n", (int32_t)"mipi_init", v38, v67, v73, v76, v80, v69, v71, v77, v82, v43);
                        v4 = 0;
                        // branch -> 0x8f610c18
                    } else {
                        v4 = -1;
                    }
                } else {
                    v4 = -1;
                }
            }
            // 0x8f610c18
            g16 = v4;
            g18 = v3;
            if (v3 != g11) {
                // 0x8f610c28
                __stack_chk_fail();
                result = g16;
                // branch -> 0x8f610c2c
            } else {
                result = v4;
            }
            // 0x8f610c2c
            g20 = v1;
            g21 = v2;
            return result;
        }
        v4 = -1;
        // 0x8f610c18
        g16 = v4;
        g18 = v3;
        if (v3 != g11) {
            // 0x8f610c28
            __stack_chk_fail();
            result = g16;
            // branch -> 0x8f610c2c
        } else {
            result = v4;
        }
        // 0x8f610c2c
        g20 = v1;
        g21 = v2;
        return result;
    }
    // 0x8f610a0c
    if (v39 != 2) {
        // 0x8f610a14
        if (mdp_get_revision(v40, g17, g18, v37) == 5) {
            // if_8f610a24_0_true
            v38 = 0x1a98000;
            *(int32_t *)0x1a98110 = 0x1110101;
            // branch -> 0x8f610c04
        }
        // 0x8f610c04
        print_log(2, (int32_t)"%s is done\n", (int32_t)"mipi_init", v38, v13, v12, v11, v10, v9, v8, v7, v6, v5);
        v4 = 0;
        // branch -> 0x8f610c18
        // 0x8f610c18
        g16 = v4;
        g18 = v3;
        if (v3 != g11) {
            // 0x8f610c28
            __stack_chk_fail();
            result = g16;
            // branch -> 0x8f610c2c
        } else {
            result = v4;
        }
        // 0x8f610c2c
        g20 = v1;
        g21 = v2;
        return result;
    }
    // 0x8f610a2c
    print_log(v31, (int32_t)"Config MIPI_CMD_PANEL.\n", g18, v37, v13, v12, v11, v10, v9, v8, v7, v6, v5);
    int32_t v93; // 0x8f610c1062
    int32_t v94; // 0x8f610bc8
    int32_t v95; // 0x8f610c1082
    int32_t v96; // 0x8f610c1052
    int32_t v97; // 0x8f610c1057
    int32_t v98; // 0x8f610bdc
    int32_t v99; // 0x8f610bf4
    int32_t v100; // 0x8f610b04
    int32_t v101;
    int32_t v102; // 0x8f610bf0
    if ((a2 & -9) == 5) {
        // 0x8f610a70
        mdss_dsi_phy_init(g20, 0x1a98000, 0x1a98500, v38, v13, v12, v11, v10, v9, v8, v7, v6, v5, v59, v58, v57, v56, v55, v25);
        if ((v36 || 0xffffff) >= 0x1ffffff) {
            // 0x8f610a88
            mdss_dsi_phy_init(g20, 0x1aa0000, 0x1aa0500, v37, v13, v12, v11, v10, v9, v8, v7, v6, v5, v59, v58, v57, v56, v55, v25);
            // branch -> 0x8f610a98
        }
        int32_t v103 = 0x1000000 * v46 / 0x1000000; // 0x8f610a98
        int32_t v104 = 0x1000000 * v45 / 0x1000000; // 0x8f610aa0
        v44 = v104;
        v38 = 1;
        mdss_dsi_host_init(g20, v37, v104, 1, v103, v12, v11, v10, v9, v8, v7, v6, v5, v59, v58, v57, v56, v55, v25);
        mdss_dsi_panel_power_on_reset(mdss_dsi_phy_contention_detection(g20, 0x1a98500, v44, v38, v103, v12, v11, v10), 0x1a98500, v44, v38);
        if (mdss_dsi_panel_identify(1, 0x1a98500, v44, v38, v103, v12, v11, v10, v9, v8) == 0) {
            // 0x8f610ad4
            if (mdss_dsi_panel_pre_initialize(g20, v104, v44, v38) != 0) {
                // 0x8f610808
                print_log(-1, (int32_t)"dsi panel pre_init error\n", v44, v38, v103, v12, v11, v10, v9, v8, v7, v6, v5);
                v4 = -1;
                // branch -> 0x8f610c18
                // 0x8f610c18
                g16 = v4;
                g18 = v3;
                if (v3 != g11) {
                    // 0x8f610c28
                    __stack_chk_fail();
                    result = g16;
                    // branch -> 0x8f610c2c
                } else {
                    result = v4;
                }
                // 0x8f610c2c
                g20 = v1;
                g21 = v2;
                return result;
            }
            int32_t v105 = 0x1000000 * v50;
            int32_t v106 = v105 / 0x1000000; // 0x8f610ae8
            if ((v105 || 0xffffff) < 0x1ffffff) {
                // 0x8f610bb0
                if (mdss_dsi_panel_initialize(g20, v104, v44, 0) != 0) {
                    v4 = -1;
                    // 0x8f610c18
                    g16 = v4;
                    g18 = v3;
                    if (v3 != g11) {
                        // 0x8f610c28
                        __stack_chk_fail();
                        result = g16;
                        // branch -> 0x8f610c2c
                    } else {
                        result = v4;
                    }
                    // 0x8f610c2c
                    g20 = v1;
                    g21 = v2;
                    return result;
                }
            }
            int32_t v107 = *(int32_t *)(g21 + 504); // 0x8f610af4
            mdp_dsi_cmd_config(v26, v107, v44, v106, v103, v12, v11, v10, v9, v8);
            int32_t v108 = 0x1000000 * v48 / 0x1000000; // 0x8f610b00
            v100 = v53 / 8 % 256;
            int32_t v109 = v34 % 0x10000; // 0x8f610b10
            int32_t v110 = 0x1000000 * v49 / 0x1000000; // 0x8f610b18
            int32_t v111 = v54 % 0x10000; // 0x8f610b1c
            int32_t v112 = 0x1000000 * v47 / 0x1000000; // 0x8f610b34
            int32_t v113 = (v51 + v54) % 0x10000; // 0x8f610b3c
            g18 = v109;
            v38 = v37;
            v101 = v106;
            v94 = mdss_dsi_cmd_mode_config((v34 + v52) % 0x10000, v113, v109, v111, v108, v100, v43, v110, v112, 0x1a98000, v7, v6, v5, v59, v58, v57, v56, v55, v25, v54, v53, 0);
            v95 = v108;
            v93 = 0x1a98000;
            v97 = v112;
            v96 = v110;
            if ((v36 || 0xffffff) >= 0x1ffffff) {
                v38 = v111;
                g18 = v109;
                v101 = v106;
                v94 = mdss_dsi_cmd_mode_config((v109 + v52) % 0x10000, v113, v109, v111, v108, v100, v43, v110, v112, 0x1aa0000, v7, v6, v5, v59, v58, v57, v56, v55, v25, v54, v53, 0);
                v95 = v108;
                v93 = 0x1aa0000;
                v97 = v112;
                v96 = v110;
                // branch -> 0x8f610bc8
            }
            // 0x8f610bc8
            target_display_pre_on(v94, v113, g18, v38);
            g17 = (int32_t)"Turn on MIPI_CMD_PANEL.\n";
            print_log(1, (int32_t)"Turn on MIPI_CMD_PANEL.\n", g18, v38, v95, v100, v43, v96, v97, v93, v7, v6, v5);
            v98 = mdp_dma_on(v26, g17, g18, v38, v95, v100, v43, v96);
            v38 = v101;
            if (v101 == 0) {
                // 0x8f610a14
                if (mdp_get_revision(v98, g17, g18, 0) == 5) {
                    // if_8f610a24_0_true
                    v38 = 0x1a98000;
                    *(int32_t *)0x1a98110 = 0x1110101;
                    // branch -> 0x8f610c04
                }
                // 0x8f610c04
                print_log(2, (int32_t)"%s is done\n", (int32_t)"mipi_init", v38, v95, v100, v43, v96, v97, v93, v7, v6, v5);
                v4 = 0;
                // branch -> 0x8f610c18
            } else {
                // 0x8f610bec
                v102 = 0x1000000 * v45 / 0x1000000;
                g17 = v102;
                v99 = mdss_dsi_panel_initialize(g20, v102, g18, v101);
                // branch -> 0x8f610bf8
                // 0x8f610bf8
                if (v99 == 0) {
                    // 0x8f610bf8
                    // branch -> 0x8f610a14
                    // 0x8f610a14
                    if (mdp_get_revision(0, g17, g18, v38) == 5) {
                        // if_8f610a24_0_true
                        v38 = 0x1a98000;
                        *(int32_t *)0x1a98110 = 0x1110101;
                        // branch -> 0x8f610c04
                    }
                    // 0x8f610c04
                    print_log(2, (int32_t)"%s is done\n", (int32_t)"mipi_init", v38, v95, v100, v43, v96, v97, v93, v7, v6, v5);
                    v4 = 0;
                    // branch -> 0x8f610c18
                } else {
                    v4 = -1;
                }
            }
            // 0x8f610c18
            g16 = v4;
            g18 = v3;
            if (v3 != g11) {
                // 0x8f610c28
                __stack_chk_fail();
                result = g16;
                // branch -> 0x8f610c2c
            } else {
                result = v4;
            }
            // 0x8f610c2c
            g20 = v1;
            g21 = v2;
            return result;
        }
        v4 = -1;
    } else {
        // 0x8f610a48
        mipi_dsi_phy_init(g20, (int32_t)"Config MIPI_CMD_PANEL.\n", g18, v38, v13, v12, v11, v10);
        if (mipi_dsi_panel_initialize(g20, v31, g18, v38, v13, v12, v11, v10, v9, v8, v7) == 0) {
            int32_t v114 = *(int32_t *)(g21 + 504); // 0x8f610a64
            v101 = 0x1000000 * v50 / 0x1000000;
            v94 = mdp_dsi_cmd_config(v26, v114, g18, v38, v13, v12, v11, v10, v9, v8);
            v95 = v13;
            v93 = v8;
            v97 = v9;
            v96 = v10;
            v43 = v11;
            v100 = v12;
            // branch -> 0x8f610bc8
            // 0x8f610bc8
            target_display_pre_on(v94, v114, g18, v38);
            g17 = (int32_t)"Turn on MIPI_CMD_PANEL.\n";
            print_log(1, (int32_t)"Turn on MIPI_CMD_PANEL.\n", g18, v38, v95, v100, v43, v96, v97, v93, v7, v6, v5);
            v98 = mdp_dma_on(v26, g17, g18, v38, v95, v100, v43, v96);
            v38 = v101;
            if (v101 == 0) {
                // 0x8f610a14
                if (mdp_get_revision(v98, g17, g18, 0) == 5) {
                    // if_8f610a24_0_true
                    v38 = 0x1a98000;
                    *(int32_t *)0x1a98110 = 0x1110101;
                    // branch -> 0x8f610c04
                }
                // 0x8f610c04
                print_log(2, (int32_t)"%s is done\n", (int32_t)"mipi_init", v38, v95, v100, v43, v96, v97, v93, v7, v6, v5);
                v4 = 0;
                // branch -> 0x8f610c18
            } else {
                // 0x8f610bec
                v102 = 0x1000000 * v45 / 0x1000000;
                g17 = v102;
                v99 = mdss_dsi_panel_initialize(g20, v102, g18, v101);
                // branch -> 0x8f610bf8
                // 0x8f610bf8
                if (v99 == 0) {
                    // 0x8f610bf8
                    // branch -> 0x8f610a14
                    // 0x8f610a14
                    if (mdp_get_revision(0, g17, g18, v38) == 5) {
                        // if_8f610a24_0_true
                        v38 = 0x1a98000;
                        *(int32_t *)0x1a98110 = 0x1110101;
                        // branch -> 0x8f610c04
                    }
                    // 0x8f610c04
                    print_log(2, (int32_t)"%s is done\n", (int32_t)"mipi_init", v38, v95, v100, v43, v96, v97, v93, v7, v6, v5);
                    v4 = 0;
                    // branch -> 0x8f610c18
                } else {
                    v4 = -1;
                }
            }
            // 0x8f610c18
            g16 = v4;
            g18 = v3;
            if (v3 != g11) {
                // 0x8f610c28
                __stack_chk_fail();
                result = g16;
                // branch -> 0x8f610c2c
            } else {
                result = v4;
            }
            // 0x8f610c2c
            g20 = v1;
            g21 = v2;
            return result;
        }
        v4 = -1;
    }
    // 0x8f610c18
    g16 = v4;
    g18 = v3;
    if (v3 != g11) {
        // 0x8f610c28
        __stack_chk_fail();
        result = g16;
        // branch -> 0x8f610c2c
    } else {
        result = v4;
    }
    // 0x8f610c2c
    g20 = v1;
    g21 = v2;
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * memset(void * s, int c, size_t n);
// int tolower(int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 29
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:12:28