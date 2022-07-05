#include <stdlib.h>
#include "main.c"

/**
 * free_dog - frees dog struct
 *
 * @d: pointer to d
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
