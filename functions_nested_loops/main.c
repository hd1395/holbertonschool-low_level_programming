#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a new line.
 * No Parameter
 *
 * Return: void.
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
/**
 * print_alphabet_x10 - writes the character c to stdout
 * No parameter
 *
 * Return: void.
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
