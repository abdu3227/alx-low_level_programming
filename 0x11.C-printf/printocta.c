#include "main.h"

/**
 * printocta - prints hexadecimal
 * @format: format
 * @pa: list
 * Return: num
 */
int printocta(char *format, va_list pa)
{
	unsigned int num = va_arg(pa, unsigned int);
	unsigned int cp;
	char *octa;
	int i, i2 = 0, con = 0;
	(void)format;

	if (num == 0)
		return (_putchar('\0'));
	for (cp = num; cp != 0; i2++)
	{
		cp = cp / 8;
	}
	octa = malloc(i2);
	if (!octa)
		return (-1);
	for (i = i2 - 1; i >= 0; i--)
	{
		octa[i] = num % 8 + '\0';
		num = num / 8;
	}
	for (i = 0; i < i2 && octa[i] == '\0'; i++)
		;
	for (; i < i2; i++)
	{
		_putchar(octa[i]);
		con++;
	}
	free(octa);
	return (con);
}
