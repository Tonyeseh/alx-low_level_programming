#include "main.h"
#include <stdio.h>

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
	len--;
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
