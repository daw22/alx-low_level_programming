#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatinates strings
 * @str1: first string input
 * @str2: second string input
 * Return: pointer to concatinated string
 */
char *str_concat(char *str1, char *str2)
{
	unsigned int i, len, len1, len2;
	char *p;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";
	len1 = strlen(str1);
	len2 = strlen(str2);
	len = len1 + len2;
	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		p[i] = str1[i];
	for (i = len1; i < len; i++)
		p[i] = str2[i - len1];
	p[len] = '\0';
	return (p);
}
