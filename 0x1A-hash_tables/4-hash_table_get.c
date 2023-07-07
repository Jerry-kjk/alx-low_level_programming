#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @key: the key.
 * @ht: hash table.
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (strdup(current->value));
		}
		current = current->next;
	}
	return (NULL);
}
