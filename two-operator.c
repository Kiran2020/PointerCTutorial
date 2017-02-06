#include <stdio.h>

/**
*	1. Variable declare
* 2. Store any value in that variable
* 3. Usint & and *, display its address and content.
*/

int main(void)
{
	// variable declare
	int i = 3;

	printf("Address of i = %p\n", &i);
	printf("content at i = %d\n", i);
	printf("content at i = %d\n", *(&i));
}