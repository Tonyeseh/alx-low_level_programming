#include "search_algos.h"

/**
 * print_array - print an a given array
 *
 * @array: array to be printed
 * @size: size of array
 *
 * Return: Nothing
 */

void print_array(int *array, int size)
{
	int i = 0;

	if (array)
	{
		printf("Searching in array: ");
		while (i < size - 1)
		{
			printf("%d, ", array[i]);
			++i;
		}
		printf("%d\n", array[i]);
	}
}

/**
 * binary_search - searches for a value in a sorted array of integers
 *using the Binary Search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located else
 *	-1 if array is NULL or value is not present
 */

int binary_search(int *array, size_t size, int value)
{
	int mid, low = 0, high = size - 1;

	if (array)
	{
		while (low <= high)
		{
			mid = (low + high) / 2;
			print_array(array + low, high - low + 1);
			if (array[mid] == value)
				return (mid);
			else if (array[mid] > value)
				high = mid - 1;
			else
				low = mid + 1;
		}
	}
	return (-1);
}
