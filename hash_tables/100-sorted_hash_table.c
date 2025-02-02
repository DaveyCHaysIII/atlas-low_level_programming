#include "hash_tables.h"

/**
 * shash_table_create - creates a shash table
 * @size: size of hash table
 *
 * Return: the new hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new = malloc(sizeof(shash_table_t));
	unsigned long int i;

	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(shash_node_t *) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	new->shead = NULL;
	new->stail = NULL;
	return (new);
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
	unsigned long int index;
	shash_node_t *new, *current;
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

	new = create_node(key, value);
	if (new == NULL)
		return (0);

	current = ht->shead;
	if (current == NULL) /* table is empty */
	{
		printf("current == NULL, key = %s\n", key);
		ht->shead = new;
		ht->stail = new;
		ht->array[index] = new;
		return (1);
	}
	for (i = 0 ;; i++) /* traverse */
	{
		if (*key < *current->key)
		{
			printf("current != NULL, lesskey = %s\n", key);
			if (*key < *ht->shead->key) /* new is front */
			{
				ht->shead = new;
			}
			new->snext = current;
			new->sprev = NULL;
			current->sprev = new;
		}
		if (current->next == NULL) break;

		printf("loop\n");
		current = current->next;
	}
	if (*key > *current->key) /* new is tail */
	{
		printf("current->key = %s, greatkey = %s\n", current->key, key);
		ht->stail = new;
		current->snext = new;
		new->sprev = current;
	}
	if (ht->array[index] == NULL) /* index is empty */
		ht->array[index] = new;
	else /* collision */
	{
		current = ht->array[index];
		ht->array[index] = new;
		new->next = current;
	}
	return (1);
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

	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		shash_node_t *current;

		current = ht->array[index];
		while (current != NULL)
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


/**
 * shash_table_print- prints the shash table
 * @ht: the pointer to the head of the shash table itself
 *
 * Return: no return
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	printf("{");
	for (current = ht->shead; current != NULL; current = current->snext)
	{
		printf("%s: %s", current->key, current->value);
		if (current->snext != NULL)
			printf(", ");
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - prints the shash table in reverse
 * @ht: the pointer to the head of the shash table iteslf
 *
 * Return: no return
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	printf("{");
	for (current = ht->stail; current != NULL; current = current->sprev)
	{
		printf("%s: %s", current->key, current->value);
		if (current->sprev != NULL)
			printf(", ");
	}
	printf("}\n");
}


/**
 * shash_table_delete - deletes the shash table
 * @ht: the pointer to the head of the shash table itself
 *
 * Return: no return
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current, *tmp;

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


/* helper functions! */

/**
 *
 *
 */

shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *new;

	new = malloc(sizeof(shash_node_t)); /* new node init */
	if (new == NULL)
	{
		printf("FAILED\n");
		return (NULL);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	new->sprev = NULL;
	new->snext = NULL;

	return (new);
}
