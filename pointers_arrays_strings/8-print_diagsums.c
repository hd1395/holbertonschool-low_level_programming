#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers..
 * @a: array of integers.
 * @size: size of the array
 *
 *
 */

void print_diagsums(int *a, int size)
{
int i, j, sum1, sum2;
sum1 = sum2 = j = 0;
for (i = 0; i < size; i++)
{
if (i == j)
sum1 += *(a + (j + (size * i)));
j++;
}
j = size - 1;
for (i = 0; i < size; i++)
{
sum2 += *(a + (j + (size * i)));
j--;
}
printf("%d, %d\n", sum1, sum2);
}
