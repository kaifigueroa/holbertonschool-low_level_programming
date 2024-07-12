#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * free_grid - Frees a two-dimensional grid.
 * @grid: Pointer to the grid.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
