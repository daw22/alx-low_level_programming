#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals of a square matrix
 * @a: pointer to the matrix
 * @n: size of the matrix
 */
void print_diagsums(int *a, int n)
{
	int tot = n * n, sumr = 0, suml = 0, i = 0, j = 0;

	for (i = 0; i < tot; i += n + 1)
		sumr += a[i];
	for (j = tot -  n; j >= n - 1; j -= n - 1)
		suml += a[j];
	printf("%d, %d\n", sumr, suml);
}
