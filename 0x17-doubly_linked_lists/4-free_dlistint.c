#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the list
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	dlistint_t *n;

	while (h != NULL)
	{
		n = h->next;
		free(h);
		h = n;
	}
}
