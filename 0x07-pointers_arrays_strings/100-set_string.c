#include "main.h"
#include <stdio.h>

/**
 * set_string - set the value of a pointer to a char
 * @s: string
 * @to: char
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
