/*
 * alpt-c.c - a little programming test
 * fix all bugs you find out on this code in order to make it run smoothly
 * and return 0 when it is strictly required.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const char *magic_string = "abrakadabra-hokuspokus";

int main(int argc, char *argv[])
{
	size_t str_sz = sizeof(magic_string);
	char *input = "nononono";

	if (argc > 1)
		input = argv[1];

	if (strncmp(input, magic_string, str_sz)) {
		printf("ACCESS GRANTED!\n");
		return 0;
	}

	return 1;
}
