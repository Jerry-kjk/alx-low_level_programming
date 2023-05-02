#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: pointer to the first node in the list.
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	int current;
	size_t num = 0;
	const listint_t *temp = head, *prev = NULL;

	while (temp != NULL)
	{
		num++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		current = temp - temp->next;
		if (current > 0)
		{
			prev = temp;
			temp = temp->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			break;
		}
		if (temp <= prev)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			break;
		}
	}
	return (num);
}
