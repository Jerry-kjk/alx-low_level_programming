#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: previos elements.
 * @str: string to be added.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t i;
	list_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		return (NULL);
		free(new_node);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
