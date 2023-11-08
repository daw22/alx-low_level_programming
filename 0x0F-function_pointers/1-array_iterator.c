#include "function_pointers.h"

/**
 * array_iterator - executes a callback func on eack array element
 * @array: input array of ints
 * @size: size of the array
 * @action: callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
