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
	char *nil = "(nil)";

	va_start(args, n);
	for (i = n; i > 0; i--)
	{
		printf("%s", va_arg(args, char*));
		if (i != 1)
		{
			if (separator != NULL)
				printf("%s", separator);
			else
				printf("%s", nil);
		}
	}
	printf("\n");
	va_end(args);
}
