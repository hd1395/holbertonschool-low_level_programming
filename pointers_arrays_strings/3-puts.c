#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string.
 * @s: String to print.
 *
 *
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
