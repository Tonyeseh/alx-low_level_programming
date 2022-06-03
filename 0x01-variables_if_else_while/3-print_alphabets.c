#include <stdio.h>

/**
 * main - progarm starts here
 *
 * prints all alphabet using putchar both uper and lowercase
 *
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	while (ch < 123)
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';

	while (ch < 91)
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
