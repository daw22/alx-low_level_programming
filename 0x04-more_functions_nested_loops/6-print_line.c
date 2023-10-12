#include "main.h"

/**
 * print_line - prints line with n _
 * @n: number of _ to use
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar(10);
	}
}

