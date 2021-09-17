#include "main.h"

/**
 * _strlen - prints the length of string
 * @str: the strings
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
