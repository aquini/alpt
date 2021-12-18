/*
 * alpt-b.c - a little programming test
 * fix all bugs you find out on this code in order to make it run smoothly
 * and return 0 when it finishes.
 */
#include <stdio.h>
#include <stdlib.h>

#define SIZEOF_ARRAY(a) (sizeof(a) / sizeof(__typeof__(a[0])))

int main(void)
{
	unsigned long i;
	unsigned long a[10];
	unsigned long *p;

	p = a;
	printf("[i: %p] [a: %p] [p: %p]\n",
		(void *)&i, (void *)&a, (void *)p);

	for (i = 0; i <= SIZEOF_ARRAY(a); i++)
		*(p+i) = 1UL;

	for (i = 0; i <= SIZEOF_ARRAY(a); i++)
		printf("a[%lu]: %lu\n", i, a[i]);

	return 0;
}
