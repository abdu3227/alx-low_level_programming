#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number of arg passed to it
 * @argc: num of args
 * @argv: array args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	int add = 0;

	if (argc > 1)
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
				if (argv[i][j] < '0' || argv[i][j] > '9')
					return (printf("Error\n"), 1);
			add += atoi(argv[i]);
		}
	printf("%i\n", add);
	return (0);
}
