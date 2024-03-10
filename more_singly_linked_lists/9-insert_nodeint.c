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
	listint_t *new;
	unsigned int curr_idx;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			free(new);
			return (NULL);
		}
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	curr_idx = 0;
	current = *head;
	while (current != NULL && curr_idx < (idx - 1))
	{
		current = current->next;
		curr_idx++;
		if (current == NULL)
		{
			return (NULL);
		}
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = current->next;
	current->next = new;
	return (new);
}
