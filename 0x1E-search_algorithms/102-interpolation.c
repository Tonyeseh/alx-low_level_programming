#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 *
 * @array: pointer ot the first element of the array
 * @size: number of elements in array
 * @value: value to be seaarched for
 *
 * Return: first index where value is located else
 *	-1 if array is NULL or value is not present
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (!array)
		return (-1);

	while (low <= high)
	{
		pos = low + (((double)(high - low) / \
			(array[high] - array[low])) * (value - array[low]));

		if (pos > high)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
