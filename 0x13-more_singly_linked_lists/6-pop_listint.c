#include "lists.h"

/**
 * pop_listint - pops the linked list
 * @head: pointer to a pointer to the head of the list
 *
 * Return: returns the new head's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *h;

	if (*head == NULL)
		return (0);
	h = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = h;
	return (n);
}
