// pnt_add.c -- pointer addition

#include <stdio.h>

#define SIZE 4

int main(void) {

	short dates[SIZE];
	short * pti; // pointer declaration
	short index;
	double bills[SIZE];
	double * ptf; // pointer declaration

	pti = dates; // assign address of array to pointer
	ptf = bills; // assign address of array to pointer
	
	// my system aligns perfectly with %23s %15s
	// your system may defer. see textbook for format
	printf("%23s %15s\n", "short", "double");
	
	// note: the program should display a new set of 
	// addresses from memory each time the program is 
	// compiled and executed, see command-line output
	for (index = 0; index < SIZE; index++)
		printf("pointers + %d: %10p %10p\n", 
			index, pti + index, ptf + index);

	return 0;
}
