#include "lists.h"

/**
 * free_dlistint - frees a dl-list from memory
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
