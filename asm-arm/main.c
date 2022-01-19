#include <stdio.h>
#include <stdlib.h>

extern void strcopy(void *, void*);

static int global=0x4000, __argc;

#define __range_ok(addr,size) ({ \
unsigned long flag, sum; \
__asm__("adds %1, %2, %3; sbcccs %1, %1, %0; movcc %0, #0" \
: "=&r" (flag), "=&r" (sum) \
: "r" (addr), "Ir" (size), "0" (global) \
: "cc"); \
flag; })


#define __move_1() ({ \
unsigned long data1 = 1, data2 = 2; \
__asm__ __volatile__("mov %0, %1" \
: "=r" (data1) \
: "r" (data2)\
: "memory"); \
data1;})

int no_barrier(void)
{
        {
        int* __p = (int*)__argc;
        (*__p) = 9999;
        if((*__p) == 9999)
        return 5;
        return (*__p);
        } 
}

int barrier(void)
{
        {
        int* __p = (int*)__argc;
        (*__p) = 9999;
        __asm__("":::"memory");
        if((*__p) == 9999)
        return 5;
        return (*__p);
        } 
}

int c_func(int i, int j)
{
	printf("%d %d\n", i, j);
	return i + j;
}

void main(void)
{
	char a[100];
	strcopy(a, "Hello World");
	printf("%s\n",a);

	__range_ok(0, 0x10);

	__move_1();

	no_barrier();
	barrier();
}
