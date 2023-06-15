#include "lists.h"

/*
 * dlistint_len - a function that returns the number of elements.
 * @h: head of the list.
 * @Return: the number of elements in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t count = 0;

	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	return (count);
}
