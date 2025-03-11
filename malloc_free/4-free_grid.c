#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid to free
 * @height: height of the grid
 *
 */
void free_grid(int **grid, int height)
{
height--;
while (height >= 0)
free(grid[height--]);
free(grid);
}
