#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: String to print.
 *
 *
 */

void puts_half(char *str)
{
int len;
len = _strlen(str);
str += _strlen(str) / 2 + len % 2;
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}

/**
 * _strlen - calculate the length of a string.
 * @s: String to find the length of.
 *
 * Return: the length of the string.
 *
 */
int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
l++;
s++;
}
return (l);
}
