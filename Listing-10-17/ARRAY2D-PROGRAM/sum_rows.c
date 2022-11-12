// sum_rows.c

#include <stdio.h>
#include "headerfile.h"

void sum_rows(int ar[][COLS], int rows) {

	int r;
	int c;
	int tot;

	for (r = 0; r < rows; r++) {
		tot = 0;
		for (c = 0; c < COLS; c++)
			tot += ar[r][c];
		printf("row %d: sum = %d \n",
			r, tot);
	}
}
