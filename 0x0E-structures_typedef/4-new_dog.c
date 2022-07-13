#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: store a copy of name and owner
 *
 * Return: NULL or pointer of type dog_t
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *new_name;
	char *new_owner;
	int len1, len2, i;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	len1 = 0;
	while (name[len1] != '\0')
		len1++;
	new_name = malloc((len1 + 1) * sizeof(*name));
	if (new_name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	len2 = 0;
	while (owner[len2] != '\0')
		len2++;
	new_owner = malloc((len1 + 1) * sizeof(*owner));
	if (new_owner == NULL)
	{
		free(ptr);
		free(new_name);
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
		new_name[i] = name[i];
	for (i = 0; i <= len2; i++)
		new_owner[i] = owner[i];
	ptr->name = new_name;
	ptr->age = age;
	ptr->owner = new_owner;

	return (ptr);

}
