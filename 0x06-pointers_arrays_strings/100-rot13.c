#include "main.h"
#include <string.h>

/**
 * rot13 - incrypts input string with rot-13
 * @str: input string
 *
 * Return: pointer to encrypted string
 */
char *rot13(char *str)
{
	int i, j;
	char *al = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *tr = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == al[j])
				str[i] = tr[j];
		}
	}
	return (str);
}	
