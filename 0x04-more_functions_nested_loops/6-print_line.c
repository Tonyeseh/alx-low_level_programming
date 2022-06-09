#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 *
 * @n: int type parameter
 *
 * Description: prints n number of underscores (_) in the terminal
 *
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		i = 1;
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
