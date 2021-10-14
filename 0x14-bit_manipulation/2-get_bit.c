#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: number
 * @index: index at which bit checks
 *
 * Return: value of bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d, ch;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = 1 << index;
	ch = n & d;
	if (ch == d)
		return (1);
	return (0);
}
