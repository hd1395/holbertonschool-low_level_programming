#include "main.h"
/**
 * print_square - prints square
 * @size: the size of square
 *
 */

void print_square(int size)
{
int i, j;
for (i = 0 ; i < size ; i++)
{
for (j = 0; j < size; j++)
_putchar('#');
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
