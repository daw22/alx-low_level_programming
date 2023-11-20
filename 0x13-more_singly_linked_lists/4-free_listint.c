#include "lists.h"

/**
 * free_listint - free a linked list from memory
 * @head: head of the node to be freed
 *
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
