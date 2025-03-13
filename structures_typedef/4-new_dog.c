#include "dog.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - create a new dog.
 *
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog
 *
 * Return: pointer to a new created dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
d = malloc(sizeof(dog_t));
if (!d)
return (NULL);
d->name = name;
/*strcpy(d->name, name);*/
d->owner = owner;
/*strcpy(d->owner, owner);*/
d->age = age;
return (d);
}
