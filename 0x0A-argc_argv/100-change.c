#include <stdio.h>
#include <stdlib.h>

/**
 * retcents - returns cents
 * @n: num
 * Return: cents
 */
int retcents(int n)
{
	int coin = 0;

	while (n)
	{
		if (n >= 25)
			n -= 25;
		else if (n >= 10)
			n -= 10;
		else if (n >= 5)
			n -= 5;
		else if (n >= 2)
			n -= 2;
		else if (n >= 1)
			n -= 1;
		coin++;
	}
	return (coin);
}
/**
 * main - print the number of arg passed to it
 * @argc: num of args
 * @argv: array args
 * Return: 0
 */
int main(int argc, char **argv)
{
	int c = 0;

	if (argc != 2)
	{
		return (printf("Error\n"), 1);
	}
	c = atoi(argv[1]);
	if (c < 0)
		return (printf("0\n"), 0);
	printf("%i\n", retcents(c));
	return (0);
}
