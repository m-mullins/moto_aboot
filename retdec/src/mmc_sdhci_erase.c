//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t fboot_cmd_download_validate(int32_t a1, int32_t a2, int32_t a3);
int32_t fboot_usb_init(int32_t a1, int32_t a2, int32_t a3);
int32_t get_barcode_width(void);
int32_t get_font_type(int32_t a1, int32_t a2);
int32_t get_imei_buf(int32_t a1, int32_t a2, int32_t a3);
int32_t get_signature_size(int32_t a1, int32_t a2);
int32_t get_sn_buf(int32_t a1, int32_t a2, int32_t a3);
int32_t get_tz_buffer(void);
char * hwrev_from_utag(void);
int32_t isl98611_masked_write_reg(int32_t a1, int32_t a2, int32_t a3);
int32_t isl98611_write_reg(int32_t a1, int32_t a2);
int32_t mcs_habp_rsa_crt_large(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_habp_rsa_crt_med(int32_t a1, int32_t a2, int32_t a3);
char * mmc_get_wp_status(char * a1, int32_t a2, int32_t a3);
int32_t mmc_sdhci_erase(char * a1, int32_t result, uint32_t a3, uint32_t a4);
int32_t mot_sst_is_locked(void);
char * mot_sst_pal_get_flash_uid(char * a1, int32_t a2);
int32_t mot_sst_pal_get_flash_uid_length(int32_t * a1, int32_t a2, int32_t a3);
int32_t mot_sst_pal_read_token(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mot_sst_pal_write_token(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mot_sst_set_state_values_for_nonhlos(void);
int32_t pm8x41_gpio_config(int32_t a1, int32_t * a2, int32_t a3);
int32_t pm8x41_gpio_set(int32_t a1, int32_t a2);
int32_t SecReadFuseQC(int32_t a1);
int32_t security_policy_init(char * a1, int32_t a2, int32_t a3);
int32_t set_blankflash_magic(char * a1, int32_t a2);
int32_t target_get_hlos_subtype(int32_t a1);
int32_t target_hwrev(void);
int32_t udc_request_dequeue(int32_t a1, int32_t a2, int32_t a3);
int32_t udc_request_free(char * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g21 = 0; // R0
int32_t g22 = 0; // R1
int32_t g23 = 0; // R2
int32_t g24 = 0; // R3
int32_t g25 = 0; // R4
int32_t g26 = 0; // R5
int32_t g27 = 0; // R6
int32_t g28 = 0; // R7
int32_t g29 = 0; // R8
int32_t g30 = 0; // R9
int32_t g1 = -0x1a60cfb0; // 0x8f675474
int32_t g2 = 1; // 0x8f6ac0f0
int32_t g3 = -0x709d28c8; // 0x8f6ac1cc
int32_t g4 = -1; // 0x8f6ac208
int32_t g5 = 1; // 0x8f6b0044
int32_t g6 = 0; // 0x8f6b7a20
int32_t g7 = 0; // 0x8f6b7a24
int32_t g8 = 0; // 0x8f6c0000
int32_t g9 = 0; // 0x8f6c0298
int32_t g10 = 0; // 0x8f6c02ca
int32_t g11 = 0; // 0x8f6c0650
int32_t g12 = 0; // 0x8f6c0654
int32_t g13 = 0; // 0x8f6c065c
int32_t g14 = 0; // 0x8f6c0664
int32_t g15 = 0; // 0x8f6c0668
int32_t g16 = 0; // 0x8f6c066c
int32_t g17 = 0; // 0x8f6e0ae8
char * g18; // 0x8f6e0aec
int32_t g19 = 0; // 0x8f7112f4
int32_t g20 = 0; // 0x8f711534

// ------------------------ Functions -------------------------

// Address range: 0x8f60ac1c - 0x8f60af27
int32_t mmc_sdhci_erase(char * a1, int32_t result, uint32_t a3, uint32_t a4) {
    // 0x8f60ac1c
    int32_t v1;
    int32_t v2 = v1; // bp-108
    int32_t v3 = (int32_t)a1;
    int32_t v4 = g19;
    int32_t v5; // 0x8f60aed0
    int32_t v6; // 0x8f60acac
    int32_t v7; // 0x8f60ad30
    int32_t v8; // 0x8f60adc4
    int32_t v9; // 0x8f60ad30
    int32_t v10; // 0x8f60ad30
    int32_t v11; // 0x8f60adc4
    int32_t v12; // 0x8f60aed018
    int32_t v13; // 0x8f60acdc_0
    int32_t v14; // 0x8f60ae68_0
    int32_t v15; // 0x8f60acac
    int32_t v16; // 0x8f60ad30
    int32_t v17; // 0x8f60adc4
    int32_t v18; // 0x8f60ae24
    char * v19; // 0x8f60ae6c
    int32_t v20; // R1
    int32_t v21; // R2
    int32_t v22; // R3
    int32_t v23; // R4
    int32_t v24; // R5
    int32_t v25; // R9
    int32_t v26;
    int32_t v27;
    int32_t v28;
    int32_t v29;
    int32_t v30;
    int32_t v31;
    int32_t v32; // 0x8f60ae34
    int32_t v33; // 0x8f60acec
    int32_t v34; // 0x8f60ad70
    int32_t v35; // 0x8f60ae34
    int32_t v36; // 0x8f60ace8
    int32_t v37; // 0x8f60ad6c
    int32_t v38; // 0x8f60ae18
    int32_t v39; // 0x8f60ae64
    int32_t v40; // 0x8f60acb0
    int32_t v41; // 0x8f60acbc
    int32_t v42; // 0x8f60ace8
    int32_t v43; // 0x8f60ad20
    int32_t v44; // 0x8f60ad6c
    int32_t v45; // 0x8f60adb4
    int32_t v46; // 0x8f60addc
    int32_t v47; // 0x8f60ae08
    int32_t v48; // 0x8f60ac84
    if (*(int32_t *)(v3 + 72) <= 4) {
        int32_t v49 = *(int32_t *)(v3 + 80); // 0x8f60ac50
        if (*(char *)(v49 + 175) == 0) {
            // 0x8f60ac68
            // branch -> 0x8f60ac78
            // 0x8f60ac78
            v6 = (*(int32_t *)(v3 + 188) + 1) * (*(int32_t *)(v3 + 192) + 1);
            // branch -> 0x8f60ac7c
        } else {
            // if_8f60ac5c_0_true
            v6 = 1024 * (int32_t)*(char *)(v49 + 224);
            // branch -> 0x8f60ac7c
        }
        // 0x8f60ac7c
        v25 = v6;
        v48 = 0x800000 * a4 | a3 / 512;
        v21 = v6;
        v22 = 0;
        if (a4 < 512) {
            // after_if_8f60ac94_0
            if (v48 < v6) {
                // after_if_8f60ac9c_0
                // branch -> 0x8f60aed0
                // 0x8f60aed0
                print_log(-1, (int32_t)"Requested length is less than min erase group size\n", v21, v22, v28, v2, v27, v26, 0, v31, 0, 0, 0);
                // branch -> 0x8f60aed8
                // 0x8f60aed8
                if (v4 != g19) {
                    // 0x8f60aeec
                    __stack_chk_fail();
                    // branch -> 0x8f60aef0
                }
                // 0x8f60aef0
                return 1;
            }
        }
        // 0x8f60aca4
        v15 = __aeabi_uldivmod((int64_t)v48, (int64_t)v6);
        v40 = result;
        v41 = v25 * (v15 - 1) + v40;
        v24 = v41;
        if (v41 > v40 + v48) {
            // 0x8f60acc8
            print_log(-1, (int32_t)"The erase group overlaps the max requested for erase\n", v21, v22, v28, v1, v27, v26, 0, v31, 0, 0, 0);
            v24 -= v25;
            // branch -> 0x8f60acd8
        }
        // 0x8f60acd8
        v13 = &v27;
        memset((char *)&v27, 0, 64);
        v36 = v3;
        v42 = *(int32_t *)(v36 + 72);
        v33 = v42 - 3;
        v21 = v33;
        if (v33 > 1) {
            // if_8f60acf4_0_true
            v27 = 32;
            v7 = v33;
            v10 = 32;
            // branch -> 0x8f60ad14
        } else {
            // 0x8f60ad00
            v21 = 35;
            v27 = 35;
            if (v42 == 4) {
                // if_8f60ad0c_0_true
                result *= *(int32_t *)(v36 + 56);
                v7 = 35;
                v10 = 35;
                // branch -> 0x8f60ad14
            } else {
                v7 = 35;
                v10 = 35;
            }
        }
        // 0x8f60ad14
        v43 = result;
        v9 = v2;
        v16 = sdhci_send_command((char *)v36, v13, v7, 1, v28, v9, v10, v43, 0, v31, 0, 0, 0, 0, 0, 0, v30, v29);
        if (v16 != 0) {
            // 0x8f60ad9c
            // branch -> 0x8f60aed0
            // 0x8f60aed0
            print_log(-1, (int32_t)"Failed to send erase grp start address\n", v21, 1, v28, v2, v27, v43, 0, v31, 0, 0, 0);
            // branch -> 0x8f60aed8
            // 0x8f60aed8
            if (v4 != g19) {
                // 0x8f60aeec
                __stack_chk_fail();
                // branch -> 0x8f60aef0
            }
            // 0x8f60aef0
            return 1;
        }
        // 0x8f60ad3c
        v22 = v31;
        if (v31 > -1) {
            // 0x8f60ad58
            result = 0;
            memset((char *)&v27, 0, 64);
            v37 = v3;
            v44 = *(int32_t *)(v37 + 72);
            v34 = v44 - 3;
            v21 = v34;
            if (v34 > 1) {
                // if_8f60ad78_0_true
                v27 = 33;
                v8 = v34;
                v11 = 33;
                // branch -> 0x8f60ada8
            } else {
                // 0x8f60ad84
                v21 = 36;
                v27 = 36;
                if (v44 == 4) {
                    // if_8f60ad90_0_true
                    v24 *= *(int32_t *)(v37 + 56);
                    v8 = 36;
                    v11 = 36;
                    // branch -> 0x8f60ada8
                } else {
                    v8 = 36;
                    v11 = 36;
                }
            }
            // 0x8f60ada8
            v45 = v24;
            v22 = 1;
            v17 = sdhci_send_command((char *)v37, v13, v8, 1, v28, v9, v11, v45, 0, v31, 0, 0, 0, 0, 0, 0, v30, v29);
            if (v17 == 0) {
                // 0x8f60add0
                v22 = v31;
                if (v31 < 0) {
                    // 0x8f60ae3c
                    print_log(-1, (int32_t)"Address for CMD36 is out of range\n", v21, v31, v28, v9, v27, v45, 0, v31, 0, 0, 0);
                    // branch -> 0x8f60ae48
                    // 0x8f60ae48
                    v12 = v45;
                    v5 = (int32_t)"Failed to send erase grp end address\n";
                    // branch -> 0x8f60aed0
                } else {
                    // 0x8f60addc
                    v46 = *(int32_t *)(v3 + 80);
                    v21 = 64;
                    memset((char *)&v27, 0, 64);
                    v47 = result;
                    v27 = 38;
                    v22 = 2;
                    v38 = v15 * 0x493e0 * (int32_t)*(char *)(v46 + 223);
                    v18 = sdhci_send_command((char *)v3, v13, v21, 2, v28, v9, 38, v47, 0, v31, 0, 0, 0, 0, 0, 0, v38, 0);
                    if (v18 == 0) {
                        // 0x8f60ae30
                        v23 = v38 & -0x10000 | 0x2710;
                        v32 = v3;
                        v35 = v32 + 48;
                        v14 = &v2;
                        int32_t v50 = v9; // 0x8f60ae6c
                        int32_t v51 = v22; // 0x8f60ae6c
                        v39 = v35;
                        int32_t v52 = v32; // 0x8f60ae60
                        // branch -> 0x8f60ae60
                        while (true) {
                            // 0x8f60ae60
                            v20 = v39;
                            v21 = v14;
                            v19 = mmc_get_card_status_isra_3((char *)v52, v39, v14, v51, v28, v50, v27, v47, 0, v31, 0, 0, 0, 0);
                            if (v19 == NULL) {
                              lab_0x8f60ae80_2:;
                                int32_t v53 = v2; // 0x8f60ae80
                                v22 = v53;
                                int32_t v54 = v53; // 0x8f60ae9c
                                if ((v53 & 0x8000) != 0) {
                                    // 0x8f60ae8c
                                    v20 = (int32_t)"Write Protect set for the region, only partial space was erased\n";
                                    print_log(-1, (int32_t)"Write Protect set for the region, only partial space was erased\n", v21, v53, v28, v53, v27, v47, 0, v31, 0, 0, 0);
                                    v54 = v22;
                                    // branch -> 0x8f60ae98
                                }
                                // 0x8f60ae98
                                udelay(1000, v20, v21, v54);
                                int32_t v55 = v23; // 0x8f60aea0
                                v23 = v55 - 1;
                                if (v55 == 1) {
                                    // 0x8f60aea8
                                    // branch -> 0x8f60aeb0
                                    // 0x8f60aeb0
                                    print_log(-1, (int32_t)"Card status check timed out after sending erase command\n", v21, v22, v28, v2, v27, v47, 0, v31, 0, 0, 0);
                                    // branch -> 0x8f60aec8
                                    // 0x8f60aec8
                                    // branch -> 0x8f60aed0
                                    // 0x8f60aed0
                                    print_log(-1, (int32_t)"Failed to erase the specified partition\n", v21, v22, v28, v2, v27, v47, 0, v31, 0, 0, 0);
                                    // branch -> 0x8f60aed8
                                } else {
                                    int32_t v56 = v2; // 0x8f60ae54
                                    v22 = v56;
                                    int32_t v57 = v56; // 0x8f60ae6c31
                                    if ((v56 & 256) != 0) {
                                        int32_t v58 = v56 / 512 % 16; // 0x8f60aeb8
                                        v22 = v58;
                                        if (v58 != 7) {
                                            // 0x8f60aed8
                                            // branch -> 0x8f60aed8
                                            // 0x8f60aed8
                                            if (v4 != g19) {
                                                // 0x8f60aeec
                                                __stack_chk_fail();
                                                // branch -> 0x8f60aef0
                                            }
                                            // 0x8f60aef0
                                            return result;
                                        }
                                        v57 = 7;
                                    }
                                    // 0x8f60ae60
                                    v50 = v56;
                                    v51 = v57;
                                    v39 = v35;
                                    v52 = v3;
                                    // branch -> 0x8f60ae60
                                    continue;
                                }
                                // 0x8f60aed8
                                if (v4 != g19) {
                                    // 0x8f60aeec
                                    __stack_chk_fail();
                                    // branch -> 0x8f60aef0
                                }
                                // 0x8f60aef0
                                return 1;
                            }
                            // if_8f60ae74_0_true
                            // branch -> 0x8f60aeb0
                            // 0x8f60aeb0
                            print_log(-1, (int32_t)"Failed to get card status after erase\n", v21, v22, v28, v2, v27, v47, 0, v31, 0, 0, 0);
                            // branch -> 0x8f60aec8
                        }
                    }
                    // 0x8f60aec8
                    v12 = v47;
                    v5 = (int32_t)"Failed to erase the specified partition\n";
                    // branch -> 0x8f60aed0
                }
                // 0x8f60aed0
                print_log(-1, v5, v21, v22, v28, v2, v27, v12, 0, v31, 0, 0, 0);
                // branch -> 0x8f60aed8
                // 0x8f60aed8
                if (v4 != g19) {
                    // 0x8f60aeec
                    __stack_chk_fail();
                    // branch -> 0x8f60aef0
                }
                // 0x8f60aef0
                return 1;
            }
            // 0x8f60ae48
            v12 = v45;
            v5 = (int32_t)"Failed to send erase grp end address\n";
            // branch -> 0x8f60aed0
        } else {
            // 0x8f60ad48
            print_log(-1, (int32_t)"Address for CMD35 is out of range\n", v21, v31, v28, v9, v27, v43, 0, v31, 0, 0, 0);
            // branch -> 0x8f60ad9c
            // 0x8f60ad9c
            v12 = v43;
            v5 = (int32_t)"Failed to send erase grp start address\n";
            // branch -> 0x8f60aed0
        }
        // 0x8f60aed0
        print_log(-1, v5, v21, v22, v28, v2, v27, v12, 0, v31, 0, 0, 0);
        // branch -> 0x8f60aed8
        // 0x8f60aed8
        if (v4 != g19) {
            // 0x8f60aeec
            __stack_chk_fail();
            // branch -> 0x8f60aef0
        }
        // 0x8f60aef0
        return 1;
    }
    // if_8f60ac44_0_true
    // branch -> 0x8f60ac78
    // 0x8f60ac78
    v6 = *(int32_t *)(v3 + 220) * *(int32_t *)(v3 + 224);
    // branch -> 0x8f60ac7c
    // 0x8f60ac7c
    v25 = v6;
    v48 = 0x800000 * a4 | a3 / 512;
    v23 = v48;
    v21 = v6;
    v22 = 0;
    if (a4 >= 512) {
        // 0x8f60aca4
        v15 = __aeabi_uldivmod((int64_t)v48, (int64_t)v6);
        v40 = result;
        v41 = v25 * (v15 - 1) + v40;
        v24 = v41;
        if (v41 > v40 + v23) {
            // 0x8f60acc8
            print_log(-1, (int32_t)"The erase group overlaps the max requested for erase\n", v21, v22, v28, v1, v27, v26, 0, v31, 0, 0, 0);
            v24 -= v25;
            // branch -> 0x8f60acd8
        }
        // 0x8f60acd8
        v13 = &v27;
        memset((char *)&v27, 0, 64);
        v36 = v3;
        v42 = *(int32_t *)(v36 + 72);
        v33 = v42 - 3;
        v21 = v33;
        if (v33 > 1) {
            // if_8f60acf4_0_true
            v27 = 32;
            v7 = v33;
            v10 = 32;
            // branch -> 0x8f60ad14
        } else {
            // 0x8f60ad00
            v21 = 35;
            v27 = 35;
            if (v42 == 4) {
                // if_8f60ad0c_0_true
                result *= *(int32_t *)(v36 + 56);
                v7 = 35;
                v10 = 35;
                // branch -> 0x8f60ad14
            } else {
                v7 = 35;
                v10 = 35;
            }
        }
        // 0x8f60ad14
        v43 = result;
        v9 = v2;
        v16 = sdhci_send_command((char *)v36, v13, v7, 1, v28, v9, v10, v43, 0, v31, 0, 0, 0, 0, 0, 0, v30, v29);
        if (v16 != 0) {
            // 0x8f60ad9c
            // branch -> 0x8f60aed0
            // 0x8f60aed0
            print_log(-1, (int32_t)"Failed to send erase grp start address\n", v21, 1, v28, v2, v27, v43, 0, v31, 0, 0, 0);
            // branch -> 0x8f60aed8
            // 0x8f60aed8
            if (v4 != g19) {
                // 0x8f60aeec
                __stack_chk_fail();
                // branch -> 0x8f60aef0
            }
            // 0x8f60aef0
            return 1;
        }
        // 0x8f60ad3c
        v22 = v31;
        if (v31 > -1) {
            // 0x8f60ad58
            result = 0;
            memset((char *)&v27, 0, 64);
            v37 = v3;
            v44 = *(int32_t *)(v37 + 72);
            v34 = v44 - 3;
            v21 = v34;
            if (v34 > 1) {
                // if_8f60ad78_0_true
                v27 = 33;
                v8 = v34;
                v11 = 33;
                // branch -> 0x8f60ada8
            } else {
                // 0x8f60ad84
                v21 = 36;
                v27 = 36;
                if (v44 == 4) {
                    // if_8f60ad90_0_true
                    v24 *= *(int32_t *)(v37 + 56);
                    v8 = 36;
                    v11 = 36;
                    // branch -> 0x8f60ada8
                } else {
                    v8 = 36;
                    v11 = 36;
                }
            }
            // 0x8f60ada8
            v45 = v24;
            v22 = 1;
            v17 = sdhci_send_command((char *)v37, v13, v8, 1, v28, v9, v11, v45, 0, v31, 0, 0, 0, 0, 0, 0, v30, v29);
            if (v17 == 0) {
                // 0x8f60add0
                v22 = v31;
                if (v31 < 0) {
                    // 0x8f60ae3c
                    print_log(-1, (int32_t)"Address for CMD36 is out of range\n", v21, v31, v28, v9, v27, v45, 0, v31, 0, 0, 0);
                    // branch -> 0x8f60ae48
                    // 0x8f60ae48
                    v12 = v45;
                    v5 = (int32_t)"Failed to send erase grp end address\n";
                    // branch -> 0x8f60aed0
                } else {
                    // 0x8f60addc
                    v46 = *(int32_t *)(v3 + 80);
                    v21 = 64;
                    memset((char *)&v27, 0, 64);
                    v47 = result;
                    v27 = 38;
                    v22 = 2;
                    v38 = v15 * 0x493e0 * (int32_t)*(char *)(v46 + 223);
                    v18 = sdhci_send_command((char *)v3, v13, v21, 2, v28, v9, 38, v47, 0, v31, 0, 0, 0, 0, 0, 0, v38, 0);
                    if (v18 == 0) {
                        // 0x8f60ae30
                        v23 = v38 & -0x10000 | 0x2710;
                        v32 = v3;
                        v35 = v32 + 48;
                        v14 = &v2;
                        v39 = v35;
                        // branch -> 0x8f60ae60
                        while (true) {
                            // 0x8f60ae60
                            v20 = v39;
                            v21 = v14;
                            v19 = mmc_get_card_status_isra_3((char *)v32, v39, v14, v22, v28, v9, v27, v47, 0, v31, 0, 0, 0, 0);
                            if (v19 == NULL) {
                                goto lab_0x8f60ae80_2;
                            }
                            // if_8f60ae74_0_true
                            // branch -> 0x8f60aeb0
                            // 0x8f60aeb0
                            print_log(-1, (int32_t)"Failed to get card status after erase\n", v21, v22, v28, v2, v27, v47, 0, v31, 0, 0, 0);
                            // branch -> 0x8f60aec8
                        }
                    }
                    // 0x8f60aec8
                    v12 = v47;
                    v5 = (int32_t)"Failed to erase the specified partition\n";
                    // branch -> 0x8f60aed0
                }
                // 0x8f60aed0
                print_log(-1, v5, v21, v22, v28, v2, v27, v12, 0, v31, 0, 0, 0);
                // branch -> 0x8f60aed8
                // 0x8f60aed8
                if (v4 != g19) {
                    // 0x8f60aeec
                    __stack_chk_fail();
                    // branch -> 0x8f60aef0
                }
                // 0x8f60aef0
                return 1;
            }
            // 0x8f60ae48
            v12 = v45;
            v5 = (int32_t)"Failed to send erase grp end address\n";
            // branch -> 0x8f60aed0
        } else {
            // 0x8f60ad48
            print_log(-1, (int32_t)"Address for CMD35 is out of range\n", v21, v31, v28, v9, v27, v43, 0, v31, 0, 0, 0);
            // branch -> 0x8f60ad9c
            // 0x8f60ad9c
            v12 = v43;
            v5 = (int32_t)"Failed to send erase grp start address\n";
            // branch -> 0x8f60aed0
        }
        // 0x8f60aed0
        print_log(-1, v5, v21, v22, v28, v2, v27, v12, 0, v31, 0, 0, 0);
        // branch -> 0x8f60aed8
        // 0x8f60aed8
        if (v4 != g19) {
            // 0x8f60aeec
            __stack_chk_fail();
            // branch -> 0x8f60aef0
        }
        // 0x8f60aef0
        return 1;
    }
    // after_if_8f60ac94_0
    if (v48 < v6) {
        // after_if_8f60ac9c_0
        // branch -> 0x8f60aed0
        // 0x8f60aed0
        print_log(-1, (int32_t)"Requested length is less than min erase group size\n", v21, v22, v28, v2, v27, v26, 0, v31, 0, 0, 0);
        // branch -> 0x8f60aed8
        // 0x8f60aed8
        if (v4 != g19) {
            // 0x8f60aeec
            __stack_chk_fail();
            // branch -> 0x8f60aef0
        }
        // 0x8f60aef0
        return 1;
    }
    // 0x8f60aca4
    v15 = __aeabi_uldivmod((int64_t)v48, (int64_t)v6);
    v40 = result;
    v41 = v25 * (v15 - 1) + v40;
    v24 = v41;
    if (v41 > v40 + v23) {
        // 0x8f60acc8
        print_log(-1, (int32_t)"The erase group overlaps the max requested for erase\n", v21, v22, v28, v1, v27, v26, 0, v31, 0, 0, 0);
        v24 -= v25;
        // branch -> 0x8f60acd8
    }
    // 0x8f60acd8
    v13 = &v27;
    memset((char *)&v27, 0, 64);
    v36 = v3;
    v42 = *(int32_t *)(v36 + 72);
    v33 = v42 - 3;
    v21 = v33;
    if (v33 > 1) {
        // if_8f60acf4_0_true
        v27 = 32;
        v7 = v33;
        v10 = 32;
        // branch -> 0x8f60ad14
    } else {
        // 0x8f60ad00
        v21 = 35;
        v27 = 35;
        if (v42 == 4) {
            // if_8f60ad0c_0_true
            result *= *(int32_t *)(v36 + 56);
            v7 = 35;
            v10 = 35;
            // branch -> 0x8f60ad14
        } else {
            v7 = 35;
            v10 = 35;
        }
    }
    // 0x8f60ad14
    v43 = result;
    v9 = v2;
    v16 = sdhci_send_command((char *)v36, v13, v7, 1, v28, v9, v10, v43, 0, v31, 0, 0, 0, 0, 0, 0, v30, v29);
    if (v16 != 0) {
        // 0x8f60ad9c
        // branch -> 0x8f60aed0
        // 0x8f60aed0
        print_log(-1, (int32_t)"Failed to send erase grp start address\n", v21, 1, v28, v2, v27, v43, 0, v31, 0, 0, 0);
        // branch -> 0x8f60aed8
        // 0x8f60aed8
        if (v4 != g19) {
            // 0x8f60aeec
            __stack_chk_fail();
            // branch -> 0x8f60aef0
        }
        // 0x8f60aef0
        return 1;
    }
    // 0x8f60ad3c
    v22 = v31;
    if (v31 > -1) {
        // 0x8f60ad58
        result = 0;
        memset((char *)&v27, 0, 64);
        v37 = v3;
        v44 = *(int32_t *)(v37 + 72);
        v34 = v44 - 3;
        v21 = v34;
        if (v34 > 1) {
            // if_8f60ad78_0_true
            v27 = 33;
            v8 = v34;
            v11 = 33;
            // branch -> 0x8f60ada8
        } else {
            // 0x8f60ad84
            v21 = 36;
            v27 = 36;
            if (v44 == 4) {
                // if_8f60ad90_0_true
                v24 *= *(int32_t *)(v37 + 56);
                v8 = 36;
                v11 = 36;
                // branch -> 0x8f60ada8
            } else {
                v8 = 36;
                v11 = 36;
            }
        }
        // 0x8f60ada8
        v45 = v24;
        v22 = 1;
        v17 = sdhci_send_command((char *)v37, v13, v8, 1, v28, v9, v11, v45, 0, v31, 0, 0, 0, 0, 0, 0, v30, v29);
        if (v17 == 0) {
            // 0x8f60add0
            v22 = v31;
            if (v31 < 0) {
                // 0x8f60ae3c
                print_log(-1, (int32_t)"Address for CMD36 is out of range\n", v21, v31, v28, v9, v27, v45, 0, v31, 0, 0, 0);
                // branch -> 0x8f60ae48
                // 0x8f60ae48
                v12 = v45;
                v5 = (int32_t)"Failed to send erase grp end address\n";
                // branch -> 0x8f60aed0
            } else {
                // 0x8f60addc
                v46 = *(int32_t *)(v3 + 80);
                v21 = 64;
                memset((char *)&v27, 0, 64);
                v47 = result;
                v27 = 38;
                v22 = 2;
                v38 = v15 * 0x493e0 * (int32_t)*(char *)(v46 + 223);
                v18 = sdhci_send_command((char *)v3, v13, v21, 2, v28, v9, 38, v47, 0, v31, 0, 0, 0, 0, 0, 0, v38, 0);
                if (v18 == 0) {
                    // 0x8f60ae30
                    v23 = v38 & -0x10000 | 0x2710;
                    v32 = v3;
                    v35 = v32 + 48;
                    v14 = &v2;
                    v39 = v35;
                    // branch -> 0x8f60ae60
                    while (true) {
                        // 0x8f60ae60
                        v20 = v39;
                        v21 = v14;
                        v19 = mmc_get_card_status_isra_3((char *)v32, v39, v14, v22, v28, v9, v27, v47, 0, v31, 0, 0, 0, 0);
                        if (v19 == NULL) {
                            goto lab_0x8f60ae80_2;
                        }
                        // if_8f60ae74_0_true
                        // branch -> 0x8f60aeb0
                        // 0x8f60aeb0
                        print_log(-1, (int32_t)"Failed to get card status after erase\n", v21, v22, v28, v2, v27, v47, 0, v31, 0, 0, 0);
                        // branch -> 0x8f60aec8
                    }
                }
                // 0x8f60aec8
                v12 = v47;
                v5 = (int32_t)"Failed to erase the specified partition\n";
                // branch -> 0x8f60aed0
            }
            // 0x8f60aed0
            print_log(-1, v5, v21, v22, v28, v2, v27, v12, 0, v31, 0, 0, 0);
            // branch -> 0x8f60aed8
            // 0x8f60aed8
            if (v4 != g19) {
                // 0x8f60aeec
                __stack_chk_fail();
                // branch -> 0x8f60aef0
            }
            // 0x8f60aef0
            return 1;
        }
        // 0x8f60ae48
        v12 = v45;
        v5 = (int32_t)"Failed to send erase grp end address\n";
        // branch -> 0x8f60aed0
    } else {
        // 0x8f60ad48
        print_log(-1, (int32_t)"Address for CMD35 is out of range\n", v21, v31, v28, v9, v27, v43, 0, v31, 0, 0, 0);
        // branch -> 0x8f60ad9c
        // 0x8f60ad9c
        v12 = v43;
        v5 = (int32_t)"Failed to send erase grp start address\n";
        // branch -> 0x8f60aed0
    }
    // 0x8f60aed0
    print_log(-1, v5, v21, v22, v28, v2, v27, v12, 0, v31, 0, 0, 0);
    // branch -> 0x8f60aed8
    // 0x8f60aed8
    if (v4 != g19) {
        // 0x8f60aeec
        __stack_chk_fail();
        // branch -> 0x8f60aef0
    }
    // 0x8f60aef0
    return 1;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// int atoi(const char * nptr);
// void free(void * ptr);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:10:20