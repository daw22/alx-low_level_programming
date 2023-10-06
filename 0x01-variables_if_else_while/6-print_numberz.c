#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints base 10 single digits 0-10 using putchar'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar(10);
	return (0);
}
