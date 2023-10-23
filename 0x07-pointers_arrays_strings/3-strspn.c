#include "main.h"
#include <string.h>
/**
 * _strspn  - initial subset of string only containing given characters
 * @s: input string to be searched
 * @accept: chars to look for
 * Return: lenght of the substring found
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	unsigned int count = 0, found;

	while (s[i] != '\0')
	{
		found = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		i++;
		if (found)
			count++;
		else
			break;
	}
	return (count);
}
