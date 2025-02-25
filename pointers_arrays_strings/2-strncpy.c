#include "main.h"

/**
 * _strncpy - Copy n characters from src to dest.
 * @dest: Destination string.
 * @src: Source String
 * @n: number of characters to be copied.
 *
 *Return: pointer to the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
char *_dest;
int i;
int len;
len = _strlen(src);
_dest = dest;
for (i = 0; i < n; i++)
{
*dest = *src;
if (len && *s != '\0')
src++;
dest++;
}
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
