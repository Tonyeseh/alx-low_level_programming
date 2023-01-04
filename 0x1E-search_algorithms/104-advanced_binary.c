#include "search_algos.h"

int recursive_search(int *array, size_t low, size_t high, int value);
void print_array(int *array, size_t size);

/**
 * advanced_binary - binary search that always returns
 * the index of the first value
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 *	else -1 if value is not present or array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (recursive_search(array, 0, size - 1, value));
}

/**
 * recursive_search - the binary search recursive function
 *
 * @array: array to be searched
 * @low: low index of array
 * @high: highest index of array
 * @value: value to be searched for
 *
 * Return: index of first element or -1 if value is not found
 */

int recursive_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low <= high)
	{
		print_array(array + low, high - low + 1);

		mid = (low + high) / 2;
		if (array[low] == value)
			return (low);

		if (array[mid] == value)
			return (recursive_search(array, low, mid, value));
		if (array[mid] < value)
			return (recursive_search(array, mid + 1, high, value));
		else
			return (recursive_search(array, low, mid - 1, value));
	}
	return (-1);
}


/**
 * print_array - prints a given array
 *
 * @array: array to be printed
 * @size: size of the array to be printed
 *
 * Return: Nothing
 */

void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size - 1; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}
