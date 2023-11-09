#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_strings - prints strings separated by separator
 * @separator: separates the strings
 * @n: number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *nil = "(nil)", *str;

	va_start(args, n);
	for (i = n; i > 0; i--)
	{
		str = va_arg(args, char*);
		printf("%s", str == NULL ? nil : str);
		if (i != 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
