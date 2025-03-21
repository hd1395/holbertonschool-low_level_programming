#include "main.h"

/**
 * _strcat - Concatonate two strings.
 * @dest: Destination string.
 * @src: Source String
 *
 *Return: pointer to the concatenated string in dest
 */

char *_strcat(char *dest, char *src)
{
char *_dest;
int len;
_dest = dest;
len = _strlen(dest);
dest += len;
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (_dest);
}

/**
 * _strlen - calculate the length of a string.
 * @s: String to find the length of.
 *
 * Return: the length of the string.
 *
 */
int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
l++;
s++;
}
return (l);
}

