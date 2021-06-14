 #include "types.h"
 #include "x86.h"
 #include "defs.h"
 #include "date.h"
 #include "param.h"
 #include "memlayout.h"
 #include "mmu.h"
 #include "proc.h"
int mygetppid(void){
	return myproc()->parent->pid;
}

int sys_mygetppid(void){
	return mygetppid();
}
