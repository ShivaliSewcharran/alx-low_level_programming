#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of the grid
 * Description: frees the  memory of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int t;

	for (t = 0; t < height; t++)
	{
		free(grid[t]);
	}
	free(grid);
}
