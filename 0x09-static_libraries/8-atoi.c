#include "main.h"

/**
 * _atoi - convert string to int
 * @str: string
 * Return: parsed int
 */
int _atoi(char *str)
{
	unsigned int num = 0, sign = 1, f = 0;

	while (*str)
	{
		if (f && !(*str >= '0' && *str <= '9'))
			break;
		if (*str == '-')
			sign *= -1;
		if ((*str >= '0' && *str <= '9'))
		{
			f = 1;
			num = num * 10 + (int)*str - 48;
		}
		str++;
	}
	return (sign * num);
}
