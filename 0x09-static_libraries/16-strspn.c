#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s : string
 * @accept: pref
 *
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c, c1, m = 0;

	c = 0;
	while (s[c] != '\0')
	{
		if (s[c] != 32)
		{
			c1 = 0;
			while (accept[c1] != '\0')
			{
				if (accept[c1] == s[c])
				{
					m = m + 1;
				}
				c1++;
			}
		}
		else
			return (m);
		c++;
	}
	return (m);
}
