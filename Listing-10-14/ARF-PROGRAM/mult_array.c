// mult_array -- multiplies each array member
// 		 by the same multiplier

#include <stdio.h>
#include "headerfile.h"

void mult_array(double ar[], int n, double mult) {

	int i;

	for (i = 0; i < n; i++)
		ar[i] *= mult;
}
