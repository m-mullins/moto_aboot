//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int32_t target_mmc_do_write_protect(int32_t a1, int32_t a2, int32_t a3);
int32_t target_mmc_get_protect_group_size(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f606470 - 0x8f6064a3
int32_t target_mmc_do_write_protect(int32_t a1, int32_t a2, int32_t a3) {
    // 0x8f606470
    return mmc_wp(a1, a2, g1);
}
