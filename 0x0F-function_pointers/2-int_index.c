#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: int array
 * @size: size of array
 * @cmp: comparision func
 * Return: index of integer found in cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && size && array)
		for (i = 0; i <= size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
