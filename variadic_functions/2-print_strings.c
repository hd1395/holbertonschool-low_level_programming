#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between strings
 * @n: count of the numbers.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
char *s;
va_start(ap, n);
for (i = 0; i < n; i++)
{
s = va_arg(ap, char *);
printf("%s", s ? s : "(nil)");
if (separator && i < n - 1)
printf("%s", separator);
}
va_end(ap);
printf("\n");
}
