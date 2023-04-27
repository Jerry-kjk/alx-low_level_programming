#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a list_t.
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (; h; h = h->next, count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", (unsigned long)h->len, h->str);
	}
	return (count);
}
