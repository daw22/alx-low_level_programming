#include "main.h"

/**
 * get_bit - gets bit at index i
 * @n: number input
 * @index: index
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);
	for (i = 0; i < 64; i++)
	{
		if (index == i)
			return (n & 1);
		n >>= 1;
	}
	return (-1);
}
