#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid()- allocates a grid
 * @height: height of grid
 * @width: width of grid
 *
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)calloc(sizeof(int), width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			return (NULL);
		}
	}
	return (grid);
}
