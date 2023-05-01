#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: pointer to pointer to head node of linked list.
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *temp = *head;
	listint_t *next = NULL;

	while (temp != NULL)
	{
		next = temp->next;
		temp->next = prev;
		prev = temp;
		temp = next;
	}
	*head = prev;
	return (*head);
}
