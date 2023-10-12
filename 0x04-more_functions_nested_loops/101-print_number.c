#include "main.h"

int tenpow(int to);
/**
 * print_number - prints numbers
 * @n: number to be printed
 */
void print_number(int n)
{

	unsigned int m;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
	{
		m = n;
	}

	if (m / 10)
		print_number(m / 10);
	_putchar((m % 10) + '0');
}
