#include "main.h"
#include <math.h>

/**
 * _atoi - Convert string to integer.
 * @s: String to convert.
 *
 * Return: the integer result of conversion.
 *
 */
int _atoi(char *s)
{
int number;
int sign;
sign = 1;
number = 0;
while (*s != '\0')
{
if (*s == 45)
{
sign = -1;
s++;
}
if (number && (*s > '9' || *s < '0'))
break;

if (*s <= '9' && *s >= '0')
number = number * 10 + (*s - 48);
s++;
}
return (number *sign);
}
