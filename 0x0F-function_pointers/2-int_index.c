#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search the integer from
 * @size: size of the array
 * @cmp: pointer to the function that does the search
 *
 * Return: the index of the first element for which
 * cmp function does not return 0 or
 * -1 if there's no element that matches or size <= 0
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i, ret_value;

		for (i = 0; i < size; i++)
		{
			ret_value = cmp(array[i]);
			if (ret_value == 1)
			{
				return (i);
			}
		}
	}
	return (-1);
}
