#include <string.h>
#include "_putchar.h"

/**
 * main - Entry point
 * Description: 'prints "_putchar"'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char str[] = "_putchar";
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
