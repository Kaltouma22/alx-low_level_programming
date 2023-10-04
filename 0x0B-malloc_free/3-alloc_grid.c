#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid-returns a pointer to a 2 dimensional array of integers
 * @height: represent the dimensions of the 2D array
 * @width: represent the dimensions of the 2D array
 * Return: grid
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	grid = malloc(height * sizeof(*grid));

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	if (grid == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
