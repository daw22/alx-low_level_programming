#include "main.h"

/**
 * print_numbers - prints 0 to 9 and a newline
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
