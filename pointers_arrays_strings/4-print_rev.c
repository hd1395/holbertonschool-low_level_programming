#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: String to print.
 *
 *
 */

void print_rev(char *s)
{
int str_len;
str_len = _strlen(s);
s +=  str_len - 1;
while (str_len > 0)
{
putchar(*s);
s--;
str_len--;
}
putchar('\n');
}

