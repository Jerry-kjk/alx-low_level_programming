#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: pointer to the first node in the list.
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *prev = head;
	const listint_t *temp;
	size_t num = 0;

	while (prev != NULL)
	{
		num++;
		printf("[%p] %d\n", (void *)prev, prev->n);
		temp = prev;
		prev = prev->next;
		if (temp <= prev)
		{
			printf("-> [%p] %d\n", (void *)prev, prev->n);
			exit(98);
		}
	}
	return (num);
}
