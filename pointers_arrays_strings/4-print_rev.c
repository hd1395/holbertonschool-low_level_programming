#include "main.h"

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
_putchar(*s);
s--;
str_len--;
}
_putchar('\n');
}

