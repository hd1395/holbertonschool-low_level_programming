#include "main.h"

/**
 * _strcpy - Copy string src to dest.
 * @dest: Destination string.
 * @src: Source String
 *
 *Return: pointer to the dest
 */

char *_strcpy(char *dest, char *src)
{
char *_dest;
_dest = dest;
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (_dest);
}
