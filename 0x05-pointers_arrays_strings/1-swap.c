#include "main.h"

/**
 * function that swaps the values of two integers.
 * a tmp variable that used to swap tow integers
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}	
