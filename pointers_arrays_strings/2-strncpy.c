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
_dest = dest;
for (i = 0; i < n; i++)
{
*dest = *src;
src++;
dest++;
}
return (_dest);
}
