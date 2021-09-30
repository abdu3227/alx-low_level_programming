#include "function_pointers.h"

/**
 * array_iterator - execute function given as a parameter
 * on each element of an array.
 * @array: array
 * @size: the size of an array
 * @action: action to be taken
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
		while (size--)
			action(*(array++));
}
