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

char * collect_desc(int32_t * str2);
int32_t dbval_memcmp(char * str, char * str2, int32_t n);
char * dbval_memset(char * a1, int32_t a2, int32_t a3);
int32_t dbval_read_partition(char * a1, int32_t a2);
int32_t dbval_write_partition(int32_t a1, int32_t a2, int32_t a3);
int32_t disable_resin_n_irq(int32_t a1);
int32_t do_dead_battery_recovery(int32_t a1, int32_t a2, int32_t a3);
int32_t enable_cont_splash_screen(int32_t a1);
int32_t enable_resin_n_irq(int32_t a1);
void function_8f64a108(void);
void function_8f64a14c(int32_t a1, int32_t a2, int32_t a3);
int32_t generic_mmc_do_write_protect(int32_t a1, int32_t a2, int32_t a3);
int32_t generic_mmc_do_write_protect_test(int32_t a1);
int32_t get_code128_checksum(char * str, int32_t a2, int32_t a3);
int32_t get_date_buf(int32_t a1, int32_t a2, int32_t a3);
int32_t get_sku_buf(int32_t a1, int32_t a2, int32_t a3);
int32_t hab_digest(int32_t a1, char * a2, int32_t a3);
int32_t hab_mcs_hashSHA256(int32_t a1, int32_t * a2, int32_t * a3);
int32_t hab_mcs_hashSHA512(int32_t a1, int32_t * a2, int32_t * a3);
int32_t hab_sahara_hash(char * a1, int32_t a2, int32_t a3);
int32_t is_usb_connected(int32_t a1, int32_t a2);
int32_t mcs_X509Certificate_getIssuer(int32_t a1, int32_t * a2);
int32_t mcs_X509Certificate_getSignatureAlgorithm(int32_t a1, int32_t * a2);
int32_t misc_check_mode(char * a1, int32_t a2);
int32_t misc_clear_mode(char * a1, int32_t a2, int32_t a3);
int32_t mmc_enable_enhanced_erase(void);
int32_t mmc_enable_hw_reset(void);
int32_t panel_manager_set_cont_splash(char a1, int32_t a2, int32_t a3);
int32_t usbin_valid_irq_handler(int32_t (*a1)(int32_t), int32_t a2);
int32_t validate_powerup_reason(char * a1, int32_t a2);

// --------------------- Global Variables ---------------------

// Detected cryptographic pattern: Hash_constant_words_K_for_SHA_384_and_SHA_512 (64-bit, little endian)
int64_t Hash_constant_words_K_for_SHA_384_and_SHA_512_at_8f6a6d68[80] = {0x428a2f98d728ae22, 0x7137449123ef65cd, -0x4a3f043013b2c4d1, -0x164a245a7e762444, 0x3956c25bf348b538, 0x59f111f1b605d019, -0x6dc07d5b50e6b065, -0x54e3a12a25927ee8, -0x27f855675cfcfdbe, 0x12835b0145706fbe, 0x243185be4ee4b28c, 0x550c7dc3d5ffb4e2, 0x72be5d74f27b896f, -0x7f214e01c4e9694f, -0x6423f958da38edcb, -0x3e640e8b3096d96c, -0x1b64963e610eb52e, -0x1041b879c7b0da1d, 0xfc19dc68b8cd5b5, 0x240ca1cc77ac9c65, 0x2de92c6f592b0275, 0x4a7484aa6ea6e483, 0x5cb0a9dcbd41fbd4, 0x76f988da831153b5, -0x67c1aead11992055, -0x57ce3992d24bcdf0, -0x4ffcd8376704dec1, -0x40a680384110f11c, -0x391ff40cc257703e, -0x2a586eb86cf558db, 0x6ca6351e003826f, 0x142929670a0e6e70, 0x27b70a8546d22ffc, 0x2e1b21385c26c926, 0x4d2c6dfc5ac42aed, 0x53380d139d95b3df, 0x650a73548baf63de, 0x766a0abb3c77b2a8, -0x7e3d36d1b812511a, -0x6d8dd37aeb7dcac5, -0x5d40175eb30efc9c, -0x57e599b443bdcfff, -0x3db4748f2f07686f, -0x3893ae5cf9ab41d0, -0x2e6d17e62910ade8, -0x2966f9dbaa9a56f0, -0xbf1ca7aa88edfd6, 0x106aa07032bbd1b8, 0x19a4c116b8d2d0c8, 0x1e376c085141ab53, 0x2748774cdf8eeb99, 0x34b0bcb5e19b48a8, 0x391c0cb3c5c95a63, 0x4ed8aa4ae3418acb, 0x5b9cca4f7763e373, 0x682e6ff3d6b2b8a3, 0x748f82ee5defb2fc, 0x78a5636f43172f60, -0x7b3787eb5e0f548e, -0x7338fdf7e59bc614, -0x6f410005dc9ce1d8, -0x5baf9314217d4217, -0x41065c084d3986eb, -0x398e870d1c8dacd5, -0x35d8c13115d99e64, -0x2e794738de3f3df9, -0x15258229321f14e2, -0xa82b08011912e88, 0x6f067aa72176fba, 0xa637dc5a2c898a6, 0x113f9804bef90dae, 0x1b710b35131c471b, 0x28db77f523047d84, 0x32caab7b40c72493, 0x3c9ebe0a15c9bebc, 0x431d67c49c100d4c, 0x4cc5d4becb3e42b6, 0x597f299cfc657e2a, 0x5fcb6fab3ad6faec, 0x6c44198c4a475817}; // 0x8f6a6d68
int32_t g35 = 0; // LR
int32_t g36 = 0; // R0
int32_t g37 = 0; // R1
int32_t g38 = 0; // R2
int32_t g39 = 0; // R3
int32_t g40 = 0; // R4
int32_t g41 = 0; // R5
int32_t g42 = 0; // R6
int32_t g43 = 0; // R7
int32_t g44 = 0; // R8
int32_t g45 = 0; // R9
// Detected cryptographic pattern: SHA256_Hash_constant_words_K__0x428a2f98_ (32-bit, little endian)
int32_t SHA256_Hash_constant_words_K__0x428a2f98__at_8f6a6c68[64] = {0x428a2f98, 0x71374491, -0x4a3f0431, -0x164a245b, 0x3956c25b, 0x59f111f1, -0x6dc07d5c, -0x54e3a12b, -0x27f85568, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, -0x7f214e02, -0x6423f959, -0x3e640e8c, -0x1b64963f, -0x1041b87a, 0xfc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da, -0x67c1aeae, -0x57ce3993, -0x4ffcd838, -0x40a68039, -0x391ff40d, -0x2a586eb9, 0x6ca6351, 0x14292967, 0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, -0x7e3d36d2, -0x6d8dd37b, -0x5d40175f, -0x57e599b5, -0x3db47490, -0x3893ae5d, -0x2e6d17e7, -0x2966f9dc, -0xbf1ca7b, 0x106aa070, 0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3, 0x748f82ee, 0x78a5636f, -0x7b3787ec, -0x7338fdf8, -0x6f410006, -0x5baf9315, -0x41065c09, -0x398e870e}; // 0x8f6a6c68
int32_t g1 = -0x1a60cfd8; // 0x8f603944
int32_t g2 = -0x1a60cfd0; // 0x8f603978
int32_t g3 = -0x16d2bfc9; // 0x8f603ad8
int32_t g4 = -0x16d2bfc9; // 0x8f603c64
int32_t g5 = -0x1a60cf7c; // 0x8f63867c
int32_t g6 = -0x16d2bfc9; // 0x8f6387c0
int32_t (*g7)() = (int32_t (*)())-0x16d2bf8d; // 0x8f64338c
int32_t g8 = -0x16d2bf8d; // 0x8f64385c
int32_t g9 = -0x16d2bfed; // 0x8f645680
int32_t g10 = 0x66c06cc; // 0x8f6a28d8
char * g11 = "\x01"; // 0x8f6ab02c
char * g12 = "\x01"; // 0x8f6ac220
char (*g13)[14] = "boot-recovery"; // 0x8f6aff94
int32_t g14 = 0; // 0x8f6b5064
int32_t g15 = 0; // 0x8f6b5080
char * g16; // 0x8f6b509c
int32_t g17 = 0; // 0x8f6b50a0
int32_t g18 = 0; // 0x8f6c02aa
int32_t g19 = 0; // 0x8f6c02ba
char * g20; // 0x8f6e122c
int32_t g21 = 0; // 0x8f6e1253
int32_t g22 = 0; // 0x8f6e1254
int32_t g23 = 0; // 0x8f6e12dc
char * g24; // 0x8f6ed840
int32_t g25 = 0; // 0x8f70dab8
char * g26; // 0x8f70dabc
int32_t g27 = 0; // 0x8f70dac0
char * g28; // 0x8f70dac4
int32_t g29 = 0; // 0x8f70dac8
int32_t g30 = 0; // 0x8f70dacc
int32_t g31 = 0; // 0x8f70dad0
int32_t g32 = 0; // 0x8f70dad4
int32_t g33 = 0; // 0x8f7112f4
int32_t g34 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f66b1c8 - 0x8f66b213
int32_t mcs_X509Certificate_getSignatureAlgorithm(int32_t a1, int32_t * a2) {
    int32_t * v1 = (int32_t *)(a1 + 112); // 0x8f66b1d8_0
    *a2 = *(int32_t *)(*v1 + 4);
    *(int16_t *)g38 = *(int16_t *)(*v1 + 2);
    // 0x8f66b208
    return 0;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void bzero(void * s, size_t n);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// char * strchr(char * s, int c);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// char * strrchr(char * s, int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:23:29