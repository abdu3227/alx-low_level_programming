#include <stdlib.h>
#include "main.h"

/**
 * _memcpy - copies mem area
 * @dest: destination area
 * @src: source
 * @n: num of byte
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
		*dest++ = *src++;
	return (p);
}
/**
 * _realloc - reallocate memory
 * @ptr: pointer
 * @old_size: old size of memory
 * @new_size: new size
 * Return: reallocated ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *res = NULL;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		free(ptr);
		res = malloc(new_size);
		return (res);
	}
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	res = malloc(new_size);
	_memcpy(res, ptr, old_size);
	free(ptr);
	return (res);
}
