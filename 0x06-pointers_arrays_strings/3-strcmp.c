#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: s1
 * @s2: s2
 * Return: 1 or 0
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			x = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (x);
}
