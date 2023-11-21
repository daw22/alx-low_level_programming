#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to a pointer to athe head node
 *
 * Return: pointer to the new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt, *prev = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}
	*head = prev;
	return (*head);
}
