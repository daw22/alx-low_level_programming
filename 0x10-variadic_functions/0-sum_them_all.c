#include "variadic_functions.h"

/**
 * sum_them_all - add all the parameters
 * @n: number of params
 *
 * Return: the result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = n; i > 0; i--)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
