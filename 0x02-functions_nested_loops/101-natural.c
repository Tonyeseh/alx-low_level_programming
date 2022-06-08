#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 and 5 below 1024
 * followed by a new line.
 *
 * Return: void
 */

int main(void)
{
	int n, sum;

	sum = 0;
	n = 0;
	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum = sum + n;
		}
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
