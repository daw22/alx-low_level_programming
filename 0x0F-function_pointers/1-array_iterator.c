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

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
