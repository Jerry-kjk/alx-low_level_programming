#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to pointer to head node of linked list.
 * @index: index of node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev_node, *temp;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	prev_node = *head;
	temp = prev_node->next;
	for (i = 1; temp != NULL && i < index; i++)
	{
		prev_node = temp;
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	prev_node->next = temp->next;
	free(temp);
	return (1);
}
