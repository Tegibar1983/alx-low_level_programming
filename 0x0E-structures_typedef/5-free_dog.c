#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - stract dog variable
 * @d:details of dog variable
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
