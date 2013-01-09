/*
 * altp-d
 *
 * GOAL:
 * Fix the infinite loop
 *
 * Secondary GOAL:
 * Explain what happened
 */

#include <stdio.h>

int main(void) {
	int counter = 10;
	unsigned int limiter = 0;

	while (1) {
		printf("Decrementing limiter\n");
		counter--;
		if ( counter < limiter)
			break;
	}

	return 0;
}
