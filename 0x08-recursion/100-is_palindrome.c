#include "main.h"
#include <string.h>

int cmp_rstr(char*, char*);
/**
 * is_palindrome - checks if a string is palindrome
 * @str: input string
 * Return: 1 if string is palindrome , o if not
 */
int is_palindrome(char *str)
{
	char *rev = str + strlen(str) - 1;

	return (cmp_rstr(rev, str));
}

/**
 * cmp_rstr - compares string with reverse of it self
 * @rev: pointer to last char of the string
 * @str: original string
 * Return: 1 if equal , 0 if not
 */
int cmp_rstr(char *rev, char *str)
{
	if (*str == '\0')
		return (1);
	if (*str != *rev)
		return (0);
	return (cmp_rstr(rev - 1, str + 1));
}
