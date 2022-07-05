#ifndef DOG

#define DOG

/**
 * struct dog - defines dog name, age and owner.
 *
 * @name: name of dog (string)
 * @age: age of dog
 * @owner: owner of dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Tydef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
