#include "function_pointers.h"

/**
 * int_index - finds int in an integer array
 * @arr: input array
 * @size: size of the array
 * @cmp: callback function the iplements the search
 *
 * Return: index of first match, -1 if no match found
 */
int int_index(int *arr, int size, int (*cmp)(int))
{
	int i;

	if (arr == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		int r = cmp(arr[i]);

		if (r != 0)
			return (i);
	}
	return (-1);
}
