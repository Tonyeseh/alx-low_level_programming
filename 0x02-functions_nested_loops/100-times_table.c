#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the times table of n when n >= 0 and n <= 15
 *
 * @n: parameter passed
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, mul;

		for (i = 0; i <= n; i++)
		{
			int j;

			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (j == 0)
				{
					_putchar('0');
					continue;
				}
				_putchar(',');
				_putchar(' ');
				if ((mul / 100) > 0)
				{
					_putchar((mul / 100) + '0');
					_putchar(((mul / 10) % 10) + '0');
					_putchar((mul % 10) + '0');
				}
				else if ((mul / 10) > 0)
				{
					_putchar(' ');
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((mul % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
