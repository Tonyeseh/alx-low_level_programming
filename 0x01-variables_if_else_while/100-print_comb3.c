#include <stdio.h>

/**
 * main - programs starts here
 *
 * prints all possible combinations o two digits followed by a , and space
 * 01 and 10 are considered the same combination of the two digit 0 and 1
 * uses onlu five putchar and no char variable.
 *
 * Return: (0)
 */
int main(void)
{
	int d1, d2;

	for (d1 = '0'; d1 <= '9'; d1++)
	{
		for (d2 = d1 + 1; d2 <= '9'; d2++)
		{
			putchar(d1);
			putchar(d2);
			if (d1 < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
