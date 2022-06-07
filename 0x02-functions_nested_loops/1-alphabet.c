#include "main.h"

/**
 * print_alphabet - prints all the lowercase of te alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
