#include "main.h"

/**
 * _memset - fills the first n byte of the memory area
 * pointed by s.
 * @s: memory filled
 * @b: byte
 * @n: num of byte fills memory
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
