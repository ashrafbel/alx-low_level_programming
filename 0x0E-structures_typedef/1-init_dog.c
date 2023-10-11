#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes of a dog
 * @d: pointer's struct dog to init
 * @name: name dog
 * @age: age of dog
 * @owner: name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}


