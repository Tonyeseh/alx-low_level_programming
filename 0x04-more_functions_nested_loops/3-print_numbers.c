#include "main.h"

/**
 * print_numbers - print all the numbers 0 - 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		_puchar(i);
		i++;
	}
	_putchar('\n');
}
