#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the old memory
 * @old_size: size of old memory vlock
 * @new_size: size of new block
 *
 * Return: NULL or address to new memory block
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_new;
	char *tmp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL && new_size > 0)
	{
		ptr_new = malloc(new_size);
		if (ptr_new == NULL)
		{
			return (NULL);
		}
		return (ptr_new);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr_new = malloc(new_size);
	if (ptr_new == NULL)
	{
		return (NULL);
	}
	tmp = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr_new[i] = tmp[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr_new[i] = tmp[i];
	}

	free(ptr);
	return (ptr_new);
}
