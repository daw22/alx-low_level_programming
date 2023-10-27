#include <stdio.h>
#include <stdlib.h>

int min_coins(int);
/**
 * main - entry point
 * @argc: number of args
 * @argv: list of args
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = min_coins(cents);
	printf("%d\n", coins);
	return (0);
}

/**
 * min_coins - calculate min number of coins for a change
 * @cents: input amount
 * Return: int
 */
int min_coins(int cents)
{
	int coins  = 0;

	while (cents != 0)
	{
		if (cents % 25 == 0)
		{
			cents -= 25;
			coins++;
			continue;
		}
		if (cents % 10 == 0)
		{
			cents -= 10;
			coins++;
			continue;
		}
		if (cents % 5 == 0)
		{
			cents -= 5;
			coins++;
			continue;
		}
		if (cents % 2 == 0)
		{
			cents -= 2;
			coins++;
			continue;
		}
		cents -= 1;
		coins++;
	}
	return (coins);
}
