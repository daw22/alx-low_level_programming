#include "lists.h"

/**
 * list_len - number of nodes
 * @h: heade of the linked list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
