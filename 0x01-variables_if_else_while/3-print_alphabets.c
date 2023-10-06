#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints the alphabet both in upper and lower cases'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int upper, lower;

	for (lower = 97; lower <= 122; lower++)
		putchar(lower);
	for (upper = 65; upper <= 90; upper++)
		putchar(upper);
	putchar(10);
	return (0);
}
