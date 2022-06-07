#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: prints the 9 times table
 */
void times_table(void)
{
	int i, mul;

	i = 0;
	while (i < 10)
	{
		int j;

		j = 0;
		while (j < 10)
		{
			mul = i * j;
			if (j == 0)
			{
				_putchar(mul + '0');
				j++;
				continue;
			}
			_putchar(',');
			_putchar(' ');
			if ((mul / 10) == 0)
			{
				_putchar(' ');
				_putchar((mul % 10) + '0');
				j++;
				continue;
			}
			_putchar((mul / 10) + '0');
			_putchar((mul % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
