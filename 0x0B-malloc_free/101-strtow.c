#include "main.h"
#include <stdlib.h>
#include <string.h>

int word_count(char *);
/**
 * strtow - converts sring to list of words
 * @str: input string
 * Return: pointer to string array
 */
char **strtow(char *str)
{
	int i, j, w, words = 0;
	char **p;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);
	words = word_count(str);
	p = malloc(words * sizeof(char *));
	i = 0;
	w = 0;
	while (str[i] != '\0')
	{
		int c = 0;

		if (str[i] != ' ')
		{
			while (str[i] != ' ')
			{
				c++;
				i++;
			}
			p[w] = malloc(c + 1);
			for (j = 0; j < c; j++)
				p[w][j] = str[i - c + j];
			p[w][c] = '\0';
			w++;
		}
		else
			i++;
		p[w] = NULL;
	}
	return (p);
}

/**
 * word_count - counts space separated words in a string
 * @str: string input
 * Return: number of words
 */
int word_count(char *str)
{
	int i, words = 0, space = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			space = 1;
			continue;
		}
		if (str[i] != ' ' && space)
		{
			words++;
			space = 0;
		}
	}
	return (words);
}
