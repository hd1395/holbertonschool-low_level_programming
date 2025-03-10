#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 *
 * @size: size of the array
 * @c: filling char.
 *
 * Return: pointer to a new array filled with c, otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *a;
if (size == 0)
return (NULL);
a = malloc(sizeof(char) * size + 1);
if (!a)
return (NULL);
for (i = 0; i < size; i++)
a[i] = c;
a[size] = '\0';
return (a);
}
