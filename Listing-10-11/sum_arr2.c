// sum_arr2.c -- sums the elements of an array

#include <stdio.h> 

#define SIZE 10

int sump(int * start, int * end); // function prototype

int main(void) {

	int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
	long answer;

	answer = sump(marbles, marbles + SIZE); // function call
	printf("The total number of marbles is %ld.\n", answer);

	return 0;
}

// use pointer arithmetic 
int sump(int * start, int * end) { // function definition

	int total = 0;

	while (start < end) {
		total += *start; // add value to total
		start++;         // advance pointer to next element
	}

	return total;
}
