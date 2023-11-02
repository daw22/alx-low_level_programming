#include "main.h"

/**
 * _calloc - allocaates memory for an array and set it to 0
 * @nmemb: number of array members
 * @size: size of each array element
 * Return: pointer to the new array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
