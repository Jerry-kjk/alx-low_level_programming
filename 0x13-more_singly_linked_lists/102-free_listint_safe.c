#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: double pointer to the head of the list.
 * Return: the size of the list that was free’d.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	listint_t *temp;
	listint_t *prev;

	if (h == NULL)
		return (0);
	temp = *h;
	while (temp != NULL)
	{
		prev = temp->next;
		free(temp);
		length++;
		if ((void *)temp <= (void *)prev)
			break;
		temp = prev;
	}
	*h = NULL;
	return (length);
}
