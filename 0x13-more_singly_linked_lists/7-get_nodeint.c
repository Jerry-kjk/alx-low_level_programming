#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a
 * listint_t linked list.
 * @head: pointer to the head of the list.
 * @index: the index of the node, starting at 0.
 * Return: the nth node of a listint_t linked list,
 * if the node does not exist, return NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}
	return (NULL);
}
