#include "lists.h"

/**
 * sum_dlistint - add all the data(n) of a dl-list
 * @head: pointer to the head of the list
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
