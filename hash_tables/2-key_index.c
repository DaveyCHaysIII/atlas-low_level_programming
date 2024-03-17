#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index()- get a key index
 * @key: the key
 * @size: the size of the array
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}

