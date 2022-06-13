#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be printed
 *
 * Description: prints second half of a string and newline
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int len, i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	i = (len - 1) / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
