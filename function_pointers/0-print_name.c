#include "function_pointers.h"
#include <stdio.h>

/**
 * printname - prints name.
 * @name: name to print.
 *
 */
void printname(char *name)
{
int i;
for (i = 0; name[i]; i++)
{
_putchar(name[i]);
}
_putchar('\n');
}

/**
 * print_name - prints name.
 * @name: name to print.
 * @f: function to print name
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
