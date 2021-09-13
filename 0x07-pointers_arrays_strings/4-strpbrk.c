#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - searches for string for any set of byte
 * @s: string
 * @accept: byte
 * Return: byte
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	int c, c1;

	p = 0;
	for (c = 0; s[c] != '\0'; c++)
	{
		for (c1 = 0; accept[c1] != '\0'; c1++)
		{
			if (accept[c1] == s[c])
			{
				p = &s[c];
				return (p);
			}
		}
	}
	return (p);
}
