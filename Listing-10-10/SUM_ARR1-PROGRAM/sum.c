// sum.c

#include <stdio.h>
#include "sum.h"

int sum(int *ar, int n) { // how big is the array?

	int i;
	int total = 0;

	for (i = 0; i < n; i++)
		total += ar[i];
	printf("The size of ar is %zd bytes.\n", sizeof ar);

	return total;
}
