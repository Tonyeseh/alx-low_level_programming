#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a fnction given as a parameter of each element of
 * an array
 *
 * @array: array to be iterated
 * @size: size of the array
 * @action: pointer to the functin you need to use
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL && array != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
