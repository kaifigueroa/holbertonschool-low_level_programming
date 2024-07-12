#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: Pointer to the 2D array of integers,
 * or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, g;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{

			for (g = 0; g < i; g++)
				free(grid[g]);
			free(grid);
			return (NULL);
		}

		for (g = 0; g < width; g++)
			grid[i][g] = 0;
	}

	return (grid);
}
