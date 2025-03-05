#include <stdio.h>

/**
 * main - prints number of arguments followed by a new line.
 * @argc: number of arguments
 * @argv: arguments list
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
