#include "main.h"

/**
 * swap_int - swapping two value
 * @a: int value
 * @b: int value
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
	
