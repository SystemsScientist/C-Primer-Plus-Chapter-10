// sum2d.c

#include <stdio.h>
#include "headerfile.h"

// function with a VLA parameter
int sum2d(int rows, int cols, int ar[rows][cols]) {

	int r;
	int c;
	int tot = 0;

	for (r = 0; r < rows; r++)
		for (c = 0; c < cols; c++)
			tot += ar[r][c];

	return tot;
}
