#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separetor: separetor str
 * @n: num of args
 */
void print_numbers(const char *separetor, const unsigned int n, ...)
{
	register unsigned int i;
	va_list nl;

	va_start(nl, n);
	for (i = 0; i < n; i++)
		printf("%i%s", va_arg(nl, int), (separetor && i != n - 1) ? separetor : "");
	va_end(nl);
	printf("\n");
}
