#include "main.h"
/**
 * print_last_digit- prints the last digit
 * @n: numbet input
 *
 * Return: the last digit of input number
 */
int print_last_digit(int n)
{
	return ((n < 10 && n >= 0) ? n : (n > -10 && n < 0) ? -(n) : n > 10 ? n % 10 : -(n % 10));
}
