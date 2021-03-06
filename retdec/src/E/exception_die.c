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

typedef int8_t int5_t;

// ------------------- Function Prototypes --------------------

int32_t __utag_gets_constprop_4(char * a1, int32_t a2, int32_t a3);
int32_t arch_thread_initialize(int32_t a1, int32_t a2, int32_t a3);
void arm_syscall_handler(void);
int32_t bootstrap2(int32_t a1, int32_t a2);
int32_t dpc_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t dpc_thread_routine(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
void exception_die(int32_t * a1, int32_t a2, int32_t a3);
int32_t init_panel_power_list(int32_t a1, int32_t a2);
int32_t initial_thread_func(int32_t a1, int32_t a2, int32_t a3);
int32_t insert_in_run_queue_head(int32_t a1);
int32_t insert_in_run_queue_tail(int32_t a1, int32_t a2);
void kmain(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t list_remove_head(int32_t a1);
int32_t panel_power_on(int32_t a1, int32_t a2, int32_t a3);
int32_t panel_power_on_reset(int32_t a1, int32_t a2, int32_t a3);
int32_t target_is_emmc_boot(int32_t a1, int32_t a2, int32_t a3);
int32_t target_ram_info(void);
int32_t thread_cleanup_dpc(char * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t thread_create(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t thread_resched(int32_t a1);
int32_t thread_sleep_handler(int32_t a1, int32_t a2, int32_t a3);
int32_t type_atoi_2(char * str, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g25 = 0; // LR
int32_t g26 = 0; // R0
int32_t g27 = 0; // R1
int32_t g28 = 0; // R2
int32_t g29 = 0; // R3
int32_t g30 = 0; // R4
int32_t g31 = 0; // R5
int32_t g32 = 0; // R6
int32_t g33 = 0; // R7
int32_t g1 = -0x1a60cfa4; // 0x8f619a9c
int32_t g2 = -0x1a60cf5c; // 0x8f61a964
int32_t g3 = -0x16d2bfed; // 0x8f61adc8
int32_t g4 = 0x2020003a; // 0x8f686ac4
int32_t g5 = -1; // 0x8f6ac0d0
int32_t g6 = -1; // 0x8f6ac0d4
int32_t g7 = -1; // 0x8f6ac0d8
int32_t g8; // 0x8f6ac0e8
int32_t g10 = 1; // 0x8f6ac0f0
char * g11; // 0x8f6b8c84
int32_t g12 = 0; // 0x8f6b8c88
int32_t g13 = 0; // 0x8f6b8c94
int32_t g14 = 0; // 0x8f6c0004
int32_t g15 = 0; // 0x8f6c0044
int32_t g16 = 0; // 0x8f6c0060
int32_t g17 = 0; // 0x8f6c0064
int32_t g18 = 0; // 0x8f6c0164
int32_t g19 = 0; // 0x8f6c0168
int32_t g20 = 0; // 0x8f7112f4
char * g21; // 0x8f7112fc
char * g22; // 0x8f711374
char * g23; // 0x8f7113ec
int32_t g24 = 0; // 0x8f7114ac
int32_t * g9 = &g8; // 0x8f6ac0ec

// ------------------------ Functions -------------------------

// Address range: 0x8f619614 - 0x8f6198db
void exception_die(int32_t * a1, int32_t a2, int32_t a3) {
    int32_t v1 = (int32_t)a1;
    g30 = v1;
    g10++;
    int32_t * v2 = (int32_t *)(v1 + 64); // 0x8f61963c_0
    int32_t v3 = *v2; // 0x8f61963c
    *v2 = v3 + a2;
    int32_t v4;
    int32_t v5 = v4; // 0x8f619650
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    print_log(-1, a3, a3, v3, v12, v11, 0, v5, v10, v9, v8, v7, v6);
    int32_t v13 = g30; // 0x8f619654
    int32_t v14 = *(int32_t *)(v13 + 20); // 0x8f619654
    int32_t v15 = *(int32_t *)(v13 + 24); // 0x8f619664
    int32_t v16 = *(int32_t *)(v13 + 12); // 0x8f61966c
    int32_t v17 = *(int32_t *)(v13 + 16); // 0x8f619670
    print_log(-1, (int32_t)"r0  0x%08x r1  0x%08x r2  0x%08x r3  0x%08x\n", v16, v17, v14, v15, 0, v5, v10, v9, v8, v7, v6);
    int32_t v18 = g30; // 0x8f619678
    int32_t v19 = *(int32_t *)(v18 + 36); // 0x8f619678
    int32_t v20 = *(int32_t *)(v18 + 40); // 0x8f619688
    int32_t v21 = *(int32_t *)(v18 + 28); // 0x8f619690
    int32_t v22 = *(int32_t *)(v18 + 32); // 0x8f619694
    print_log(-1, (int32_t)"r4  0x%08x r5  0x%08x r6  0x%08x r7  0x%08x\n", v21, v22, v19, v20, 0, v5, v10, v9, v8, v7, v6);
    int32_t v23 = g30; // 0x8f61969c
    int32_t v24 = *(int32_t *)(v23 + 52); // 0x8f61969c
    int32_t v25 = *(int32_t *)(v23 + 56); // 0x8f6196ac
    int32_t v26 = *(int32_t *)(v23 + 44); // 0x8f6196b4
    int32_t v27 = *(int32_t *)(v23 + 48); // 0x8f6196b8
    print_log(-1, (int32_t)"r8  0x%08x r9  0x%08x r10 0x%08x r11 0x%08x\n", v26, v27, v24, v25, 0, v5, v10, v9, v8, v7, v6);
    int32_t v28 = g30; // 0x8f6196c0
    int32_t v29 = *(int32_t *)(v28 + 8); // 0x8f6196c0
    int32_t v30 = *(int32_t *)(v28 + 64); // 0x8f6196d0
    int32_t v31 = *(int32_t *)(v28 + 4); // 0x8f6196d8
    int32_t v32 = *(int32_t *)(v28 + 60); // 0x8f6196dc
    print_log(-1, (int32_t)"r12 0x%08x usp 0x%08x ulr 0x%08x pc  0x%08x\n", v32, v31, v29, v30, 0, v5, v10, v9, v8, v7, v6);
    int32_t v33 = *(int32_t *)g30; // 0x8f6196e8
    print_log(-1, (int32_t)"spsr 0x%08x\n", v33, v31, v29, v30, 0, v5, v10, v9, v8, v7, v6);
    function_8f6191c0((int32_t)&v4);
    int32_t v34 = v4; // 0x8f6196fc
    int32_t v35 = *(int32_t *)g30 % 32 == 17 ? 42 : 32;
    print_log(-1, (int32_t)"%c%s r13 0x%08x r14 0x%08x\n", v35, (int32_t)"fiq", v34, v10, 0, v34, v10, v9, v8, v7, v6);
    int32_t v36 = *(int32_t *)g30 % 32 == 18 ? 42 : 32;
    print_log(-1, (int32_t)"%c%s r13 0x%08x r14 0x%08x\n", v36, (int32_t)"irq", v9, v8, 0, v4, v10, v9, v8, v7, v6);
    int32_t v37 = *(int32_t *)g30 % 32 == 19 ? 42 : 32;
    print_log(-1, (int32_t)"%c%s r13 0x%08x r14 0x%08x\n", v37, (int32_t)"svc", v7, v6, 0, v4, v10, v9, v8, v7, v6);
    int32_t v38 = *(int32_t *)g30 % 32 == 27 ? 42 : 32;
    int32_t v39;
    int32_t v40;
    print_log(-1, (int32_t)"%c%s r13 0x%08x r14 0x%08x\n", v38, (int32_t)"und", v40, v39, 0, v4, v10, v9, v8, v7, v6);
    int32_t v41 = (int32_t)"%c%s r13 0x%08x r14 0x%08x\n"; // R1
    int32_t v42 = *(int32_t *)g30 % 32 == 31 ? 42 : 32;
    int32_t v43 = v42; // R2
    int32_t v44;
    int32_t v45;
    int32_t v46 = print_log(-1, (int32_t)"%c%s r13 0x%08x r14 0x%08x\n", v42, (int32_t)"sys", v45, v44, 0, v4, v10, v9, v8, v7, v6); // 0x8f6197fc
    uint32_t v47 = *(int32_t *)g30; // 0x8f619800
    int32_t v48 = v47 % 32 - 17; // 0x8f619808
    int32_t v49; // 0x8f61989c
    int32_t v50;
    int32_t v51; // 0x8f619890
    switch ((int5_t)v47) {
        case -15: {
            // 0x8f619854
            g30 = v50;
            // branch -> 0x8f619878
            // 0x8f619878
            if (v50 != 0) {
                // 0x8f619880
                v43 = v50;
                print_log(-1, (int32_t)"bottom of stack at 0x%08x:\n", v50, v48, v45, v44, 0, v4, v10, v9, v8, v7, v6);
                v51 = g30;
                v41 = 128;
                hexdump(v51, 128, v43, v48, v45, v44, 0, v4, v10);
                v49 = v51;
                // branch -> 0x8f61989c
            } else {
                v49 = v46;
            }
            // 0x8f61989c
            halt(v49, v41, v43, v48);
            // branch -> 0x8f6198a0
            while (true) {
                // 0x8f6198a0
                // branch -> 0x8f6198a0
            }
        }
        case -14: {
            // 0x8f61985c
            g30 = v9;
            v50 = v9;
            // branch -> 0x8f619878
            // 0x8f619878
            if (v50 != 0) {
                // 0x8f619880
                v43 = v50;
                print_log(-1, (int32_t)"bottom of stack at 0x%08x:\n", v50, v48, v45, v44, 0, v4, v10, v9, v8, v7, v6);
                v51 = g30;
                v41 = 128;
                hexdump(v51, 128, v43, v48, v45, v44, 0, v4, v10);
                v49 = v51;
                // branch -> 0x8f61989c
            } else {
                v49 = v46;
            }
            // 0x8f61989c
            halt(v49, v41, v43, v48);
            // branch -> 0x8f6198a0
            while (true) {
                // 0x8f6198a0
                // branch -> 0x8f6198a0
            }
        }
        case -13: {
            // 0x8f619864
            g30 = v7;
            v50 = v7;
            // branch -> 0x8f619878
            // 0x8f619878
            if (v50 != 0) {
                // 0x8f619880
                v43 = v50;
                print_log(-1, (int32_t)"bottom of stack at 0x%08x:\n", v50, v48, v45, v44, 0, v4, v10, v9, v8, v7, v6);
                v51 = g30;
                v41 = 128;
                hexdump(v51, 128, v43, v48, v45, v44, 0, v4, v10);
                v49 = v51;
                // branch -> 0x8f61989c
            } else {
                v49 = v46;
            }
            // 0x8f61989c
            halt(v49, v41, v43, v48);
            // branch -> 0x8f6198a0
            while (true) {
                // 0x8f6198a0
                // branch -> 0x8f6198a0
            }
        }
        case -5: {
            // 0x8f61986c
            g30 = v40;
            v50 = v40;
            // branch -> 0x8f619878
            // 0x8f619878
            if (v50 != 0) {
                // 0x8f619880
                v43 = v50;
                print_log(-1, (int32_t)"bottom of stack at 0x%08x:\n", v50, v48, v45, v44, 0, v4, v10, v9, v8, v7, v6);
                v51 = g30;
                v41 = 128;
                hexdump(v51, 128, v43, v48, v45, v44, 0, v4, v10);
                v49 = v51;
                // branch -> 0x8f61989c
            } else {
                v49 = v46;
            }
            // 0x8f61989c
            halt(v49, v41, v43, v48);
            // branch -> 0x8f6198a0
            while (true) {
                // 0x8f6198a0
                // branch -> 0x8f6198a0
            }
        }
        case -1: {
            // 0x8f619874
            g30 = v45;
            v50 = v45;
            // branch -> 0x8f619878
            // 0x8f619878
            if (v50 != 0) {
                // 0x8f619880
                v43 = v50;
                print_log(-1, (int32_t)"bottom of stack at 0x%08x:\n", v50, v48, v45, v44, 0, v4, v10, v9, v8, v7, v6);
                v51 = g30;
                v41 = 128;
                hexdump(v51, 128, v43, v48, v45, v44, 0, v4, v10);
                v49 = v51;
                // branch -> 0x8f61989c
            } else {
                v49 = v46;
            }
            // 0x8f61989c
            halt(v49, v41, v43, v48);
            // branch -> 0x8f6198a0
            while (true) {
                // 0x8f6198a0
                // branch -> 0x8f6198a0
            }
        }
    }
    // 0x8f61989c
    halt(v46, v41, v43, v48);
    // branch -> 0x8f6198a0
    while (true) {
        // 0x8f6198a0
        // branch -> 0x8f6198a0
    }
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// char * strrchr(char * s, int c);

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_ctlz_i32(int32_t a1, bool a2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 22
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:36:30
