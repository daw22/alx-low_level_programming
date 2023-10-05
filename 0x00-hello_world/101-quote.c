#include <stdio.h>
#include <string.h>
/**
 * main- Entry
 * Description: 'prints to stderr'
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int char_count = (int) strlen(quote);

	fwrite(quote, char_count, 1, stderr);
	return (1);
}
