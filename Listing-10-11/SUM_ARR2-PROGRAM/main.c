// main.c
// compile main.c with sump.c by using the following
// command-line scripts:
// $ gcc main.c sump.c -o main
// $ ./main

#include <stdio.h>
#include "sump.h"

int main(void) {

	int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
	long answer;

	answer = sump(marbles, marbles + SIZE);
	printf("The total number of marbles is %ld.\n", answer);

	return 0;
}
