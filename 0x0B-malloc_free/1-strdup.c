#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string using malloc
 * @str: input string
 * Return: pointer to the duplicate
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *p;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = str[i];
	p[len] = '\0';
	return (p);
}
