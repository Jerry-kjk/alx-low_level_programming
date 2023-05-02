#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: pointer to the first node in the list.
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node, num = 0;
	const listint_t *temp = NULL, *prev = NULL;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		num++;
		temp = temp->next;
		prev = head;
		node = 0;
		while (node < num)
		{
			if (temp == prev)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (num);
			}
			prev = prev->next;
			node++;
		}
		if (!head)
		{
			exit(98);
		}
	}
	return (num);
}
