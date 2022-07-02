#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory usig malloc.
 *
 * @b: unsigned int b for the size of memory to be allocated
 *
 * Return: a pointer to memory
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
