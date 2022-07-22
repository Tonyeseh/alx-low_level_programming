#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number
 * @index: index to get
 *
 * Return: the value at the index index or -1 if an error occured
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index >= (sizeof(n) * 8))
		return (-1);

	while (i <= (sizeof(n) * 8))
	{
		if (i == index)
		{
			n = (1 << index) & n;

			if (n > 0)
				return (1);

			return (0);
		}
		i++;
	}
	return (-1);
}
