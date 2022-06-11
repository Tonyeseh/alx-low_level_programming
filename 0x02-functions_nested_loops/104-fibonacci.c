#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int hold1, hold2, hold3, newf, prevf, newb, prevb;
	int n;

	n = 3;
	newb = 2;
	prevb = 1;
	newf = prevf = 0;
	printf("%lu, %lu, ", prevb, newb);
	while (n <= 98)
	{
		if (newb + prevb > 1000000000000000 || newf > 0 || prevf > 0)
		{
			hold1 = (newb + prevb) / 1000000000000000;
			hold2 = (newb + prevb) % 1000000000000000;
			hold3 = newf + prevf + hold1;
			prevf = newf;
			newf = hold3;
			prevb = newb;
			newb = hold2;
			printf("%lu%10lu", newf, newb);
		}
		else
		{
			hold1 = newb;
			newb = newb + prevb;
			prevb = hold1;
			printf("%lu", newb);
		}
		n++;
		if (n != 99)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
