#include "main.h"

/**
 * returns the natural square root of a number.
 *
 * @n: number
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - returns 1 if any natural number is equal to n
 * returns -1 if it does not have a natural number
 *
 * @n: number
 * @root: root of n
 *
 * Return: 1 or -1
 */

int square(int n, int root)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((root * root) == n)
	{
		return (root);
	}
	else if ((root * root) < n)
	{
		return (square(n, root + 1));
	}
	else
	{
		return (-1);
	}
}
