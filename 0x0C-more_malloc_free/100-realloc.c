#include "main.h"

/**
 * _realloc - realloc implementation with malloc and free
 * @ptr: pointer to old block
 * @old_size: size of old block
 * @new_size: size of new block
 * Return: pointer to new block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	unsigned int i;
	char *p, *cptr;

	cptr = ptr;
	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	for (i = 0; i < old_size; i++)
	{
		p[i] = cptr[i];
	}
	free(ptr);
	return (p);
}
