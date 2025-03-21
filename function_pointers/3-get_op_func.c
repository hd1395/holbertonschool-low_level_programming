#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 * get_op_func - selects the correct function to perform the
 *               operation asked by the user
 * @s: operator
 *
 * Return: pointer to the correct function based on s.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul},
	      {"/", op_div}, {"%", op_mod}, {NULL, NULL}};
int i = 0;

while (i < 5)
{
if (!strcmp(s, ops[i].op))
return (ops[i].f);
i++;
}
return (0);
}
