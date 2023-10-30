#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates space for 2d array and sets it to 0
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to a pointer for the matrix
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **) malloc(height * sizeof(int *));
	for (k = 0; k < height; k++)
		p[k] = (int *) malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
