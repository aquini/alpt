/*
 * alpt-a.c - a little programming test
 * fix all bugs you find out on this code in order to make it run smoothly
 * and return 0 when it finishes.
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX_ITEMS 10
#define MAX_BLKSZ 64

char *blockptr;

static void blocks_alloc_and_init(void)
{
	int i, j;
	for (i = 0; i < MAX_ITEMS; i++) {
		blockptr = malloc(MAX_BLKSZ);

		for (j = 0; j < MAX_BLKSZ; j++)
			blockptr[j] = 1;
	}
}

static void blocks_print_usage(void)
{
	int i, j;
	for (i = 0; i < MAX_ITEMS; i++) {
		printf("blk %d: ", i);
		for (j = 0; j < MAX_BLKSZ; j++)
			printf("%d", blockptr[j]);

		printf("\n");
	}
}

static void blocks_release(void)
{
	int i;
	for (i = 0; i < MAX_ITEMS; i++)
		free(blockptr);
}

int main(void)
{
	blocks_alloc_and_init();
	blocks_print_usage();
	blocks_release();

	return 0;
}
