#include "main.h"

/**
 * _strlen - returns lengs of string
 * @s: the string
 * Return: length
 */
int _strlen(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen(++s));
}
/**
 * ispal - check if palindrem
 * @str: string
 * @s: start
 * @e: end
 * Return: 1 or 0
 */
int ispal(char str[], int s, int e)
{
	if (s == e)
		return (1);
	if (str[s] != str[e])
		return (0);
	if (s < e + 1)
		return (ispal(str, s + 1, e - 1));
	return (1);
}
/**
 * is_palindrome - re
 * @s: str
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len = _strlen(s) - 1;

	return (ispal(s, 0, len));
}

































