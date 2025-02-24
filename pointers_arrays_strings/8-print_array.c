#include "main.h"
#include <stdio.h>

/**
 * print_array - prints number of array elementse.
 * @a: Array to print.
 * @n: number of elements
 *
 *
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n - 1; i++)
printf("%d, ", a[i]);
if (n > 0)
printf("%d\n", a[n - 1]);
}
