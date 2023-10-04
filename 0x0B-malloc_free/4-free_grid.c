#include <stdlib.h>
#include "main.h"

/**
 * free_grid-function to release the memory allocated for
 * the 2D grid when you're done with it
 * @grid: A pointer to the 2D array of integers
 * @height: The height of the 2D array
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
