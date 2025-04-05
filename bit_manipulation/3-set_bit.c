#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: the index, starting from 0 of the bit you want to set.
 * @n: number.
 * Return: 1 if success, or -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)

{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
