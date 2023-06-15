#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 * @head: head of the list
 * Return: sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	int sum = 0;

	while (h != NULL)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
