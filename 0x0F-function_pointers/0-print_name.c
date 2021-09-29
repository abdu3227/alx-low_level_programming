#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: name
 * @func: function call
 */
void print_name(char *name, void (*func)(char *))
{
	if (!func)
		return;
	(*func)(name);
}
