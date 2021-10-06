#include "main.h"

/**
 * _puts - print string
 * @s: input s
 * Return: count of s
 */
int _puts(char *s)
{
	int c = 0;

	while (*s)
	{
		_putchar(*s);
		s++;
		c++;
	}
	return (c);
}
