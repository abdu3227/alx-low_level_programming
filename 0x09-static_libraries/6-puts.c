#include "main.h"
/**
 * _puts - prints strings
 * @str: string
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
