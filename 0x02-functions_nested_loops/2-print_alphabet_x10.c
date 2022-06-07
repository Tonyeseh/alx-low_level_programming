#include "main.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabets 10 times.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		char c;

		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}

}
