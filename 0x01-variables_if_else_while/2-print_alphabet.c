#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always success
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
