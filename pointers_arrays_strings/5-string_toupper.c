#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string to make it UPPER case.
 *
 * Return: new string all uppercase
 */

char *string_toupper(char *str)
{
char *_str;
_str = str;
while (*_str)
{
if (*_str <= 'z' && *_str >= 'a')
*_str -= 32;
_str++;
}
return (str);
}
