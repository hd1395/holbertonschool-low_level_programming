#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n:starting number
 *
 * Return: void
 *
 */
void print_to_98(int n)
{
int direction;
direction = 1;
if (n > 98)
direction = -1;
printf("%d", n);
do {
n += direction;
printf(", %d", n);
} while (n != 98)
printf("\n");
}
