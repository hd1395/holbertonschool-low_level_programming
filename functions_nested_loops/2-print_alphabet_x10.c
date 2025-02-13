#include "main.h"
/**
 * main - prints _putchar, followed by a new line.
 * Return: 0
 */
/*int main(void)
 *{
 *print_alphabet_x10();
 *return (0);
 *}
 */
void print_alphabet_x10(void)
{
int i;
char c;
for (i = 1; i <= 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}
