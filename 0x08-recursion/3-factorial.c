#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: the number
 * Return: factorial
 */
int factorial(int n)
{
	int f;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
		return (1);
	f = n * factorial(n - 1);
	return (f);
}
