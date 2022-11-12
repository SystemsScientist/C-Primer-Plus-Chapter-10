// sum_cols.c

#include <stdio.h>
#include "headerfile.h"

void sum_cols(int ar[][COLS], int rows) {

	int r;
	int c;
	int tot;

	for (c = 0; c < COLS; c++) {
		tot = 0;
		for (r = 0; r < rows; r++)
			tot += ar[r][c];
		printf("col %d: sum = %d \n",
			c, tot);
	}
}
