// SPDX-License-Identifier: GPL-2.0-only
/*
 *  linux/kernel/fork.c
 *
 *  Copyright (C) 1991, 1992  Linus Torvalds
 */

#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE5(readMMU, unsigned long , vaddr, unsigned long * , pml4ep, unsigned long * , pdptep, unsigned long * , pdep, unsigned long * , ptep) {
	printk ("CSC256: readMMU says hi!\n");
	return 0;
}

SYSCALL_DEFINE5(writeMMU, unsigned long , vaddr, unsigned long , pml4e, unsigned long , pdpte, unsigned long , pde, unsigned long , pte) {
	printk ("CSC256: writeMMU says hi!\n");
	return 0;
}
