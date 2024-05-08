#include "search_algos.h"

void printArray(int, int, int *);

/**
 * binary_search - binary search algorithm (iterative)
 * @arry: array to searched
 * @size: size of arrya to be searched
 * @value: search element to look for
 * Return: index of value if found, -1 if not
 */
int binary_search(int *array, size_t size, int value)
{
	int mid;
	int low = 0, high = size - 1;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printArray(low, high, array);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * printArray - print array elements comma separated
 * @low: start index
 * @high: end index
 * @array: array to print from
 */
void printArray(int low, int high, int *array)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}
