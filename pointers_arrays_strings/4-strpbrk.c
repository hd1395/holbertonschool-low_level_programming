#include "main.h"
#include <stddef.h>
#include <limits.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be searched.
 * @accept: string that contains the characters to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes
 *         in accept, or NULL if no such byte is found
 *
 */

char *_strpbrk(char *s, char *accept)
{
char *loc;
int i, j, pos;
i = 0;
pos = INT_MAX;
loc = NULL;
while (*(accept + i))
{
j = 0;
while (*(s + j))
{
if (*(s + j) == *(accept + i))
{
if (j < pos)
pos = j;
break;
}
j++;
}
i++;
}
if (pos < INT_MAX)
loc = s + pos;
return (loc);
}
