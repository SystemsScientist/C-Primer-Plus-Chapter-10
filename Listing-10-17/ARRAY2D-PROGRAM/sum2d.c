// sum2d.c

#include <stdio.h>
#include "headerfile.h"

int sum2d(int ar[][COLS], int rows) {

	int r;
	int c;
	int tot = 0;

	for (r = 0; r < rows; r++) {
		for (c = 0; c < COLS; c++)
			tot += ar[r][c];
	}

	return tot;
}
