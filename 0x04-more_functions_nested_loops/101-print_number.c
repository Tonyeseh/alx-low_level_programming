#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: the integer to be printed
 *
 * Description - uses _putchar to print integer
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int d, num;

	d = 1;

	/* check if number is negative, prints - sign and makes it positive */
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	num = n;

	while (num >= 10)
	{
		d *= 10;
		num /= 10;
	}

	while (d >= 1)
	{
		_putchar(((n / d) % 10) + '0');
		d /= 10;
	}
}
