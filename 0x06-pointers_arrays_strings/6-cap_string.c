#include "main.h"
#include <string.h>

int islowercc(char);
int is_separater(char, char*, int);
/**
 * cap_string - capitalizes a string
 * @str: input string
 *
 * Return: pointer to capitalized string
 */
char *cap_string(char *str)
{
	int i, len = strlen(str);
	char sp[] = {32, 9, 10, ',', '.', '?', ';', '(', ')', 123, 125, 34, 33};
	int splen = sizeof(sp) / sizeof(char);

	for (i = 0; i < len; i++)
	{
		if (str[i] == 9)
			str[i] = 32;
		if (i == 0 && islowercc(str[i]))
			str[i] -=32;
		else if (islowercc(str[i]) && is_separater(str[i - 1], sp, splen))
			str[i] -= 32;
	}
	return (str);
}
/**
 * islowercc - checks if input is lowercase letter
 * @c: input character
 *
 * Return: 1 if true else 0
 */
int islowercc(char c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

/**
 * is_separater - checks if input is word separater
 * @c: input character
 * @p: pointer to separators array
 * @n: size of separators array
 *
 * Return: 1 if true else 0
 */
int is_separater(char c, char *p, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (p[i] == c)
			return (1);
	}
	return (0);
}
