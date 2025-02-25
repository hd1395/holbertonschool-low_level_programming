#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: first string.
 * @s2: second String
 *
 *Return: 0 - match, 1 s1 is greater, 2 s2 is greater
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 > *s2)
return (1);

if (*s1 < *s2)
return (-1);
}
if (*s1 == '\0' && *s2 != '\0')
return (-1);
if (*s2 == '\0' && *s1 != '\0')
return (1);
return (0);
}
