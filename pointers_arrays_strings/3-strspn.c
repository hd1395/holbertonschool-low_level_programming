#include "main.h"
#include <stddef.h>
/**
 * _strspn -gets the length of a prefix substring.
 * @s: string to be analyzed.
 * @accept: string that contains the characters to search for
 *
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
char *_s, *_a;
unsigned int count, total;
total = 0;
for (_s = s; *_s; _s++)
{
count = 0;
for (_a = accept; *_a; _a++)
{
if (*_s == *_a)
{
count++;
}
}
if (count == 0)
break;
total += count;
}
return (total);
}
