#include "main.h"

/**
 * _strlen - length of string
 * @str: strings
 * Return: length
 */
int _strlen(char *str)
{
	int length;

	length = 0;
	while (*str)
	{
		str++;
		length++;
	}
	return (length);
}
/**
 * *_strncat - append the src to dest
 * @src: source
 * @dest: destination
 * @n: integer
 * Return: dest
 */
void *_strncat(char *dest, char *src, int n)
{
	char *cat = dest + _strlen(dest);
	int len;

	if (n > _strlen(src) + _strlen(dest))
		len = _strlen(src) + _strlen(dest);
	else
		len = _strlen(dest) + n;
	while (*src && n > 0)
	{
		*cat += *src;
		src++;
		cat++;
		n--;
	}
	if (n > 0)
		*cat += '\0';
	cat -= (len);
	*dest = *cat;
	return (cat);
}
