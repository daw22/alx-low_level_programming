#include "main.h"

/**
 * malloc_checked: allocates memory for a given size
 * @b: input size in bytes
 * Return: pointer to the new memory block
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
