#include "main.h"

/**
 * _strpbrk - find the first cocurence of a byte in agiven string
 * @s: input string to be searched
 * @accept: substring of bytes to search for
 * Return: pointer to firist occurenc
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	int pos = -1, found  = 0;

	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (accept[i] == s[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		i++;
		if (pos == -1 && found)
			pos = j;
		else if (j < pos)
			pos = j;
	}
	if (pos == -1)
		return (0);
	else
		return (&s[pos]);
}
