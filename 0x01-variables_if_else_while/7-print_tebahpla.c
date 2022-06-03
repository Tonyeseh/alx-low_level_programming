#include <stdio.h>

/**
 * main - program starts here
 *
 * prints the lowercase alphabet in reverse, followed by a newline
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');

	return (0);
}
