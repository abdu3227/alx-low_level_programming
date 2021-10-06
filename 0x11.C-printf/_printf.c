#include "main.h"

/**
 * _printf - prints format to stdout
 * @format: count the format to print
 * Return: num of character
 */
int _printf(char *format, ...)
{
	int wrt = 0, (*struct_type)(char *, va_list);
	char q[3];
	va_list pa;

	if (format == NULL)
		return (-1);
	q[2] = '\0';
	va_start(pa, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			struct_type = driver(format);
			if (struct_type)
			{
				q[0] = '%';
				q[1] = format[1];
				wrt += struct_type(q, pa);
			}
			else if (format[1] != '\0')
			{
				wrt += _putchar('%');
				wrt += _putchar(format[1]);
			}
			else
			{
				wrt += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			wrt += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (wrt);
}
