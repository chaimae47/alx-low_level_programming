#include <stdlib.h>

/**
* free_grid - Frees a 2-dimensional grid previously
* created by alloc_grid.
* @grid: The 2-dimensional array to be freed.
* @height: The height of the grid (number of rows).
*
* Return: Nothing.
*/
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
return;

/* Free memory for each row and the array of pointers to rows */
for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
