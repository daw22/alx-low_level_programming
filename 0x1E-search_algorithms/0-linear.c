#include "search_algos.h"

/**
 * linear_search - finds index of a number in an array using
 * linear search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched
 * Return: indexof the value if found, -1 if not
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
