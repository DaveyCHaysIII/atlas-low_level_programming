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

	unsigned long int key, index;
	int i;

	index = (hash_djb2((const unsigned char *)key) % ht->size);
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (new == NULL)
	{
		return (0);
	}
	new->key = key;
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}
	else
	{
		hash_node_t *current = ht->array[index];

		while (current->next != NULL)
		{
			current = current->next;
			i++;
		}
		current->next = new;
		return (1);
	}
}
