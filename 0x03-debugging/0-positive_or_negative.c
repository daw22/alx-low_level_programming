#include "main.h"
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: 'ids random number to be negative or positive'
 *
 * Return: Always 0 (success)
 */
void positive_or_negative(int n)
{

	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
}
