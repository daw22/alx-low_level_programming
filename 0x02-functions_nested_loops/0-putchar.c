#include "main.h"

/**
 * main - Entry point
 * Description: 'prints "_putchar"'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int len = strlen(str);
	char nl = '\n';
	int i = 0;

	while (i < len)
	{
		_putchar(&str[i]);
		i++;
	}
	_putchar(&nl);
	return (0);
}
