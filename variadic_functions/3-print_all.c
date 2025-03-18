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
unsigned int i, f;
char *s;
va_start(ap, format);
i = 0;
f = 0;
while (format && format[i])
{
if ((format[i] == 'c' || format[i] == 'f' || format[i] == 'i'
|| format[i] == 's') && f)
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", va_arg(ap, int));
f = 1;
break;
case 'i':
printf("%d", va_arg(ap, int));
f = 1;
break;
case 'f':
printf("%f", va_arg(ap, double));
f = 1;
break;
case 's':
s = va_arg(ap, char *);
printf("%s", s ? s : "(nil)");
f = 1;
break;
}
i++;
}
printf("\n");
}
