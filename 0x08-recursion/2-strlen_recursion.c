#include "main.h"

/**
 * _strlen_recursion - returns the length of string
 * @s: the string
 * Return: len
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (!*s)
	{
		return (0);
	}
	len = (1 + _strlen_recursion(++s));
	return (len);
}
