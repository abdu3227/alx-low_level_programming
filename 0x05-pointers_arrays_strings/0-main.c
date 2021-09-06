#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Return: 0
 */
int main(void)
{
	int i;

	i = 402;
	printf("n=%d\n", i);
	reset_to_98(&i);
	printf("n=%d\n", i);
	return (0);
}
