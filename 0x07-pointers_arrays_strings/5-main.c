#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
