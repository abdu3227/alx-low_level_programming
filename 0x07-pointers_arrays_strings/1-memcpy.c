#include "main.h"

/**
 * _memcpy - copies n byte memory src to memory dest
 * @dest: destination mem area
 * @src: source mem area
 * @n: byte
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
