// some_data.c -- partially initialized array
// Note: use format specifiers %2d%16d, %2d%18d,
//       or %2d%20d to create some space between 
//       "i" and "some_data[SIZE]"

#include <stdio.h>

#define SIZE 4

int main(void) {

	int some_data[SIZE] = {1492, 1066};
	int i;

	printf("%2s%14s\n", "i", "some_data[SIZE]");
	for (i = 0; i < SIZE; i++)
		printf("%2d%14d\n", i, some_data[i]);

	return 0;
}
