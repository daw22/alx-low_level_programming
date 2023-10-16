#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @str: input string
 */
void rev_string(char *str)
{
	int i = 0, j = strlen(str) - 1;

	while (i < j)
	{
		char c = str[i];

		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}

}
