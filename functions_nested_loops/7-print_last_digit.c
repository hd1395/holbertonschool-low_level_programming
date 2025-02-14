#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: The character to check
 *
 * Return: the value of the last digit
 *
 */
int print_last_digit(int n)
{
int last_d;
last_d = n % 10;
if (last_d < 0)
last_d = -last_d;
_putchar('0' + last_d);
return (last_d);
}
