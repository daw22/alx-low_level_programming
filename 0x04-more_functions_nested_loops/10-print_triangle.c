#include "main.h"

/**
 * print_triangle - prints a trianle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j >= size - 1 - i)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar(10);
		}
	}
}
