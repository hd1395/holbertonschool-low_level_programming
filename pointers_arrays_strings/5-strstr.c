#include "main.h"
#include <stddef.h>
#include <limits.h>
/**
 * _strstr - finds the first occurrence of the substring needle in
 *           the string haystack.
 * @haystack: string to be searched.
 * @needle: string to search for.
 *
 * Return: pointer to the beginning of located suvbstring
 *         NULL if the substring is not found.
 *
 */

char *_strstr(char *haystack, char *needle)
{
char *_s, *_n;
int found;
while (*haystack)
{
_n = needle;
if (*_n == *haystack)
{
found = 1;
_s = haystack;
while (*_n)
{
if (*_n != *_s)
{
found = 0;
break;
}
_n++;
_s++;
}
}
if (found)
break;
haystack++;
}
return (haystack);
}
