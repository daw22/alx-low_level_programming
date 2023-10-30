#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates a dynamic array and initialize it
 * @size: size ofthe array
 * @c: char to intialize the array with
 * Return: pointer to the new array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	p = malloc(size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
