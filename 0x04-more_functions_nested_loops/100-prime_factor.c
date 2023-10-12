#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	long n = 612852475143;
	long largest_prime_factor = -1;
	int i = 2;

	while (i * i <= n)
	{
		while (n % i == 0)
		{
			largest_prime_factor = i;
			n /= i;
		}
		i += 1;
	}
	if (n > 1)
		largest_prime_factor = n;
	printf("%lu\n", largest_prime_factor);
	return (0);
}
