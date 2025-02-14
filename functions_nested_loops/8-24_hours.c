#include "main.h"
/**
 * jack_bauer - function that prints the last digit of a number.
 * No Parameter
 *
 * Return: void
 *
 */
void jack_bauer(void)
{
int h;
int m;
for (h = 0; h <= 23; h++)
for (m = 0; m <= 59; m++)
{
_putchar(48 + h / 10);
_putchar(48 + h % 10);
_putchar(':');
_putchar(48 + m / 10);
_putchar(48 + m % 10);
_putchar('\n');
}
}
