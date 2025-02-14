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
_putchar('0' + r);
for (c = 1; c <= 9; c++)
{
_putchar(',');
print_num(r * c);
}
_putchar('\n');
}
}
void print_num(int n)
{
_putchar(' ');
if (n / 10 > 0)
_putchar(48 + n / 10);
else
_putchar(' ');
_putchar(48 + n % 10);
}
