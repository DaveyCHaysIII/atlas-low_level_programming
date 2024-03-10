#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index()- deletes a node at index
 * @head: start of list
 * @index: the node to be deleted
 *
 * Return: 1 if success, -1 if no
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *tmp;
	unsigned int curr_idx;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
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
	current->next = tmp->next;
	free(tmp);
	return (1);
}
