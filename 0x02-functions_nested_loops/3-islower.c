#include "main.h"

/**
 * _islower - checks if c is a lowercase letter
 * @c: input character
 *
 * Return: 1 if lower case
 * 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
