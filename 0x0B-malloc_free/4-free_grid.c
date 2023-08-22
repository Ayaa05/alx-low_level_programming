#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory of a 2D array
 * @grid: the 2D array freed
 * @height: the height of the grid.
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
