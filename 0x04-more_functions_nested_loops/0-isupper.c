#include "main.h"

/**
 * _isupper - checks if input is uppercase letter
 *
 * @i: input int(char)
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int i)
{
	if (i >= 97 && i <= 122)
	       return (1);
	else
		return (0);
}	
