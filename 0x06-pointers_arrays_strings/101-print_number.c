#include "main.h"

int powten(int n);
/**
 * print_number - prints numbers
 * @n: input number(int)
 */
void print_number(int n)
{
	int i, tmp = n, len = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (tmp / 10)
	{
		len++;
		tmp /= 10;
	}

	for (i = len; i > 0; i--)
	{
		_putchar((n / powten(i - 1)) + '0');
		n -= (n / powten(i - 1)) * powten(i - 1);
	}
}

/**
 * powten - ten raised to input
 * @n: input int
 * Return: int
 */
int powten(int n)
{
	int i, res = 1;

	for (i = 0; i < n; i++)
	{
		res *= 10;
	}
	return (res);
}
