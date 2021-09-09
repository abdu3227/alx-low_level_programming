#include <stdio.h>
#include "main.h"

/**
 * print_array - printing array content
 * @arr: array
 * @n: inter
 * Return: nothing
 */
void print_array(int *arr, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	int ar[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	print_array(ar, sizeof(ar) / sizeof(int));
	reverse_array(ar, sizeof(ar) / sizeof(int));
	print_array(ar, sizeof(ar) / sizeof(int));
	return (0);
}
