#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning
 * of a list_t list.
 * @head: first element.
 * @str: string to be added.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	if (!head || !str)
		return (NULL);
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	char *str_copy = strdup(str);

	if (!str_copy)
	{
		free(new_node);
		return (NULL);
	}
	size_t len = strlen(str);

	new_node->str = str_copy;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
