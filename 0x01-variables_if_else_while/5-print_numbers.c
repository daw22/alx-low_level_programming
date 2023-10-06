#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints base 10 single dogits from 0 t0 10'
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar(10);
	return (0);
}
