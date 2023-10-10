#include "main.h"

/**
 * times_table - prints times table
 *
 */
void times_table(void)
{
	int i, j, fd, sd;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int mul = i * j;

			if (mul > 9)
			{
				sd = mul % 10;
				fd = (mul - sd) / 10;
				_putchar(' ');
				_putchar(fd + '0');
				_putchar(sd + '0');
				if (j < 9)
					_putchar(',');
			}
			else if ((mul <= 9) && (j != 0))
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
				if (j < 9)
					_putchar(',');
			}
			else
			{
				_putchar(mul + '0');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
