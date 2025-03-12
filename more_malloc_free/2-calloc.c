#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes.
 *
 * @nmemb: number of elemets.
 * @size: size of an element.
 *
 * Return: a pointer to the allocated array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *p;
if (nmemb * size == 0)
return (NULL);
p = malloc(nmemb * size);
if (!p)
return (NULL);
for (i = 0; i < nmemb * size; i++)
*(p + i) = 0;
return (p);
}
