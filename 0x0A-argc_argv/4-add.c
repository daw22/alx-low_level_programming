#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * isdigits_only -checks if a string contains digit only
 * @c: strinf input
 * Return: 1 if only digit , 0 if not
 */
int isdigits_only(char *c)
{
	while (*c)
	{
		if (isdigit(*c++) == 0)
			return (0);
	}
	return (1);
}

/**
 * main - entry point
 * @argc: number of args
 * @argv: lis of args
 * Return: always 0 (seccess)
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigits_only(argv[i]))
		{
			printf("Error\n");
			return (0);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
