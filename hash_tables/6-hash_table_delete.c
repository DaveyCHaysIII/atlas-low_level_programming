#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_delete()- delete a hash table
 * @ht: the table in question
 *
 * Return: no return
 */

void hash_table_delete(hash_table_t *ht)
{
	int i;
	hash_node_t *current, *tmp;

	for (i = 0; ht->array[i]; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			tmp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = tmp;
		}
	}
	free(ht);
}
