#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize its words.
 *
 * Return: new string all uppercase
 */

char *cap_string(char *str)
{
char *ptr;
ptr = str;
if (*ptr <= 'z' && *ptr >= 'a')
*ptr -= 32;
ptr++;
while (*ptr)
{
if (*ptr <= 'z' && *ptr >= 'a')
if (*(ptr - 1) == '\n' || *(ptr - 1) == ',' || *(ptr - 1) == ';'
|| *(ptr - 1) == '.' || *(ptr - 1) == '!' || *(ptr - 1) == '?'
|| *(ptr - 1) == '"' || *(ptr - 1) == '\t' || *(ptr - 1) == ' '
|| *(ptr - 1) == '(' || *(ptr - 1) == ')' || *(ptr - 1) == '{'
|| *(ptr - 1) == '}')
*ptr -= 32;
ptr++;
}
return (str);
}
