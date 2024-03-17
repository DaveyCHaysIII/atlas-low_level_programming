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
	long unsigned int i, lastnode;

	if (ht == NULL)
		return;

	printf("{");
	lastnode = 0;
	for (i = 0; i <= ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			lastnode = i;
		}
	}
	for (i = 0; i <= ht->size; i++)
	{
		if (lastnode == i)
		{
			printf("%s: %s", ht->array[i]->key, ht->array[i]->value);
		}
		else
		{
			printf("%s: %s, ", ht->array[i]->key, ht->array[i]->value);
		}
	}
	printf("}");
}
