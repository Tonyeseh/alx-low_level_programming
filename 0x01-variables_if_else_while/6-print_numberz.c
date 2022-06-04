#include <stdio.h>

/**
 * main - program starts here
 *
 * print the numbers 0-9 and a new line using putchar.
 *
 * Return: 0
 */

int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	printf("\n");

	return (0);
}
