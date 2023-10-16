#include "main.h"
#include <string.h>

int powten(int);
/**
 * _atoi - convets string to int
 * @str: input string
 *
 * Return: the converted int
 */
int _atoi(char *str)
{
	int i, len = strlen(str), numdetected = 0, sign = 1;
	int powc = 0, result = 0, numstart = 0, numend = 0;

	for (i = 0; i < len; i++)
	{
		if (!numdetected && str[i] == '-')
			sign = -sign;
		if (!numdetected && str[i] == '+')
			sign = 1;
		if (numdetected && i == len - 1)
			numend = i;
		if (numdetected && !(str[i] > 47 && str[i] < 58))
		{
			numend = i - 1;
			break;
		}
		if (!numdetected && (str[i] > 47 && str[i] < 58))
		{
			numstart = i;
			numdetected = 1;
		}
	}
	if(numdetected == 0)
		return (0);
	for (i = numend; i >= numstart; i--)
	{
		result += (str[i] - '0') * powten(powc);
		powc++;
	}
	return (result * sign);
}

/**
 * pow - power by 10
 * @n: ten raised to n
 *
 * Return: int
 */
int powten(int n)
{
	int i, result = 1;

	for (i = 0; i < n; i++)
	{
		result *= 10;
	}
	return (result);
}
