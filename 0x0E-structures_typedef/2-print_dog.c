#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print struct dog
 * @d: new defined variable for thw struct dog
 */
void print_dog(struct dog *d)
{
if (d == NULL)
	printf("nil");
if (d->name == NULL)
{
printf("Name: (nil)");
}
if (d->owner == NULL)
{
printf("Owner: (nil)");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
