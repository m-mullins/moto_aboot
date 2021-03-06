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

int32_t clock_config_mmc(int32_t a1, int32_t a2);
int32_t clock_init_mmc(int32_t a1);
int32_t dev_diag_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t display_clear_rows(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t display_draw_text_at_line(int32_t a1, int32_t a2, int32_t a3);
void function_8f64b5d8(void);
void function_8f64b638(int32_t a1, int32_t a2, int32_t a3);
int32_t get_last_status(void);
int32_t get_sector_start(void);
int32_t hab_mcs_hashSHA512(int32_t a1, int32_t * a2, int32_t * a3);
int32_t hab_su_uid(char * a1);
int32_t handle_poweroff_callback(int32_t a1, int32_t a2, int32_t a3);
int32_t is_dev_diag_mode(void);
int32_t mcs_memclear(char * a1, int32_t a2, int32_t a3);
int32_t mcs_mp_mont_reduce(int32_t * a1, int32_t a2, int32_t a3);
int32_t mcs_mp_mont_sqr(int32_t * a1, int32_t a2, int32_t a3);
int32_t mcs_multi_convert_to_multi_digit_byte_len(int32_t a1, int32_t * a2, uint32_t a3);
int32_t misc_clear_mode(char * a1, int32_t a2, int32_t a3);
int32_t panel_manager_set_panel_hbm_feat(char a1, int32_t a2, int32_t a3);
char * restore_secure_cfg(int32_t a1, int32_t a2);
int32_t scm_protect_keystore(int32_t a1, int32_t a2, int32_t a3);
int32_t sdhci_msm_init(int32_t * a1, int32_t * a2);
int32_t sdhci_msm_set_mci_clk(int32_t * a1, int32_t a2, int32_t a3);
int32_t SecHashFinal(int32_t a1, int32_t a2);
int32_t SecHashUpdate(int32_t a1, int32_t a2);
int32_t target_mmc_init(int32_t * a1, int32_t a2);
int32_t udc_descriptor_register(int32_t * a1, int32_t a2, int32_t a3);
int32_t udc_string_desc_alloc(char * str, int32_t a2);
int32_t XXH32_init(char * a1, int32_t a2);
int32_t XXH32_resetState(int32_t * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

// Detected cryptographic pattern: Hash_constant_words_K_for_SHA_384_and_SHA_512 (64-bit, little endian)
int64_t Hash_constant_words_K_for_SHA_384_and_SHA_512_at_8f6a6d68[80] = {0x428a2f98d728ae22, 0x7137449123ef65cd, -0x4a3f043013b2c4d1, -0x164a245a7e762444, 0x3956c25bf348b538, 0x59f111f1b605d019, -0x6dc07d5b50e6b065, -0x54e3a12a25927ee8, -0x27f855675cfcfdbe, 0x12835b0145706fbe, 0x243185be4ee4b28c, 0x550c7dc3d5ffb4e2, 0x72be5d74f27b896f, -0x7f214e01c4e9694f, -0x6423f958da38edcb, -0x3e640e8b3096d96c, -0x1b64963e610eb52e, -0x1041b879c7b0da1d, 0xfc19dc68b8cd5b5, 0x240ca1cc77ac9c65, 0x2de92c6f592b0275, 0x4a7484aa6ea6e483, 0x5cb0a9dcbd41fbd4, 0x76f988da831153b5, -0x67c1aead11992055, -0x57ce3992d24bcdf0, -0x4ffcd8376704dec1, -0x40a680384110f11c, -0x391ff40cc257703e, -0x2a586eb86cf558db, 0x6ca6351e003826f, 0x142929670a0e6e70, 0x27b70a8546d22ffc, 0x2e1b21385c26c926, 0x4d2c6dfc5ac42aed, 0x53380d139d95b3df, 0x650a73548baf63de, 0x766a0abb3c77b2a8, -0x7e3d36d1b812511a, -0x6d8dd37aeb7dcac5, -0x5d40175eb30efc9c, -0x57e599b443bdcfff, -0x3db4748f2f07686f, -0x3893ae5cf9ab41d0, -0x2e6d17e62910ade8, -0x2966f9dbaa9a56f0, -0xbf1ca7aa88edfd6, 0x106aa07032bbd1b8, 0x19a4c116b8d2d0c8, 0x1e376c085141ab53, 0x2748774cdf8eeb99, 0x34b0bcb5e19b48a8, 0x391c0cb3c5c95a63, 0x4ed8aa4ae3418acb, 0x5b9cca4f7763e373, 0x682e6ff3d6b2b8a3, 0x748f82ee5defb2fc, 0x78a5636f43172f60, -0x7b3787eb5e0f548e, -0x7338fdf7e59bc614, -0x6f410005dc9ce1d8, -0x5baf9314217d4217, -0x41065c084d3986eb, -0x398e870d1c8dacd5, -0x35d8c13115d99e64, -0x2e794738de3f3df9, -0x15258229321f14e2, -0xa82b08011912e88, 0x6f067aa72176fba, 0xa637dc5a2c898a6, 0x113f9804bef90dae, 0x1b710b35131c471b, 0x28db77f523047d84, 0x32caab7b40c72493, 0x3c9ebe0a15c9bebc, 0x431d67c49c100d4c, 0x4cc5d4becb3e42b6, 0x597f299cfc657e2a, 0x5fcb6fab3ad6faec, 0x6c44198c4a475817}; // 0x8f6a6d68
int32_t g24 = 0; // LR
int32_t g25 = 0; // R0
int32_t g26 = 0; // R1
int32_t g27 = 0; // R10
int32_t g28 = 0; // R11
int32_t g29 = 0; // R2
int32_t g30 = 0; // R4
int32_t g31 = 0; // R5
int32_t g32 = 0; // R6
int32_t g33 = 0; // R7
int32_t g34 = 0; // R8
int32_t g35 = 0; // R9
int32_t g1 = -0x1a60cfd8; // 0x8f606470
int32_t g2 = -0x1a60cfd8; // 0x8f6064a4
int32_t g3 = -0x16d2bfc9; // 0x8f6064d8
int32_t g4 = -0x16d2bfc9; // 0x8f606530
int32_t g5 = -0x16d2bfc9; // 0x8f60658c
int32_t g6 = -0x16d2bfed; // 0x8f608218
int32_t g7 = -0x1d7bfff8; // 0x8f6342dc
int32_t g8 = 0x65440030; // 0x8f69c66f
int32_t g9 = 1; // 0x8f6ac048
char * g10 = "\n"; // 0x8f6ac1b0
char * g11 = "\x01"; // 0x8f6ac21c
int32_t g12 = 0xffffff; // 0x8f6afe08
char (*g13)[14] = "boot-recovery"; // 0x8f6aff94
int32_t g14 = -1; // 0x8f6affb0
int32_t g15 = 0; // 0x8f6b7948
char * g16; // 0x8f6b7977
int32_t g17 = 0; // 0x8f6b7c24
int32_t g18 = 0; // 0x8f6e0c00
int32_t g19 = 0; // 0x8f6e0c08
int32_t g20 = 0; // 0x8f6e0c34
int32_t g21 = 0; // 0x8f6e0c38
char * g22; // 0x8f6e0c40
int32_t g23 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f671210 - 0x8f6716db
// Used cryptographic patterns:
//  - Hash_constant_words_K_for_SHA_384_and_SHA_512 (64-bit, little endian)
int32_t hab_mcs_hashSHA512(int32_t a1, int32_t * a2, int32_t * a3) {
    int32_t v1 = (int32_t)a2; // R12
    int32_t v2;
    int32_t v3 = &v2; // 0x8f67121c_0
    int32_t v4 = (int32_t)a3; // R6
    int32_t v5 = a1; // 0x8f671248
    int32_t v6 = 0; // 0x8f6712f0
    // branch -> 0x8f671234
    while (true) {
        char v7 = *(char *)(v6 + a1); // 0x8f671234
        char v8 = *(char *)(v5 + 7); // 0x8f67123c
        char v9 = *(char *)(v5 + 1); // 0x8f671250
        char v10 = *(char *)(v5 + 2); // 0x8f671274
        char v11 = *(char *)(v5 + 3); // 0x8f671298
        char v12 = *(char *)(v5 + 4); // 0x8f6712ac
        char v13 = *(char *)(v5 + 5); // 0x8f6712c4
        char v14 = *(char *)(v5 + 6); // 0x8f6712dc
        int32_t v15 = v6 + 8; // 0x8f6712f4
        int32_t v16 = v6 + 136 + v3; // 0x8f671308
        *(int32_t *)v16 = 256 * (int32_t)v14 | 0x10000 * (int32_t)v13 | 0x1000000 * (int32_t)v12 | (int32_t)v8;
        *(int32_t *)(v16 + 4) = 0x10000 * (int32_t)v9 | 0x1000000 * (int32_t)v7 | 256 * (int32_t)v10 | (int32_t)v11;
        if (v15 == 128) {
            // 0x8f671310
            int32_t v17;
            int32_t v18 = &v17; // 0x8f67132c
            int32_t v19 = 0; // 0x8f671324
            // branch -> 0x8f671318
            while (true) {
                int32_t v20 = v18 + 8; // 0x8f671320
                uint32_t v21 = *(int32_t *)v20; // 0x8f671320
                int32_t v22 = v19 + 8; // 0x8f671324
                int32_t v23 = *(int32_t *)(v18 + 76); // 0x8f671328
                int32_t v24 = v19 + 136 + v3; // 0x8f671330
                uint32_t v25 = *(int32_t *)v24; // 0x8f671330
                int32_t v26 = *(int32_t *)(v24 + 4); // 0x8f671330
                uint32_t v27 = *(int32_t *)(v18 + 12); // 0x8f671334
                uint32_t v28 = v25 + *(int32_t *)(v18 + 72); // 0x8f671338
                uint32_t v29 = *(int32_t *)(v18 + 112); // 0x8f67133c
                uint32_t v30 = *(int32_t *)(v18 + 116); // 0x8f671354
                int32_t v31 = 0x2000000 * v27 | v21 / 128; // 0x8f671388
                v2 = v31;
                uint32_t v32 = ((0x80000000 * v27 | v21 / 2) ^ (0x1000000 * v27 | v21 / 256) ^ v31) + v28; // 0x8f6713a8
                uint32_t v33 = (0x2000 * v30 | v29 / 0x80000) ^ (v30 / 0x20000000 | 8 * v29) ^ (0x4000000 * v30 | v29 / 64); // 0x8f6713f8
                uint32_t v34 = v33 + v32; // 0x8f671400
                *(int32_t *)(v18 + 128) = v34;
                *(int32_t *)(v18 + 132) = ((v27 / 256 | 0x1000000 * v21) ^ v27 / 128 ^ (v27 / 2 | 0x80000000 * v21)) + v26 + v23 + (int32_t)(v28 < v25) + (int32_t)(v32 < v28) + ((8 * v30 | v29 / 0x20000000) ^ v30 / 64 ^ (v30 / 0x80000 | 0x2000 * v29)) + (int32_t)(v34 < v33);
                if (v22 == 512) {
                    int32_t v35 = *(int32_t *)v1; // 0x8f671418
                    int32_t v36 = *(int32_t *)(v1 + 4); // 0x8f671418
                    int32_t v37 = *(int32_t *)(v1 + 16); // 0x8f671434
                    int32_t v38 = *(int32_t *)(v1 + 32); // 0x8f671448
                    int32_t v39 = *(int32_t *)(v1 + 36); // 0x8f671448
                    int32_t v40 = v35; // R10
                    int32_t v41 = v36; // R11
                    v2 = v37;
                    int32_t v42 = 0; // 0x8f67150c
                    uint32_t v43 = v35; // 0x8f6714dc
                    uint32_t v44 = v36; // 0x8f6714cc
                    int32_t v45 = *(int32_t *)(v1 + 8); // 0x8f6716342
                    int32_t v46 = *(int32_t *)(v1 + 60); // 0x8f67168c711
                    int32_t v47 = *(int32_t *)(v1 + 52); // 0x8f67168c7
                    int32_t v48 = *(int32_t *)(v1 + 56); // 0x8f67168c610
                    int32_t v49 = *(int32_t *)(v1 + 48); // 0x8f67168c6
                    int32_t v50 = *(int32_t *)(v1 + 28); // 0x8f67162819
                    int32_t v51 = *(int32_t *)(v1 + 20); // 0x8f6716281
                    int32_t v52 = *(int32_t *)(v1 + 24); // 0x8f6715f08
                    int32_t v53 = *(int32_t *)(v1 + 44); // 0x8f6716785
                    int32_t v54 = *(int32_t *)(v1 + 40); // 0x8f6716784
                    int32_t v55 = *(int32_t *)(v1 + 12); // 0x8f6716343
                    // branch -> 0x8f671460
                    while (true) {
                        uint32_t v56 = v45 & (v37 ^ v43) ^ v37 & v43; // 0x8f6714a4
                        uint32_t v57 = v56 + ((16 * v44 | v43 / 0x10000000) ^ (v44 / 4 | 0x40000000 * v43) ^ (v44 / 128 | 0x2000000 * v43)); // 0x8f6714f0
                        int32_t v58 = v42 + 136 + v3; // 0x8f671504
                        uint32_t v59 = *(int32_t *)v58; // 0x8f671504
                        int32_t v60 = *(int32_t *)(v58 + 4); // 0x8f671504
                        int32_t v61 = v42 + (int32_t)&Hash_constant_words_K_for_SHA_384_and_SHA_512_at_8f6a6d68; // 0x8f671508
                        int32_t v62 = *(int32_t *)(v61 + 4); // 0x8f671508
                        int32_t v63 = v42 + 8; // 0x8f67150c
                        int32_t v64 = v63; // LR
                        uint32_t v65 = *(int32_t *)v61 + v59; // 0x8f671510
                        uint32_t v66 = (0x40000 * v39 | v38 / 0x4000) ^ (0x4000 * v39 | v38 / 0x40000) ^ (v39 / 512 | 0x800000 * v38); // 0x8f671574
                        uint32_t v67 = v66 + v65; // 0x8f67157c
                        uint32_t v68 = v38 & v54 ^ v49 & -1 - v38; // 0x8f67159c
                        uint32_t v69 = v67 + v68; // 0x8f6715a4
                        uint32_t v70 = v69 + v48; // 0x8f6715b4
                        int32_t v71 = v60 + v46 + v62 + (int32_t)(v65 < v59) + (v39 & v53 ^ v47 & -1 - v39) + ((v39 / 0x4000 | 0x40000 * v38) ^ (v39 / 0x40000 | 0x4000 * v38) ^ (0x800000 * v39 | v38 / 512)) + (int32_t)(v67 < v66) + (int32_t)(v69 < v68) + (int32_t)(v70 < v69); // 0x8f6715b8
                        int32_t v72 = v70 + v52; // 0x8f6715c0
                        int32_t v73 = v72; // R4
                        int32_t v74 = (int32_t)(v72 < v52) + v50 + v71; // 0x8f6715c4
                        int32_t v75 = v74; // R5
                        int32_t v76 = v70 + v57; // 0x8f6715c8
                        int32_t v77 = (int32_t)(v76 < v70) + ((v51 ^ v44) & v55 ^ v51 & v44) + ((v44 / 0x10000000 | 16 * v43) ^ (0x40000000 * v44 | v43 / 4) ^ (0x2000000 * v44 | v43 / 128)) + (int32_t)(v57 < v56) + v71; // 0x8f6715cc
                        if (v63 == 640) {
                            uint32_t v78 = v76 + v35; // 0x8f671618
                            *(int32_t *)v4 = v78;
                            *(int32_t *)(v4 + 4) = (int32_t)(v78 < v76) + v36 + v77;
                            uint32_t v79 = *(int32_t *)(v1 + 8); // 0x8f671624
                            int32_t v80 = *(int32_t *)(v1 + 12); // 0x8f671624
                            uint32_t v81 = v40 + v79; // 0x8f67162c
                            *(int32_t *)(v4 + 8) = v81;
                            *(int32_t *)(v4 + 12) = v41 + v80 + (int32_t)(v81 < v79);
                            uint32_t v82 = *(int32_t *)(v1 + 16); // 0x8f67163c
                            int32_t v83 = *(int32_t *)(v1 + 20); // 0x8f67163c
                            uint32_t v84 = v82 + v45; // 0x8f671640
                            *(int32_t *)(v4 + 16) = v84;
                            *(int32_t *)(v4 + 20) = v83 + v55 + (int32_t)(v84 < v82);
                            uint32_t v85 = *(int32_t *)(v1 + 24); // 0x8f67164c
                            int32_t v86 = *(int32_t *)(v1 + 28); // 0x8f67164c
                            uint32_t v87 = v85 + v2; // 0x8f671650
                            *(int32_t *)(v4 + 24) = v87;
                            *(int32_t *)(v4 + 28) = v86 + v51 + (int32_t)(v87 < v85);
                            uint32_t v88 = *(int32_t *)(v1 + 32); // 0x8f671660
                            int32_t v89 = *(int32_t *)(v1 + 36); // 0x8f671660
                            uint32_t v90 = v73 + v88; // 0x8f671668
                            *(int32_t *)(v4 + 32) = v90;
                            *(int32_t *)(v4 + 36) = v75 + v89 + (int32_t)(v90 < v88);
                            uint32_t v91 = *(int32_t *)(v1 + 40); // 0x8f671674
                            int32_t v92 = *(int32_t *)(v1 + 44); // 0x8f671674
                            uint32_t v93 = v38 + v91; // 0x8f67167c
                            *(int32_t *)(v4 + 40) = v93;
                            *(int32_t *)(v4 + 44) = v39 + v92 + (int32_t)(v93 < v91);
                            uint32_t v94 = *(int32_t *)(v1 + 48); // 0x8f671688
                            int32_t v95 = *(int32_t *)(v1 + 52); // 0x8f671688
                            uint32_t v96 = v94 + v54; // 0x8f671690
                            *(int32_t *)(v4 + 48) = v96;
                            *(int32_t *)(v4 + 52) = v95 + v53 + (int32_t)(v96 < v94);
                            uint32_t v97 = *(int32_t *)(v1 + 56); // 0x8f67169c
                            int32_t v98 = *(int32_t *)(v1 + 60); // 0x8f67169c
                            uint32_t v99 = v97 + v49; // 0x8f6716a0
                            *(int32_t *)(v4 + 56) = v99;
                            *(int32_t *)(v4 + 60) = v98 + v47 + (int32_t)(v99 < v97);
                            bzero((char *)&v17, v64);
                            // 0x8f6716cc
                            return 0;
                        }
                        int32_t v100 = v38; // 0x8f6715e4
                        int32_t v101 = v39; // 0x8f6715e4
                        int32_t v102 = v2; // 0x8f6715f0
                        int32_t v103 = v40; // 0x8f671600
                        int32_t v104 = v41; // 0x8f671600
                        v40 = v76;
                        v2 = v45;
                        v41 = v77;
                        v39 = v74;
                        v38 = v72;
                        v42 = v63;
                        v43 = v76;
                        v44 = v77;
                        v37 = v45;
                        v45 = v103;
                        v46 = v47;
                        v47 = v53;
                        v48 = v49;
                        v49 = v54;
                        v50 = v51;
                        v51 = v55;
                        v52 = v102;
                        v53 = v101;
                        v54 = v100;
                        v55 = v104;
                        // branch -> 0x8f671460
                    }
                } else {
                    // 0x8f671318
                    v18 = v20;
                    v19 = v22;
                    // branch -> 0x8f671318
                    continue;
                }
            }
        } else {
            // 0x8f671234
            v5 += 8;
            v6 = v15;
            // branch -> 0x8f671234
            continue;
        }
    }
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void bzero(void * s, size_t n);
// void * malloc(size_t size);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// char * strcpy(char * restrict dest, const char * restrict src);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:14:13
