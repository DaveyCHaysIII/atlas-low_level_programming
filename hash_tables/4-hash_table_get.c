#include "hash_tables.h"
#include <stddef.h>
#include <string.h>

/**
 * hash_table_get()- retrieve a value from the table
 * @ht: the table
 * @key: the key
 *
 * Return: the value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = (hash_djb2((const unsigned char *)key) % ht->size);
	if (ht->array[index] != NULL)
	{
		hash_node_t *current;

		current = ht->array[index];
		while (current->next != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				return (current->value);
			}
			current = current->next;
		}
	}
	return (NULL);
}
