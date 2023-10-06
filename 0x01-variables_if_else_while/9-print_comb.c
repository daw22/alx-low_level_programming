#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints every combination of sinfle digit separated by comma'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
