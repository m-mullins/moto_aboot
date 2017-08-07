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

typedef int8_t int4_t;

// ------------------- Function Prototypes --------------------

int32_t backup_needed(int32_t a1, int32_t a2, int32_t a3);
int32_t check_security_version(int32_t a1, uint32_t a2, uint32_t a3);
int32_t detect_current_secure_state(char * a1, int32_t a2);
int32_t get_block_size(int32_t a1, int32_t a2, int32_t a3);
int32_t get_current_secure_state(int32_t a1, int32_t a2);
int32_t get_hab_signature_offset(int32_t a1, int32_t a2);
int32_t get_hab_signature_size(int32_t a1, int32_t a2);
int32_t get_image_version(int32_t a1, int32_t a2, int32_t a3);
int32_t get_output_block_count(int32_t a1, int32_t a2, int32_t a3);
int32_t get_partition_version(int32_t a1);
int32_t get_unlock_data(int32_t * a1, int32_t a2);
int32_t hab_policy_init(void);
int32_t lock_phone(int32_t a1, int32_t a2);
int32_t locking_phone(int32_t a1, int32_t a2, int32_t a3);
int32_t move_to_verified(int32_t a1, int32_t a2, int32_t a3);
int32_t move_to_verified_validator(int32_t a1, int32_t a2, int32_t a3);
int32_t reset_current_secure_state(int32_t a1, int32_t result, int32_t a3);
int32_t state_transition_validate(int32_t a1);
int32_t transit_to_state(int32_t a1, int32_t a2, int32_t (*a3)(int32_t), int32_t a4);
int32_t validate_hab_sparse_partition(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t verify_hab_image(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

// --------------------- Global Variables ---------------------

int32_t g17 = 0; // LR
int32_t g18 = 0; // R0
int32_t g19 = 0; // R1
int32_t g20 = 0; // R10
int32_t g21 = 0; // R2
int32_t g22 = 0; // R3
int32_t g23 = 0; // R4
int32_t g24 = 0; // R5
int32_t g25 = 0; // R6
int32_t g26 = 0; // R7
int32_t g27 = 0; // R8
int32_t g28 = 0; // R9
int32_t g1 = 0; // 0x8f6b000c
int32_t g2 = 0; // 0x8f6b0048
int32_t g3 = 0; // 0x8f6b004c
int32_t g4 = 0; // 0x8f6b0074
int32_t g5 = 0; // 0x8f6b0078
char * g6; // 0x8f710a25
int32_t g7 = 0; // 0x8f710a26
char g8 = 0; // 0x8f710c22
char g9 = 0; // 0x8f710c23
char g10 = 0; // 0x8f710c24
char g11 = 0; // 0x8f710c25
int32_t g12 = 0; // 0x8f710c30
int32_t g13 = 0; // 0x8f710c34
int32_t g14 = 0; // 0x8f7112f4
int32_t g15 = 0; // 0x8f71302c
int32_t g16 = 0; // 0x8f713044

// ------------------------ Functions -------------------------

// Address range: 0x8f675884 - 0x8f675c07
int32_t verify_hab_image(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = a2; // R10
    char v2 = *(char *)(a2 + 41); // 0x8f675890
    char v3 = *(char *)(a2 + 40); // 0x8f675894
    char v4 = *(char *)(a2 + 33); // 0x8f67589c
    char v5 = *(char *)(a2 + 42); // 0x8f6758a8
    char v6 = *(char *)(a2 + 32); // 0x8f6758ac
    char v7 = *(char *)(a2 + 43); // 0x8f6758b8
    char v8 = *(char *)(a2 + 34); // 0x8f6758c0
    int32_t v9 = g14;
    int32_t v10 = 0x1000000 * (int32_t)v7 | 0x10000 * (int32_t)v5 | (int32_t)v3 | 256 * (int32_t)v2; // 0x8f6758c8
    char v11 = *(char *)(a2 + 45); // 0x8f6758cc
    char v12 = *(char *)(a2 + 44); // 0x8f6758d0
    char v13 = *(char *)(a2 + 35); // 0x8f6758d8
    uint32_t v14 = v10 + 1; // 0x8f6758dc
    char v15 = *(char *)(a2 + 46); // 0x8f6758e4
    char v16 = *(char *)(a2 + 47); // 0x8f6758f8
    uint32_t v17 = 0x1000000 * (int32_t)v13 | 0x10000 * (int32_t)v8 | (int32_t)v6 | 256 * (int32_t)v4; // 0x8f675900
    char v18 = *(char *)(a2 + 37); // 0x8f675904
    char v19 = *(char *)(a2 + 36); // 0x8f67590c
    char v20 = *(char *)(a2 + 38); // 0x8f675914
    char v21 = *(char *)(a2 + 39); // 0x8f67591c
    int32_t v22 = 0x1000000 * (int32_t)v21 | 0x10000 * (int32_t)v20 | (int32_t)v19 | 256 * (int32_t)v18; // 0x8f675920
    int32_t v23 = v22; // R1
    uint32_t v24 = v14 - v17; // 0x8f675924
    int32_t v25; // 0x8f675968
    int32_t v26;
    int32_t v27;
    int32_t v28;
    if ((512 * ((0x1000000 * (int32_t)v16 || 0x10000 * (int32_t)v15 || (int32_t)v12 || 256 * (int32_t)v11) + (int32_t)(v10 == -1) - v22 + (int32_t)(v14 < v17)) || v24 / 0x800000) == 0) {
        // after_if_8f675944_0
        v25 = get_entry_name(a2, v22, a4, 0, v28, 0, 0, v27);
        if (512 * v24 == a4) {
            int32_t v29 = is_bootloader_partition(v25, v23, a4, 0, v28, 0, 0, v27, v26, v9, g23); // 0x8f67596c
            int32_t v30 = 0x11000000;
            if (v29 != 0) {
                // 0x8f67597c
                v30 = target_get_scratch_address(v29, v23);
                // branch -> 0x8f675984
            }
            // 0x8f675984
            hab_map_address(a3, v30, a4, 0);
            char v31 = *(char *)(v1 + 41); // 0x8f67598c
            char v32 = *(char *)(v1 + 40); // 0x8f675990
            char v33 = *(char *)(v1 + 33); // 0x8f675994
            char v34 = *(char *)(v1 + 42); // 0x8f67599c
            char v35 = *(char *)(v1 + 32); // 0x8f6759a0
            int32_t v36 = *(int32_t *)(a1 + 4); // 0x8f6759a4
            char v37 = *(char *)(v1 + 43); // 0x8f6759ac
            char v38 = *(char *)(v1 + 34); // 0x8f6759b4
            char v39 = *(char *)(v1 + 35); // 0x8f6759c8
            int32_t v40 = 0x1000000 * (int32_t)v39 | 0x10000 * (int32_t)v38 | (int32_t)v35 | 256 * (int32_t)v33; // 0x8f6759e4
            int32_t v41 = v40; // R2
            char v42 = *(char *)(v1 + 37); // 0x8f6759e8
            char v43 = *(char *)(v1 + 36); // 0x8f6759f0
            char v44 = *(char *)(v1 + 38); // 0x8f6759f8
            int32_t v45 = 0x10000 * (int32_t)v44 | (int32_t)v43 | 256 * (int32_t)v42; // 0x8f6759fc
            int32_t v46 = (int32_t)*(char *)(v1 + 39); // 0x8f675a00
            int32_t v47 = 0x1000000 * v46 | v45; // 0x8f675a04
            int32_t v48 = v47; // R3
            int32_t v49 = *(int32_t *)(a1 + 8); // R5
            int32_t v50 = 512 * ((0x1000000 * (int32_t)v37 | 0x10000 * (int32_t)v34 | (int32_t)v32 | 256 * (int32_t)v31) + 1 - v40) - 0x1000 + a3; // 0x8f675a18
            v26 = v50;
            uint32_t v51 = hab_health_check(v46, v45, v40, v47, v28, 0, 0, v27); // 0x8f675a20
            int32_t v52 = v51 % 256; // 0x8f675a24
            int32_t result = v52; // R4
            int32_t v53 = 0x10000 * v51 / 0x10000; // 0x8f675a28_0
            int32_t v54; // 0x8f675bac10
            int32_t v55; // 0x8f675bac11
            int32_t v56; // 0x8f675a44_0
            int32_t v57; // 0x8f675b78
            int32_t v58; // 0x8f675b9c
            int32_t v59;
            int32_t v60;
            int32_t v61; // 0x8f675b7c
            if (v52 == 240) {
                // 0x8f675a34
                v23 = v49;
                int32_t v62;
                uint32_t v63 = hab_install_super_root_key(v36, v49, v41, v48, v28, 0, 0, v53, v50, v9, g23, g24, g25, g26, g27, g28, g20, g17, v62, 0, 0, 0, 0, 0, 0, 0); // 0x8f675a3c
                int32_t v64 = v63 % 256; // 0x8f675a40
                result = v64;
                v56 = 0x10000 * v63 / 0x10000;
                if (v64 == 240) {
                    int32_t v65 = get_entry_name(v1, v23, v41, v48, v28, 0, 0, v56); // 0x8f675a74
                    int32_t v66; // 0x8f675ac4_11
                    int32_t v67; // 0x8f675acc_0
                    int32_t v68; // 0x8f675b4c_0
                    int32_t v69; // 0x8f675af4
                    int32_t v70; // 0x8f675b28
                    int32_t v71; // 0x8f675b2c
                    uint32_t v72; // 0x8f675b44
                    int32_t v73; // 0x8f675b60
                    int32_t v74;
                    int32_t v75; // 0x8f675afc
                    int32_t v76; // 0x8f675a84
                    int32_t v77; // 0x8f675ac8
                    int32_t v78; // 0x8f675b48
                    if (is_bootloader_partition(v65, v23, v41, v48, v28, 0, 0, v56, v50, v9, g23) == 0) {
                        // 0x8f675a84
                        v76 = (int32_t)*(char *)(v1 + 48);
                        v48 = v76;
                        if ((v76 & 4) == 0) {
                            int32_t v79 = &v26; // 0x8f675ac0_0
                            v23 = v79;
                            v66 = (int32_t)cid_verify_sig(1, v79, v41, v76, v28, 0, 0, v56, v50, v9);
                            // branch -> 0x8f675ac8
                            // 0x8f675ac8
                            v77 = v66 % 256;
                            result = v77;
                            v67 = 0x10000 * v66 / 0x10000;
                            v70 = get_entry_name(v1, v23, v41, v48, v28, 0, 0, v67);
                            if (v77 != 240) {
                                // 0x8f675adc
                                print_log(5, (int32_t)"hab check failed for %s", v70, v48, v28, 0, 0, v67, v26, v9, g23, g24, g25);
                                v69 = get_entry_name(v1, (int32_t)"hab check failed for %s", v70, v48, v28, 0, 0, v67);
                                v75 = result;
                                print_log(0, (int32_t)"Failed to hab check for %s: error=0x%02x\n", v69, v75, v28, 0, 0, v67, v26, v9, g23, g24, g25);
                                v54 = v67;
                                // branch -> 0x8f675b74
                                // 0x8f675b74
                                v57 = get_entry_name(v1, (int32_t)"Failed to hab check for %s: error=0x%02x\n", v69, v75, v28, 0, 0, v54);
                                v61 = result;
                                v48 = v61;
                                print_log(0, (int32_t)"%s: HAB error 0x%x for %s", (int32_t)"check_hab_signature", v61, v57, 0, 0, v54, v26, v9, g23, g24, g25);
                                v58 = get_entry_name(v1, (int32_t)"%s: HAB error 0x%x for %s", (int32_t)"check_hab_signature", v48, v57, 0, 0, v54);
                                print_log(5, (int32_t)"Failed to verify hab image %s", v58, v48, v57, 0, 0, v54, v26, v9, g23, g24, g25);
                                // branch -> 0x8f675bb0
                                // 0x8f675bb0
                                hab_map_address(0, 0, v58, v48);
                                // branch -> 0x8f675bbc
                                // 0x8f675bbc
                                if (v9 != g14) {
                                    // 0x8f675bd0
                                    __stack_chk_fail();
                                    // branch -> 0x8f675bd4
                                }
                                // 0x8f675bd4
                                return -1;
                            }
                            // 0x8f675b28
                            v71 = is_bootloader_partition(v70, v23, v41, v48, v28, 0, 0, v67, v26, v9, g23);
                            v74 = 0x11000000;
                            if (v71 != 0) {
                                // 0x8f675b3c
                                v74 = target_get_scratch_address(v71, v23);
                                // branch -> 0x8f675b40
                            }
                            // 0x8f675b40
                            v72 = hab_assert_verification(v74, 4, v41, v48, v28, 0, 0, v67);
                            v78 = v72 % 256;
                            v68 = 0x10000 * v72 / 0x10000;
                            if (v78 == 240) {
                                // if_8f675b54_0_true
                                result = 0;
                                // branch -> 0x8f675bb0
                            } else {
                                // 0x8f675b5c
                                v73 = get_entry_name(v1, 4, v41, v48, v28, 0, 0, v68);
                                v55 = v68;
                                v60 = v73;
                                v59 = (int32_t)"Failed to assert verification for %s\n";
                                // branch -> 0x8f675b70
                                // 0x8f675b70
                                print_log(5, v59, v60, v48, v28, 0, 0, v55, v26, v9, g23, g24, g25);
                                v54 = v55;
                                // branch -> 0x8f675b74
                                // 0x8f675b74
                                v57 = get_entry_name(v1, v59, v60, v48, v28, 0, 0, v54);
                                v61 = v78;
                                v48 = v61;
                                result = -1;
                                print_log(0, (int32_t)"%s: HAB error 0x%x for %s", (int32_t)"check_hab_signature", v61, v57, 0, 0, v54, v26, v9, g23, g24, g25);
                                v58 = get_entry_name(v1, (int32_t)"%s: HAB error 0x%x for %s", (int32_t)"check_hab_signature", v48, v57, 0, 0, v54);
                                v41 = v58;
                                print_log(5, (int32_t)"Failed to verify hab image %s", v58, v48, v57, 0, 0, v54, v26, v9, g23, g24, g25);
                                // branch -> 0x8f675bb0
                            }
                            // 0x8f675bb0
                            hab_map_address(0, 0, v41, v48);
                            // branch -> 0x8f675bbc
                            // 0x8f675bbc
                            if (v9 != g14) {
                                // 0x8f675bd0
                                __stack_chk_fail();
                                // branch -> 0x8f675bd4
                            }
                            // 0x8f675bd4
                            return result;
                        }
                    } else {
                        // 0x8f675a70
                        v76 = v48;
                        // branch -> 0x8f675a90
                    }
                    // 0x8f675a90
                    print_log(2, (int32_t)"Skip cid validation for %s!\n", get_entry_name(v1, v23, v41, v76, v28, 0, 0, v56), v48, v28, 0, 0, v56, v26, v9, g23, g24, g25);
                    int32_t v80 = &v26; // 0x8f675aa8_0
                    v23 = v80;
                    v41 = 0;
                    v66 = hab_csf_check(1, v80, 0, v48, v28, 0, 0, v56, v26, v9, g23, g24, g25, g26, g27, g28, g20, g17, v62);
                    // branch -> 0x8f675ac8
                    // 0x8f675ac8
                    v77 = v66 % 256;
                    result = v77;
                    v67 = 0x10000 * v66 / 0x10000;
                    v70 = get_entry_name(v1, v23, v41, v48, v28, 0, 0, v67);
                    if (v77 != 240) {
                        // 0x8f675adc
                        print_log(5, (int32_t)"hab check failed for %s", v70, v48, v28, 0, 0, v67, v26, v9, g23, g24, g25);
                        v69 = get_entry_name(v1, (int32_t)"hab check failed for %s", v70, v48, v28, 0, 0, v67);
                        v75 = result;
                        print_log(0, (int32_t)"Failed to hab check for %s: error=0x%02x\n", v69, v75, v28, 0, 0, v67, v26, v9, g23, g24, g25);
                        v54 = v67;
                        // branch -> 0x8f675b74
                        // 0x8f675b74
                        v57 = get_entry_name(v1, (int32_t)"Failed to hab check for %s: error=0x%02x\n", v69, v75, v28, 0, 0, v54);
                        v61 = result;
                        v48 = v61;
                        print_log(0, (int32_t)"%s: HAB error 0x%x for %s", (int32_t)"check_hab_signature", v61, v57, 0, 0, v54, v26, v9, g23, g24, g25);
                        v58 = get_entry_name(v1, (int32_t)"%s: HAB error 0x%x for %s", (int32_t)"check_hab_signature", v48, v57, 0, 0, v54);
                        print_log(5, (int32_t)"Failed to verify hab image %s", v58, v48, v57, 0, 0, v54, v26, v9, g23, g24, g25);
                        // branch -> 0x8f675bb0
                        // 0x8f675bb0
                        hab_map_address(0, 0, v58, v48);
                        // branch -> 0x8f675bbc
                        // 0x8f675bbc
                        if (v9 != g14) {
                            // 0x8f675bd0
                            __stack_chk_fail();
                            // branch -> 0x8f675bd4
                        }
                        // 0x8f675bd4
                        return -1;
                    }
                    // 0x8f675b28
                    v71 = is_bootloader_partition(v70, v23, v41, v48, v28, 0, 0, v67, v26, v9, g23);
                    v74 = 0x11000000;
                    if (v71 != 0) {
                        // 0x8f675b3c
                        v74 = target_get_scratch_address(v71, v23);
                        // branch -> 0x8f675b40
                    }
                    // 0x8f675b40
                    v72 = hab_assert_verification(v74, 4, v41, v48, v28, 0, 0, v67);
                    v78 = v72 % 256;
                    v68 = 0x10000 * v72 / 0x10000;
                    if (v78 == 240) {
                        // if_8f675b54_0_true
                        result = 0;
                        // branch -> 0x8f675bb0
                    } else {
                        // 0x8f675b5c
                        v73 = get_entry_name(v1, 4, v41, v48, v28, 0, 0, v68);
                        v55 = v68;
                        v60 = v73;
                        v59 = (int32_t)"Failed to assert verification for %s\n";
                        // branch -> 0x8f675b70
                        // 0x8f675b70
                        print_log(5, v59, v60, v48, v28, 0, 0, v55, v26, v9, g23, g24, g25);
                        v54 = v55;
                        // branch -> 0x8f675b74
                        // 0x8f675b74
                        v57 = get_entry_name(v1, v59, v60, v48, v28, 0, 0, v54);
                        v61 = v78;
                        v48 = v61;
                        result = -1;
                        print_log(0, (int32_t)"%s: HAB error 0x%x for %s", (int32_t)"check_hab_signature", v61, v57, 0, 0, v54, v26, v9, g23, g24, g25);
                        v58 = get_entry_name(v1, (int32_t)"%s: HAB error 0x%x for %s", (int32_t)"check_hab_signature", v48, v57, 0, 0, v54);
                        v41 = v58;
                        print_log(5, (int32_t)"Failed to verify hab image %s", v58, v48, v57, 0, 0, v54, v26, v9, g23, g24, g25);
                        // branch -> 0x8f675bb0
                    }
                    // 0x8f675bb0
                    hab_map_address(0, 0, v41, v48);
                    // branch -> 0x8f675bbc
                    // 0x8f675bbc
                    if (v9 != g14) {
                        // 0x8f675bd0
                        __stack_chk_fail();
                        // branch -> 0x8f675bd4
                    }
                    // 0x8f675bd4
                    return result;
                }
            } else {
                int32_t v81 = get_entry_name(v1, v45, v41, v48, v28, 0, 0, v53); // 0x8f675a58
                v23 = (int32_t)"Failed to do health check for %s\n";
                v41 = v81;
                print_log(5, (int32_t)"Failed to do health check for %s\n", v81, v48, v28, 0, 0, v53, v26, v9, g23, g24, g25);
                v56 = v53;
                // branch -> 0x8f675b10
            }
            int32_t v82 = get_entry_name(v1, v23, v41, v48, v28, 0, 0, v56); // 0x8f675b14
            v55 = v56;
            v60 = v82;
            v59 = (int32_t)"Failed to install SRK for %s";
            // branch -> 0x8f675b70
            // 0x8f675b70
            print_log(5, v59, v60, v48, v28, 0, 0, v55, v26, v9, g23, g24, g25);
            v54 = v55;
            // branch -> 0x8f675b74
            // 0x8f675b74
            v57 = get_entry_name(v1, v59, v60, v48, v28, 0, 0, v54);
            v61 = result;
            v48 = v61;
            print_log(0, (int32_t)"%s: HAB error 0x%x for %s", (int32_t)"check_hab_signature", v61, v57, 0, 0, v54, v26, v9, g23, g24, g25);
            v58 = get_entry_name(v1, (int32_t)"%s: HAB error 0x%x for %s", (int32_t)"check_hab_signature", v48, v57, 0, 0, v54);
            print_log(5, (int32_t)"Failed to verify hab image %s", v58, v48, v57, 0, 0, v54, v26, v9, g23, g24, g25);
            // branch -> 0x8f675bb0
            // 0x8f675bb0
            hab_map_address(0, 0, v58, v48);
            // branch -> 0x8f675bbc
            // 0x8f675bbc
            if (v9 != g14) {
                // 0x8f675bd0
                __stack_chk_fail();
                // branch -> 0x8f675bd4
            }
            // 0x8f675bd4
            return -1;
        }
    } else {
        // after_if_8f675944_0.thread
        v25 = get_entry_name(a2, v22, a4, 0, v28, 0, 0, v27);
        // branch -> 0x8f67594c
    }
    // 0x8f67594c
    print_log(5, (int32_t)"Mismatched partition size (%s)", v25, 0, v28, 0, 0, v27, v26, v9, g23, g24, g25);
    // branch -> 0x8f675bbc
    // 0x8f675bbc
    if (v9 != g14) {
        // 0x8f675bd0
        __stack_chk_fail();
        // branch -> 0x8f675bd4
    }
    // 0x8f675bd4
    return -1;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 21
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:53:40