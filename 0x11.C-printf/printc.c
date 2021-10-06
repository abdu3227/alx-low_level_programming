#include "main.h"

/**
 * printc - prints char
 * @pa: va list
 * @format: format
 * Return: num of char
 */
int printc(char *format, va_list pa)
{
	(void)format;
	_putchar(va_arg(pa, int));
	return (1);
}
