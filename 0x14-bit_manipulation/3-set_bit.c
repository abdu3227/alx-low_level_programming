#include "main.h"

/**
 * set_bit - sets the value of bit to 1 at given index
 * @n: number
 * @index: index
 *
 * Return: 1 if setted or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit = 1 << index;
	*n = *n | bit;
	return (1);
}
