#include "main.h"
#include <string.h>

/**
 * string_toupper - convets string to all caps
 * @str: input string
 *
 * Return: result string
 */
char *string_toupper(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
	}
	return (str);
}

