#include "main.h"
/**
 * print_last_digit- prints the last digit
 * @n: number input
 *
 * Return: the last digit of input number
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
		ld = ld * -1;
	_putchar('0' + ld);
	return (ld);
}
