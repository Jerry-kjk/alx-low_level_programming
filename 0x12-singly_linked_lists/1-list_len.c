#include "lists.h"

/**
 * list_len - a function that returns the number
 * of elements in a linked list_t list.
 * @h: linked list_t.
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h; h = h->next)
	{
		count++;
	}
	return (count);
}
