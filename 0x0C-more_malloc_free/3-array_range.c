#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of integer
 * @min: min  int
 * @max: max int
 * Return: array of int
 */
int *array_range(int min, int max)
{
	int len, i;
	int *p;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(sizeof(int) * len);
	if (!p)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = min++;
	return (p);
}
