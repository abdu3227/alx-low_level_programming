#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	char s1[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(s1);
	printf("%s", ptr);
	printf("%s", s1);
	return (0);
}
