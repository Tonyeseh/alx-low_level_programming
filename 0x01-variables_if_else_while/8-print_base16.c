#include <stdio.h>

/**
 * main - program starts here
 *
 * prints all numbers of base 16 using putchar
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	ch = '0';
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;

		if (ch == '9')
		{
			ch = 'a';
		}
	}
	putchar('\n');
	return (0);
}
