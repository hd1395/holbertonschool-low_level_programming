#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 *
 * @argc :number of argumnets
 * @argv : arguments list
 * Return: 98 wrong number of argunments,
 *         99 wrong operators,
 *         100 if the operand #2 is zero and op is / or %
 *         0 success.
 */
int main(int argc, char *argv[])
{
int op1, op2;

if (argc != 4)
{
printf("Error\n");
return (98);
}
if (strcmp("+", argv[2]) && strcmp("-", argv[2])
&& strcmp("*", argv[2]) && strcmp("/", argv[2])
&& strcmp("%", argv[2]))
{
printf("Error\n");
return (99);
}
op2 = atoi(argv[3]);
if ((!strcmp("/", argv[2]) || !strcmp("%", argv[2]))
&& op2 == 0)
{
printf("Error\n");
return (100);
}
op1 = atoi(argv[1]);

printf("%d\n", get_op_func(argv[2])(op1, op2));
return (0);
}
