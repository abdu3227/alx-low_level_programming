#include <stdio.h>
#include "main.h"

/**
 * isLower - check if lowercase
 * @c: char
 * Return: 1 or 0
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * isDelimiter - determine whether ASCII is delimiter
 * @c: char
 * Return: 1 or 0
 */
int isDelimiter(char c)
{
	int i;
	char delim[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delim[i])
			return (1);
	return (0);
}

/**
 * cap_string - to capital letters
 * @s: string
 * Return: capital letters
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int delim = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			delim = 1;
		else if (isLower(*s) && delim)
		{
			*s -= 32;
			delim = 0;
		}
		else
			delim = 0;
		s++;
	}
	return (ptr);
}
