#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index()- inserts a node at index
 * @head: start of list
 * @idx: the index in question
 * @n: the data for the node
 *
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	unsigned int curr_idx;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
		{
			free(new);
			return (NULL);
		}
		new->n = n;
		new->next = *head;
		new->prev = NULL;
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
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = current->next;
	new->prev = current->prev;
	current->next = new;
	return (new);
}
