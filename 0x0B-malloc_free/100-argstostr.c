#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatinates args to string
 * @ac: number of args
 * @av: list og args
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, cc = 0, size = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		size += strlen(av[i]);
	}
	p = malloc(size + ac + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[cc] = av[i][j];
			cc++;
		}
		p[cc++] = 10;
	}
	p[cc] = '\0';
	return (p);
}
