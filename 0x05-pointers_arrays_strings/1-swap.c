#include "main.h"

/**
 * swap_int - swaps the values of two ints
 * @a: pointer to first value
 * @b: pointer to second value
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
