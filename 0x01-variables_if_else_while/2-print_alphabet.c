#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar(10);
	return (0);
}
