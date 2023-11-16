#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node to the end of a list
 * @head: pointer to the head
 * @str: data for the new node
 *
 * Return: poiner to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *trv_node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	trv_node = *head;
	if (trv_node)
	{
		while (trv_node->next)
			trv_node = trv_node->next;
		trv_node->next = new;
	}
	else
		*head = new;
	return (*head);
}
