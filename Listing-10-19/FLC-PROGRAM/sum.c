// sum.c

#include <stdio.h>
#include "headerfile.h"

int sum(int ar[], int n) {

	int i;
	int total = 0;

	for (i = 0; i < n; i++)
		total += ar[i];

	return total;
}
