#include "main.h"

/**
 * clear_bit - sets the value of bit at given index to 0
 * @n: number
 * @index: index
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit = ~(1 << index);
	*n = *n & bit;
	return (1);
}
