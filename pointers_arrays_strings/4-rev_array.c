#include "main.h"

/**
 * reverse_array - Reverse an array.
 * @a: the array.
 * @n: elements count
 *
 */

void reverse_array(int *a, int n)
{
int i, j, tmp;
i = 0;
j = n - 1;
while (i < j)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
i++;
j--;
}
}
