#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int k, m;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		grid[k] = malloc(width * sizeof(**grid));
		if (grid[k] == NULL)
		{
			for (k--; k >= 0; k--)
				free(grid[k]);
			free(grid);
			return (NULL);
		}
		for (m = 0; m < width; m++)
			grid[k][m] = 0;
	}

	return (grid);
}
