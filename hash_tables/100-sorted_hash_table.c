#include "hash_tables.h"

/**
 * shash_table_create - creates a shash table
 * @size: size of hash table
 *
 * Return: the new hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{

}

/**
 * shash_table_set - sets an entry to the shash table
 * @ht: the pointer to the head of the shash table itself
 * @key: the 'key' in the KV pair
 * @value: the 'value' in the KV pair
 *
 * Return: 0 or 1
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{

}


/**
 * shash_table_get - gets a value from the shash table
 * @ht- pointer to the head of the shash table itself
 * @key - the 'key' in the KV pair
 *
 * Return: the 'value' in the KV pair
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{

}


/**
 * shash_table_print- prints the shash table
 * @ht: the pointer to the head of the shash table itself
 *
 * Return: no return
 */

void shash_table_print(const shash_table_t *ht)
{

}


/**
 * shash_table_print_rev - prints the shash table in reverse
 * @ht: the pointer to the head of the shash table iteslf
 *
 * Return: no return
 */

void shash_table_print_rev(const shash_table_t *ht)
{

}


/**
 * shash_table_delete - deletes the shash table
 * @ht: the pointer to the head of the shash table itself
 *
 * Return: no return
 */

void shash_table_delete(shash_table_t *ht);

