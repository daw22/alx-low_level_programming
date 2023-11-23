#include "main.h"

/**
 * get_endianness - checks if the undelyning architecture
 * is litle endian or big endian
 *
 * Return: 1 if endian, o if not
 */
int get_endianness(void)
{
	unsigned int num = 0x112233;
	char *c = (char *) &num;

	if (*c == 0x33)
		return (1);
	else
		return (0);
}
