#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers from a given number to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = 0; i <= (98 - n); i++)
		{
			if ((i + n) == 98)
				printf("%d", i + n);
			else
				printf("%d, ", i + n);
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i <= (n - 98); i++)
		{
			if ((n - i) == 98)
				printf("%d", n - i);
			else
				printf("%d, ", n - i);
		}
		printf("\n");
	}
}
