#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node form list at index
 * @head: a pointer to a pointer to head node
 * @index: index of node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h, *prev;

	if (*head == NULL)
		return (-1);
	h = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}
	else
	{
		while (i < index)
		{
			if (h == NULL)
				return (-1);
			if (i == index - 1)
				prev = h;
			h = h->next;
			i++;
		}
	}
	prev->next = h->next;
	free(h);
	return (1);
}
