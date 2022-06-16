#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array of integers
 * @n: number of integers in the array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int tmp, i, j;

	j = 0;
	i = n / 2;
	while (i > j)
	{
		tmp = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = tmp;
		j++;
	}
}
