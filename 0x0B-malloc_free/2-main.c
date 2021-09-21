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
	char *str;

	str = str_concat("Betty ", "Holberton");
	if (str == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", str);
	free(str);
	return (0);
}
