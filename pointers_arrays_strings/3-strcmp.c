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
if (*s1 - *s2 != 0)
return *s1 - *s2;
s1++;
s2++;
}
return (*s1 - *s2);
}
