#include "main.h"

/**
 * _isalpha - determines if the input is an alphabet char
 * @c: input num
 *
 * Return: 1 if alphabet character
 * or 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
