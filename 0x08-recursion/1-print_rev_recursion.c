#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @str: input string
 */
void _print_rev_recursion(char *str)
{
	if (*str != '\0')
	{
		_print_rev_recursion(str + 1);
		_putchar(*str);
	}
}
