#include "main.h"
#include <string.h>

int is_in_array(char, char*, int);
/**
 * leet - encodes string with leet code
 * @str: input string
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	int i, index, len = strlen(str);
	char dchar[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int echar[] = {4, 3, 0, 7, 1};

	for (i = 0; i < len; i++)
	{
		index = is_in_array(str[i], dchar, 10);
		if (index >= 0)
			str[i] = echar[index / 2] + '0';
	}
	return (str);
}

/**
 * is_in_array - checks if input is in the given array
 * @c: input character
 * @arr: array to search in
 * @n: arra coutnt
 * Return: int index if found, -1 if not found
 */
int is_in_array(char c, char *arr, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (arr[i] == c)
			return (i);
	}
	return (-1);
}
