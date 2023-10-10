#include "main.h"

/**
 * print_alphabet- prints lowercase alphabet and newline
 *
 */
void print_alphabet(void)
{
	int char_start = 97;

	while (char_start < 123)
	{
		_putchar((char)(char_start));
		char_start++;
	}
	_putchar('\n');
}
