#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: integer
 * @y: power
 * Return: pow
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y >= 0)
	{
		if (y == 0)
			return (1);
		pow = x * _pow_recursion(x, y - 1);
		return (pow);
	}
	else
		return (-1);
}
