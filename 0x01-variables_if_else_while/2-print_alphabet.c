#include <stdio.h>

/**
 * main - programs starts here
 *
 * this program uses  putchar to print all the english alphabet
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch < 123)
	{
		putchar(ch);
		ch++;

	}

	putchar('\n');

	return (0);
}
