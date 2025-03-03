#include "main.h"

/**
 * _memcpy - copies memory area.
 * @src: Source area.
 * @dest: Destination area.
 * @n: number of bytes
 *
 *Return: pointer to the concatenated string in dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
