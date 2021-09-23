#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with constant of byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the area
 * Return: pointer to the s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *pt = s;

	while (n--)
		*s++ = b;
	return (pt);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: num of element
 * @size: size
 * Return: pointer to mem area s
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	_memset(ptr, 0, size * nmemb);
	return (ptr);
}
