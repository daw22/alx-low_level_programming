#include "lists.h"

/**
 * listint_len - counts number of node in the list
 * @h: link header address
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
