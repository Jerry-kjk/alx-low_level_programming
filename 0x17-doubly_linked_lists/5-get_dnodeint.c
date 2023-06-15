#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *h = head;

	while (h != NULL)
	{
		if (count == index)
			return (h);
		h = h->next;
		count++;
	}
	return (NULL);
}
