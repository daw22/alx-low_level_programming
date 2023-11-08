#include "function_pointers.h"

/**
 * print_name - prints name using a callback func
 * @name: input name (string)
 * @f: pointer to callback function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
