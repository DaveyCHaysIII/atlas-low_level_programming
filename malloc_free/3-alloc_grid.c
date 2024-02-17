#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int i;
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
		grid[i] = (int)calloc(sizeof(int), width);

		if (grid[i] == NULL)
		{
			return (NULL);
		}
	}
}
