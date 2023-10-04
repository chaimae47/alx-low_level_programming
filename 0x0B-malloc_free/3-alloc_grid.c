
#include <stdlib.h>

/**
* alloc_grid - Creates a 2-dimensional array of
* integers and initializes it to 0.
* @width: The width of the grid (number of columns).
* @height: The height of the grid (number of rows).
*
* Return: A pointer to the created 2-dimensional array,
* or NULL on failure.
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

/* Check for invalid dimensions */
if (width <= 0 || height <= 0)
return (NULL);

/* Allocate memory for the array of pointers to rows */
grid = (int **)malloc(height * sizeof(int *));

if (grid == NULL)
return (NULL);

/* Allocate memory for each row and initialize to 0 */
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));

if (grid[i] == NULL)
{
/* Free previously allocated memory if allocation fails */
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}

/* Initialize each element in the row to 0 */
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
