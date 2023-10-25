#include "main.h"

/**
 * wildcmp - compares string with pattern
 * @str: string input
 * @ptr: pattern
 * Return: 1 is match, o if not
 */
int wildcmp(char *str, char *ptr)
{
	if (*str == '\0' && *ptr == '\0')
		return (1);
	if (*str == *ptr)
		return (wildcmp(str + 1, ptr + 1));
	if (*ptr == '*')
		return (wildcmp(str, ptr + 1) || wildcmp(str + 1, ptr));
	return (0);
}
