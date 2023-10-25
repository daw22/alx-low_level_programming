#include "main.h"

/**
 * _puts_recursion - puts using recursion
 * @str: input string
 */
void _puts_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*str);
	_puts_recursion(str + 1);
}
