#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of the list
 * @head: pointer to a pointer to head
 * @n: data for the new node
 *
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	if (*head != NULL)
		new->next = *head;
	*head = new;
	return (new);
}
