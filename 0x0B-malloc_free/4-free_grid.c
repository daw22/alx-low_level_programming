#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d array allocated
 * @grid: pointer to the array
 * @height: size of the pointer array
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
