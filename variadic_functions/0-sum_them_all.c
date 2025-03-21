#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: count of the numbers.
 *
 * Return: sum of the numbers passed
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum;
va_list ap;

if (!n)
return (0);
va_start(ap, n);
sum = 0;
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
