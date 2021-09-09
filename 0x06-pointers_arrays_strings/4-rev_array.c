#include "main.h"

/**
 * swap_int - swapping
 * @a: integer1
 * @b: integer2
 */
void swap_int(int *a, int *b)
{
	*a = *b + *a;
	*b = *a - *b;
	*a = *a - *b;
}

/**
 * reverse_array - reversing the array content
 * @a: array
 * @n: integer
 */
void reverse_array(int *a, int n)
{
	int c = 0;

	while (c < n / 2)
	{
		swap_int(a + c, a + (n - c - 1));
		c++;
	}
}
