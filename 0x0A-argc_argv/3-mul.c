#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the multiplication of tho number
 * @argc: num of args
 * @argv: array args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	int mul = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%i\n", mul);
		return (0);
	}
	printf("Error\n");
	return (0);
}
