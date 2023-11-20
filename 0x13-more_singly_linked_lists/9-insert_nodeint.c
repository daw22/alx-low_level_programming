#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node to a list at index
 * @head: pointer to a pointer to head node
 * @index: index of new node
 * @n: value of the new node
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int i = 1;
	listint_t *h, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	h = *head;
	if (index == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	while (i < index)
	{
		if (h == NULL)
			return (NULL);
		h = h->next;
		i++;
	}
	new->n = n;
	new->next = h->next;
	h->next = new;
	return (new);
}
