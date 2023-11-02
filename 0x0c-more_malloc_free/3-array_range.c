#include "main.h"

/**
 * array_range - created dynamic mellory for range of ints
 * @min: min value of the range
 * @max: max value of the range
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		p[i] = min + i;
	return (p);
}
