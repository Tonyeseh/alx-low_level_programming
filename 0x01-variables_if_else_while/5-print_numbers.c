#include <stdio.h>

/**
 * main - program starts here
 *
 * print the numbers 0-9 and a new line
 *
 * Return: 0
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%i", i);
		i++;
	}
	printf("\n");

	return (0);
}
