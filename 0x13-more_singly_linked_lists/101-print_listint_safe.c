#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: pointer to the first node in the list.
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	long int current;
	size_t count = 0;

	while (head)
	{
		current = head - head->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (current > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (count);
}
