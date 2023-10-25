#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @str: input string
 * Return: int
 */
int _strlen_recursion(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	str++;
	return (1 + _strlen_recursion(str));
}
