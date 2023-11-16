#include "lists.h"
#include <stdio.h>
/**
 * print_list - prlints elements of a list
 * @h : pointer to the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	char *null = "(nil)";

	while (h)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, null);
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
