#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * main - tests function 
 * Return: 0
 */
int main(void)
{
	int a, b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
