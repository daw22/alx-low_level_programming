#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of a dl-list
 * @head: pointer to the head of the list
 * @n: data of the new node
 *
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	h = *head;
	while (h->next != NULL)
		h = h->next;
	h->next = new;
	new->prev = h;
	return (new);
}
