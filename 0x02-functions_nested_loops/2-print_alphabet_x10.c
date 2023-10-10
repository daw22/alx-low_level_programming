#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	int char_index = 97;
	int i;

	for (i = 0; i < 10; i++)
	{
		while (char_index < 123)
		{
			_putchar((char) char_index);
			char_index++;
		}
		char_index = 97;
		_putchar('\n');
	}
}
