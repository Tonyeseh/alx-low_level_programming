#include "dog.h"

/**
 * init_dog - initailises the variable type struct dog
 *
 * @d: struct address
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: NULL or pointer to the variable struct dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
