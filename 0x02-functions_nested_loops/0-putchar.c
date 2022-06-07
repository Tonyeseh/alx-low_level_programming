#include "main.h"
/**
 * main - programs starts her
 *
 * it has a loop to print the string "_putchar"
 *
 * Return: 0
 *
 */
int main(void)
{
	char name[] = "_putchar";
	int i = 0;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
