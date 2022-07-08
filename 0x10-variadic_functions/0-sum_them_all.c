#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its parameter
 *
 * @n: number of parameters to be summed
 *
 * Return: 0 when n==0 or sum of paramete passed
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	va_start(args, n);
	sum = 0;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
	}

	va_end(args);

	return (sum);
}
