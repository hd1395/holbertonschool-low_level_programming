#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name.
 * @name: name to print.
 * @f: function to print name
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
