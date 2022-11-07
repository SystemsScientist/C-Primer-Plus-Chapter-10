// test_pointers.c -- test and see pointer output from ptr_ops.c program

#include <stdio.h>

int main(void) {

	int urn[5] = {100, 200, 300, 400, 500};
	int * ptr1, * ptr2, * ptr3, * ptr4, * ptr5;

	printf("\nDisplays declared * ptr1: %d \n", *ptr1);

	ptr1 = &urn[0];
	printf("\nDisplays values for ptr1 after initialization: \n");
	printf("pointer value,         ptr1 = %p \n", ptr1);
	printf("dereferenced pointer, *ptr1 = %d \n", *ptr1);
	printf("pointer address,      &ptr1 = %p \n", &ptr1);

	ptr2 = &urn[1];
	printf("\nDisplays values for ptr2: \n");
	printf("pointer value,         ptr2 = %p \n", ptr2);
	printf("dereferenced pointer, *ptr2 = %d \n", *ptr2);
	printf("pointer address,      &ptr2 = %p \n", &ptr2);

	ptr3 = &urn[2];
	printf("\nDisplays values for ptr3: \n");
	printf("pointer value,         ptr3 = %p \n", ptr3);
	printf("dereferenced pointer, *ptr3 = %d \n", *ptr3);
	printf("pointer address,      &ptr3 = %p \n", &ptr3);

	ptr4 = &urn[3];
	printf("\nDisplays values for ptr4: \n");
	printf("pointer value,         ptr4 = %p \n", ptr4);
	printf("dereferenced pointer, *ptr4 = %d \n", *ptr4);
	printf("pointer address,      &ptr4 = %p \n", &ptr4);

	ptr5 = &urn[4];
	printf("\nDisplays values for ptr5: \n");
	printf("pointer value,         ptr5 = %p \n", ptr5);
	printf("dereferenced pointer, *ptr5 = %d \n", *ptr5);
	printf("pointer address,      &ptr5 = %p \n", &ptr5);	
	
	printf("\n");
	return 0;
}	
