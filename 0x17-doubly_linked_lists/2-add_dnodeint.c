#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning of dl-list
 * @head: head of the list
 * @n: data of the new node
 *
 * Return: address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head != NULL)
	{
		(*head)->prev = new;
		new->next = *head;
	}
	*head = new;
	return (new);
}
