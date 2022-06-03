#include <stdio.h>

/**
 * main - programs starts here
 *
 * this program uses  putchar to print all the english alphabet except q and e
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;

	}

	putchar('\n');

	return (0);
}
