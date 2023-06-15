#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
