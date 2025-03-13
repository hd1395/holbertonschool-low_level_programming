#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 *
 * @d: variable to initialize.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog
 *
 * Return: pointer to a new array with numbers from min to max
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
