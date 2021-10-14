#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%u\n", n);
	n = get_bit(98, 1);
	printf("%u\n", n);
	n = get_bit(1024, 0);
	printf("%u\n", n);
	return (0);
}
