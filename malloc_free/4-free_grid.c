#include "main.h"
#include <stdlib.h>

/**
 * free_grid()- frees a grid
 * @grid: the grid in question
 * @height: the height of the grid
 *
 * Return: no return
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
