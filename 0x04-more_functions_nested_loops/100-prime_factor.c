#include <stdio.h>

/**
 * main - prints the largest prime of the number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	long int num;
	int d, max;

	max = 1;
	d = 2;

	num = 612852475143;
	while (num > 1)
	{
		while (num % d == 0)
		{
			num /= d;
			max = d;
		}
		d++;
		if ((d * d) > num)
		{
			max = num;
			break;
		}
	}
	printf("%d\n", max);
	return (0);
}
