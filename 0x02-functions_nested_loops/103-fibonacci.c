#include <stdio.h>

/**
 * main - sums the even fibonacci under 4,000,000
 *
 * Return: 0
 */
int main(void)
{
	long int new, tmp, prev, sum;

	sum = 2;
	prev = 1;
	new = 2;
	while (new < 4000000)
	{
		tmp = new;
		new = new + prev;
		prev = tmp;
		if (new % 2 == 0)
		{
			sum = sum + new;
		}
	}
	printf("%ld\n", sum);
	return (0);

}
