#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index()- deletes a node at index
 * @head: start of list
 * @index: the node to be deleted
 *
 * Return: 1 if success, -1 if no
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *tmp;
	unsigned int curr_idx;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		tmp = current->next;
		tmp->prev = NULL;
		*head = current->next;
		free(current);
		return (1);
	}
	curr_idx = 0;
	while (current != NULL && curr_idx < index - 1)
	{
		current = current->next;
		curr_idx++;
	}
	if (current == NULL)
		return (-1);
	if (current->next == NULL)
		return (-1);
	tmp = current->next;
	tmp->prev = current;
	current->next = tmp->next;
	if (tmp->next != NULL)
	{
		current = tmp->next;
		current->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
