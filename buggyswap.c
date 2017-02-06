#include <stdio.h>

void swap(int a, int b);

int main(void)
{
	// variable declaration and initialization
	int x = 1;
	int y = 2;

	// print before swapping
	printf("Before Swapping..\n");
	printf("x = %d\n", x);
	printf("y = %d\n", y);

	// swap x & y
	swap(x, y);
	printf("Swapped ..\n");

	// after swapped
	printf("After Swapped..\n");
	printf("x = %d\n", x);
	printf("y = %d\n", y);
}

void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}