#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of square matrix
 * @a: matrix
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, s;
	unsigned int diagsum1, diagsum2;

	s = 0;
	diagsum1 = 0;
	diagsum2 = 0;
	s = (size * size) - 1;
	for (i = 0; i <= s; i = i + (size + 1))
	{
		diagsum1 = diagsum1 + a[i];
	}
	for (i = (size - 1); i < s; i = i + (size - 1))
	{
		diagsum2 = diagsum2 + a[i];
	}
	printf("%d, %d\n", diagsum1, diagsum2);
}
