#include "lists.h"

/**
 * free_listint2 - free a linked list and set haad to NULL
 * @head: pointer to a pointer to head
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *h, **tmp = head;

	if (tmp != NULL)
	{
		while (*head)
		{
			h = (*head)->next;
			free(*head);
			*head = h;
		}
		*tmp = NULL;
	}
}
