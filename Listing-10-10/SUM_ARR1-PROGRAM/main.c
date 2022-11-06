// main.c
// compile main.c with sum.c by using the following
// command-line scripts:
// $ gcc main.c sum.c -o main
// $ ./main

#include <stdio.h>
#include "sum.h"

int main(void) {

	int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
	long answer;

	answer = sum(marbles, SIZE);
	printf("The total number of marbles is %ld.\n", answer);
	printf("The size of marbles is %zd bytes.\n", sizeof marbles);

	return 0;
}
