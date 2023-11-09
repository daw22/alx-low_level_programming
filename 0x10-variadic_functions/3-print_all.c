#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints all types of args
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	int ignore = 0;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			default:
				ignore = 1;
				break;
		}
		if (!ignore && i < (strlen(format) - 1))
			printf(", ");
		ignore = 0;
		i++;
	}
	printf("\n");
	va_end(args);
}
