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
	
	n = n < 0 ? -(n) : n;
	ld = n < 10 ? n : n % 10;
	_putchar('0' + ld);
	return (ld);
}
