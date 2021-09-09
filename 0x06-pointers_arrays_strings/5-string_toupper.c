#include "main.h"

/**
 * string_toupper - changing the string to uppercase
 * @str: the string
 * Return: uppercase
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str)
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
		}
		str++;
	}
	return (ptr);
}
