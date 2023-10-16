#include "main.h"

/**
 * print_rev - reverses string
 * @str: input string
 */
void print_rev(char *str)
{
	int i, j, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	for (j = count - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	_putchar(10);
}
