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
_putchar('0');
for (c = 1; c <= 9; c++)
{
_putchar(',');
_putchar(' ');
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
if (n < 10)
{
_putchar(' ');
_putchar('0' + n);
}
else
{
_putchar('0' + n / 10);
_putchar('0' + n % 10);
}
}

