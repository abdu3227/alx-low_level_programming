#include "main.h"

/**
 * _abs - print last digit
 * @n: integer
 * Return: 0
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
/**
 * print_last_digit - print last digit
 * @n: integer
 * Return: 0
 */

int print_last_digit(int n)
{
	int lastD;

	lastD = _abs((n % 10));
	_putchar(lastD + 48);
	return (lastD);
}
