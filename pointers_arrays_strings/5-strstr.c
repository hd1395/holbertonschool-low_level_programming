#include "main.h"
#include <stddef.h>
#include <limits.h>


/**
 * starts_with - check if haystack starts with needle
 * @haystack: string to be searched.
 * @needle: string to search
 *
 * Return: pointer to haystack if it starts with needle, otherwise NULL
 */
char *starts_with(char *haystack, char *needle)
{
char *p;
p = haystack;
while (*needle)
{
if (*haystack++ != *needle++)
return (NULL);
}
return (p);
}

/**
 * _strstr - finds the first occurrence of the substring needle in
 *           the string haystack.
 * @haystack: string to be searched.
 * @needle: string to search for.
 *
 * Return: pointer to the beginning of located suvbstring
 *         NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
char *p;
while (*haystack)
{
p = starts_with(haystack++, needle);
if (p)
return (p);
}
return (NULL);
}
