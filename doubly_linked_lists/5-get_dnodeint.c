#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index()- get node at index
 * @head: top of linked list
 * @index: the node in question
 *
 * Return: the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int ll_ind = 0;

	current = head;
	while (ll_ind < index)
	{
		if (current == NULL)
		{
			return (NULL);
		}

		current = current->next;
		ll_ind++;
	}
	return (current);
}
