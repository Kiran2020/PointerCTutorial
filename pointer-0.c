#include <stdio.h>

/**
* How to User Pointer?
* 1. Define pointer variable
* 2. Assign the address of the variable to a pointer
* 3. Access the value or the address in the pointer variable.
*
* https://www.tutorialspoint.com/cprogramming/c_pointers.htm
*/

int main(void)
{
	// actual variable declaration and initialization
	int var = 20; 

	// pointer variable declaration 
	int* ip;

	// store address of variable in pointer variable
	ip = &var;

	// print address of variable
	printf("Address of var variable: %p\n", &var);

	// address stored in pointer variable
	printf("Address stored in ip variable: %p\n", ip);

	// access the value using the pointer
	printf("Value of *ip variable: %d\n", *ip); 
}