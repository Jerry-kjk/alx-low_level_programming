#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head;
	unsigned int i = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	head = *h;
	while (head != NULL && i < idx - 1)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = head->next;
	if (head->next != NULL)
		head->next->prev = new;
	head->next = new;
	new->prev = head;
	return (new);
}
