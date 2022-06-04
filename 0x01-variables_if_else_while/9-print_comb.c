#include <stdio.h>

/**
 * main - program starts here
 *
 * prints all possible combinations of single-digit numbers using only putchar
 *
 * Return: 0
 */

int main(void)
{
	int ch;

	ch = '0';
	while (ch <= '9')
	{
		putchar(ch);

		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
