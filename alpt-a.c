/*
 * alpt-a.c - a little programming test
 * fix all bugs you find out on this code in order to make it run smoothly
 * and return 0 when it finishes.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	char *p;

	for (i=0; i<10; i++) {
		p = malloc(1024);

		for (j=0; j<1024; j++)
			p[j] = 1;
	}

	for (i=0; i<10; i++)
		free(p);

	return 0;
}
