#include "main.h"

/**
 * largest_number - the largest number of 3
 * @a: first num
 * @b: second num
 * @c: thrid num
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int lg;

	if (a > b)
	{
		if (a > c)
		{
			lg = a;
		}
		else
		{
			lg = c;
		}
	}
	else if (b > c)
	{
		lg = b;
	}
	else
	{
		lg = c;
	}

	return (lg);
}
