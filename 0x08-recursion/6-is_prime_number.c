#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: number to be checked
 *
 * Return: 1 if number is a prime otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (prime(n, (n / 2)));
}

/**
 * prime - finds if a number is divisor by any integer from 1 - number / 2
 *
 * @n: number
 * @div: starting from 1
 *
 * Return: 0 or 1
 */

int prime(int n, int div)
{
	if (div == 1)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	else
	{
		return (prime(n, div - 1));
	}
}
