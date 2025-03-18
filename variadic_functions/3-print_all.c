#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: string contains a list of types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i;
char *s;
va_start(ap, format);
i = 0;

while (format && format[i])
{
if ((format[i] == 'c' || format[i] == 'f' || format[i] == 'i'
|| format[i] == 's') && i > 0)
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", va_arg(ap, int));
break;
case 'i':
printf("%d", va_arg(ap, int));
break;
case 'f':
printf("%f", va_arg(ap, double));
break;
case 's':
s = va_arg(ap, char *);
printf("%s", s ? s : "(nil)");
break;
}
i++;
}
printf("\n");
}
