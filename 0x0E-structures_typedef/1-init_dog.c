#include <stdlib.h>

#include "dog.h"

/**
 * init_dog - function initializing the struct dog
 * @d: pointer to the structure
 * @name: pointer to the name
 * @age: pointer to age
 * @owner: pointer to owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
