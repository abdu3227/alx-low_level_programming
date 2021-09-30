#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first op
 * @b: second op
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum = 0;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - substract two integer
 * @a: first int
 * @b: second int
 * Return: the difference
 */
int op_sub(int a, int b)
{
	int diff = 0;

	diff = a - b;
	return (diff);
}

/**
 * op_mul - multiple two integer
 * @a: first int
 * @b: second int
 * Return: multiple of two
 */

int op_mul(int a, int b)
{
	int mul = 0;

	mul = a * b;
	return (mul);
}

/**
 * op_div - divide two integer
 * @a: first int
 * @b: second int
 * Return: the quotient
 */
int op_div(int a, int b)
{
	int quotient = 0;

	if (!b && b == 0)
	{
		printf("Error division by zero\n");
		exit(100);
	}
	quotient = a / b;
	return (quotient);
}
/**
 * op_mod - modulus two integer
 * @a: first num
 * @b: second num
 * Return: moduluss
 */
int op_mod(int a, int b)
{
	int mod = 0;

	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	mod = a % b;
	return (mod);
}
