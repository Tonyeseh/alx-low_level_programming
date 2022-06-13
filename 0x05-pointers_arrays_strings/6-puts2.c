#include "main.h"

/**
 * puts2 - prints string
 *
 * @str: string to be printed
 *
 * Description: prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
