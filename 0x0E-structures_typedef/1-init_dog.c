#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer's struct dog to init
 * @name: name dog pointer
 * @age: age of dog pointer
 * @owner: name of owner pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
