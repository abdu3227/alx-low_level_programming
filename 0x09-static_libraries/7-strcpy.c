#include "main.h"

/**
 * _strcpy - coping the string from src to dest
 * @dest: destin
 * @src: source
 * Return: de
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (ptr);
}
