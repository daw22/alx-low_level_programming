#include "main.h"

unsigned int pow2(unsigned int);
/**
 * binary_to_uint - converts binary to uint
 * @c: string od 0's and 1's
 *
 * Return: result (uint)
 */
unsigned int binary_to_uint(const char *c)
{
	unsigned int dec = 0;
	int len = strlen(c) - 1;

	if (c == NULL)
		return (0);
	while (len >= 0)
	{
		unsigned int num = c[len] - '0';

		if (!(c[len] == '0' || c[len] == '1'))
			return (0);
		dec = dec + (num * pow2(strlen(c) - 1 - len));
		len--;
	}
	return (dec);
}

/**
 * pow2 - claculate 2 raised to input num
 * @n: input number
 *
 * Return: result
 */
unsigned int pow2(unsigned int n)
{
	unsigned int res = 1, i;

	for (i = 0; i < n; i++)
		res *= 2;
	return (res);
}
