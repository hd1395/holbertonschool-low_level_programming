#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strcpy - Copy string src to dest.
 * @dest: Destination string.
 * @src: Source String
 *
 *Return: pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
char *_dest;
_dest = dest;
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (_dest);
}

/**
 * str_len - counts the string charcters.
 * @s: string to calculate the length for
 *
 * Return: number of charcters of string s.
 */
int str_len(char *s)
{
if (!s || !*s)
return (0);
return (1 + str_len(s + 1));
}
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
int len;
d = malloc(sizeof(dog_t));
if (!d)
return (NULL);
len = str_len(name);
d->name = malloc((len + 1) * sizeof(char));
if (!d->name)
{
free(d);
return (NULL);
}
_strcpy(d->name, name);
len = str_len(owner);
d->owner = malloc((len + 1) * sizeof(char));
if (!d->owner)
{
free(d);
free(d->name);
return (NULL);
}
_strcpy(d->owner, owner);
d->age = age;
return (d);
}
