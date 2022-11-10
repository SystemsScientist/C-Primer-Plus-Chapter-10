// show_array.c -- displays array contents

#include <stdio.h>
#include "headerfile.h"

void show_array(const double ar[], int n) {

	int i;

	for (i = 0; i < n; i++)
		printf("%8.3f ", ar[i]);
	putchar('\n');
}
