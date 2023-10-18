#include "main.h"
#include <string.h>

/**
 * _strncat - concatinates witn at most n bytes form src
 * @dest: pointer to concatinated string
 * @src: pointer to source
 * @n: number of bytes to be concatinated forn source
 *
 * Return: pointer to concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = strlen(dest), srclen = strlen(src);
	int i;

	for (i = 0 ; i < n && i < srclen; i++)
	{
		dest[destlen] = src[i];
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
