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
#include <stdint.h>

int main(void) {
	int32_t counter = 10;
	uint32_t limiter = 0;

	while (1) {
		printf("Decrementing limiter\n");
		counter--;
		if ( counter < limiter)
			break;
	}

	return 0;
}
