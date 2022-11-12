// main.c
// compile and execute main.c with sum_rows.c,
// sum_cols.c, and sum2d by using the following
// command-line scripts:
// $ gcc main.c sum_rows.c sum_cols.c sum2d.c -o main
// $./main

#include <stdio.h>
#include "headerfile.h"

int main(void) {
	
	int junk[ROWS][COLS] = {
		{2, 4, 6, 8},
		{3, 5, 7, 9},
		{12, 10, 8, 6}
	};

	sum_rows(junk, ROWS);
	sum_cols(junk, ROWS);
	printf("Sum of all elements = %d \n",
		sum2d(junk, ROWS));

	return 0;
}
