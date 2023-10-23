#include "main.h"

/**
 * _strchr - searchs string for a character
 * @s: input string
 * @c: search charcter
 * Return: pointer to first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
