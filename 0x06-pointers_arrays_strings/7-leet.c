#include "main.h"
#include <string.h>

/**
 * leet - encodes string with leet code
 * @str: input string
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	int i, j, len = strlen(str);
	char dchar[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int echar[] = {4, 3, 0, 7, 1};
	int dclen = sizeof(dchar) / sizeof(char);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < dclen; j++)
		{
			if (dchar[j] == str[i])
				str[i] = echar[j / 2] + '0';
		}
	}
	return (str);
}
