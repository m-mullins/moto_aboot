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

int32_t clk_get(char * str2);
int32_t clk_get_set_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t dbval_provision_req(char a1, char * a2, int32_t a3);
int32_t dbval_provision_store(char * a1, int32_t * a2, char * a3);
int32_t event_signal(int32_t a1, int32_t a2, int32_t a3);
void event_unsignal(int32_t a1);
int32_t fdt_next_tag(int32_t a1, int32_t a2, int32_t * a3);
int32_t fdt_offset_ptr(int32_t a1, int32_t a2, int32_t a3);
int32_t generic_mmc_erase_sector(int64_t a1, int64_t a2);
int32_t generic_mmc_get_protect_group_size(int32_t a1, int32_t a2);
int32_t get_root_detect_disabled(void);
int32_t getvar_handler_root_detect(int32_t a1, int32_t a2, int32_t a3);
int32_t hab_map_address(int32_t a1, int32_t a2, int32_t a3);
int32_t hab_virtual_to_physical(int32_t a1, int32_t a2, int32_t a3);
int32_t load_partition(int32_t a1, int32_t a2, int64_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t load_partition_by_name(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t mcs_clear_hash_ctx(char * a1, int32_t a2, int32_t a3);
int32_t mcs_initialize_montgomery_alg(int32_t * a1, int32_t a2);
int32_t mdss_dsi_auto_pll_config(int32_t * a1, int32_t a2);
int32_t mdss_dsi_host_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mdss_dsi_phy_init(int32_t a1, int32_t a2, int32_t a3);
int32_t mipi_dsi_cmd_bta_sw_trigger(int32_t a1, int32_t a2, int32_t a3);
int32_t nexus_usbpidvid(int32_t a1, int32_t a2);
int32_t read_root_status(void);
char * sdhci_msm_execute_tuning(char * a1, int32_t a2, int32_t a3);
int32_t sdhci_msm_toggle_cdr(int32_t * a1, int32_t a2, int32_t a3);
int32_t sod_init(void);
int32_t sod_ramdump_run(void);
int32_t thread_init(int32_t a1, int32_t a2);
int32_t thread_set_name(int32_t a1);

// --------------------- Global Variables ---------------------

int32_t g26 = 0; // LR
int32_t g27 = 0; // R0
int32_t g28 = 0; // R1
int32_t g29 = 0; // R10
int32_t g30 = 0; // R11
int32_t g31 = 0; // R2
int32_t g32 = 0; // R3
int32_t g33 = 0; // R4
int32_t g34 = 0; // R5
int32_t g35 = 0; // R6
int32_t g36 = 0; // R7
int32_t g37 = 0; // R8
int32_t g38 = 0; // R9
int32_t g1 = -0x15ffffb3; // 0x8f6361f4
char * g2 = "\xff\xff"; // 0x8f67d950
int32_t g3 = 0xff0fff; // 0x8f67db7c
int32_t g4 = 0x6d0f0703; // 0x8f67f558
int32_t g5 = 0x1c9496e0; // 0x8f67f5a0
int32_t g6 = 0x65440030; // 0x8f69c66f
int32_t g7 = 0x746e6300; // 0x8f6a4e20
int32_t g8 = 1; // 0x8f6ac0f0
int32_t g9 = -1; // 0x8f6ac214
int32_t g10 = -0x70a00000; // 0x8f6ac224
char * g11 = "\xf1"; // 0x8f6affa8
int32_t g12 = 0; // 0x8f6b7988
int32_t g13 = 0; // 0x8f6b798c
int32_t g14 = 0; // 0x8f6b8ad0
int32_t g15 = 0; // 0x8f6b8ad4
char * g16; // 0x8f6c0628
char * g17; // 0x8f6c0649
int32_t (*g18)(int32_t, int32_t, int32_t) = NULL; // 0x8f6e0784
int32_t g19 = 0; // 0x8f6e0790
char * g20; // 0x8f6e0794
int16_t * g21 = NULL; // 0x8f70da9c
int32_t g22 = 0; // 0x8f70da9e
int32_t g23 = 0; // 0x8f7112f4
int32_t g24 = 0; // 0x8f7114ac
int32_t g25 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f61165c - 0x8f6118d3
int32_t mdss_dsi_auto_pll_config(int32_t * a1, int32_t a2) {
    int32_t v1 = (int32_t)a1; // R4
    uint32_t v2 = *(int32_t *)(g31 + 20); // 0x8f611674
    int32_t v3 = g23;
    // branch -> 0x8f611684
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7; // 0x8f6118304
    int32_t v8; // 0x8f6118342
    for (uint32_t i = 0; i < 10; i++) {
        uint32_t v9 = *(int32_t *)(8 * i + (int32_t)&g5); // 0x8f611684
        int32_t v10 = 8 * i; // R6
        int32_t v11; // 0x8f6118303
        int32_t v12; // 0x8f6118341
        if (v2 > v9) {
            // 0x8f611694
            // PHI copies at the loop end
            // loop 0x8f611684 end
            continue;
        } else {
            v11 = v5;
            v12 = v4;
            // branch -> 0x8f6116cc
        }
      lab_0x8f6116cc:;
        int32_t v13 = 0x249f000; // R7
        mdss_dsi_phy_sw_reset(a2, a2, v2, i, v11, v12, 0);
        int32_t v14 = g37 & -0x10000 | 0x2710; // R8
        char v15 = *(char *)(v10 + (int32_t)&g5 + 4); // 0x8f6116e8
        *(int32_t *)(v1 + 44) = (int32_t)v15;
        *(int32_t *)(v1 + 48) = 112;
        *(int32_t *)(v1 + 52) = 21;
        *(int32_t *)(v1 + 8) = 2;
        *(int32_t *)(v1 + 4) = (int32_t)*(char *)(g31 + 29);
        *(int32_t *)(v1 + 36) = 3;
        *(int32_t *)(v1 + 40) = (int32_t)*(char *)(g31 + 30);
        *(int32_t *)(v1 + 120) = 43;
        *(int32_t *)(v1 + 124) = 102;
        *(int32_t *)(v1 + 100) = 5;
        uint32_t v16 = *(int32_t *)(g31 + 20); // 0x8f611738
        uint32_t v17 = 0x124f800;
        uint64_t v18 = (int64_t)v14 * (int64_t)v16; // 0x8f61174c
        int32_t v19; // 0x8f611754
        if (v16 % v17 == 0) {
            // if_8f611750_0_true
            v13 = 0x124f800;
            v19 = 0x124f800;
            // branch -> after_if_8f611750_0
        } else {
            // 0x8f6116cc
            v19 = v13;
            // branch -> after_if_8f611750_0
        }
        // after_if_8f611750_0
        v10 = v16 % v17 != 0;
        int32_t v20 = __aeabi_uldivmod(v18, (int64_t)v19); // 0x8f611764
        int32_t v21 = v20; // R9
        uint32_t v22 = v13; // 0x8f611774
        int64_t v23 = v19 & -0x10000 | 0x2710;
        int32_t v24 = __aeabi_uldivmod((int64_t)v22 * (int64_t)v20, v23); // 0x8f611794
        uint32_t v25 = v16 / v22 % 64; // 0x8f6117a0
        v13 = v24;
        int32_t v26; // R11
        int32_t v27; // 0x8f611804
        int32_t v28; // 0x8f611808
        if (v10 == 0) {
            // 0x8f6117e8
            v26 = 0;
            g37 = v25 - 1 | 32;
            v28 = 0;
            v27 = 0;
            // branch -> 0x8f6117fc
        } else {
            // 0x8f6117ac
            __aeabi_uldivmod((int64_t)v21, v23);
            g37 = 0;
            uint32_t v29 = 0x27100000 / v14;
            v26 = v29 / 256;
            v28 = v25 - 1;
            v27 = v29 % 256;
            v24 = v13;
            // branch -> 0x8f6117fc
        }
        // 0x8f6117fc
        v13 = 0;
        *(int32_t *)(v1 + 60) = v28;
        *(int32_t *)(v1 + 64) = v27;
        *(int32_t *)(v1 + 68) = v26;
        *(int32_t *)(v1 + 72) = v13;
        int32_t v30 = *(int32_t *)(g31 + 24); // 0x8f61184c
        int32_t v31 = v30; // 0x8f611858
        if (v30 == v13) {
            // if_8f611854_0_true
            v31 = 10;
            // branch -> after_if_8f611854_0
        }
        // after_if_8f611854_0
        udelay(v31, 0xf4240, v27, 0);
        *(int32_t *)v1 = v10;
        *(int32_t *)(v1 + 20) = v13;
        *(int32_t *)(v1 + 12) = 113;
        *(int32_t *)(v1 + 16) = (int32_t)*(char *)(g31 + 28);
        *(int32_t *)(v1 + 56) = g37;
        *(int32_t *)(v1 + 108) = 10;
        *(int32_t *)(v1 + 132) = 48;
        *(int32_t *)(v1 + 136) = v13;
        *(int32_t *)(v1 + 140) = 96;
        *(int32_t *)(v1 + 144) = v13;
        *(int32_t *)(v1 + 148) = v24 % 0xf424000 / 0xf4240;
        *(int32_t *)(v1 + 152) = v24 / 0xf424000;
        *(int32_t *)(v1 + 156) = 32;
        v7 = v28;
        v8 = v27;
        // branch -> 0x8f6116b4
        // 0x8f6116b4
        v6 = g23;
        if (v3 == v6) {
            // 0x8f6118b0
            return 0;
        }
      lab_0x8f6116c8:
        // 0x8f6116c8
        __stack_chk_fail();
        i = v6;
        v2 = v3;
        a2 = &g23;
        v11 = v7;
        v12 = v8;
        // branch -> 0x8f6116cc
        goto lab_0x8f6116cc;
    }
    // 0x8f6116a0
    print_log(1, (int32_t)"unable to get loop filter resistance. vco=%d\n", 0, 10, v5, v4, 0, v3, 0, g33, g34, g35, g36);
    v7 = v5;
    v8 = v4;
    // branch -> 0x8f6116b4
    // 0x8f6116b4
    v6 = g23;
    if (v3 != v6) {
        goto lab_0x8f6116c8;
    }
    // 0x8f6118b0
    return 255;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:10:24
