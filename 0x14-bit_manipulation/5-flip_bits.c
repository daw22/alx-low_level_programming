#include "main.h"

/**
 * flip_bits - determines number of bits to flip to get form
 * a to b
 * @a: input number (from)
 * @b: input number (to)
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	unsigned int i = 0, n = a ^ b;

	while (n > 0)
	{
		i++;
		n = (n - 1) & n;
	}
	return (i);
}
