#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int tmp, new, prev;
	int n;

	n = 1;
	new = 2;
	prev = 1;
	printf("%lu, %lu, ", prev, new);
	while (n <= 96)
	{
		tmp = new;
		new = new + prev;
		prev = tmp;
		printf("%lu", new);
		n++;
		if (n != 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
