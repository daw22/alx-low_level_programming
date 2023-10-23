#include "main.h"
#include  <string.h>
/**
 * _strstr - finds substring in a string
 * @haystack: input string to be searched
 * @needle: substring to search for
 * Return: pointer to the start of the substring found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int hlen = strlen(haystack), nlen = strlen(needle);

	for (i = 0; i < hlen; i++)
	{
		if (needle[0] == haystack[i])
		{
			char potm[100];

			strncpy(potm, haystack + i, nlen);
			if (strcmp(needle, potm) == 0)
				return (haystack + i);
		}
	}
	return (0);
}
