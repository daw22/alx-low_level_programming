#include "main.h"

int check_prime(int, int);
/**
 * is_prime_number - checks if a number is prime
 * @n: input number
 * Return: 1 if prime , -1 if not
 */
int is_prime_number(int n)
{
	return (check_prime(2, n));
}

/**
 * check_prime - check for prime number
 * @i: start value
 * @n: number to check
 * Return: check result 1 or -1
 */
int check_prime(int i, int n)
{
	if (n <= 1)
		return (0);
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(i + 1, n));
}
