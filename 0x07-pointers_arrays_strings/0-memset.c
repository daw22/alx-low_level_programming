#include "main.h"

/**
 * _memset - set buffer with a constant buffer
 * @s: buffer
 * @b: constant byte
 * @n: number of bytes to set
 * Return: pointer to the buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
