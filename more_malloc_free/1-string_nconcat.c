#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * str_len - counts the string charcters.
 * @s: string to calculate the length for
 *
 * Return: number of charcters of string s.
 */
unsigned int str_len(char *s)
{
if (!s || !*s)
return (0);
return (1 + str_len(s + 1));
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of characters to concatenate
 *
 * Return: pointer to a new string on SUCCESS, oterwise NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, s1_len, s2_len;
char *s;
s1_len = str_len(s1);
s2_len = str_len(s2);
if (s2_len <= n)
n = s2_len;
s = malloc(sizeof(char) * (s1_len + n + 1));
if (s == NULL)
return (NULL);
for (i = 0; i < s1_len; i++)
{
s[i] = s1[i];
}
for (i = s1_len; i < s1_len + n; i++)
{
s[i] = s2[i - s1_len];
}
s[s1_len + n] = '\0';
return (s);

}
