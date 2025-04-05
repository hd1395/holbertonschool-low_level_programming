#include "main.h"
/**
 * clear_bit - clears the value of a bit to 0 at a given index.
 * @index: the index, starting from 0 of the bit you want to set.
 * @n: number.
 * Return: 1 if success, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
