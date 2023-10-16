#include "main.h"

/**
 * _strlen - find the lenght of a string
 * @str: string input
 *
 * Return: lenght of the input string
 */
int _strlen(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count += 1;
	}
	return (count);
}
