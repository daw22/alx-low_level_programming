#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints lowercase alphabet in the reverse order'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar(10);
	return (0);
}
