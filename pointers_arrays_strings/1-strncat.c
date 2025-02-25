#include "main.h"

/**
 * _strncat - Concatonate n characters from src with dest.
 * @dest: Destination string.
 * @src: Source String
 * @n: charcters to concatenate from src with dest
 *
 *Return: pointer to the concatenated string in dest
 */

char *_strncat(char *dest, char *src, int n)
{
char *_dest;
int len;
int i;
_dest = dest;
len = _strlen(dest);
dest += len;
len = _strlen(src);
if (n > len)
n = len;
for (i = 0; i < n; i++)
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

