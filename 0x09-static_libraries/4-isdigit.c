#include "main.h"

/**
 * _isdigit - checks if c is digit or not
 * @c: integer to be check
 * Return: 1 if digit or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
