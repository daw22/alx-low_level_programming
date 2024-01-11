#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node to a dl-list at an index
 * @h: pointer to head of the list
 * @index: index to insert into
 * @n: data of the new node
 *
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int index, int n)
{
	unsigned int i;
	dlistint_t *new, *tmp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		*h = new;
		return (new);
	}
	tmp = *h;
	if (index == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		return (new);
	}
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	new->prev = tmp->prev;
	new->next = tmp;
	tmp->prev->next = new;
	tmp->prev = new;
	return (new);
}
