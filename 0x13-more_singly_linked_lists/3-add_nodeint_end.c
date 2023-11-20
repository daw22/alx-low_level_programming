#include "lists.h"

/**
 * add_nodeint_end - add node to the end of list
 * @head: pointer to a pointer od head
 * @n: data for the new node
 *
 * Return: the new node address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (h->next)
			h = h->next;
		h->next = new;
	}
	return (new);
}
