#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - creates 2 dimensional array
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to a 2 dimensional array
 * of integers on success
 */
int **alloc_grid(int width, int height)
{
int i, j, **a;
if (width * height == 0 || height < 0 || width < 0)
return (NULL);
a = malloc(sizeof(int *) * height);
if (!a)
return (NULL);
for (i = 0; i < height; i++)
{
a[i] = malloc(width * sizeof(int));
if (!a[i])
{
for (i = i - 1; i >= 0; i--)
free(a[i]);
free(a);
return (NULL);
}
for (j = 0; j < width; j++)
a[i][j] = 0;
}
return (a);
}
