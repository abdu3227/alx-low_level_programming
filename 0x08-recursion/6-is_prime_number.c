#include "main.h"

/**
 * isPrime - check prime num
 * @n: num
 * @i: num
 * Return: 1 or 0
 */
int isPrime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (isPrime(n, i - 1));
}


/**
 * is_prime_number - check whether the num is prime number
 * @num: the number
 * Return: 1 or 0
 */
int is_prime_number(int num)
{
	if (num < 3)
		return (0);
	return (isPrime(num, num - 1));
}
