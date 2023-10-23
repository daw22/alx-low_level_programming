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
	while (*haystack != 0)
	{
		char *hs = haystack;
		char *nd = needle;
		
		while (*hs == *nd && *nd != '\0')
		{
			hs++;
			nd++;
		}
		if (*nd == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
