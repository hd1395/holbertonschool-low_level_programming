#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: the size of memory required
 *
 * Return: pointer to the allocated memory, otherwise exit with 98.
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (!p)
exit(98);
return (p);
}
