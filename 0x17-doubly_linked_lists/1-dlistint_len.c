#include "lists.h"

/**
 * dlistint_len - returns the number of elements in the list
 * @h: head of the list
 *
 * Return: lenght of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
