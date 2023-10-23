#include "main.h"
#include <string.h>

/**
 * _strchr - searchs string for a character
 * @s: input string
 * @c: search charcter
 * Return: pointer to first occurence of the character
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
