#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a 2D array
 * @width: the width of the array
 * @height: the height of the array
 * Return: the 2D array created.
 */

int **alloc_grid(int width, int height)
{
	int **gridout;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridout[i] = malloc(width * sizeof(int));
		if (gridout[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridout[i]);
			free(gridout);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridout[i][j] = 0;
	return (gridout);
}
