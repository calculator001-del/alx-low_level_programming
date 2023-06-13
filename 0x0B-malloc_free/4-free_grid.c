#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees two demention array
 * @grid: 2 demention grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
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
