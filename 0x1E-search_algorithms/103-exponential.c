#include "search_algos.h"

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
 * print_array - prints an array of arbituary length
 *
 * @array: pointer ot the first element of the array
 * @size: size of the array to be printed
 *
 * Return: void
 */

void print_array(int *array, size_t size)
{
	size_t i = 0;

	if (array)
	{
		printf("Searching in array: ");
		for (i = 0; i < size - 1; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);
	}
}

/**
 * bin_search - searches for a value in a sorted array of integers
 * using binary search
 *
 * @array: pointer to the first element of the array to search in
 * @low: lower boundary of the array
 * @high: higher bound of the array
 * @value: value to be searched for
 *
 * Return: the first index where vlaue is located
 *	else -1 if the array id NULL or value is not present
 */

int bin_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		print_array(array + low, high - low + 1);
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located else
 *	-1 if the array is NULL or value is not present
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t exp = 1;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	while (exp < size && array[exp] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", exp, array[exp]);
		exp *= 2;
	}

	printf("Value found between indexes [%ld] and [%d]\n", exp / 2, min(exp, size - 1));

	return (bin_search(array, exp / 2, min(exp, size - 1), value));
}
