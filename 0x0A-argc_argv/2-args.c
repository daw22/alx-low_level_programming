#include <stdio.h>

/**
 * main - entry point
 * @argc: number og args
 * @argv: args list
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
