#include <stdio.h>
/**
 * main- Entry
 * DEScription: 'prints the sizes of c data types'
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char frmstrli[] = "Size of a long int: %llu byte(s)\n";
	char frmstrlli[] = "Size of a long long int: %llu byte(s)\n";
	printf("Size of a char: %llu byte(s)\n", (unsigned long long) sizeof(char));
	printf("size of an int: %llu byte(s)\n", (unsigned long long) sizeof(int));
	printf(frmstrli, (unsigned long long) sizeof(long));
	printf(frmstrlli, (unsigned long long) sizeof(long long));
	printf("Size of a float: %llu byte(s)\n", (unsigned long long) sizeof(float));
	return (0);
}
