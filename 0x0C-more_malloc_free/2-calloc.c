#include "main.h"
#include <stdlib.h>

/**
 * _calloc - works like calloc function
 *
 * @nmemb: number of the elements in the array
 * @size: size of each element in the array
 *
 * Return: NULL or pointer the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < (nmemb * size))
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
