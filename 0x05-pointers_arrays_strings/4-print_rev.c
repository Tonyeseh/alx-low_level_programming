#include "main.h"

/**
 * print_rev - prints a string, in reverse followed by a new line
 *
 * @s: string passed
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i, len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (len >= i)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
