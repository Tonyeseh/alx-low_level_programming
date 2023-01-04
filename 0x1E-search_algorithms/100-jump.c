#include "search_algos.h"
#include <math.h>

/**
 * min - finds the minimum of two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: the smaller of the two numbers
 */

int min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the jump search algoithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located else
 *	-1 if array is NULL or value is not present
 */

int jump_search(int *array, size_t size, int value)
{
	int step = 0, i = 0;

	if (!array)
		return (-1);

	while (array[min(step + 1, size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		i = step;
		step += sqrt(size);
		if (step >= (int)size)
			break;
	}

	printf("Value found between indexes [%d] and [%d]\n", i, step);

	while (array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		++i;
		if (i == min(step + 1, size))
			return (-1);
	}

	printf("Value checked array[%d] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return (i);

	return (-1);
}
