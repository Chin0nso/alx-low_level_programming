#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_grid - frees a 2Dimensional grid previously
  *             created by my alloc_grid function.
  * @grid: grid to be freed
  * @height: height of grid
  *
  * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height <= 0)
		return;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
