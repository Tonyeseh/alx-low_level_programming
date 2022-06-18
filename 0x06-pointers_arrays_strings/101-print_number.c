#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer with _putchar function
 *
 * @n: number to be printed
 *
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int place, d;

	d = 1;
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	place = n;
	while ((place) >= 10)
	{
		place = place / 10;
		d *= 10;
	}

	while (d > 0)
	{
		_putchar(((n / d) % 10) + '0');
		d /= 10;
	}
}
