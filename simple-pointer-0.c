#include <stdio.h>

/**
* How to use pointer?
* 1. Define pointer variable
* 2. Assign add of any variable in that pointer variable
* 3. Access that variable using pointer.
*/

int main(void)
{
	int num = 20;

	// pointer variable declaration
	int* ip;

	// store address of num in ip variable
	ip = &num;

	// print
	printf("Address of num variable: %p\n", &num);

	// what ip store
	printf("Address stored in ip variable: %p\n", ip);

	// access the value using pointer 
	printf("Value at *ip variable: %d\n", *ip);
}