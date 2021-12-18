/*
 * alpt-a.c - a little programming test
 * fix all bugs you find out on this code in order to make it run smoothly
 * and return 0 when it finishes.
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX_ITEMS 10
#define MAX_BLKSZ 64

char * blocks_alloc_and_init(void)
{
	int i, j;
	char *blockptr = NULL;

	for (i = 0; i < MAX_ITEMS; i++) {
		blockptr = malloc(MAX_BLKSZ);
		for (j = 0; j < MAX_BLKSZ; j++)
			blockptr[j] = 1;
	}

	return blockptr;
}

void blocks_print_usage(char *blockptr)
{
	int i, j;

	for (i = 0; i < MAX_ITEMS; i++) {
		printf("blk %d: ", i);
		for (j = 0; j < MAX_BLKSZ; j++)
			printf("%d", blockptr[j]);

		printf("\n");
	}
}

void blocks_release(char *blockptr)
{
	int i;

	for (i = 0; i < MAX_ITEMS; i++)
		free(blockptr);
}

int main(void)
{
	char *blockptr;

	blockptr = blocks_alloc_and_init();
	blocks_print_usage(blockptr);
	blocks_release(blockptr);

	return 0;
}
