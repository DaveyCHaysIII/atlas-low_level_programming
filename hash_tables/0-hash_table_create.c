#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create()- creates hash table
 * @size: size of hash table
 *
 * Return: the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
