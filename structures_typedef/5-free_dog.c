#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dog - frees dog.
 *
 * @d: dog to free
 *
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
