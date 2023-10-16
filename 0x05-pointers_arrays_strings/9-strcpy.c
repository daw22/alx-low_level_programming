#include "main.h"
#include <string.h>

/**
 * _strcpy - copies string to specified destination buffer
 * @dest: copy destination
 * @src: source
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
