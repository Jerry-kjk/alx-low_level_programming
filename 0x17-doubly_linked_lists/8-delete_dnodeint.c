#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h;
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	h = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(h);
		return (1);
	}
	while (h != NULL && i < index)
	{
		h = h->next;
		i++;
	}
	if (h == NULL)
		return (-1);
	temp = h;
	h->prev->next = h->next;
	if (h->next != NULL)
		h->next->prev = h->prev;
	free(temp);
	return (1);
}
