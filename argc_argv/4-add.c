#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of arguments addition.
 * @argc: number of arguments
 * @argv: arguments list
 * Return: 0
 */

int main (int argc, char *argv[])
{
int i;
char *endptr;
long int result, num;
result = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++){
num = strtol(argv[i], &endptr, 10);
if (endptr == argv[i] || *endptr != '\0' ) {
printf("Error\n");
return (1);
}
result += num;
}
printf("%ld\n", result);
return (0);
}

