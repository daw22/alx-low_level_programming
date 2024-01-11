#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at a given index
 * @head: pointer to head of the list
 * @index: index of node to be deleted
 *
 * Return: 1 if succeeded  -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *next, *tmp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (tmp->next == NULL && tmp->prev == NULL)
	{
		if (*head != NULL)
		{
			free(*head);
			*head = NULL;
		}
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	if (tmp->next == NULL)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	if (tmp->prev == NULL)
	{
		tmp->next->prev = NULL;
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	else
	{
		prev = tmp->prev;
		next = tmp->next;
		prev->next = next;
		next->prev = prev;
		free(tmp);
		return (1);
	}
}
