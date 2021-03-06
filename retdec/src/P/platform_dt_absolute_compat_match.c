//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t fdt_setprop_u32(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
char * platform_dt_absolute_compat_match(char * a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g2 = 0; // R4
int32_t g3 = 0; // R5
int32_t g4 = 0; // R7
int32_t g1 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f6134c8 - 0x8f613763
char * platform_dt_absolute_compat_match(char * a1, int32_t a2) {
    int32_t v1;
    char * v2 = (char *)v1;
    int32_t v3;
    char * v4 = (char *)v3;
    int32_t v5 = g2; // 0x8f6134c8
    int32_t v6 = g4; // 0x8f6134c8
    int32_t v7;
    int32_t v8 = &v7; // R8
    g4 = (int32_t)a1;
    int32_t v9 = g1;
    int32_t v10 = v9; // R3
    memset((char *)&v7, 0, 16);
    int32_t v11;
    memset((char *)&v11, 0, 16);
    int32_t v12 = 0; // R1
    int32_t v13 = 16; // R2
    int32_t v14;
    int32_t set_mem = (int32_t)memset((char *)&v14, 0, 16); // R0
    int32_t v15 = g4;
    int32_t v16 = *(int32_t *)(v15 + 4);
    g2 = v16;
    char * v17;
    int32_t v18;
    int32_t v19;
    int32_t v20;
    int32_t v21;
    int32_t v22;
    int32_t v23;
    int32_t v24;
    int32_t v25;
    int32_t v26;
    int32_t v27;
    int32_t v28;
    int32_t v29;
    int32_t v30;
    int32_t v31;
    int32_t v32;
    int32_t v33;
    int32_t v34;
    int32_t v35;
    int32_t v36;
    int32_t v37;
    int32_t v38;
    if (v16 == v15) {
        // 0x8f6135f4
        g3 = 0;
        v21 = v31;
        v38 = v32;
        v37 = v33;
        v17 = v4;
        v20 = v34;
        v19 = v35;
        v18 = v26;
        v25 = v27;
        v24 = v28;
        v23 = v29;
        v22 = v30;
        // branch -> 0x8f613644
    } else {
        // branch -> 0x8f613528
      lab_0x8f613528:
        while (true) {
            // 0x8f613528
            int32_t v39; // 0x8f6136fc24
            int32_t v40; // 0x8f6136fc27
            int32_t v41; // 0x8f6136fc29
            int32_t v42; // 0x8f6136fc32
            int32_t v43; // 0x8f6136fc34
            int32_t v44; // 0x8f6136fc37
            int32_t v45; // 0x8f61370854
            int32_t v46; // 0x8f61370857
            int32_t v47; // 0x8f6137084
            int32_t v48; // 0x8f6137087
            int32_t v49; // 0x8f61370812
            int32_t v50; // 0x8f6137089
            int32_t v51; // 0x8f6136fc14
            int32_t v52; // 0x8f6136fc17
            int32_t v53; // 0x8f6136fc19
            int32_t v54; // 0x8f6136fc22
            int32_t v55; // 0x8f613750_2
            int32_t v56;
            int32_t v57;
            char * v58;
            int32_t v59; // 0x8f61372c43
            int32_t v60; // 0x8f61373c50
            if (v16 == 0) {
                // 0x8f613530
                print_log(2, (int32_t)"Current node is the end\n", v13, v10, v31, v30, v29, v28, v27, v26, v35, v34, 0);
                g3 = g2;
                v21 = v31;
                v38 = v32;
                v37 = v33;
                v17 = v4;
                v20 = v34;
                v19 = v35;
                v18 = v26;
                v25 = v27;
                v24 = v28;
                v23 = v29;
                v22 = v30;
                int32_t * v61 = &g4;
                // branch -> 0x8f613644
              lab_0x8f613644_3:
                // 0x8f613644
                v36 = *v61;
                // branch -> 0x8f613644
              lab_0x8f613644_7:
                while (true) {
                    int32_t v62 = *(int32_t *)(v36 + 4);
                    g2 = v62;
                    v46 = v21;
                    v60 = v38;
                    v59 = v37;
                    v58 = v17;
                    v44 = v20;
                    v42 = v19;
                    v40 = v18;
                    v54 = v25;
                    v52 = v24;
                    v49 = v23;
                    v48 = v22;
                    v55 = 1;
                    if (v62 != g4) {
                        // 0x8f61364c
                        int32_t v63; // 0x8f6136fc26
                        int32_t v64; // 0x8f6136fc31
                        int32_t v65; // 0x8f6136fc36
                        int32_t v66; // 0x8f61370856
                        int32_t v67; // 0x8f6137086
                        int32_t v68; // 0x8f61370811
                        int32_t v69; // 0x8f6136fc16
                        int32_t v70; // 0x8f6136fc21
                        char * v71;
                        char * v72;
                        int32_t v73; // 0x8f61372c41
                        int32_t v74; // 0x8f61372c42
                        int32_t v75; // 0x8f61373c48
                        int32_t v76; // 0x8f61373c49
                        if (v62 == 0) {
                            // 0x8f613654
                            int32_t v77;
                            print_log(2, (int32_t)"Current node is the end\n", v13, v10, v77, 0, 0, 0, 0, 0, 0, 0, 0);
                            v46 = v21;
                            v60 = v38;
                            v59 = v37;
                            v58 = v17;
                            v44 = v20;
                            v42 = v19;
                            v40 = v18;
                            v54 = v25;
                            v52 = v24;
                            v49 = v23;
                            v48 = v22;
                            v55 = 1;
                            // branch -> 0x8f613718
                          lab_0x8f613718:
                            // 0x8f613718
                            if (v9 == g1) {
                                // 0x8f61374c
                                g2 = v5;
                                g4 = v6;
                                return (char *)v55;
                            }
                          lab_0x8f613728:
                            // 0x8f613728
                            __stack_chk_fail();
                            v66 = v46;
                            v76 = v60;
                            v74 = v59;
                            v72 = v58;
                            v65 = v44;
                            v64 = v42;
                            v63 = v40;
                            v70 = v54;
                            v69 = v52;
                            v68 = v49;
                            v67 = v48;
                            // branch -> 0x8f61372c
                          lab_0x8f61372c:;
                            // 0x8f61372c
                            int32_t v78; // 0x8f613700
                            int32_t v79; // 0x8f6136ac
                            int32_t v80; // 0x8f6136b8
                            int32_t v81; // 0x8f6136c0
                            int32_t v82; // 0x8f6136c8
                            int32_t v83; // 0x8f6136d0
                            int32_t v84; // 0x8f6136d8
                            int32_t v85; // 0x8f6136e0
                            int32_t v86; // 0x8f6136e8
                            int32_t v87; // 0x8f6136f0
                            int32_t v88; // 0x8f6136f8
                            int32_t v89; // 0x8f6136f8
                            if (v57 == v74) {
                                // 0x8f61363c
                                v10 = v76;
                                v13 = v56;
                                if (v56 == v76) {
                                    v21 = v66;
                                    v38 = v56;
                                    v37 = v57;
                                    v17 = v72;
                                    v20 = v65;
                                    v19 = v64;
                                    v18 = v63;
                                    v25 = v70;
                                    v24 = v69;
                                    v23 = v68;
                                    v22 = v67;
                                    v61 = &g2;
                                    goto lab_0x8f613644_3;
                                }
                                // 0x8f6136ac
                                v79 = *(int32_t *)(g2 + 8);
                                v80 = *(int32_t *)(v79 + 8);
                                v81 = *(int32_t *)(v79 + 12);
                                v82 = *(int32_t *)(v79 + 16);
                                v83 = *(int32_t *)(v79 + 20);
                                v84 = *(int32_t *)(v79 + 24);
                                v85 = *(int32_t *)(v79 + 28);
                                v86 = *(int32_t *)(v79 + 32);
                                v87 = *(int32_t *)(v79 + 36);
                                v88 = *(int32_t *)v79;
                                v13 = v88;
                                v89 = *(int32_t *)(v79 + 4);
                                v10 = v89;
                                print_log(2, (int32_t)"Delete don't fit DTB entry %u/%08x/0x%08x/%x/%x/%x/%x/%x/%x/%x\n", v88, v89, v80, v81, v82, v83, v84, v85, v86, v87, 0);
                                v78 = g2;
                                dt_entry_list_delete(v78, (int32_t)"Delete don't fit DTB entry %u/%08x/0x%08x/%x/%x/%x/%x/%x/%x/%x\n", v13, v10, v80, v81, v82);
                                g2 = *(int32_t *)v78;
                                v21 = v80;
                                v38 = v76;
                                v37 = v57;
                                v17 = v72;
                                v20 = v87;
                                v19 = v86;
                                v18 = v85;
                                v25 = v84;
                                v24 = v83;
                                v23 = v82;
                                v22 = v81;
                                v61 = &g2;
                                // branch -> 0x8f613644
                                goto lab_0x8f613644_3;
                            } else {
                                v75 = v76;
                                v73 = v74;
                                v71 = v72;
                              lab_0x8f6136ac_4:
                                // 0x8f6136ac
                                v79 = *(int32_t *)(g2 + 8);
                                v80 = *(int32_t *)(v79 + 8);
                                v81 = *(int32_t *)(v79 + 12);
                                v82 = *(int32_t *)(v79 + 16);
                                v83 = *(int32_t *)(v79 + 20);
                                v84 = *(int32_t *)(v79 + 24);
                                v85 = *(int32_t *)(v79 + 28);
                                v86 = *(int32_t *)(v79 + 32);
                                v87 = *(int32_t *)(v79 + 36);
                                v88 = *(int32_t *)v79;
                                v13 = v88;
                                v89 = *(int32_t *)(v79 + 4);
                                v10 = v89;
                                print_log(2, (int32_t)"Delete don't fit DTB entry %u/%08x/0x%08x/%x/%x/%x/%x/%x/%x/%x\n", v88, v89, v80, v81, v82, v83, v84, v85, v86, v87, 0);
                                v78 = g2;
                                dt_entry_list_delete(v78, (int32_t)"Delete don't fit DTB entry %u/%08x/0x%08x/%x/%x/%x/%x/%x/%x/%x\n", v13, v10, v80, v81, v82);
                                g2 = *(int32_t *)v78;
                                v21 = v80;
                                v38 = v75;
                                v37 = v73;
                                v17 = v71;
                                v20 = v87;
                                v19 = v86;
                                v18 = v85;
                                v25 = v84;
                                v24 = v83;
                                v23 = v82;
                                v22 = v81;
                                v61 = &g2;
                                // branch -> 0x8f613644
                                goto lab_0x8f613644_3;
                            }
                            int32_t v90 = *v61;
                            v36 = v90;
                            // branch -> 0x8f613644
                            continue;
                        } else {
                            // 0x8f613624
                            v45 = v21;
                            int32_t v91 = v38; // 0x8f61373c51
                            int32_t v92 = v37; // 0x8f61372c44
                            char * v93 = v17;
                            v43 = v20;
                            v41 = v19;
                            v39 = v18;
                            v53 = v25;
                            v51 = v24;
                            v50 = v23;
                            v47 = v22;
                            switch (a2) {
                                case 0: {
                                    int32_t v94 = *(int32_t *)*(int32_t *)(v62 + 8) & 0xff0000; // 0x8f613634
                                    v10 = v94;
                                    if (v94 != g3) {
                                        v75 = v38;
                                        v73 = v37;
                                        v71 = v17;
                                        // break (via goto) -> 0x8f6136ac
                                        goto lab_0x8f6136ac_4;
                                    }
                                    v36 = v62;
                                    // continue -> 0x8f613644
                                    continue;
                                }
                                case 7: {
                                    int32_t v95 = *(int32_t *)(v62 + 8); // 0x8f61366c
                                    v13 = v95 + 4;
                                    *(int32_t *)v8 = (int32_t)*(char *)(v95 + 16);
                                    int32_t v96 = 4; // 0x8f613680112
                                    v10 = v96;
                                    if (v96 != 16) {
                                        while (true) {
                                            int32_t v97 = v13;
                                            char v98 = *(char *)(v97 + 16); // 0x8f613674
                                            v13 = v97 + 4;
                                            *(int32_t *)(v8 + v96) = (int32_t)v98;
                                            int32_t v99 = v10 + 4; // 0x8f613680
                                            v10 = v99;
                                            if (v99 == 16) {
                                                // break (via goto) -> 0x8f61368c
                                                goto lab_0x8f61368c;
                                            }
                                            v96 = v99;
                                            // continue -> 0x8f613674
                                        }
                                        int32_t v100 = v14; // 0x8f61368c
                                        int32_t v101 = v7; // 0x8f613690
                                        if (v101 != v100) {
                                            v75 = v38;
                                            v73 = v37;
                                            v71 = v17;
                                            goto lab_0x8f6136ac_4;
                                        }
                                      lab_0x8f61369c:
                                        // 0x8f61369c
                                        if (v2 == v17) {
                                            v66 = v21;
                                            v76 = v38;
                                            v74 = v37;
                                            v72 = v2;
                                            v65 = v20;
                                            v64 = v19;
                                            v63 = v18;
                                            v70 = v25;
                                            v69 = v24;
                                            v68 = v23;
                                            v67 = v22;
                                            goto lab_0x8f61372c;
                                        }
                                        v75 = v38;
                                        v73 = v37;
                                        v71 = v17;
                                        goto lab_0x8f6136ac_4;
                                    }
                                  lab_0x8f61368c:
                                    // 0x8f61368c
                                    if (v7 == v14) {
                                        goto lab_0x8f61369c;
                                    }
                                    v75 = v38;
                                    v73 = v37;
                                    v71 = v17;
                                    goto lab_0x8f6136ac_4;
                                    break;
                                }
                            }
                            // 0x8f61360c
                            print_log(-1, (int32_t)"ERROR: Unsupported version (%d) in dt node check \n", a2, v10, v45, v47, v50, v51, v53, v39, v41, v43, 0);
                            v46 = v45;
                            v60 = v91;
                            v59 = v92;
                            v58 = v93;
                            v44 = v43;
                            v42 = v41;
                            v40 = v39;
                            v54 = v53;
                            v52 = v51;
                            v49 = v50;
                            v48 = v47;
                            v55 = 0;
                            // branch -> 0x8f613718
                            goto lab_0x8f613718;
                        }
                    }
                  lab_0x8f613718_2:
                    // 0x8f613718
                    if (v9 != g1) {
                        goto lab_0x8f613728;
                    }
                    // 0x8f61374c
                    g2 = v5;
                    g4 = v6;
                    return (char *)v55;
                }
            } else {
                // 0x8f613544
                v45 = v31;
                v43 = v34;
                v41 = v35;
                v39 = v26;
                v53 = v27;
                v51 = v28;
                v50 = v29;
                v47 = v30;
                switch (a2) {
                    case 0: {
                        int32_t v102 = *(int32_t *)(v16 + 8); // 0x8f61355c
                        v10 = v102;
                        int32_t v103 = board_foundry_id((char *)set_mem, v12, v13, v102); // 0x8f613564
                        int32_t v104 = *(int32_t *)v102 & 0xff0000; // 0x8f613568
                        g3 = v104;
                        if (v104 == v103) {
                            v21 = v31;
                            v38 = v32;
                            v37 = v33;
                            v17 = v4;
                            v20 = v34;
                            v19 = v35;
                            v18 = v26;
                            v25 = v27;
                            v24 = v28;
                            v23 = v29;
                            v22 = v30;
                            // 0x8f613644
                            v36 = g4;
                            // branch -> 0x8f613644
                            goto lab_0x8f613644_7;
                        }
                        break;
                    }
                    case 7: {
                        // 0x8f613554
                        g3 = 0;
                        int32_t v105 = 0; // 0x8f613588
                        int32_t v106 = v16; // 0x8f613578
                        // branch -> 0x8f613578
                        while (true) {
                            int32_t v107 = v105 + 4; // 0x8f61357c
                            char v108 = *(char *)(4 * v107 + *(int32_t *)(v106 + 8)); // 0x8f613584
                            int32_t v109 = v108; // 0x8f613584
                            *(int32_t *)(v8 + 4 * v105) = v109;
                            int32_t v110 = board_pmic_target(v105 % 256, v12, v107, v109) % 256; // 0x8f613590
                            set_mem = v110;
                            *(int32_t *)(4 * g3 + (int32_t)&v11) = v110;
                            int32_t v111 = g3 + 1; // 0x8f613598
                            g3 = v111;
                            if (v111 == 4) {
                                v10 = v7;
                                v13 = v11;
                                if (v7 == v11) {
                                    // 0x8f6135b4
                                    set_mem = v1;
                                    int32_t v112;
                                    v13 = v112;
                                    if (v1 == v112) {
                                        // 0x8f6135c4
                                        v12 = v57;
                                        int32_t v113;
                                        v13 = v113;
                                        if (v57 == v113) {
                                            // 0x8f6135d4
                                            v13 = v56;
                                            int32_t v114;
                                            if (v56 == v114) {
                                                // 0x8f6135e4
                                                v14 = v7;
                                                // branch -> 0x8f6135f4
                                                // 0x8f6135f4
                                                g3 = 0;
                                                v21 = v31;
                                                v38 = v56;
                                                v37 = v57;
                                                v17 = v2;
                                                v20 = v34;
                                                v19 = v35;
                                                v18 = v26;
                                                v25 = v27;
                                                v24 = v28;
                                                v23 = v29;
                                                v22 = v30;
                                                // branch -> 0x8f613644
                                                // 0x8f613644
                                                v36 = g4;
                                                // branch -> 0x8f613644
                                                goto lab_0x8f613644_7;
                                            }
                                        }
                                    }
                                }
                                int32_t v115 = *(int32_t *)(g2 + 4);
                                g2 = v115;
                                if (v115 == g4) {
                                    // break (via goto) -> 0x8f6135f4
                                    goto lab_0x8f6135f4;
                                }
                                v16 = v115;
                                // continue (via goto) -> 0x8f613528
                                goto lab_0x8f613528;
                            } else {
                                // 0x8f613578
                                v105 = v111;
                                v106 = g2;
                                // branch -> 0x8f613578
                                continue;
                            }
                        }
                      lab_0x8f6135f4:
                        // 0x8f6135f4
                        g3 = 0;
                        v21 = v31;
                        v38 = v32;
                        v37 = v33;
                        v17 = v4;
                        v20 = v34;
                        v19 = v35;
                        v18 = v26;
                        v25 = v27;
                        v24 = v28;
                        v23 = v29;
                        v22 = v30;
                        // branch -> 0x8f613644
                        // 0x8f613644
                        v36 = g4;
                        // branch -> 0x8f613644
                        goto lab_0x8f613644_7;
                        break;
                    }
                }
                // 0x8f61360c
                print_log(-1, (int32_t)"ERROR: Unsupported version (%d) in dt node check \n", a2, v10, v45, v47, v50, v51, v53, v39, v41, v43, 0);
                v46 = v45;
                v60 = v32;
                v59 = v33;
                v58 = v4;
                v44 = v43;
                v42 = v41;
                v40 = v39;
                v54 = v53;
                v52 = v51;
                v49 = v50;
                v48 = v47;
                v55 = 0;
                // branch -> 0x8f613718
                goto lab_0x8f613718_2;
            }
        }
    }
    // 0x8f613644
    v36 = g4;
    // branch -> 0x8f613644
    goto lab_0x8f613644_7;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memset(void * s, int c, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 07:15:23
