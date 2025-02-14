#include "main.h"
/**
 * times_table - function that prints the 9 times table,
 * starting with 0.
 * No Parameter
 *
 * Return: void
 *
 */
void times_table(void)
{
int r;
int c;
for (r = 0; r <= 9; r++)
{
for (c = 0; c <= 9; c++)
{
if (r * c > 0)
_putchar(',');
print_num(r * c);
}
_putchar('\n');
}
}
/**
 * print_num - function that prints the desired number format as requested
 * @n: number to print
 *
 * Return: void
 *
 */

void print_num(int n)
{
_putchar(' ');
if (n / 10 > 0)
_putchar(48 + n / 10);
else
_putchar(' ');
_putchar(48 + n % 10);
}
