#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string to encode.
 *
 * Return: encoded string
 */

char *leet(char *s)
{
char *s1, *s2, *s3, *ptr;
s1 = "oleat";
s2 = "OLEAT";
s3 = "01347";

while (*s1)
{
ptr = s;
while (*ptr)
{
if (*s1 == *ptr || *s2 == *ptr)
*ptr = *s3;
ptr++;
}
s1++;
s2++;
s3++;
}
return (s);
}
