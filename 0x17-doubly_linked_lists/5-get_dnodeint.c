#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at an index
 * @head: pointer to head node of the list
 * @index: index of the node to get
 *
 * Return: pointer to the node at the given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	return (tmp);
}
