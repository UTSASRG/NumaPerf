; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc -mtriple=aarch64--linux-gnu -mattr=+sve < %s | FileCheck %s

define <vscale x 4 x i1> @oeq(<vscale x 4 x float> %x, <vscale x 4 x float> %x2) {
; CHECK-LABEL: oeq:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmeq p0.s, p0/z, z0.s, z1.s
; CHECK-NEXT:    ret
  %y = fcmp oeq <vscale x 4 x float> %x, %x2
  ret <vscale x 4 x i1> %y
}
define <vscale x 4 x i1> @ogt(<vscale x 4 x float> %x, <vscale x 4 x float> %x2) {
; CHECK-LABEL: ogt:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmgt p0.s, p0/z, z0.s, z1.s
; CHECK-NEXT:    ret
  %y = fcmp ogt <vscale x 4 x float> %x, %x2
  ret <vscale x 4 x i1> %y
}
define <vscale x 4 x i1> @oge(<vscale x 4 x float> %x, <vscale x 4 x float> %x2) {
; CHECK-LABEL: oge:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmge p0.s, p0/z, z0.s, z1.s
; CHECK-NEXT:    ret
  %y = fcmp oge <vscale x 4 x float> %x, %x2
  ret <vscale x 4 x i1> %y
}
define <vscale x 4 x i1> @olt(<vscale x 4 x float> %x, <vscale x 4 x float> %x2) {
; CHECK-LABEL: olt:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmgt p0.s, p0/z, z1.s, z0.s
; CHECK-NEXT:    ret
  %y = fcmp olt <vscale x 4 x float> %x, %x2
  ret <vscale x 4 x i1> %y
}
define <vscale x 4 x i1> @ole(<vscale x 4 x float> %x, <vscale x 4 x float> %x2) {
; CHECK-LABEL: ole:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmge p0.s, p0/z, z1.s, z0.s
; CHECK-NEXT:    ret
  %y = fcmp ole <vscale x 4 x float> %x, %x2
  ret <vscale x 4 x i1> %y
}
define <vscale x 4 x i1> @one(<vscale x 4 x float> %x, <vscale x 4 x float> %x2) {
; CHECK-LABEL: one:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmne p0.s, p0/z, z0.s, z1.s
; CHECK-NEXT:    ret
  %y = fcmp one <vscale x 4 x float> %x, %x2
  ret <vscale x 4 x i1> %y
}
define <vscale x 4 x i1> @ord(<vscale x 4 x float> %x, <vscale x 4 x float> %x2) {
; CHECK-LABEL: ord:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmuo p1.s, p0/z, z0.s, z1.s
; CHECK-NEXT:    not p0.b, p0/z, p1.b
; CHECK-NEXT:    ret
  %y = fcmp ord <vscale x 4 x float> %x, %x2
  ret <vscale x 4 x i1> %y
}
define <vscale x 4 x i1> @ueq(<vscale x 4 x float> %x, <vscale x 4 x float> %x2) {
; CHECK-LABEL: ueq:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmne p1.s, p0/z, z0.s, z1.s
; CHECK-NEXT:    not p0.b, p0/z, p1.b
; CHECK-NEXT:    ret
  %y = fcmp ueq <vscale x 4 x float> %x, %x2
  ret <vscale x 4 x i1> %y
}
define <vscale x 4 x i1> @ugt(<vscale x 4 x float> %x, <vscale x 4 x float> %x2) {
; CHECK-LABEL: ugt:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmge p1.s, p0/z, z1.s, z0.s
; CHECK-NEXT:    not p0.b, p0/z, p1.b
; CHECK-NEXT:    ret
  %y = fcmp ugt <vscale x 4 x float> %x, %x2
  ret <vscale x 4 x i1> %y
}
define <vscale x 4 x i1> @uge(<vscale x 4 x float> %x, <vscale x 4 x float> %x2) {
; CHECK-LABEL: uge:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmgt p1.s, p0/z, z1.s, z0.s
; CHECK-NEXT:    not p0.b, p0/z, p1.b
; CHECK-NEXT:    ret
  %y = fcmp uge <vscale x 4 x float> %x, %x2
  ret <vscale x 4 x i1> %y
}
define <vscale x 4 x i1> @ult(<vscale x 4 x float> %x, <vscale x 4 x float> %x2) {
; CHECK-LABEL: ult:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmge p1.s, p0/z, z0.s, z1.s
; CHECK-NEXT:    not p0.b, p0/z, p1.b
; CHECK-NEXT:    ret
  %y = fcmp ult <vscale x 4 x float> %x, %x2
  ret <vscale x 4 x i1> %y
}
define <vscale x 4 x i1> @ule(<vscale x 4 x float> %x, <vscale x 4 x float> %x2) {
; CHECK-LABEL: ule:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmgt p1.s, p0/z, z0.s, z1.s
; CHECK-NEXT:    not p0.b, p0/z, p1.b
; CHECK-NEXT:    ret
  %y = fcmp ule <vscale x 4 x float> %x, %x2
  ret <vscale x 4 x i1> %y
}
define <vscale x 4 x i1> @une(<vscale x 4 x float> %x, <vscale x 4 x float> %x2) {
; CHECK-LABEL: une:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmeq p1.s, p0/z, z0.s, z1.s
; CHECK-NEXT:    not p0.b, p0/z, p1.b
; CHECK-NEXT:    ret
  %y = fcmp une <vscale x 4 x float> %x, %x2
  ret <vscale x 4 x i1> %y
}
define <vscale x 4 x i1> @uno(<vscale x 4 x float> %x, <vscale x 4 x float> %x2) {
; CHECK-LABEL: uno:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmuo p0.s, p0/z, z0.s, z1.s
; CHECK-NEXT:    ret
  %y = fcmp uno <vscale x 4 x float> %x, %x2
  ret <vscale x 4 x i1> %y
}
define <vscale x 2 x i1> @oeq_2f32(<vscale x 2 x float> %x, <vscale x 2 x float> %x2) {
; CHECK-LABEL: oeq_2f32:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.d
; CHECK-NEXT:    fcmeq p0.s, p0/z, z0.s, z1.s
; CHECK-NEXT:    ret
  %y = fcmp oeq <vscale x 2 x float> %x, %x2
  ret <vscale x 2 x i1> %y
}
define <vscale x 2 x i1> @ueq_2f32(<vscale x 2 x float> %x, <vscale x 2 x float> %x2) {
; CHECK-LABEL: ueq_2f32:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.d
; CHECK-NEXT:    fcmne p1.s, p0/z, z0.s, z1.s
; CHECK-NEXT:    not p0.b, p0/z, p1.b
; CHECK-NEXT:    ret
  %y = fcmp ueq <vscale x 2 x float> %x, %x2
  ret <vscale x 2 x i1> %y
}
define <vscale x 2 x i1> @oeq_2f64(<vscale x 2 x double> %x, <vscale x 2 x double> %x2) {
; CHECK-LABEL: oeq_2f64:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.d
; CHECK-NEXT:    fcmeq p0.d, p0/z, z0.d, z1.d
; CHECK-NEXT:    ret
  %y = fcmp oeq <vscale x 2 x double> %x, %x2
  ret <vscale x 2 x i1> %y
}
define <vscale x 2 x i1> @ueq_2f64(<vscale x 2 x double> %x, <vscale x 2 x double> %x2) {
; CHECK-LABEL: ueq_2f64:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.d
; CHECK-NEXT:    fcmne p1.d, p0/z, z0.d, z1.d
; CHECK-NEXT:    not p0.b, p0/z, p1.b
; CHECK-NEXT:    ret
  %y = fcmp ueq <vscale x 2 x double> %x, %x2
  ret <vscale x 2 x i1> %y
}
define <vscale x 2 x i1> @oeq_2f16(<vscale x 2 x half> %x, <vscale x 2 x half> %x2) {
; CHECK-LABEL: oeq_2f16:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.d
; CHECK-NEXT:    fcmeq p0.h, p0/z, z0.h, z1.h
; CHECK-NEXT:    ret
  %y = fcmp oeq <vscale x 2 x half> %x, %x2
  ret <vscale x 2 x i1> %y
}
define <vscale x 2 x i1> @ueq_2f16(<vscale x 2 x half> %x, <vscale x 2 x half> %x2) {
; CHECK-LABEL: ueq_2f16:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.d
; CHECK-NEXT:    fcmne p1.h, p0/z, z0.h, z1.h
; CHECK-NEXT:    not p0.b, p0/z, p1.b
; CHECK-NEXT:    ret
  %y = fcmp ueq <vscale x 2 x half> %x, %x2
  ret <vscale x 2 x i1> %y
}
define <vscale x 4 x i1> @oeq_4f16(<vscale x 4 x half> %x, <vscale x 4 x half> %x2) {
; CHECK-LABEL: oeq_4f16:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmeq p0.h, p0/z, z0.h, z1.h
; CHECK-NEXT:    ret
  %y = fcmp oeq <vscale x 4 x half> %x, %x2
  ret <vscale x 4 x i1> %y
}
define <vscale x 4 x i1> @ueq_4f16(<vscale x 4 x half> %x, <vscale x 4 x half> %x2) {
; CHECK-LABEL: ueq_4f16:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmne p1.h, p0/z, z0.h, z1.h
; CHECK-NEXT:    not p0.b, p0/z, p1.b
; CHECK-NEXT:    ret
  %y = fcmp ueq <vscale x 4 x half> %x, %x2
  ret <vscale x 4 x i1> %y
}
define <vscale x 8 x i1> @oeq_8f16(<vscale x 8 x half> %x, <vscale x 8 x half> %x2) {
; CHECK-LABEL: oeq_8f16:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.h
; CHECK-NEXT:    fcmeq p0.h, p0/z, z0.h, z1.h
; CHECK-NEXT:    ret
  %y = fcmp oeq <vscale x 8 x half> %x, %x2
  ret <vscale x 8 x i1> %y
}
define <vscale x 8 x i1> @ueq_8f16(<vscale x 8 x half> %x, <vscale x 8 x half> %x2) {
; CHECK-LABEL: ueq_8f16:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.h
; CHECK-NEXT:    fcmne p1.h, p0/z, z0.h, z1.h
; CHECK-NEXT:    not p0.b, p0/z, p1.b
; CHECK-NEXT:    ret
  %y = fcmp ueq <vscale x 8 x half> %x, %x2
  ret <vscale x 8 x i1> %y
}

define <vscale x 4 x i32> @oeq_4f32_sext(<vscale x 4 x float> %x, <vscale x 4 x float> %x2) {
; CHECK-LABEL: oeq_4f32_sext:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmeq p0.s, p0/z, z0.s, z1.s
; CHECK-NEXT:    mov z0.s, p0/z, #-1 // =0xffffffffffffffff
; CHECK-NEXT:    ret
  %y = fcmp oeq <vscale x 4 x float> %x, %x2
  %r = sext <vscale x 4 x i1> %y to <vscale x 4 x i32>
  ret <vscale x 4 x i32> %r
}

define <vscale x 4 x i32> @oeq_4f32_zext(<vscale x 4 x float> %x, <vscale x 4 x float> %x2) {
; CHECK-LABEL: oeq_4f32_zext:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s
; CHECK-NEXT:    fcmeq p0.s, p0/z, z0.s, z1.s
; CHECK-NEXT:    mov z0.s, p0/z, #1 // =0x1
; CHECK-NEXT:    ret
  %y = fcmp oeq <vscale x 4 x float> %x, %x2
  %r = zext <vscale x 4 x i1> %y to <vscale x 4 x i32>
  ret <vscale x 4 x i32> %r
}
