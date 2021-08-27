#include <stdio.h>

/**
 * main - prints alphabets
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
	a = 'A';

	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
