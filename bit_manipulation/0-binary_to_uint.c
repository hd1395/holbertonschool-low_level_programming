#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of 0 and 1 chars
 * Return: the converted number,
 *         0 if b is NULL or there is one or more chars in b
 *         that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;

if (b == NULL)
return (0);
while (*b)
{
if (*b != '1' && *b != '0')
return (0);
result <<= 1;
if (*b == '1')
result |= 1;
b++;
}
return (result);
}
