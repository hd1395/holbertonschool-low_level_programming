#include <stdio.h>

/**
 * main - prints number of arguments followed by a new line.
 * @argc: number of arguments
 * @argv: arguments list
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
