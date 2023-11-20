#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: pointer to head node
 * @index: index
 *
 * Return: pointer to the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h;

	if (head == NULL)
		return (NULL);
	h = head;
	while (i < index)
	{
		if (h == NULL)
			return (NULL);
		h = h->next;
		i++;
	}
	return (h);
}

