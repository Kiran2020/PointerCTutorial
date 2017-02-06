#include <stdio.h>

/**
* Remove bug
*/

void swap(int* a, int* b);

int main(void)
{
	int a = 1;
	int b = 2;

	// print
	printf("Before swapping\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);


	// swap 
	swap(&a, &b);

	// display
	printf("After swappint..\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}