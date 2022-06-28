#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - elements of the grid should be initialised to 0
 *
 * @width: width
 * @height: height
 *
 * Return: NULL if height or width is 0 or negative or pointer
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **) malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(ptr + i) = (int *) malloc(width * sizeof(int));
		if (*(ptr + i) == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(*(ptr + j));
				j++;
			}
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
