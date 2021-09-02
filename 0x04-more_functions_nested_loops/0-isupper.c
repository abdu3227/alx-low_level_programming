#include "main.h"

/**
 * _isupper - checks whether it is uppercase or not
 * @c: integer to be checked
 * Return: uppercase or not
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
