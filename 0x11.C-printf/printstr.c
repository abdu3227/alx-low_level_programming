#include "main.h"

/**
 * printstr - print str
 * @pa:valist
 * @format: format str
 * Return: num of str
 */
int printstr(char *format, va_list pa)
{
	char *s = va_arg(pa, char *);
	int con;
	(void)format;

	if (s == NULL)
		s = "(null)";
	con = _puts(s);
	return (con);
}
