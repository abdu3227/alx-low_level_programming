#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	char s1[] = "Expect the best. Prepare for the worst. capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(s1);
	printf("%s", ptr);
	printf("%s", s1);
	return (0);
}
