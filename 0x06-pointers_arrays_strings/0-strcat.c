#include "main.h"
#include <string.h>

/**
 * _strcat - concatinates two strings
 * @dest: pointer to destination string
 * @src: pointer to source
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int lendest = strlen(dest);
	int lensrc = strlen(src);
	int i;

	for (i = 0; i < lensrc; i++)
	{
		dest[lendest] = src[i];
		lendest++;
	}
	dest[lendest] = '\0';
	return (dest);
}

