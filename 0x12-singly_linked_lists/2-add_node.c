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
	list_t *new_node;
	char *str_copy;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	str_copy = strdup(str);
	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
		;
	new_node->str = str_copy;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
