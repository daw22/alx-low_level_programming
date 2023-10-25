#include "main.h"

int _sqrt(int, int);
/**
 * _sqrt_recursion - finds sqrt of a number
 * @n: input number
 * Return: int result
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
/**
 * _sqrt - square root
 * @n: input number
 * @i: start from 1
 * Return:the square root if the number have a natural sqrt, -1 if not
 */
int _sqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(i + 1, n));
}
