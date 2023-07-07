#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	int is_first = 1;
	unsigned long int i;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (!is_first)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			is_first = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
