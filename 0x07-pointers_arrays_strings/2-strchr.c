#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in the string
 * @s: the string
 * @c: character to be located
 * Return: location
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s)
	{
		if (*(s + i) == c)
		{
			return ((s + i));
		}
		i++;
	}
	if (c == '\0')
	{
		return ((s + i));
	}
	return (NULL);
}
