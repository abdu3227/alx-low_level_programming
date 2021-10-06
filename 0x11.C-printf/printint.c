#include "main.h"

/**
 * _abs - calculate absolute value
 * @num: input
 * Return: value
 */
int _abs(int num)
{
	if (num < 0)
		return (-1 * num);
	else
		return (num);
}
/**
 * contdigit - count digit
 * @num: int
 * Return: counts digt
 */
int contdigit(int num)
{
	int count = 0;
	int num2 = num;

	if (num <= 0)
		count += 1;
	while (_abs(num2) != 0)
	{
		num2 = num2 / 10;
		count++;
	}
	return (count);
}
/**
 * integer - print integer
 * @num: integer
 * Return: digit count
 */
int integer(int num)
{
	unsigned int unt;
	int count;

	count = contdigit(num);
	if (num < 0)
	{
		_putchar('-');
		unt = -num;
	}
	else
		unt = num;
	if (unt >= 10)
		integer(unt / 10);
	_putchar(unt % 10 + '0');
	return (count);
}
/**
 * printint - prints number
 * @format: format
 * @pa: va list
 * Return: num of character
 */
int printint(char *format, va_list pa)
{
	int num = va_arg(pa, int);
	int numro;
	(void)format;

	numro = integer(num);
	return (numro);
}
