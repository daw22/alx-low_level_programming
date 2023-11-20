#include "lists.h"

/**
 * sum_listint - adds all the values of the nodes
 * @head: pointer ti the head node
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *h;

	if (head == NULL)
		return (0);
	h = head;
	while (h)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
