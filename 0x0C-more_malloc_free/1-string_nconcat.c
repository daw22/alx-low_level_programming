#include "main.h"

/**
 * string_nconcat - concatinates n chars from s2 to s1
 * @s1: input string one
 * @s2: input string two
 * @n: number of char to concatinate
 * Return: pointer to concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	p = malloc(strlen(s1) + strlen(s2) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		p[i] = s1[i];
	for (i = strlen(s1); i < (strlen(s1) + n); i++)
		p[i] = s2[i - strlen(s1)];
	p[i] = '\0';
	return (p);
}
