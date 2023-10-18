#include "main.h"

/**
 * reverse_array - reverses array
 * @a: pointer to input array
 * @n: size of input array
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp, len = n - 1;

	while (i < len)
	{
		tmp = a[i];
		a[i] = a[len];
		a[len] = tmp;
		i++;
		len--;
	}
}
