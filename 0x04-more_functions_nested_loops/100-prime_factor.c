#include <stdio.h>

/**
 * main - prints the largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long largest_p = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			largest_p = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", largest_p);
	return (0);
}
