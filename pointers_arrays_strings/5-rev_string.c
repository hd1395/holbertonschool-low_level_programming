#include "main.h"
/**
 * swap_int - swaps the value of two integers.
 * @a: the first number.
 * @b: the second number.
 *
 */

void swap_char(char *a, char *b)
{
char tmp;
tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * _strlen - calculate the length of a string.
 * @s: String to find the length of.
 *
 * Return: the length of the string.
 *
 */
int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
l++;
s++;
}
return (l);
}

/**
 * rev_string - reverses a string.
 * @s: String to reverse.
 *
 *
 */

void rev_string(char *s)
{
char *s1;
int str_len;
str_len = _strlen(s);
s1 +=  str_len - 1;
while (s < s1)
{
swap_char(s,s1)
s++;
s1--;
}
}
