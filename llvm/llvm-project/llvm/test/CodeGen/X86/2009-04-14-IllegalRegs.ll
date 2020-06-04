; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc < %s -mtriple=i386-apple-darwin -O0 -regalloc=fast | FileCheck %s
; rdar://6787136

	%struct.X = type { i8, [32 x i8] }
@llvm.used = appending global [1 x i8*] [i8* bitcast (i32 ()* @z to i8*)], section "llvm.metadata"		; <[1 x i8*]*> [#uses=0]

define i32 @z() nounwind ssp {
; CHECK-LABEL: z:
; CHECK:       ## %bb.0: ## %entry
; CHECK-NEXT:    pushl %edi
; CHECK-NEXT:    pushl %esi
; CHECK-NEXT:    subl $148, %esp
; CHECK-NEXT:    movl L___stack_chk_guard$non_lazy_ptr, %eax
; CHECK-NEXT:    movl (%eax), %eax
; CHECK-NEXT:    movl %eax, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movb $48, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movb {{[0-9]+}}(%esp), %al
; CHECK-NEXT:    movb %al, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movb $15, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl %esp, %eax
; CHECK-NEXT:    movl $8, %ecx
; CHECK-NEXT:    leal {{[0-9]+}}(%esp), %edx
; CHECK-NEXT:    movl %ecx, {{[-0-9]+}}(%e{{[sb]}}p) ## 4-byte Spill
; CHECK-NEXT:    movl %eax, %edi
; CHECK-NEXT:    movl %edx, %esi
; CHECK-NEXT:    rep;movsl (%esi), %es:(%edi)
; CHECK-NEXT:    movl %eax, %ecx
; CHECK-NEXT:    addl $36, %ecx
; CHECK-NEXT:    movl {{[-0-9]+}}(%e{{[sb]}}p), %esi ## 4-byte Reload
; CHECK-NEXT:    movl %ecx, {{[-0-9]+}}(%e{{[sb]}}p) ## 4-byte Spill
; CHECK-NEXT:    movl %esi, %ecx
; CHECK-NEXT:    movl {{[-0-9]+}}(%e{{[sb]}}p), %edi ## 4-byte Reload
; CHECK-NEXT:    movl %edx, %esi
; CHECK-NEXT:    rep;movsl (%esi), %es:(%edi)
; CHECK-NEXT:    movb {{[0-9]+}}(%esp), %cl
; CHECK-NEXT:    movb %cl, 32(%eax)
; CHECK-NEXT:    movb %cl, 68(%eax)
; CHECK-NEXT:    calll _f
; CHECK-NEXT:    movl %eax, {{[0-9]+}}(%esp)
; CHECK-NEXT:    movl {{[0-9]+}}(%esp), %eax
; CHECK-NEXT:    movl %eax, {{[0-9]+}}(%esp)
; CHECK-NEXT:  ## %bb.1: ## %return
; CHECK-NEXT:    movl {{[0-9]+}}(%esp), %eax
; CHECK-NEXT:    movl L___stack_chk_guard$non_lazy_ptr, %ecx
; CHECK-NEXT:    movl (%ecx), %ecx
; CHECK-NEXT:    movl {{[0-9]+}}(%esp), %edx
; CHECK-NEXT:    cmpl %edx, %ecx
; CHECK-NEXT:    movl %eax, {{[-0-9]+}}(%e{{[sb]}}p) ## 4-byte Spill
; CHECK-NEXT:    jne LBB0_3
; CHECK-NEXT:  ## %bb.2: ## %SP_return
; CHECK-NEXT:    movl {{[-0-9]+}}(%e{{[sb]}}p), %eax ## 4-byte Reload
; CHECK-NEXT:    addl $148, %esp
; CHECK-NEXT:    popl %esi
; CHECK-NEXT:    popl %edi
; CHECK-NEXT:    retl
; CHECK-NEXT:  LBB0_3: ## %CallStackCheckFailBlk
; CHECK-NEXT:    calll ___stack_chk_fail
; CHECK-NEXT:    ud2
entry:
	%retval = alloca i32		; <i32*> [#uses=2]
	%xxx = alloca %struct.X		; <%struct.X*> [#uses=6]
	%0 = alloca i32		; <i32*> [#uses=2]
	%"alloca point" = bitcast i32 0 to i32		; <i32> [#uses=0]
	%1 = getelementptr %struct.X, %struct.X* %xxx, i32 0, i32 1		; <[32 x i8]*> [#uses=1]
	%2 = getelementptr [32 x i8], [32 x i8]* %1, i32 0, i32 31		; <i8*> [#uses=1]
	store i8 48, i8* %2, align 1
	%3 = getelementptr %struct.X, %struct.X* %xxx, i32 0, i32 1		; <[32 x i8]*> [#uses=1]
	%4 = getelementptr [32 x i8], [32 x i8]* %3, i32 0, i32 31		; <i8*> [#uses=1]
	%5 = load i8, i8* %4, align 1		; <i8> [#uses=1]
	%6 = getelementptr %struct.X, %struct.X* %xxx, i32 0, i32 1		; <[32 x i8]*> [#uses=1]
	%7 = getelementptr [32 x i8], [32 x i8]* %6, i32 0, i32 0		; <i8*> [#uses=1]
	store i8 %5, i8* %7, align 1
	%8 = getelementptr %struct.X, %struct.X* %xxx, i32 0, i32 0		; <i8*> [#uses=1]
	store i8 15, i8* %8, align 1
	%9 = call i32 (...) bitcast (i32 (%struct.X*, %struct.X*)* @f to i32 (...)*)(%struct.X* byval align 4 %xxx, %struct.X* byval align 4 %xxx) nounwind		; <i32> [#uses=1]
	store i32 %9, i32* %0, align 4
	%10 = load i32, i32* %0, align 4		; <i32> [#uses=1]
	store i32 %10, i32* %retval, align 4
	br label %return

return:		; preds = %entry
	%retval1 = load i32, i32* %retval		; <i32> [#uses=1]
	ret i32 %retval1
}

declare i32 @f(%struct.X* byval align 4, %struct.X* byval align 4) nounwind ssp