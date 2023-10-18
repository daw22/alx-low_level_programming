#include "main.h"
#include <string.h>

/**
 * _strcmp - compare two strings
 * @s1: operand one
 * @s2: operand two
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, res = 0;
	int s1len = strlen(s1), s2len = strlen(s2);
	int len = s1len > s2len ? s1len : s2len;

	for (i = 0; i < len; i++)
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
	}
	return (res);
}

