#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_delete()- delete a hash table
 * @ht: the table in question
 *
 * Return: no return
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current->next != NULL)
			{
				tmp = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = tmp;
			}
			free(current->key);
			free(current->value);
			free(current);
		}
	}
	free(ht->array);
	free(ht);
}
