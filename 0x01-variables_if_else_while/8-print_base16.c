#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints all base16 digits'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (i = 97; i <= 102; i++)
		putchar(i);
	putchar(10);
	return (0);
}
