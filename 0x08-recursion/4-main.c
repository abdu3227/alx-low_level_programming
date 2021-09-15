#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	int p;

	p = _pow_recursion(1, 10);
	printf("%d\n", p);
	p = _pow_recursion(1024, 0);
	printf("%d\n", p);
	p = _pow_recursion(2, 16);
	printf("%d\n", p);
	p = _pow_recursion(5, 2);
	printf("%d\n", p);
	p = _pow_recursion(5, -2);
	printf("%d\n", p);
	p = _pow_recursion(-5, 3);
	printf("%d\n", p);
	return (0);
}
