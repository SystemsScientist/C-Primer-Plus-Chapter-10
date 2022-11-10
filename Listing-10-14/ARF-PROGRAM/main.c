// main.c
// compile main.c with show_array.c and mult_array.c
// by using the following command-line scripts:
// $ gcc main.c show_array.c mult_array.c - o main
// $ ./main

#include <stdio.h>
#include "headerfile.h"

int main(void) {

	double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};

	printf("The original dip array: \n");
	show_array(dip, SIZE);
	mult_array(dip, SIZE, 2.5);
	printf("The dip array after calling mult_array(): \n");
	show_array(dip, SIZE);

	return 0;
}
