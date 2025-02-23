#include "main.h"
/**
 * _puts - prints string.
 * @s: String to print.
 *
 *
 */

void _puts(char *str)
{
while (*str != '\0')
{
printf("%c" , *str);
str++;
}
printf("\n");
}
