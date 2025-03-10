#include <stdlib.h>
#include <stddef.h>
/**
 * str_len - counts the string charcters.
 * @s: string to calculate the length for
 *
 * Return: number of charcters of string s.
 */
int str_len(char *s)
{
if (!*s)
return (0);
return (1 + str_len(s + 1));
}
/**
 * _strdup - creates a copy of the string given as a parameter.
 *
 * @str: string to duplicate
 *
 * Return: pointer to a new copy of str on SUCCESS, otherwise NULL
 */
char *_strdup(char *str)
{
int i, len;
char *s;
if (!str)
return (NULL);
len = str_len(str);
s = malloc(sizeof(char) * (len + 1));
if (!s)
return (NULL);
for (i = 0; i < len; i++)
s[i] = str[i];
return (s);
}
