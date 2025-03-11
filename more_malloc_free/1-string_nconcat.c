#include <stdlib.h>
#include <stddef.h>
/**
 * min - find the minimum values of two numbers.
 * 
 * @n1: first number.
 * @n2: second number.
 *
 * Return: the minimum number of n1 and n2
 */
int min(int n1, int n2)
{
if (n1 <= n2)
return (n1);
return (n2);
}
/**
 * str_len - counts the string charcters.
 * @s: string to calculate the length for
 *
 * Return: number of charcters of string s.
 */
int str_len(char *s)
{
if (!s)
return (0);
if (!*s)
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
int i, s1_len, s2_len;
char *s;
s1_len = str_len(s1);
s2_len = str_len(s2);
s = malloc(sizeof(char) * (s1_len + min(s2_len, n) + 1));
if (!s)
return (0);
for (i = 0; i < s1_len; i++)
s[i] = *(s1++);
for (i = s1_len; i <= s1_len + min(s2_len, n); i++)
s[i] = *(s2++);
s[s1_len + min(s2_len, n) + 1] = '\0';
return (s);
}
