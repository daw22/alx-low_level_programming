#include "main.h"
#include <string.h>

/**
 * puts_half - prints half if input string
 * @str: input string
 */
void puts_half(char *str)
{
	unsigned long int i;
	int mid = strlen(str) % 2 == 0 ? strlen(str) / 2 : (strlen(str) / 2) + 1;

	if (!str)
		return;

	for (i = mid; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
