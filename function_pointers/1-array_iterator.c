#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on
 *                  each element of an array.
 * @array: array to iterate over.
 * @size: sie of the array
 * @action: a pointer to a function the will performa an action on the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
action(array[i]);
}
