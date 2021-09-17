#include <stdio.h>

/**
 * main - print the number of arg passed to it
 * @argc: num of args
 * @argv: array args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void)argv;
	while (--argc)
	{
		i++;
	}
	printf("%i\n", i);
	return (0);
}
