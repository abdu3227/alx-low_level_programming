#include "main.h"

/**
 * isSqrt - check whether sqrt
 * @n: inte
 * @i: inte
 * Return: sqrt
 */
int isSqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (isSqrt(n, i + 1));
}

/**
 * _sqrt_recursion - natural square root of a num
 * @n: natural num
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	i = isSqrt(n, 1);
	return (i);
}

