#include "main.h"

/**
 * print_diagonal - prints diagonal line with '\'
 * @n: size of the line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar(10);
		}
	}
}
