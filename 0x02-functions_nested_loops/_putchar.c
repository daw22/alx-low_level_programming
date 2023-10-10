#include <stdio.h>
/**
 * _putchar - _putchar function
 * Description: 'prints _putchar'
 *
 */
void _putchar()
{
	char str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int str_length = sizeof(str) / sizeof(str[0]);
	int i = 0;

	while (str_length > i)
	{
		putchar(str[i]);
		i++;
	}
	putchar(10);
}
