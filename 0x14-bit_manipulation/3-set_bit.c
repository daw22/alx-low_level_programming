#include "main.h"

/**
 * set_bit - set bit at a give index to one
 * @n: number input
 * @index: index of the bit to change
 *
 * Return: 1 if success or -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	*n = (*n | i);

	return (1);
}
