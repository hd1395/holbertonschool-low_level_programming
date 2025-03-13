#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - creates an array of integers.
 *
 * @min: starting value.
 * @max: ending value.
 *
 * Return: pointer to a new array with numbers from min to max
 */
int *array_range(int min, int max)
{
int i, *a;
if (min > max)
return (NULL);
a = malloc(sizeof(int) * (max - min + 1));
if (!a)
return (NULL);
for (i = 0; min <= max; i++)
a[i] = min++;
return (a);
}
