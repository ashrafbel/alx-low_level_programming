#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free memory the dog
 * @d: dog's  free
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}

