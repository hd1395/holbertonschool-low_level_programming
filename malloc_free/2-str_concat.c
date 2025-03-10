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
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a new string on SUCCESS, oterwise NULL.
 */
char *str_concat(char *s1, char *s2)
{
int i, s1_len, s2_len;
char *s;
if (!s1 && !s2)
return (NULL);
s1_len = str_len(s1);
s2_len = str_len(s2);
s = malloc(sizeof(char) * (s1_len + s2_len + 1));
if (!s)
return (NULL);
for (i = 0; i < s1_len; i++)
s[i] = *(s1++);
for (i = s1_len; i <= s1_len + s2_len; i++)
s[i] = *(s2++);
s[s1_len + s2_len + 1] = '\0';
return (s);
}
