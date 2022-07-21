#include "main.h"

/**
 * num_len - returns the length of the number passed
 *
 * @b: pointer to the number
 *
 * Description: checks if b has only 0 and 1 and finds the length of b
 *
 * Return: length of number or -1 if b contains any char except 0 or 1
 */

int num_len(const char *b)
{
	int len;

	len = 0;
	while (b[len] != '\0')
	{
		if (!(b[len] == '0' || b[len] == '1'))
			return (-1);
		len++;
	}
	return (len - 1);
}

/**
 * power - exponent of 2 to pow
 *
 * @pow: exponent number
 *
 * Return: 2 exponent pow
 */

int power(int pow)
{
	if (pow == 0)
		return (1);

	return (2 * power(pow - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to the number passed
 *
 * Return: converted number or 0 if there is one or more chars in the string
 * that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int pow, i;
	unsigned int sum;

	if (b == NULL)
		return (0);

	pow = num_len(b);
	if (pow == -1)
		return (0);

	sum = i = 0;
	while (pow >= 0 && b[i] != '\0')
	{
		sum += (b[i] - 48) * power(pow);
		i++;
		pow--;
	}
	return (sum);
}
