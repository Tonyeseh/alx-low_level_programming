#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @index: is the index starting from 0 of the bit you want to set
 *
 * Return:1 if worked, or -1 if an error occured
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;

	if (n == NULL || index >= (sizeof(*n) * 8))
		return (-1);

	while (i <= (sizeof(*n) * 8))
	{
		if (i == index)
		{
			*n = (1 << i) | *n;
			break;
		}
		i++;
	}
	return (1);
}
