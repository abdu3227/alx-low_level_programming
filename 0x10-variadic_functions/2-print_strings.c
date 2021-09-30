#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separetor: separetor
 * @n: num of args
 */
void print_strings(const char *separetor, const unsigned int n, ...)
{
	register unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (!str)
			str = "(nil)";
		if (!separetor)
			printf("%s", str);
		else if (separetor && !i)
			printf("%s", str);
		else
			printf("%s%s", separetor, str);
	}
	printf("\n");
	va_end(args);
}
