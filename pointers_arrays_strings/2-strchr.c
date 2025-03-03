#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string.
 * @s: String to search.
 * @c: character to locate.
 * @c: number of bytes
 *
 * Return: pointer to the first occurrence of the character c in the string s
 *         , or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
char *_s;
_s = NULL;
while (*s)
{
if (*s == c)
{
_s = s;
break;
}
s++;
}
return (_s);
}
