#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: one number
 * @m: another number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c, i;
	unsigned long int d, ch;

	c = 0;
	ch = 1;
	d = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (ch == (d & ch))
			c++;
		ch <<= 1;
	}
	return (c);
}
