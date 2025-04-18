#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_set()- sets the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *current;
	int i;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++) /* checks if keys are the same */
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}
	else /* if collision */
	{
		current = ht->array[index];
		ht->array[index] = new;
		new->next = current;
		return (1);
	}
}
