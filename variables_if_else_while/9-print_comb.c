#include <stdio.h>
/**
 * main - program that prints all possible
 * combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
