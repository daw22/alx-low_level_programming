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
	unsigned int i, lens1, lens2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (lens1 = 0; s1[lens1] != '\0'; lens1++);
	for (lens2 = 0; s2[lens2] != '\0'; lens2++);
	if (n >= lens2)
		n = strlen(s2);
	p = malloc(lens1 + lens2 + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		p[i] = s1[i];
	for (i = lens1; i < (lens1 + n); i++)
		p[i] = s2[i - lens1];
	p[i] = '\0';
	return (p);
}
