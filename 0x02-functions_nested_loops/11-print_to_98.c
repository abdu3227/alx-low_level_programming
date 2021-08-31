#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural num till 98
 * @n: integer to be tested
 * Return: list of nums
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%i, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
	}
	printf("98\n");
}


