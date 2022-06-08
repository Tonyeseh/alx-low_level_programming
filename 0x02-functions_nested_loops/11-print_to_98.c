#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line.
 *
 * @n: parameter passed
 *
 * Description: numbers must be separated by a comma, followed by a space
 * numbers should be printed in order
 * first printed number should be the on passed to your function
 * last printed number should be 98
 *
 * Return: list of numbers.
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		if (n >= 100)
		{
			_putchar((n / 100) + '0');
			_putchar(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar(',');
		_putchar(' ');
		n--;
		if (n == 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + 48);
			n = 99;
			break;
		}
	}
	while (n <= 98)
	{
		if (n < 0)
		{
			_putchar('-');
			p = n * -1;
			if ((p / 10) == 0)
			{
				_putchar((p % 10) + '0');
			}
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		else
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar((n % 10) + 48);
			}
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			break;
		}
		n++;
	}
}

