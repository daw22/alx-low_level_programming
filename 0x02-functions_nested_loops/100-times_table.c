#include "main.h"

/**
 * print_int - prints ints
 * @n: number to be printed
 */
void print_int(int n)
{
	int num = n, ld, md, fd, len = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	if (len == 1)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (len == 2)
	{
		num = n;
		ld = num % 10;
		fd = (num - ld) / 10;
		_putchar(' ');
		_putchar(' ');
		_putchar(fd + '0');
		_putchar(ld + '0');
	}
	else
	{
		num = n;
		ld = num % 10;
		num = (num - ld) / 10;
		md = num % 10;
		fd = (num - md) / 10;
		_putchar(' ');
		_putchar(fd + '0');
		_putchar(md + '0');
		_putchar(ld + '0');
	}
}

/**
 * print_times_table - times table
 * @n: size
 */
void print_times_table(int n)
{
	int i, j, s = n;

	if ((n > 15) || (n < 0))
		return;
	for (i = 0; i <= s; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int mul = i * j;

			if (mul <= 9)
			{
				if (j != 0)
				{
					print_int(mul);
					if ((j != n) && (mul != 0))
						_putchar(',');
				}
				else
				{
					_putchar(mul + '0');
					_putchar(',');
				}
			}
			else if (mul > 99)
			{
				print_int(mul);
				if (j != n)
					_putchar(',');
			}
			else
			{
				print_int(mul);
				if (j != n)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
}


