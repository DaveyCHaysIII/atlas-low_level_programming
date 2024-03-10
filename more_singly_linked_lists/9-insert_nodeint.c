#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index()- inserts a node at index
 * @head: start of list
 * @idx: the index in question
 * @n: the data for the node
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *next;
	listint_t *new;
	unsigned int curr_idx;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	curr_idx = 0;
	current = *head;
	while (curr_idx < (idx - 1))
	{
		if (current == NULL)
		{
			return (NULL);
		}
		current = current->next;
		if (current->next == NULL)
		{
			next = NULL;
		}
		else
		{
			next = current->next;
		}
	}
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = next;
	current->next = new;

	return (&new);
}
