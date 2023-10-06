#include <stdio.h>

/**
 * main - Entry point
 * Description: 'numbers combo'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (!(i == 56 && j == 57))
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
