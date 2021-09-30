#include <stdio.h>
#include <stdlib.h>
/**
 * main - print opcodes of its own main function
 * @argc: agrc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	register int i, num;
	char *ptr = (char *)main;

	if (argc != 2)
		printf("Error\n"), exit(1);
	num = atoi(argv[1]);
	if (num < 0)
		printf("Error\n"), exit(2);
	for (i = 0; i < num; i++)
		printf("%02hhx ", ptr[i]);
	printf("%02hhx\n", ptr[i]);
	return (0);
}
