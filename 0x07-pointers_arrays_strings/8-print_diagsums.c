#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the 2 diagonals of a
 * square matrix of integers
 *
 * @a: pointer to numbers
 * @size: size of square matrix
 *
 * Return: sum of the diagonals
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, i, j, n;

	n = size;
	sum1 = sum2 = i = 0, j = size - 1;
	while (size > 0)
	{
		sum1 += a[i];
		sum2 += a[j];
		i += n + 1;
		j += n - 1;
		size--;
	}
	printf("%d, %d\n", sum1, sum2);
}
