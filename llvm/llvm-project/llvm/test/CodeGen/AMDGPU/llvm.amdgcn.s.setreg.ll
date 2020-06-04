; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc -march=amdgcn -mcpu=verde -verify-machineinstrs < %s | FileCheck -check-prefixes=GFX6789 %s
; RUN: llc -march=amdgcn -mcpu=tonga -verify-machineinstrs < %s | FileCheck -check-prefixes=GFX6789 %s
; RUN: llc -march=amdgcn -mcpu=gfx900 -verify-machineinstrs < %s | FileCheck -check-prefixes=GFX6789 %s
; RUN: llc -march=amdgcn -mcpu=gfx1010 -verify-machineinstrs < %s | FileCheck -check-prefixes=GFX10 %s

; FIXME: This copy of the test is a subset of the -global-isel version, since the VGPR case doesn't work.

; Immediate values:
; (mode register ID = 1) | (Offset << 6) | ((Width - 1) << 11)
; Offset: fp_round = 0, fp_denorm = 4, dx10_clamp = 8, ieee_mode = 9


; Set FP32 fp_round to round to zero
define amdgpu_kernel void @test_setreg_f32_round_mode_rtz() {
; GFX6789-LABEL: test_setreg_f32_round_mode_rtz:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 2), 3
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_f32_round_mode_rtz:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 2), 3
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 2049, i32 3)
  call void asm sideeffect "", ""()
  ret void
}

; Set FP64/FP16 fp_round to round to zero
define amdgpu_kernel void @test_setreg_f64_round_mode_rtz() {
; GFX6789-LABEL: test_setreg_f64_round_mode_rtz:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 2, 2), 3
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_f64_round_mode_rtz:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 2, 2), 3
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 2177, i32 3)
  call void asm sideeffect "", ""()
  ret void
}

; Set all fp_round to round to zero
define amdgpu_kernel void @test_setreg_all_round_mode_rtz() {
; GFX6789-LABEL: test_setreg_all_round_mode_rtz:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 2, 4), 7
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_all_round_mode_rtz:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 2, 4), 7
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 6273, i32 7)
  call void asm sideeffect "", ""()
  ret void
}

; Set FP32 fp_round to dynamic mode
define amdgpu_cs void @test_setreg_roundingmode_var(i32 inreg %var.mode) {
; GFX6789-LABEL: test_setreg_roundingmode_var:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_b32 hwreg(HW_REG_MODE, 0, 2), s0
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_roundingmode_var:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_setreg_b32 hwreg(HW_REG_MODE, 0, 2), s0
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 2049, i32 %var.mode)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_ieee_mode_off() {
; GFX6789-LABEL: test_setreg_ieee_mode_off:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 9, 1), 0
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_ieee_mode_off:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 9, 1), 0
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 577, i32 0)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_ieee_mode_on() {
; GFX6789-LABEL: test_setreg_ieee_mode_on:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 9, 1), 1
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_ieee_mode_on:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 9, 1), 1
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 577, i32 1)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_dx10_clamp_off() {
; GFX6789-LABEL: test_setreg_dx10_clamp_off:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 8, 1), 0
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_dx10_clamp_off:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 8, 1), 0
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 513, i32 0)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_dx10_clamp_on() {
; GFX6789-LABEL: test_setreg_dx10_clamp_on:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 8, 1), 1
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_dx10_clamp_on:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 8, 1), 1
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 513, i32 1)
  call void asm sideeffect "", ""()
  ret void
}

; Sets full width of fp round and fp denorm fields, to a variable
define amdgpu_cs void @test_setreg_full_both_round_mode_and_denorm_mode(i32 inreg %mode) {
; GFX6789-LABEL: test_setreg_full_both_round_mode_and_denorm_mode:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_b32 hwreg(HW_REG_MODE, 0, 8), s0
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_both_round_mode_and_denorm_mode:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_setreg_b32 hwreg(HW_REG_MODE, 0, 8), s0
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 14337, i32 inreg %mode)
  call void asm sideeffect "", ""()
  ret void
}

; Does not cover last bit of denorm field
define amdgpu_cs void @test_setreg_most_both_round_mode_and_denorm_mode() {
; GFX6789-LABEL: test_setreg_most_both_round_mode_and_denorm_mode:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 7), 6
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_most_both_round_mode_and_denorm_mode:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 7), 6
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 12289, i32 6)
  call void asm sideeffect "", ""()
  ret void
}

; Does not cover first bit of denorm field
define amdgpu_cs void @test_setreg_most_both_round_mode_and_denorm_mode_6() {
; GFX6789-LABEL: test_setreg_most_both_round_mode_and_denorm_mode_6:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 1, 3), 6
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_most_both_round_mode_and_denorm_mode_6:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 1, 3), 6
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 4161, i32 6)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_cs void @test_setreg_f32_denorm_mode(i32 inreg %val) {
; GFX6789-LABEL: test_setreg_f32_denorm_mode:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_b32 hwreg(HW_REG_MODE, 4, 2), s0
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_f32_denorm_mode:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_setreg_b32 hwreg(HW_REG_MODE, 4, 2), s0
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 2305, i32 %val)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_cs void @test_setreg_f64_denorm_mode(i32 inreg %val) {
; GFX6789-LABEL: test_setreg_f64_denorm_mode:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_b32 hwreg(HW_REG_MODE, 6, 2), s0
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_f64_denorm_mode:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_setreg_b32 hwreg(HW_REG_MODE, 6, 2), s0
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 2433, i32 %val)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_cs void @test_setreg_full_denorm_mode(i32 inreg %val) {
; GFX6789-LABEL: test_setreg_full_denorm_mode:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_b32 hwreg(HW_REG_MODE, 0, 4), s0
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_denorm_mode:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_setreg_b32 hwreg(HW_REG_MODE, 0, 4), s0
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 6145, i32 %val)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_round_mode_0() {
; GFX6789-LABEL: test_setreg_full_round_mode_0:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 4), 0
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_round_mode_0:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_round_mode 0x0
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 6145, i32 0)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_round_mode_1() {
; GFX6789-LABEL: test_setreg_full_round_mode_1:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 4), 1
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_round_mode_1:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_round_mode 0x1
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 6145, i32 1)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_round_mode_2() {
; GFX6789-LABEL: test_setreg_full_round_mode_2:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 4), 2
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_round_mode_2:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_round_mode 0x2
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 6145, i32 2)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_round_mode_4() {
; GFX6789-LABEL: test_setreg_full_round_mode_4:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 4), 4
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_round_mode_4:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_round_mode 0x4
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 6145, i32 4)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_round_mode_8() {
; GFX6789-LABEL: test_setreg_full_round_mode_8:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 4), 8
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_round_mode_8:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_round_mode 0x8
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 6145, i32 8)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_round_mode_15() {
; GFX6789-LABEL: test_setreg_full_round_mode_15:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 4), 15
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_round_mode_15:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_round_mode 0xf
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 6145, i32 15)
  call void asm sideeffect "", ""()
  ret void
}

; Should truncate set immediate value
define amdgpu_kernel void @test_setreg_full_round_mode_42() {
; GFX6789-LABEL: test_setreg_full_round_mode_42:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 4), 42
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_round_mode_42:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_round_mode 0xa
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 6145, i32 42)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_denorm_mode_0() {
; GFX6789-LABEL: test_setreg_full_denorm_mode_0:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 4, 4), 0
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_denorm_mode_0:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_denorm_mode 0
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 6401, i32 0)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_denorm_mode_1() {
; GFX6789-LABEL: test_setreg_full_denorm_mode_1:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 4, 4), 1
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_denorm_mode_1:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_denorm_mode 1
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 6401, i32 1)
  call void asm sideeffect "", ""()
  ret void
}


define amdgpu_kernel void @test_setreg_full_denorm_mode_2() {
; GFX6789-LABEL: test_setreg_full_denorm_mode_2:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 4, 4), 2
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_denorm_mode_2:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_denorm_mode 2
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 6401, i32 2)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_denorm_mode_4() {
; GFX6789-LABEL: test_setreg_full_denorm_mode_4:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 4, 4), 4
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_denorm_mode_4:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_denorm_mode 4
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 6401, i32 4)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_denorm_mode_8() {
; GFX6789-LABEL: test_setreg_full_denorm_mode_8:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 4, 4), 8
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_denorm_mode_8:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_denorm_mode 8
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 6401, i32 8)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_denorm_mode_15() {
; GFX6789-LABEL: test_setreg_full_denorm_mode_15:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 4, 4), 15
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_denorm_mode_15:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_denorm_mode 15
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 6401, i32 15)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_denorm_mode_42() {
; GFX6789-LABEL: test_setreg_full_denorm_mode_42:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 4, 4), 42
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_denorm_mode_42:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_denorm_mode 10
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 6401, i32 42)
  call void asm sideeffect "", ""()
  ret void
}

; Sets all fp round and fp denorm bits.
define amdgpu_kernel void @test_setreg_full_both_round_mode_and_denorm_mode_0() {
; GFX6789-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_0:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 8), 0
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_0:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    s_round_mode 0x0
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_denorm_mode 0
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 14337, i32 0)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_both_round_mode_and_denorm_mode_1() {
; GFX6789-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_1:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 8), 1
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_1:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    s_round_mode 0x1
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_denorm_mode 0
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 14337, i32 1)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_both_round_mode_and_denorm_mode_2() {
; GFX6789-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_2:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 8), 2
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_2:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    s_round_mode 0x2
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_denorm_mode 0
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 14337, i32 2)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_both_round_mode_and_denorm_mode_4() {
; GFX6789-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_4:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 8), 4
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_4:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    s_round_mode 0x4
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_denorm_mode 0
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 14337, i32 4)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_both_round_mode_and_denorm_mode_8() {
; GFX6789-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_8:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 8), 8
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_8:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    s_round_mode 0x8
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_denorm_mode 0
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 14337, i32 8)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_both_round_mode_and_denorm_mode_16() {
; GFX6789-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_16:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 8), 16
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_16:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    s_round_mode 0x0
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_denorm_mode 1
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 14337, i32 16)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_both_round_mode_and_denorm_mode_32() {
; GFX6789-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_32:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 8), 32
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_32:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    s_round_mode 0x0
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_denorm_mode 2
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 14337, i32 32)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_both_round_mode_and_denorm_mode_64() {
; GFX6789-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_64:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 8), 64
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_64:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    s_round_mode 0x0
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_denorm_mode 4
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 14337, i32 64)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_both_round_mode_and_denorm_mode_128() {
; GFX6789-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_128:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 8), 0x80
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_128:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    s_round_mode 0x0
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_denorm_mode 8
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 14337, i32 128)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_both_round_mode_and_denorm_mode_15() {
; GFX6789-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_15:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 8), 15
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_15:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    s_round_mode 0xf
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_denorm_mode 0
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 14337, i32 15)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_full_both_round_mode_and_denorm_mode_255() {
; GFX6789-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_255:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 8), 0xff
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_255:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    s_round_mode 0xf
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_denorm_mode 15
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 14337, i32 255)
  call void asm sideeffect "", ""()
  ret void
}

; Truncate extra high bit
define amdgpu_kernel void @test_setreg_full_both_round_mode_and_denorm_mode_597() {
; GFX6789-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_597:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 8), 0x255
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_full_both_round_mode_and_denorm_mode_597:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    s_round_mode 0x5
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_denorm_mode 5
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 14337, i32 597)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_set_8_bits_straddles_round_and_denorm() {
; GFX6789-LABEL: test_setreg_set_8_bits_straddles_round_and_denorm:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 2, 8), 0xff
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_set_8_bits_straddles_round_and_denorm:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 2, 8), 0xff
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 14465, i32 255)
  call void asm sideeffect "", ""()
  ret void
}

define amdgpu_kernel void @test_setreg_set_4_bits_straddles_round_and_denorm() {
; GFX6789-LABEL: test_setreg_set_4_bits_straddles_round_and_denorm:
; GFX6789:       ; %bb.0:
; GFX6789-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 2, 4), 15
; GFX6789-NEXT:    ;;#ASMSTART
; GFX6789-NEXT:    ;;#ASMEND
; GFX6789-NEXT:    s_endpgm
;
; GFX10-LABEL: test_setreg_set_4_bits_straddles_round_and_denorm:
; GFX10:       ; %bb.0:
; GFX10-NEXT:    ; implicit-def: $vcc_hi
; GFX10-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 2, 4), 15
; GFX10-NEXT:    ;;#ASMSTART
; GFX10-NEXT:    ;;#ASMEND
; GFX10-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 6273, i32 15)
  call void asm sideeffect "", ""()
  ret void
}

; FIXME: Broken for DAG
; define void @test_setreg_roundingmode_var_vgpr(i32 %var.mode) {
;   call void @llvm.amdgcn.s.setreg(i32 4097, i32 %var.mode)
;   call void asm sideeffect "", ""()
;   ret void
; }

declare void @llvm.amdgcn.s.setreg(i32 immarg, i32) #0

attributes #0 = { nounwind }