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

	ldigit = n % 10;
	if (ldigit < 0)
	{
		ldigit = ldigit * -1;
	}
	_putchar(ldigit + '0');
	return (ldigit);
}
