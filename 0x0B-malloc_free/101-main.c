#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_tab - print array of string
 * @tab: the array
 * Return: notheing
 */
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main - check the codefor alx
 *
 * Return: 0
 */
int main(void)
{
	char **tab;

	tab = strtow("     Holberton School       #cisfun       ");
	if (tab == NULL)
	{
		printf("failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
