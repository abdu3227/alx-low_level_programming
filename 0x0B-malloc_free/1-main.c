#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	char *s;

	s = _strdup("Holberton");
	if (s == NULL)
	{
		return (printf("failed to allocate memory\n"), 1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
