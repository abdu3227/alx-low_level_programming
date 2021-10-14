#include "main.h"

/**
 * _base - calculates base ^ power
 * @bs: base
 * @pw: power
 *
 * Return: value of base-power
 */
unsigned long int _base(unsigned int bs, unsigned int pw)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pw; i++)
		num *= bs;
	return (num);
}

/**
 * print_binary - prints num in binary
 * @num: number
 *
 */

void print_binary(unsigned long int num)
{
	unsigned long int d, ch;
	char f;

	f = 0;
	d = _base(2, sizeof(unsigned long int) * 8 - 1);
	while (d != 0)
	{
		ch = num & d;
		if (ch == d)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
