// sump.c

#include <stdio.h>
#include "sump.h"

int sump(int * start, int * end) {

	int total = 0;

	while (start < end) {

		total += *start; // add value to total
		start++;	 // advance pointer to next element
	}

	return total;
}
