#include "main.h"

/**
 * print_last_digit - prints last digit of number passed.
 * @n: number passed to function
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ldigit;

	if (n < 0)
	{
		n = n * -1;
	}
	ldigit = n % 10;
	_putchar(ldigit + '0');
	return (ldigit);
}
