#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers with a separetor in between
 * @separator: separator
 * @n: number of args passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;

	if (n == 0)
		return;
	va_start(args, n);
	for (i = n; i > 0; i--)
	{
		printf("%d", va_arg(args, int));
		if (i != 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
