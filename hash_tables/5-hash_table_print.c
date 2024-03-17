#include "hash_tables.h"
#include <stddef.h>
#include <stdio.h>

/**
 * hash_table_print()- prints a hash table
 * @ht: the table in question
 *
 * Return: no return
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, lastnode, count;
	hash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	count = 1;
	lastnode = 0;
	for (i = 0; i <= ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			lastnode++;
			current = current->next;
		}
	}
	for (i = 0; i <= ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (lastnode == count)
			{
				printf("'%s': '%s'", current->key, current->value);
			}
			else
			{
				printf("'%s': '%s', ", current->key, current->value);
				count++;
			}
			current = current->next;
		}
	}
	printf("}\n");
}
