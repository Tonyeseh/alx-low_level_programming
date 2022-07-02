#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: NULL or pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int counter, diff;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	diff = max - min + 1;
	for (counter = 0; counter < diff; counter++)
	{
		ptr[counter] = min;
		min++;
	}
	return (ptr);
}
