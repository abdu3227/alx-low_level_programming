#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *ptr;

	ptr = leet(s);
	printf("%s", ptr);
	printf("%s", s);
	return (0);
}
