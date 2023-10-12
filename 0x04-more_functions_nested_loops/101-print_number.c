#include "main.h"

int tenpow(int to);
/**
 * print_number - prints numbers
 * @n: number to be printed
 */
void print_number(int n)
{
	int i, len = 0, tmp = n, ld;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	ld = n % 10;
	while (tmp != 0)
	{
		len++;
		tmp /= 10;
	}
	for (i = len - 1; i > 0; i--)
	{
		_putchar((n / tenpow(i)) + '0');
		n -= tenpow(i) * (n / tenpow(i));
	}
	_putchar(ld + '0');
}

int tenpow(int to)
{
	int i, res = 1;

	for (i = 0; i < to; i++)
	{
		res *= 10;
	}
	return (res);
}
		


